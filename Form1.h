#pragma once

namespace FilesFindKeyword {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ OpenDirectory_button;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->OpenDirectory_button = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(30, 423);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(596, 526);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(1070, 423);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(596, 526);
			this->listBox2->TabIndex = 1;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox2_SelectedIndexChanged);
			// 
			// OpenDirectory_button
			// 
			this->OpenDirectory_button->Location = System::Drawing::Point(30, 24);
			this->OpenDirectory_button->Name = L"OpenDirectory_button";
			this->OpenDirectory_button->Size = System::Drawing::Size(98, 56);
			this->OpenDirectory_button->TabIndex = 2;
			this->OpenDirectory_button->Text = L"...(1)";
			this->OpenDirectory_button->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(754, 68);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(249, 211);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"txt\r\ncpp\r\nh\r\nts";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(749, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"TargetExtensionName(2)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(507, 35);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Target Directory";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"All Files";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1065, 374);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(221, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Find Keyword Files";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1090, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 29);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Keyword(3)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1095, 71);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(571, 208);
			this->textBox3->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1258, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(254, 70);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Do Search(4)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1774, 974);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->OpenDirectory_button);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"FilesFindKeyword";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
