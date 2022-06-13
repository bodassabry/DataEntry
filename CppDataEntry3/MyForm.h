#pragma once
#include "Form2.h"

namespace CppDataEntry3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ btnRefresh;





	private:


	private: System::Windows::Forms::Button^ btnPreview;
	private: System::Windows::Forms::Button^ button1;







		   MySqlDataReader^ sqlRd;

	public:
		MyForm(void)
		{
			InitializeComponent();
			MembershipDB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnAddNew;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnUpdate;


	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnSearch;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtRefNo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAddress;

	private: System::Windows::Forms::TextBox^ txtSurname;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtFirstName;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ txtDateReg;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtMobile;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtSearch;


	private: System::Windows::Forms::ComboBox^ cbMemberFee;
	private: System::Windows::Forms::ComboBox^ cbMemberType;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;




	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cbProve;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cbProve = (gcnew System::Windows::Forms::ComboBox());
			this->cbMemberFee = (gcnew System::Windows::Forms::ComboBox());
			this->cbMemberType = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnPreview = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDateReg = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMobile = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtRefNo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnAddNew = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->cbProve);
			this->panel1->Controls->Add(this->cbMemberFee);
			this->panel1->Controls->Add(this->cbMemberType);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->btnSearch);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnPreview);
			this->panel1->Controls->Add(this->txtSearch);
			this->panel1->Controls->Add(this->txtAddress);
			this->panel1->Controls->Add(this->txtSurname);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtDateReg);
			this->panel1->Controls->Add(this->txtFirstName);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->txtMobile);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtRefNo);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1344, 212);
			this->panel1->TabIndex = 0;
			// 
			// cbProve
			// 
			this->cbProve->FormattingEnabled = true;
			this->cbProve->Location = System::Drawing::Point(627, 121);
			this->cbProve->Name = L"cbProve";
			this->cbProve->Size = System::Drawing::Size(252, 24);
			this->cbProve->TabIndex = 4;
			// 
			// cbMemberFee
			// 
			this->cbMemberFee->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbMemberFee->FormattingEnabled = true;
			this->cbMemberFee->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"$300", L"$600", L"$1200", L"$1800" });
			this->cbMemberFee->Location = System::Drawing::Point(1098, 168);
			this->cbMemberFee->Name = L"cbMemberFee";
			this->cbMemberFee->Size = System::Drawing::Size(239, 24);
			this->cbMemberFee->TabIndex = 3;
			// 
			// cbMemberType
			// 
			this->cbMemberType->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cbMemberType->FormattingEnabled = true;
			this->cbMemberType->ItemHeight = 16;
			this->cbMemberType->Location = System::Drawing::Point(1098, 123);
			this->cbMemberType->Name = L"cbMemberType";
			this->cbMemberType->Size = System::Drawing::Size(239, 24);
			this->cbMemberType->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(1098, 69);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(239, 30);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(1130, 11);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(195, 45);
			this->btnSearch->TabIndex = 0;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnPreview
			// 
			this->btnPreview->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPreview->Location = System::Drawing::Point(148, 102);
			this->btnPreview->Name = L"btnPreview";
			this->btnPreview->Size = System::Drawing::Size(64, 45);
			this->btnPreview->TabIndex = 0;
			this->btnPreview->Text = L"Add New";
			this->btnPreview->UseVisualStyleBackColor = true;
			this->btnPreview->Click += gcnew System::EventHandler(this, &MyForm::btnPreview_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(885, 14);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(239, 38);
			this->txtSearch->TabIndex = 1;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtSearch_KeyPress);
			// 
			// txtAddress
			// 
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(218, 157);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(661, 38);
			this->txtAddress->TabIndex = 1;
			this->txtAddress->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->Location = System::Drawing::Point(218, 110);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(238, 38);
			this->txtSurname->TabIndex = 1;
			this->txtSurname->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 32);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Address:";
			// 
			// txtDateReg
			// 
			this->txtDateReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDateReg->Location = System::Drawing::Point(627, 65);
			this->txtDateReg->Name = L"txtDateReg";
			this->txtDateReg->Size = System::Drawing::Size(252, 38);
			this->txtDateReg->TabIndex = 1;
			this->txtDateReg->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(218, 64);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(238, 38);
			this->txtFirstName->TabIndex = 1;
			this->txtFirstName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(885, 68);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 32);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Date of Birth:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(885, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(207, 32);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Member Type:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(885, 161);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(207, 32);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Member Fees:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(462, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 32);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Prove:";
			// 
			// txtMobile
			// 
			this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobile->Location = System::Drawing::Point(627, 15);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(252, 38);
			this->txtMobile->TabIndex = 1;
			this->txtMobile->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 32);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Surname:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(462, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 32);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Date Reg.:";
			// 
			// txtRefNo
			// 
			this->txtRefNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRefNo->Location = System::Drawing::Point(218, 14);
			this->txtRefNo->Name = L"txtRefNo";
			this->txtRefNo->Size = System::Drawing::Size(238, 38);
			this->txtRefNo->TabIndex = 1;
			this->txtRefNo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(462, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 32);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Mobile:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"First Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reference No:";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnDelete);
			this->panel2->Controls->Add(this->btnExit);
			this->panel2->Controls->Add(this->btnUpdate);
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Controls->Add(this->btnRefresh);
			this->panel2->Controls->Add(this->btnAddNew);
			this->panel2->Location = System::Drawing::Point(12, 230);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1344, 55);
			this->panel2->TabIndex = 0;
			// 
			// btnDelete
			// 
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(708, 3);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(211, 45);
			this->btnDelete->TabIndex = 0;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(1140, 3);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(197, 45);
			this->btnExit->TabIndex = 0;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(489, 3);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(213, 45);
			this->btnUpdate->TabIndex = 0;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(925, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(209, 45);
			this->btnReset->TabIndex = 0;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(251, 3);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(232, 45);
			this->btnRefresh->TabIndex = 0;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = true;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// btnAddNew
			// 
			this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddNew->Location = System::Drawing::Point(3, 3);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(242, 45);
			this->btnAddNew->TabIndex = 0;
			this->btnAddNew->Text = L"Add New";
			this->btnAddNew->UseVisualStyleBackColor = true;
			this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Location = System::Drawing::Point(12, 291);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1344, 374);
			this->panel3->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(71, 14);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1200, 339);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(148, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MembershipDB()
	{
		sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = aoas382001; database = membership;";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "select * from membership";
		sqlRd = sqlCmd->ExecuteReader();
		sqlDt->Load(sqlRd);
		sqlRd->Close();
		sqlConn->Close();

		dataGridView1->DataSource = sqlDt;
	}

	private: System::Void RefreshDB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = aoas382001; database = membership;";
			sqlCmd->Connection = sqlConn;

			String^ ID = txtRefNo->Text;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from membership", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	try
	{
		iExit = MessageBox::Show("Confirm you want to exit!", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iReset;
	try 
	{
		iReset = MessageBox::Show("Confirm you want to reset!", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iReset == System::Windows::Forms::DialogResult::Yes)
		{
			txtAddress->Text = "";
			txtDateReg->Text = "";
			txtFirstName->Text = "";
			txtMobile->Text = "";
			txtRefNo->Text = "";
			txtSearch->Text = "";
			txtSurname->Text = "";
			cbMemberFee->Text = "";
			cbMemberType->Text = "";
			cbProve->Text = "";
			dateTimePicker1->ResetText();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		txtRefNo->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		txtAddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		txtDateReg->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		txtFirstName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		txtMobile->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		txtSurname->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		cbMemberFee->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		cbMemberType->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		cbProve->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}
private: System::Void txtSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("Firstname like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {

	sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = aoas382001; database = membership;";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	try
	{
		sqlCmd->CommandText = "insert into membership (RefNo, Firstname, Surname, Address, Mobile, RegDate, " +
			"Prove, DOB, MemberType, MemberFees)" +
			"values('" + txtRefNo->Text + "','" + txtFirstName->Text + "','" + txtSurname->Text + "','" + txtAddress->Text + "','" + 
			txtMobile->Text + "','" + txtDateReg->Text + "','" + cbProve->Text + "','" + dateTimePicker1->Text + "','" +
			cbMemberType->Text + "','" + cbMemberFee->Text + "')";

		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		MembershipDB();
		RefreshDB();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	sqlConn->Close();
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = aoas382001; database = membership;";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	try
	{
		sqlCmd->CommandText = "update membership set " + "Firstname = '" + txtFirstName->Text +
			"', Surname = '" + txtSurname->Text + "', Address = '" + txtAddress->Text + "', Mobile = '" + txtMobile->Text +
			"', RegDate = '" + txtDateReg->Text + "', Prove = '" + cbProve->Text + "', DOB = '" + dateTimePicker1->Text + "', MemberType = '" +
			cbMemberType->Text + "', MemberFees = '" + cbMemberFee->Text + "' where RefNo = '" + txtRefNo->Text + "'";

		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		MembershipDB();
		RefreshDB();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	sqlConn->Close();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	
	sqlConn->ConnectionString = "datasource = localhost; port = 3306; username = root; password = aoas382001; database = membership;";
	sqlConn->Open();
	sqlCmd->Connection = sqlConn;
	try
	{
		sqlCmd->CommandText = "delete from membership where RefNo = '" + txtRefNo->Text + "'";

		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		MembershipDB();
		RefreshDB();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	sqlConn->Close();
}


	   


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}


public:
	static System::Windows::Forms::DataGridView^ DGV = gcnew System::Windows::Forms::DataGridView;

private: System::Void btnPreview_Click(System::Object^ sender, System::EventArgs^ e) {

	DGV = dataGridView1;
	Form2^ frmPreview = gcnew Form2(DGV);
	frmPreview->ShowDialog();
}
void document_PrintPage(Object^ /*sender*/, System::Drawing::Printing::PrintPageEventArgs^ e)
{
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	

}
};
}
