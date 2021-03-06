#pragma once

namespace ModrenUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel_TnC->Hide();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ TnC;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ signin;

	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Panel^ panel_TnC;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ OK_Panel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TnC = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->signin = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->panel_TnC = (gcnew System::Windows::Forms::Panel());
			this->OK_Panel = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel_TnC->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.75F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(82, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(89, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(89, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::InfoText;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->username->ForeColor = System::Drawing::Color::White;
			this->username->Location = System::Drawing::Point(93, 223);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(416, 35);
			this->username->TabIndex = 3;
			this->username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::UserName_KeyDown);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::InfoText;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold));
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(93, 319);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(416, 35);
			this->password->TabIndex = 4;
			this->password->UseSystemPasswordChar = true;
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Password_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(93, 264);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(420, 2);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(93, 360);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(420, 2);
			this->panel2->TabIndex = 6;
			// 
			// TnC
			// 
			this->TnC->AutoSize = true;
			this->TnC->BackColor = System::Drawing::Color::Black;
			this->TnC->Checked = true;
			this->TnC->CheckState = System::Windows::Forms::CheckState::Checked;
			this->TnC->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.75F));
			this->TnC->ForeColor = System::Drawing::Color::White;
			this->TnC->Location = System::Drawing::Point(93, 391);
			this->TnC->Margin = System::Windows::Forms::Padding(3, 3, 0, 3);
			this->TnC->Name = L"TnC";
			this->TnC->Size = System::Drawing::Size(126, 24);
			this->TnC->TabIndex = 7;
			this->TnC->Text = L"I agree to the ";
			this->TnC->UseVisualStyleBackColor = false;
			this->TnC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::TnC_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.75F, System::Drawing::FontStyle::Underline));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(183, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Terms and Conditions";
			this->label4->UseCompatibleTextRendering = true;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// signin
			// 
			this->signin->BackColor = System::Drawing::Color::Blue;
			this->signin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signin->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->signin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MidnightBlue;
			this->signin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->signin->ForeColor = System::Drawing::Color::White;
			this->signin->Location = System::Drawing::Point(93, 456);
			this->signin->Name = L"signin";
			this->signin->Size = System::Drawing::Size(207, 58);
			this->signin->TabIndex = 9;
			this->signin->Text = L"Sign In";
			this->signin->UseVisualStyleBackColor = false;
			this->signin->Click += gcnew System::EventHandler(this, &MyForm::signin_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Black;
			this->Exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Exit->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->Exit->ForeColor = System::Drawing::Color::Blue;
			this->Exit->Location = System::Drawing::Point(306, 456);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(207, 58);
			this->Exit->TabIndex = 10;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// panel_TnC
			// 
			this->panel_TnC->BackColor = System::Drawing::Color::Transparent;
			this->panel_TnC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel_TnC->Controls->Add(this->OK_Panel);
			this->panel_TnC->Controls->Add(this->textBox1);
			this->panel_TnC->Controls->Add(this->label5);
			this->panel_TnC->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_TnC->Location = System::Drawing::Point(0, 0);
			this->panel_TnC->Name = L"panel_TnC";
			this->panel_TnC->Size = System::Drawing::Size(1030, 652);
			this->panel_TnC->TabIndex = 11;
			this->panel_TnC->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panel_TnC->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panel_TnC->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// OK_Panel
			// 
			this->OK_Panel->BackColor = System::Drawing::Color::Blue;
			this->OK_Panel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OK_Panel->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->OK_Panel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MidnightBlue;
			this->OK_Panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OK_Panel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
			this->OK_Panel->ForeColor = System::Drawing::Color::White;
			this->OK_Panel->Location = System::Drawing::Point(377, 553);
			this->OK_Panel->Name = L"OK_Panel";
			this->OK_Panel->Size = System::Drawing::Size(207, 58);
			this->OK_Panel->TabIndex = 10;
			this->OK_Panel->Text = L"OK";
			this->OK_Panel->UseVisualStyleBackColor = false;
			this->OK_Panel->Click += gcnew System::EventHandler(this, &MyForm::OK_Panel_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(96, 172);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(488, 375);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 28.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(82, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(502, 65);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms and Conditions";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1030, 652);
			this->Controls->Add(this->panel_TnC);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->signin);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TnC);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel_TnC->ResumeLayout(false);
			this->panel_TnC->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_TnC->Show();
	}
	

private: System::Void TnC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (TnC->Checked) {
		signin->Enabled = true;
	}
	else {
		signin->Enabled = false;
	}
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void signin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username->Text == "admin") {
		if (password -> Text == "root") {
			MessageBox::Show("Access Granted", "Successfully Signed In", MessageBoxButtons::OK, MessageBoxIcon::Information);
			Application::Exit();
		}
		else {
			MessageBox::Show("Incorrect Password", "Error",  MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OK_Panel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_TnC->Hide();
}

//Dragging the form
	   bool dragging;
	   Point offset;
private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//enable dragging and get mouse postition
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;

}
private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if(dragging){
	Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
	Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	dragging = false;
}
private: System::Void UserName_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		password->Focus();
	}
}
private: System::Void Password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter) {
		signin->PerformClick();
	}
}
};
}
