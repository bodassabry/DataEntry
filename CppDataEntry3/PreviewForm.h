#pragma once

namespace CppDataEntry3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Summary for PriveiwForm
	/// </summary>
	public ref class PriveiwForm : public System::Windows::Forms::Form
	{
	public:
		PriveiwForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PriveiwForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PrintPreviewControl^ printPreviewControl1;
	private: System::Drawing::Printing::PrintDocument^ RealDocument;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->printPreviewControl1 = (gcnew System::Windows::Forms::PrintPreviewControl());
			this->RealDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->SuspendLayout();
			// 
			// printPreviewControl1
			// 
			this->printPreviewControl1->AutoZoom = false;
			this->printPreviewControl1->Document = this->RealDocument;
			this->printPreviewControl1->Location = System::Drawing::Point(12, 12);
			this->printPreviewControl1->Name = L"printPreviewControl1";
			this->printPreviewControl1->Size = System::Drawing::Size(578, 806);
			this->printPreviewControl1->TabIndex = 0;
			this->printPreviewControl1->Zoom = 0.55688622754491013;
			// 
			// PriveiwForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 830);
			this->Controls->Add(this->printPreviewControl1);
			this->Name = L"PriveiwForm";
			this->Text = L"PreviewForm";
			this->Load += gcnew System::EventHandler(this, &PriveiwForm::PriveiwForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void PriveiwForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}
