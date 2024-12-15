#pragma once
#include<ctype.h>
#include<string>
#include<iostream>
#include <string.h>
long double sum(float a[], int b, std::string n) {
	float s = a[0];
	for (int i = 0; i < b - 1; i++) {
		switch (n[i]) {
		case '+':
			s += a[i + 1];
			break;
		case '-':
			s -= a[i + 1];
			break;
		case '/':
			s /= a[i + 1];
			break;
		case '*':
			s *= a[i + 1];
			break;
		case '=':
			break;
			break;
		default:
			continue;
		}
	}
	return s;
}

namespace Calkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13, 12);
			this->textBox1->MaxLength = 100;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 73);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(13, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(176, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 39);
			this->button2->TabIndex = 2;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Location = System::Drawing::Point(97, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"<<<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(256, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 39);
			this->button4->TabIndex = 4;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Location = System::Drawing::Point(256, 155);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 39);
			this->button5->TabIndex = 8;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Location = System::Drawing::Point(176, 155);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 39);
			this->button6->TabIndex = 7;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Location = System::Drawing::Point(97, 155);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 39);
			this->button7->TabIndex = 6;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Location = System::Drawing::Point(13, 155);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(61, 39);
			this->button8->TabIndex = 5;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Location = System::Drawing::Point(256, 215);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 39);
			this->button9->TabIndex = 12;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Location = System::Drawing::Point(176, 215);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 39);
			this->button10->TabIndex = 11;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Location = System::Drawing::Point(97, 215);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(61, 39);
			this->button11->TabIndex = 10;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Location = System::Drawing::Point(13, 215);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(61, 39);
			this->button12->TabIndex = 9;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button13->Location = System::Drawing::Point(256, 271);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(61, 95);
			this->button13->TabIndex = 16;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Location = System::Drawing::Point(176, 271);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 39);
			this->button14->TabIndex = 15;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button15->Location = System::Drawing::Point(97, 271);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 39);
			this->button15->TabIndex = 14;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button16->Location = System::Drawing::Point(13, 271);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(61, 39);
			this->button16->TabIndex = 13;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button17->Location = System::Drawing::Point(176, 327);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(61, 39);
			this->button17->TabIndex = 19;
			this->button17->Text = L"MC";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button18->Location = System::Drawing::Point(97, 327);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(61, 39);
			this->button18->TabIndex = 18;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button19->Location = System::Drawing::Point(13, 327);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(61, 39);
			this->button19->TabIndex = 17;
			this->button19->Text = L"+/-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 449);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
// 7 button
		if (textBox1->Text == "0") {
			this->textBox1->Text = button8->Text;
		}
		else {
			this->textBox1->Text += button8->Text;
		}
		
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
// 8 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button7->Text;
	}
	else {
		this->textBox1->Text += button7->Text;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
// 9 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button6->Text;
	}
	else {
		this->textBox1->Text += button6->Text;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = this->textBox1->Text->Length;
	String^ b = textBox1->Text;
	if (isalnum(b[a - 1])) {
		this->textBox1->Text += (button4->Text);
	}
	else {
		String^ b = this->textBox1->Text;
		String^ c = "";
		for (int i = 0; i < b->Length - 1; i++) {
			c += b[i];
		}
		c += button4->Text;
		this->textBox1->Text = c;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	int a = this->textBox1->Text->Length;
	String^ b = textBox1->Text;
	if (isalnum(b[a - 1])) {
		this->textBox1->Text += (button5->Text);
	}
	else {
		String^ b = this->textBox1->Text;
		String^ c = "";
		for (int i = 0; i < b->Length - 1; i++) {
			c += b[i];
		}
		c += button5->Text;
		this->textBox1->Text = c;
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
// 4 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button12->Text;
	}
	else {
		this->textBox1->Text += button12->Text;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
// 5 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button11->Text;
	}
	else {
		this->textBox1->Text += button11->Text;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
// 6 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button10->Text;
	}
	else {
		this->textBox1->Text += button10->Text;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = this->textBox1->Text->Length;
	String^ b = textBox1->Text;
	if (isalnum(b[a - 1])) {
		this->textBox1->Text += button9->Text;
	}
	else {
		String^ b = this->textBox1->Text;
		String^ c = "";
		for (int i = 0; i < b->Length - 1; i++) {
			c += b[i];
		}
		c += button9->Text;
		this->textBox1->Text = c;
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
// 1 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button16->Text;
	}
	else {
		this->textBox1->Text += button16->Text;
	}
}

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
// 2 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button15->Text;
	}
	else {
		this->textBox1->Text += button15->Text;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
// 3 button
	if (textBox1->Text == "0") {
		this->textBox1->Text = button14->Text;
	}
	else {
		this->textBox1->Text += button14->Text;
	}
}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		// = button
		
		String^ a = this->textBox1->Text;
		if (a == "SSA2023") {
			MessageBox::Show("Abdulhayxon Muhammadiyev", "", MessageBoxButtons::OK);
		}
		std::string b = "", f = "";
		std::string s = "";
		int c = 0, d = 0, g = 0;
		float A[100];
		for (int i = d; i < a->Length; i++) {
			if (isdigit(a[i])) {
				b += a[i];
			}
			else {
				d = i+1;
				A[c] = atoi(b.c_str());
				c++;
				s = a[i];
				b = "";
			}
		}
		A[c] = atoi(b.c_str());
		c++;
		d = 0;
		for (int i = d; i < a->Length; i++) {
			if (!isalnum(a[i])) {
				f += a[i];
			}
		}
		float k = sum(A, c, f);
		this->textBox1->Text = System::Convert::ToString(k);
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// C button
	this->textBox1->Text="0";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// minus button 
	int a = this->textBox1->Text->Length;
	String^ b = textBox1->Text;
	if (isalnum(b[a-1])) {
		this->textBox1->Text +=(button2->Text);
	}
	else {
		String^ b = this->textBox1->Text;
		String^ c = "";
		for (int i = 0; i < b->Length - 1; i++) {
			c += b[i];
		}
		c += button2->Text;
		this->textBox1->Text = c;
	}
 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// << button
	String^ b = this->textBox1->Text;
	String^ c = "";
	for (int i = 0; i< b->Length-1; i++) {
		c += b[i];
	}
	if (c == "") {
		c = "0";
	}
	this->textBox1->Text = c;

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text == "0") {
		this->textBox1->Text = button18->Text;
	}
	else {
		this->textBox1->Text += button18->Text;
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// +/- button
	bool k; int b;
	String^ a = this->textBox1->Text;
	this->textBox1->Text = a;
	for (int i = 0; i < a->Length; i++) {
		if (isalnum(a[i])) {
			k = 1;
		}
		else {
			k = 0; break;
		}
	}
	//if (k)
	//	 b = int::Parse(a);
	//else MessageBox::Show("Bu holatni manfilashtirish mumkin emas", "Xato", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	b = int::Parse(a);
	if (a == "0") {
		a = "-";
	}
	else if (a == "-") a = "0";
	else if (b!=0) {
		b = -1 * b;
		textBox1->Text = System::Convert::ToString(b);
	}
}
};
}
