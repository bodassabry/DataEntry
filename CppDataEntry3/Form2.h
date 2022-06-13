#pragma once

namespace CppDataEntry3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::DataGridView^ dGV2 = gcnew System::Windows::Forms::DataGridView;
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form2(System::Windows::Forms::DataGridView^ dGV)
		{
			InitializeComponent();
			dGV2 = dGV;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PrintPreviewControl^ printPreviewControl1;
	private: System::Drawing::Printing::PrintDocument^ realDoc;
	private: System::Windows::Forms::Timer^ tmr1;
	private: System::Windows::Forms::Button^ btnPrint;


	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->printPreviewControl1 = (gcnew System::Windows::Forms::PrintPreviewControl());
			this->realDoc = (gcnew System::Drawing::Printing::PrintDocument());
			this->tmr1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// printPreviewControl1
			// 
			this->printPreviewControl1->AutoZoom = false;
			this->printPreviewControl1->Document = this->realDoc;
			this->printPreviewControl1->Location = System::Drawing::Point(12, 52);
			this->printPreviewControl1->Name = L"printPreviewControl1";
			this->printPreviewControl1->Size = System::Drawing::Size(804, 773);
			this->printPreviewControl1->TabIndex = 0;
			this->printPreviewControl1->Zoom = 0.66894781864841746;
			this->printPreviewControl1->Click += gcnew System::EventHandler(this, &Form2::printPreviewControl1_Click);
			// 
			// realDoc
			// 
			this->realDoc->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &Form2::printDocument1_BeginPrint);
			this->realDoc->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form2::printDocument1_PrintPage);
			// 
			// tmr1
			// 
			this->tmr1->Interval = 50;
			this->tmr1->Tick += gcnew System::EventHandler(this, &Form2::tmr1_Tick);
			// 
			// btnPrint
			// 
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(12, 12);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(128, 34);
			this->btnPrint->TabIndex = 1;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &Form2::btnPrint_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 1055);
			this->ControlBox = false;
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->printPreviewControl1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	
	//System::Windows::Forms::DataGridView^ dGV2 = gcnew System::Windows::Forms::DataGridView;
	private:
		StringFormat^ strFormat;
		ArrayList^ arrColumnLefts;
		ArrayList^ arrColumnWidths;
		int iCellHeight;
		int iCount;
		int iTotalWidth;
		int iRow;
		bool bFirstPage;
		bool bNewPage;
		float iHeaderHeight;

	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
		
		

		printPreviewControl1->Document->DocumentName = "Test Page Print";
		printPreviewControl1->Zoom = 0.5;
		printPreviewControl1->Document = realDoc;
	}
	

	private: System::Void printDocument1_BeginPrint(System::Object^ sender, System::Drawing::Printing::PrintEventArgs^ e) {

		try {
			strFormat = gcnew StringFormat();
			strFormat->Alignment = StringAlignment::Near;
			strFormat->LineAlignment = StringAlignment::Center;
			strFormat->Trimming = StringTrimming::EllipsisCharacter;
			arrColumnLefts = gcnew ArrayList();
			arrColumnWidths = gcnew ArrayList();

			arrColumnLefts->Clear();
			arrColumnWidths->Clear();
			iCellHeight = 0;
			iCount = 0;
			bFirstPage = true;
			bNewPage = true;

			// Calculating Total Widths
			iTotalWidth = 0;
			for each (DataGridViewColumn ^ dgvGridCol in dGV2->Columns)
			{
				iTotalWidth += dgvGridCol->Width;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

		try {
			Brush^ brush = nullptr;
			//Set the left margin
			int iLeftMargin = e->MarginBounds.Left;
			//Set the top margin
			int iTopMargin = e->MarginBounds.Top;
			//Whether more pages have to print or not
			bool bMorePagesToPrint = false;
			int iTmpWidth = 0;



			//For the first page to print set the cell width and header height
			if (bFirstPage)
			{
				for each (DataGridViewColumn ^ GridCol in dGV2->Columns)
				{
					iTmpWidth = (int)(Math::Floor((double)((double)GridCol->Width /
						(double)iTotalWidth * (double)iTotalWidth *
						((double)e->MarginBounds.Width / (double)iTotalWidth))));

					iHeaderHeight = (int)(e->Graphics->MeasureString(GridCol->HeaderText,
						GridCol->InheritedStyle->Font, iTmpWidth).Height) + 11;

					// Save width and height of headers
					arrColumnLefts->Add(iLeftMargin);
					arrColumnWidths->Add(iTmpWidth);
					iLeftMargin += iTmpWidth;
				}
			}
			//Loop till all the grid rows not get printed
			while (iRow <= dGV2->Rows->Count - 1)
			{
				DataGridViewRow^ GridRow = dGV2->Rows[iRow];
				//Set the cell height
				iCellHeight = GridRow->Height + 5;
				int iCount = 0;
				//Check whether the current page settings allows more rows to print
				if (iTopMargin + iCellHeight >= e->MarginBounds.Height + e->MarginBounds.Top)
				{
					bNewPage = true;
					bFirstPage = false;
					bMorePagesToPrint = true;
					break;
				}
				else
				{
					if (bNewPage)
					{
						//Draw Header
						e->Graphics->DrawString("Customer Summary",
							gcnew System::Drawing::Font(dGV2->Font, FontStyle::Bold),
							Brushes::Black, e->MarginBounds.Left,
							e->MarginBounds.Top - e->Graphics->MeasureString("Customer Summary",
								gcnew System::Drawing::Font(dGV2->Font, FontStyle::Bold),
								e->MarginBounds.Width).Height - 13);

						String^ strDate = DateTime::Now.ToLongDateString() + " " +
							DateTime::Now.ToShortTimeString();
						//Draw Date
						e->Graphics->DrawString(strDate,
							gcnew System::Drawing::Font(dGV2->Font, FontStyle::Bold), Brushes::Black,
							e->MarginBounds.Left +
							(e->MarginBounds.Width - e->Graphics->MeasureString(strDate,
								gcnew System::Drawing::Font(dGV2->Font, FontStyle::Bold),
								e->MarginBounds.Width).Width),
							e->MarginBounds.Top - e->Graphics->MeasureString("Customer Summary",
								gcnew System::Drawing::Font(gcnew System::Drawing::Font(dGV2->Font, FontStyle::Bold),
									FontStyle::Bold), e->MarginBounds.Width).Height - 13);

						//Draw Columns         
						iTopMargin = e->MarginBounds.Top;
						for each (DataGridViewColumn ^ GridCol in dGV2->Columns)
						{
							e->Graphics->FillRectangle(gcnew SolidBrush(Color::LightGray),
								Rectangle((int)arrColumnLefts[iCount], (int)iTopMargin,
									(int)arrColumnWidths[iCount], (int)iHeaderHeight));

							e->Graphics->DrawRectangle(Pens::Black,
								Rectangle((int)arrColumnLefts[iCount], iTopMargin,
									(int)arrColumnWidths[iCount], iHeaderHeight));

							e->Graphics->DrawString(GridCol->HeaderText,
								GridCol->InheritedStyle->Font,
								gcnew SolidBrush(GridCol->InheritedStyle->ForeColor),
								RectangleF((int)arrColumnLefts[iCount], iTopMargin,
									(int)arrColumnWidths[iCount], iHeaderHeight), strFormat);
							iCount++;
						}
						bNewPage = false;
						iTopMargin += iHeaderHeight;
					}
					iCount = 0;

					//Draw Columns Contents        
					for each (DataGridViewCell ^ Cel in GridRow->Cells)
					{
						if (Cel->Value != nullptr)
						{
							e->Graphics->DrawString(Cel->Value->ToString(),
								Cel->InheritedStyle->Font,
								gcnew SolidBrush(Cel->InheritedStyle->ForeColor),
								RectangleF((int)arrColumnLefts[iCount],
									(float)iTopMargin,
									(int)arrColumnWidths[iCount], (float)iCellHeight),
								strFormat);
						}
						//Drawing Cells Borders 
						e->Graphics->DrawRectangle(Pens::Black,
							Rectangle((int)arrColumnLefts[iCount], (int)iTopMargin,
								(int)arrColumnWidths[iCount], (int)iCellHeight));
						iCount++;
					}
				}
				iRow++;
				iTopMargin += iCellHeight;
			}
			//If more lines exist, print another page.
			printPreviewControl1->Rows += 1;
			if (bMorePagesToPrint)
				e->HasMorePages = true;
			else
				e->HasMorePages = false;
		}
		catch (Exception^ exc)
		{
			MessageBox::Show(exc->Message, "Error", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void printPreviewControl1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//printPreviewControl1->Update();

	}
private: System::Void tmr1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//printPreviewControl1->Size = Form2::Size;

}
private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {

	strFormat = nullptr;
	arrColumnLefts = nullptr;
	arrColumnWidths = nullptr;
	iCellHeight = 0;
	iCount = 0;
	iTotalWidth = 0;
	iRow = 0;
	bFirstPage = true;
	bNewPage = true;
	iHeaderHeight = 0;
	
	realDoc->Print();
}
};
}
