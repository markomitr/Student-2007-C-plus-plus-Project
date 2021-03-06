
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Form2.h"
namespace Bensinska {

	

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		
		Form1(void)
		{
			array<wchar_t>^ ToCharArray();
			 void DoEvents();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
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
	public: System::Windows::Forms::Panel^  prvastrPn;
	protected: 

	protected: 
	public: System::Windows::Forms::Button^  kupiSlika;
	public: System::Windows::Forms::Button^  napolniSlika;
	public: System::Windows::Forms::Button^  kupiBtn;
	public: System::Windows::Forms::Button^  napolniBtn;
	public: System::Windows::Forms::Label^  firmaIme;
	public: System::Windows::Forms::Button^  slikaPumpa;
	public: System::Windows::Forms::GroupBox^  benzinGb;
	public: System::Windows::Forms::ComboBox^  gorivaCb;
	public: System::Windows::Forms::GroupBox^  izborVoziloGb;
	public: System::Windows::Forms::Button^  napolni1Btn;
	public: System::Windows::Forms::ImageList^  transportniSredstva;
	public: System::Windows::Forms::RadioButton^  tovarnoRbtn;
	public: System::Windows::Forms::RadioButton^  avtobusRbtn;
	public: System::Windows::Forms::RadioButton^  kolaRbtn;
	public: System::Windows::Forms::Button^  benzinskaSlika;
	public: System::Windows::Forms::GroupBox^  izborPumpiGb;

	public: System::Windows::Forms::RadioButton^  pumpa2Rbtn;
	public: System::Windows::Forms::RadioButton^  pumpa1Rbtn;
	public: System::Windows::Forms::Label^  statusLbl;
	public: System::Windows::Forms::GroupBox^  pumpiGb;
	public: System::Windows::Forms::TabControl^  tabControl2;
	public: System::Windows::Forms::TabPage^  tabPage3;
	public: System::Windows::Forms::TabControl^  pump1Tp;
	public: System::Windows::Forms::TabPage^  pump1Pg;
	public: System::Windows::Forms::Button^  vozilaSliki1Btn;


	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::TextBox^  litri1Tb;
	public: System::Windows::Forms::TextBox^  cena1Tb;
	public: System::Windows::Forms::Button^  potvrdi1Btn;



	public: System::Windows::Forms::Label^  vneseteLbl;
	public: System::Windows::Forms::Label^  litriLbl;
	public: System::Windows::Forms::TextBox^  vkupnoGorivo1Tb;


	public: System::Windows::Forms::ProgressBar^  polnam1Pb;

	public: System::Windows::Forms::Label^  denLitri;
	public: System::Windows::Forms::Label^  vkupnoLbl;
	public: System::Windows::Forms::Label^  vkupnoDenLbl;
	public: System::Windows::Forms::Label^  statusPolniLbl;
	public: System::Windows::Forms::Label^  gorivo1Lbl;

	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::CheckBox^  krpaChB;
	public: System::Windows::Forms::CheckBox^  airChB;
	public: System::Windows::Forms::CheckBox^  carwashChB;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  smetkaBtn;
	public: System::Windows::Forms::TextBox^  tureno1Tb;

	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TabControl^  pump2Tp;

	public: System::Windows::Forms::TabPage^  tabPage2;
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::TextBox^  tureno2Tb;
	public: System::Windows::Forms::Label^  gorivo2Lbl;
	public: System::Windows::Forms::Label^  statusPolni2Lbl;



	public: System::Windows::Forms::Label^  label13;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::ProgressBar^  polnam2Pb;
	public: System::Windows::Forms::TextBox^  vkupnoGorivo2Tb;


	public: System::Windows::Forms::Label^  label16;
	public: System::Windows::Forms::Label^  label17;
	public: System::Windows::Forms::Button^  potvrdi2Btn;
	public: System::Windows::Forms::TextBox^  cena2Tb;




	public: System::Windows::Forms::TextBox^  litri2Tb;
public: System::Windows::Forms::Button^  vozilaSliki2Btn;


	public: System::Windows::Forms::Button^  button10;
	public: System::Windows::Forms::TabPage^  tabPage1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::ProgressBar^  progressBar1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::Button^  button7;
private: System::ComponentModel::IContainer^  components;
public: 

	protected: 

	public:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->prvastrPn = (gcnew System::Windows::Forms::Panel());
			this->kupiSlika = (gcnew System::Windows::Forms::Button());
			this->napolniSlika = (gcnew System::Windows::Forms::Button());
			this->kupiBtn = (gcnew System::Windows::Forms::Button());
			this->napolniBtn = (gcnew System::Windows::Forms::Button());
			this->firmaIme = (gcnew System::Windows::Forms::Label());
			this->slikaPumpa = (gcnew System::Windows::Forms::Button());
			this->benzinGb = (gcnew System::Windows::Forms::GroupBox());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			this->izborPumpiGb = (gcnew System::Windows::Forms::GroupBox());
			this->pumpa2Rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->pumpa1Rbtn = (gcnew System::Windows::Forms::RadioButton());
			this->benzinskaSlika = (gcnew System::Windows::Forms::Button());
			this->napolni1Btn = (gcnew System::Windows::Forms::Button());
			this->izborVoziloGb = (gcnew System::Windows::Forms::GroupBox());
			this->tovarnoRbtn = (gcnew System::Windows::Forms::RadioButton());
			this->avtobusRbtn = (gcnew System::Windows::Forms::RadioButton());
			this->kolaRbtn = (gcnew System::Windows::Forms::RadioButton());
			this->gorivaCb = (gcnew System::Windows::Forms::ComboBox());
			this->transportniSredstva = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pumpiGb = (gcnew System::Windows::Forms::GroupBox());
			this->smetkaBtn = (gcnew System::Windows::Forms::Button());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->krpaChB = (gcnew System::Windows::Forms::CheckBox());
			this->airChB = (gcnew System::Windows::Forms::CheckBox());
			this->carwashChB = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pump2Tp = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tureno2Tb = (gcnew System::Windows::Forms::TextBox());
			this->gorivo2Lbl = (gcnew System::Windows::Forms::Label());
			this->statusPolni2Lbl = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->polnam2Pb = (gcnew System::Windows::Forms::ProgressBar());
			this->vkupnoGorivo2Tb = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->potvrdi2Btn = (gcnew System::Windows::Forms::Button());
			this->cena2Tb = (gcnew System::Windows::Forms::TextBox());
			this->litri2Tb = (gcnew System::Windows::Forms::TextBox());
			this->vozilaSliki2Btn = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pump1Tp = (gcnew System::Windows::Forms::TabControl());
			this->pump1Pg = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tureno1Tb = (gcnew System::Windows::Forms::TextBox());
			this->gorivo1Lbl = (gcnew System::Windows::Forms::Label());
			this->statusPolniLbl = (gcnew System::Windows::Forms::Label());
			this->vkupnoDenLbl = (gcnew System::Windows::Forms::Label());
			this->vkupnoLbl = (gcnew System::Windows::Forms::Label());
			this->denLitri = (gcnew System::Windows::Forms::Label());
			this->polnam1Pb = (gcnew System::Windows::Forms::ProgressBar());
			this->vkupnoGorivo1Tb = (gcnew System::Windows::Forms::TextBox());
			this->litriLbl = (gcnew System::Windows::Forms::Label());
			this->vneseteLbl = (gcnew System::Windows::Forms::Label());
			this->potvrdi1Btn = (gcnew System::Windows::Forms::Button());
			this->cena1Tb = (gcnew System::Windows::Forms::TextBox());
			this->litri1Tb = (gcnew System::Windows::Forms::TextBox());
			this->vozilaSliki1Btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->prvastrPn->SuspendLayout();
			this->benzinGb->SuspendLayout();
			this->izborPumpiGb->SuspendLayout();
			this->izborVoziloGb->SuspendLayout();
			this->pumpiGb->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->pump2Tp->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->pump1Tp->SuspendLayout();
			this->pump1Pg->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// prvastrPn
			// 
			this->prvastrPn->Controls->Add(this->kupiSlika);
			this->prvastrPn->Controls->Add(this->napolniSlika);
			this->prvastrPn->Controls->Add(this->kupiBtn);
			this->prvastrPn->Controls->Add(this->napolniBtn);
			this->prvastrPn->Controls->Add(this->firmaIme);
			this->prvastrPn->Controls->Add(this->slikaPumpa);
			this->prvastrPn->Location = System::Drawing::Point(12, 12);
			this->prvastrPn->Name = L"prvastrPn";
			this->prvastrPn->Size = System::Drawing::Size(570, 435);
			this->prvastrPn->TabIndex = 0;
			// 
			// kupiSlika
			// 
			this->kupiSlika->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"kupiSlika.Image")));
			this->kupiSlika->Location = System::Drawing::Point(304, 306);
			this->kupiSlika->Name = L"kupiSlika";
			this->kupiSlika->Size = System::Drawing::Size(75, 71);
			this->kupiSlika->TabIndex = 11;
			this->kupiSlika->UseVisualStyleBackColor = true;
			// 
			// napolniSlika
			// 
			this->napolniSlika->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"napolniSlika.Image")));
			this->napolniSlika->Location = System::Drawing::Point(169, 306);
			this->napolniSlika->Name = L"napolniSlika";
			this->napolniSlika->Size = System::Drawing::Size(75, 71);
			this->napolniSlika->TabIndex = 10;
			this->napolniSlika->UseVisualStyleBackColor = true;
			// 
			// kupiBtn
			// 
			this->kupiBtn->Location = System::Drawing::Point(304, 383);
			this->kupiBtn->Name = L"kupiBtn";
			this->kupiBtn->Size = System::Drawing::Size(75, 46);
			this->kupiBtn->TabIndex = 9;
			this->kupiBtn->Text = L"Купи производ";
			this->kupiBtn->UseVisualStyleBackColor = true;
			this->kupiBtn->Click += gcnew System::EventHandler(this, &Form1::kupiBtn_Click);
			// 
			// napolniBtn
			// 
			this->napolniBtn->Location = System::Drawing::Point(169, 383);
			this->napolniBtn->Name = L"napolniBtn";
			this->napolniBtn->Size = System::Drawing::Size(75, 46);
			this->napolniBtn->TabIndex = 8;
			this->napolniBtn->Text = L"Наполни гориво";
			this->napolniBtn->UseVisualStyleBackColor = true;
			this->napolniBtn->Click += gcnew System::EventHandler(this, &Form1::napolniBtn_Click);
			// 
			// firmaIme
			// 
			this->firmaIme->AutoSize = true;
			this->firmaIme->Font = (gcnew System::Drawing::Font(L"Arial", 25, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->firmaIme->ForeColor = System::Drawing::Color::LightSlateGray;
			this->firmaIme->Location = System::Drawing::Point(133, 6);
			this->firmaIme->Name = L"firmaIme";
			this->firmaIme->Size = System::Drawing::Size(289, 39);
			this->firmaIme->TabIndex = 7;
			this->firmaIme->Text = L"Бензинска пумпа";
			// 
			// slikaPumpa
			// 
			this->slikaPumpa->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"slikaPumpa.Image")));
			this->slikaPumpa->Location = System::Drawing::Point(81, 52);
			this->slikaPumpa->Name = L"slikaPumpa";
			this->slikaPumpa->Size = System::Drawing::Size(405, 238);
			this->slikaPumpa->TabIndex = 6;
			this->slikaPumpa->UseVisualStyleBackColor = true;
			// 
			// benzinGb
			// 
			this->benzinGb->Controls->Add(this->statusLbl);
			this->benzinGb->Controls->Add(this->izborPumpiGb);
			this->benzinGb->Controls->Add(this->benzinskaSlika);
			this->benzinGb->Controls->Add(this->napolni1Btn);
			this->benzinGb->Controls->Add(this->izborVoziloGb);
			this->benzinGb->Controls->Add(this->gorivaCb);
			this->benzinGb->Location = System::Drawing::Point(12, 7);
			this->benzinGb->Name = L"benzinGb";
			this->benzinGb->Size = System::Drawing::Size(576, 441);
			this->benzinGb->TabIndex = 12;
			this->benzinGb->TabStop = false;
			this->benzinGb->Text = L"Бензниска пумпа-(надоврешен дел) гориво";
			this->benzinGb->Visible = false;
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->ForeColor = System::Drawing::Color::DarkRed;
			this->statusLbl->Location = System::Drawing::Point(32, 401);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(0, 13);
			this->statusLbl->TabIndex = 10;
			// 
			// izborPumpiGb
			// 
			this->izborPumpiGb->Controls->Add(this->pumpa2Rbtn);
			this->izborPumpiGb->Controls->Add(this->pumpa1Rbtn);
			this->izborPumpiGb->Location = System::Drawing::Point(383, 299);
			this->izborPumpiGb->Name = L"izborPumpiGb";
			this->izborPumpiGb->Size = System::Drawing::Size(127, 101);
			this->izborPumpiGb->TabIndex = 9;
			this->izborPumpiGb->TabStop = false;
			this->izborPumpiGb->Visible = false;
			// 
			// pumpa2Rbtn
			// 
			this->pumpa2Rbtn->AutoSize = true;
			this->pumpa2Rbtn->Location = System::Drawing::Point(15, 56);
			this->pumpa2Rbtn->Name = L"pumpa2Rbtn";
			this->pumpa2Rbtn->Size = System::Drawing::Size(80, 17);
			this->pumpa2Rbtn->TabIndex = 1;
			this->pumpa2Rbtn->TabStop = true;
			this->pumpa2Rbtn->Text = L"пумпа бр.2";
			this->pumpa2Rbtn->UseVisualStyleBackColor = true;
			this->pumpa2Rbtn->Click += gcnew System::EventHandler(this, &Form1::kolaRbtn_Click);
			// 
			// pumpa1Rbtn
			// 
			this->pumpa1Rbtn->AutoSize = true;
			this->pumpa1Rbtn->Location = System::Drawing::Point(15, 32);
			this->pumpa1Rbtn->Name = L"pumpa1Rbtn";
			this->pumpa1Rbtn->Size = System::Drawing::Size(83, 17);
			this->pumpa1Rbtn->TabIndex = 0;
			this->pumpa1Rbtn->TabStop = true;
			this->pumpa1Rbtn->Text = L"пумпа бр.1 ";
			this->pumpa1Rbtn->UseVisualStyleBackColor = true;
			this->pumpa1Rbtn->Click += gcnew System::EventHandler(this, &Form1::kolaRbtn_Click);
			// 
			// benzinskaSlika
			// 
			this->benzinskaSlika->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"benzinskaSlika.BackgroundImage")));
			this->benzinskaSlika->Location = System::Drawing::Point(86, 55);
			this->benzinskaSlika->Name = L"benzinskaSlika";
			this->benzinskaSlika->Size = System::Drawing::Size(381, 215);
			this->benzinskaSlika->TabIndex = 8;
			this->benzinskaSlika->UseVisualStyleBackColor = false;
			// 
			// napolni1Btn
			// 
			this->napolni1Btn->Enabled = false;
			this->napolni1Btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->napolni1Btn->Location = System::Drawing::Point(35, 352);
			this->napolni1Btn->Name = L"napolni1Btn";
			this->napolni1Btn->Size = System::Drawing::Size(128, 30);
			this->napolni1Btn->TabIndex = 5;
			this->napolni1Btn->Text = L"Наполни";
			this->napolni1Btn->UseVisualStyleBackColor = true;
			this->napolni1Btn->Visible = false;
			this->napolni1Btn->Click += gcnew System::EventHandler(this, &Form1::napolni1Btn_Click);
			// 
			// izborVoziloGb
			// 
			this->izborVoziloGb->Controls->Add(this->tovarnoRbtn);
			this->izborVoziloGb->Controls->Add(this->avtobusRbtn);
			this->izborVoziloGb->Controls->Add(this->kolaRbtn);
			this->izborVoziloGb->Location = System::Drawing::Point(213, 299);
			this->izborVoziloGb->Name = L"izborVoziloGb";
			this->izborVoziloGb->Size = System::Drawing::Size(134, 101);
			this->izborVoziloGb->TabIndex = 3;
			this->izborVoziloGb->TabStop = false;
			this->izborVoziloGb->Visible = false;
			// 
			// tovarnoRbtn
			// 
			this->tovarnoRbtn->AutoSize = true;
			this->tovarnoRbtn->Location = System::Drawing::Point(6, 67);
			this->tovarnoRbtn->Name = L"tovarnoRbtn";
			this->tovarnoRbtn->Size = System::Drawing::Size(105, 17);
			this->tovarnoRbtn->TabIndex = 15;
			this->tovarnoRbtn->TabStop = true;
			this->tovarnoRbtn->Text = L"товарно возило";
			this->tovarnoRbtn->UseVisualStyleBackColor = true;
			this->tovarnoRbtn->Click += gcnew System::EventHandler(this, &Form1::kolaRbtn_Click);
			// 
			// avtobusRbtn
			// 
			this->avtobusRbtn->AutoSize = true;
			this->avtobusRbtn->Location = System::Drawing::Point(6, 43);
			this->avtobusRbtn->Name = L"avtobusRbtn";
			this->avtobusRbtn->Size = System::Drawing::Size(65, 17);
			this->avtobusRbtn->TabIndex = 14;
			this->avtobusRbtn->TabStop = true;
			this->avtobusRbtn->Text = L"автобус";
			this->avtobusRbtn->UseVisualStyleBackColor = true;
			this->avtobusRbtn->Click += gcnew System::EventHandler(this, &Form1::kolaRbtn_Click);
			// 
			// kolaRbtn
			// 
			this->kolaRbtn->AutoSize = true;
			this->kolaRbtn->Location = System::Drawing::Point(6, 19);
			this->kolaRbtn->Name = L"kolaRbtn";
			this->kolaRbtn->Size = System::Drawing::Size(80, 17);
			this->kolaRbtn->TabIndex = 13;
			this->kolaRbtn->TabStop = true;
			this->kolaRbtn->Text = L"автомобил";
			this->kolaRbtn->UseVisualStyleBackColor = true;
			this->kolaRbtn->Click += gcnew System::EventHandler(this, &Form1::kolaRbtn_Click);
			// 
			// gorivaCb
			// 
			this->gorivaCb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->gorivaCb->FormattingEnabled = true;
			this->gorivaCb->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"ЕуроДизел", L"Супер-98", L"Безоловен", L"Плин"});
			this->gorivaCb->Location = System::Drawing::Point(35, 306);
			this->gorivaCb->Name = L"gorivaCb";
			this->gorivaCb->Size = System::Drawing::Size(128, 21);
			this->gorivaCb->TabIndex = 2;
			this->gorivaCb->DropDownClosed += gcnew System::EventHandler(this, &Form1::gorivaCb_Click);
			this->gorivaCb->Click += gcnew System::EventHandler(this, &Form1::gorivaCb_Click);
			// 
			// transportniSredstva
			// 
			this->transportniSredstva->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"transportniSredstva.ImageStream")));
			this->transportniSredstva->TransparentColor = System::Drawing::Color::Transparent;
			this->transportniSredstva->Images->SetKeyName(0, L"kola.jpg");
			this->transportniSredstva->Images->SetKeyName(1, L"bus.jpg");
			this->transportniSredstva->Images->SetKeyName(2, L"tuck.jpg");
			// 
			// pumpiGb
			// 
			this->pumpiGb->Controls->Add(this->smetkaBtn);
			this->pumpiGb->Controls->Add(this->tabControl2);
			this->pumpiGb->Controls->Add(this->pump1Tp);
			this->pumpiGb->Controls->Add(this->pump2Tp);
			this->pumpiGb->Location = System::Drawing::Point(0, 7);
			this->pumpiGb->Name = L"pumpiGb";
			this->pumpiGb->Size = System::Drawing::Size(588, 441);
			this->pumpiGb->TabIndex = 13;
			this->pumpiGb->TabStop = false;
			this->pumpiGb->Text = L"Пумпи";
			this->pumpiGb->Visible = false;
			this->pumpiGb->VisibleChanged += gcnew System::EventHandler(this, &Form1::pumpiGb_VisibleChanged);
			// 
			// smetkaBtn
			// 
			this->smetkaBtn->Location = System::Drawing::Point(418, 235);
			this->smetkaBtn->Name = L"smetkaBtn";
			this->smetkaBtn->Size = System::Drawing::Size(111, 24);
			this->smetkaBtn->TabIndex = 2;
			this->smetkaBtn->Text = L"Сметка";
			this->smetkaBtn->UseVisualStyleBackColor = true;
			this->smetkaBtn->Visible = false;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Location = System::Drawing::Point(9, 248);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(557, 196);
			this->tabControl2->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->krpaChB);
			this->tabPage3->Controls->Add(this->airChB);
			this->tabPage3->Controls->Add(this->carwashChB);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(549, 170);
			this->tabPage3->TabIndex = 1;
			this->tabPage3->Text = L"Понуда";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// krpaChB
			// 
			this->krpaChB->AutoSize = true;
			this->krpaChB->Location = System::Drawing::Point(423, 133);
			this->krpaChB->Name = L"krpaChB";
			this->krpaChB->Size = System::Drawing::Size(51, 17);
			this->krpaChB->TabIndex = 5;
			this->krpaChB->Text = L"Крпа";
			this->krpaChB->UseVisualStyleBackColor = true;
			// 
			// airChB
			// 
			this->airChB->AutoSize = true;
			this->airChB->Location = System::Drawing::Point(243, 134);
			this->airChB->Name = L"airChB";
			this->airChB->Size = System::Drawing::Size(82, 17);
			this->airChB->TabIndex = 4;
			this->airChB->Text = L"Освежувач";
			this->airChB->UseVisualStyleBackColor = true;
			// 
			// carwashChB
			// 
			this->carwashChB->AutoSize = true;
			this->carwashChB->Location = System::Drawing::Point(49, 138);
			this->carwashChB->Name = L"carwashChB";
			this->carwashChB->Size = System::Drawing::Size(70, 17);
			this->carwashChB->TabIndex = 3;
			this->carwashChB->Text = L"Car wash";
			this->carwashChB->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Location = System::Drawing::Point(405, 13);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 107);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Location = System::Drawing::Point(226, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 107);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(35, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 107);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pump2Tp
			// 
			this->pump2Tp->Controls->Add(this->tabPage2);
			this->pump2Tp->Location = System::Drawing::Point(8, 29);
			this->pump2Tp->Name = L"pump2Tp";
			this->pump2Tp->SelectedIndex = 0;
			this->pump2Tp->Size = System::Drawing::Size(561, 201);
			this->pump2Tp->TabIndex = 3;
			this->pump2Tp->Visible = false;
			this->pump2Tp->VisibleChanged += gcnew System::EventHandler(this, &Form1::pump2Tp_VisibleChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->tureno2Tb);
			this->tabPage2->Controls->Add(this->gorivo2Lbl);
			this->tabPage2->Controls->Add(this->statusPolni2Lbl);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->polnam2Pb);
			this->tabPage2->Controls->Add(this->vkupnoGorivo2Tb);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->potvrdi2Btn);
			this->tabPage2->Controls->Add(this->cena2Tb);
			this->tabPage2->Controls->Add(this->litri2Tb);
			this->tabPage2->Controls->Add(this->vozilaSliki2Btn);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(553, 175);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Пумпа бр.2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(202, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 15);
			this->label10->TabIndex = 17;
			this->label10->Text = L"l";
			// 
			// tureno2Tb
			// 
			this->tureno2Tb->Location = System::Drawing::Point(139, 88);
			this->tureno2Tb->Name = L"tureno2Tb";
			this->tureno2Tb->ReadOnly = true;
			this->tureno2Tb->Size = System::Drawing::Size(59, 20);
			this->tureno2Tb->TabIndex = 16;
			this->tureno2Tb->Text = L"0";
			this->tureno2Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gorivo2Lbl
			// 
			this->gorivo2Lbl->AutoSize = true;
			this->gorivo2Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->gorivo2Lbl->ForeColor = System::Drawing::Color::CadetBlue;
			this->gorivo2Lbl->Location = System::Drawing::Point(32, 6);
			this->gorivo2Lbl->Name = L"gorivo2Lbl";
			this->gorivo2Lbl->Size = System::Drawing::Size(0, 17);
			this->gorivo2Lbl->TabIndex = 15;
			// 
			// statusPolni2Lbl
			// 
			this->statusPolni2Lbl->AutoSize = true;
			this->statusPolni2Lbl->ForeColor = System::Drawing::Color::Firebrick;
			this->statusPolni2Lbl->Location = System::Drawing::Point(250, 113);
			this->statusPolni2Lbl->Name = L"statusPolni2Lbl";
			this->statusPolni2Lbl->Size = System::Drawing::Size(0, 13);
			this->statusPolni2Lbl->TabIndex = 14;
			this->statusPolni2Lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(216, 143);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"ден";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(149, 118);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Вкупно:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(207, 58);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"ден/л";
			// 
			// polnam2Pb
			// 
			this->polnam2Pb->Location = System::Drawing::Point(271, 83);
			this->polnam2Pb->Name = L"polnam2Pb";
			this->polnam2Pb->Size = System::Drawing::Size(75, 23);
			this->polnam2Pb->Step = 1;
			this->polnam2Pb->TabIndex = 10;
			// 
			// vkupnoGorivo2Tb
			// 
			this->vkupnoGorivo2Tb->Cursor = System::Windows::Forms::Cursors::No;
			this->vkupnoGorivo2Tb->Location = System::Drawing::Point(127, 137);
			this->vkupnoGorivo2Tb->Name = L"vkupnoGorivo2Tb";
			this->vkupnoGorivo2Tb->ReadOnly = true;
			this->vkupnoGorivo2Tb->Size = System::Drawing::Size(84, 20);
			this->vkupnoGorivo2Tb->TabIndex = 9;
			this->vkupnoGorivo2Tb->Text = L"0";
			this->vkupnoGorivo2Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(217, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 13);
			this->label16->TabIndex = 8;
			this->label16->Text = L"литри";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(124, 7);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(87, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Внесете литри :";
			// 
			// potvrdi2Btn
			// 
			this->potvrdi2Btn->Enabled = false;
			this->potvrdi2Btn->Location = System::Drawing::Point(271, 26);
			this->potvrdi2Btn->Name = L"potvrdi2Btn";
			this->potvrdi2Btn->Size = System::Drawing::Size(75, 23);
			this->potvrdi2Btn->TabIndex = 5;
			this->potvrdi2Btn->Text = L"Потврди";
			this->potvrdi2Btn->UseVisualStyleBackColor = true;
			this->potvrdi2Btn->Click += gcnew System::EventHandler(this, &Form1::potvrdi2Btn_Click);
			// 
			// cena2Tb
			// 
			this->cena2Tb->Cursor = System::Windows::Forms::Cursors::No;
			this->cena2Tb->Location = System::Drawing::Point(139, 56);
			this->cena2Tb->Name = L"cena2Tb";
			this->cena2Tb->ReadOnly = true;
			this->cena2Tb->Size = System::Drawing::Size(59, 20);
			this->cena2Tb->TabIndex = 3;
			this->cena2Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// litri2Tb
			// 
			this->litri2Tb->Location = System::Drawing::Point(127, 29);
			this->litri2Tb->Name = L"litri2Tb";
			this->litri2Tb->Size = System::Drawing::Size(84, 20);
			this->litri2Tb->TabIndex = 2;
			this->litri2Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->litri2Tb->TextChanged += gcnew System::EventHandler(this, &Form1::litri2Tb_TextChanged);
			// 
			// vozilaSliki2Btn
			// 
			this->vozilaSliki2Btn->ImageList = this->transportniSredstva;
			this->vozilaSliki2Btn->Location = System::Drawing::Point(382, 37);
			this->vozilaSliki2Btn->Name = L"vozilaSliki2Btn";
			this->vozilaSliki2Btn->Size = System::Drawing::Size(156, 103);
			this->vozilaSliki2Btn->TabIndex = 1;
			this->vozilaSliki2Btn->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->Location = System::Drawing::Point(25, 27);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 115);
			this->button10->TabIndex = 0;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// pump1Tp
			// 
			this->pump1Tp->Controls->Add(this->pump1Pg);
			this->pump1Tp->Location = System::Drawing::Point(9, 28);
			this->pump1Tp->Name = L"pump1Tp";
			this->pump1Tp->SelectedIndex = 0;
			this->pump1Tp->Size = System::Drawing::Size(561, 198);
			this->pump1Tp->TabIndex = 0;
			this->pump1Tp->Visible = false;
			this->pump1Tp->VisibleChanged += gcnew System::EventHandler(this, &Form1::pump1Tp_VisibleChanged);
			// 
			// pump1Pg
			// 
			this->pump1Pg->Controls->Add(this->label1);
			this->pump1Pg->Controls->Add(this->tureno1Tb);
			this->pump1Pg->Controls->Add(this->gorivo1Lbl);
			this->pump1Pg->Controls->Add(this->statusPolniLbl);
			this->pump1Pg->Controls->Add(this->vkupnoDenLbl);
			this->pump1Pg->Controls->Add(this->vkupnoLbl);
			this->pump1Pg->Controls->Add(this->denLitri);
			this->pump1Pg->Controls->Add(this->polnam1Pb);
			this->pump1Pg->Controls->Add(this->vkupnoGorivo1Tb);
			this->pump1Pg->Controls->Add(this->litriLbl);
			this->pump1Pg->Controls->Add(this->vneseteLbl);
			this->pump1Pg->Controls->Add(this->potvrdi1Btn);
			this->pump1Pg->Controls->Add(this->cena1Tb);
			this->pump1Pg->Controls->Add(this->litri1Tb);
			this->pump1Pg->Controls->Add(this->vozilaSliki1Btn);
			this->pump1Pg->Controls->Add(this->button1);
			this->pump1Pg->Location = System::Drawing::Point(4, 22);
			this->pump1Pg->Name = L"pump1Pg";
			this->pump1Pg->Padding = System::Windows::Forms::Padding(3);
			this->pump1Pg->Size = System::Drawing::Size(553, 172);
			this->pump1Pg->TabIndex = 1;
			this->pump1Pg->Text = L"Пумпа бр.1";
			this->pump1Pg->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(10, 15);
			this->label1->TabIndex = 17;
			this->label1->Text = L"l";
			// 
			// tureno1Tb
			// 
			this->tureno1Tb->Location = System::Drawing::Point(139, 88);
			this->tureno1Tb->Name = L"tureno1Tb";
			this->tureno1Tb->ReadOnly = true;
			this->tureno1Tb->Size = System::Drawing::Size(59, 20);
			this->tureno1Tb->TabIndex = 16;
			this->tureno1Tb->Text = L"0";
			this->tureno1Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gorivo1Lbl
			// 
			this->gorivo1Lbl->AutoSize = true;
			this->gorivo1Lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->gorivo1Lbl->ForeColor = System::Drawing::Color::CadetBlue;
			this->gorivo1Lbl->Location = System::Drawing::Point(32, 6);
			this->gorivo1Lbl->Name = L"gorivo1Lbl";
			this->gorivo1Lbl->Size = System::Drawing::Size(0, 17);
			this->gorivo1Lbl->TabIndex = 15;
			// 
			// statusPolniLbl
			// 
			this->statusPolniLbl->AutoSize = true;
			this->statusPolniLbl->Location = System::Drawing::Point(250, 113);
			this->statusPolniLbl->Name = L"statusPolniLbl";
			this->statusPolniLbl->Size = System::Drawing::Size(0, 13);
			this->statusPolniLbl->TabIndex = 14;
			this->statusPolniLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vkupnoDenLbl
			// 
			this->vkupnoDenLbl->AutoSize = true;
			this->vkupnoDenLbl->Location = System::Drawing::Point(216, 143);
			this->vkupnoDenLbl->Name = L"vkupnoDenLbl";
			this->vkupnoDenLbl->Size = System::Drawing::Size(25, 13);
			this->vkupnoDenLbl->TabIndex = 13;
			this->vkupnoDenLbl->Text = L"ден";
			// 
			// vkupnoLbl
			// 
			this->vkupnoLbl->AutoSize = true;
			this->vkupnoLbl->Location = System::Drawing::Point(149, 118);
			this->vkupnoLbl->Name = L"vkupnoLbl";
			this->vkupnoLbl->Size = System::Drawing::Size(46, 13);
			this->vkupnoLbl->TabIndex = 12;
			this->vkupnoLbl->Text = L"Вкупно:";
			// 
			// denLitri
			// 
			this->denLitri->AutoSize = true;
			this->denLitri->Location = System::Drawing::Point(207, 58);
			this->denLitri->Name = L"denLitri";
			this->denLitri->Size = System::Drawing::Size(36, 13);
			this->denLitri->TabIndex = 11;
			this->denLitri->Text = L"ден/л";
			// 
			// polnam1Pb
			// 
			this->polnam1Pb->Location = System::Drawing::Point(271, 83);
			this->polnam1Pb->Name = L"polnam1Pb";
			this->polnam1Pb->Size = System::Drawing::Size(75, 23);
			this->polnam1Pb->Step = 1;
			this->polnam1Pb->TabIndex = 10;
			// 
			// vkupnoGorivo1Tb
			// 
			this->vkupnoGorivo1Tb->Cursor = System::Windows::Forms::Cursors::No;
			this->vkupnoGorivo1Tb->Location = System::Drawing::Point(127, 137);
			this->vkupnoGorivo1Tb->Name = L"vkupnoGorivo1Tb";
			this->vkupnoGorivo1Tb->ReadOnly = true;
			this->vkupnoGorivo1Tb->Size = System::Drawing::Size(84, 20);
			this->vkupnoGorivo1Tb->TabIndex = 9;
			this->vkupnoGorivo1Tb->Text = L"0";
			this->vkupnoGorivo1Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// litriLbl
			// 
			this->litriLbl->AutoSize = true;
			this->litriLbl->Location = System::Drawing::Point(217, 33);
			this->litriLbl->Name = L"litriLbl";
			this->litriLbl->Size = System::Drawing::Size(36, 13);
			this->litriLbl->TabIndex = 8;
			this->litriLbl->Text = L"литри";
			// 
			// vneseteLbl
			// 
			this->vneseteLbl->AutoSize = true;
			this->vneseteLbl->Location = System::Drawing::Point(124, 7);
			this->vneseteLbl->Name = L"vneseteLbl";
			this->vneseteLbl->Size = System::Drawing::Size(87, 13);
			this->vneseteLbl->TabIndex = 6;
			this->vneseteLbl->Text = L"Внесете литри :";
			// 
			// potvrdi1Btn
			// 
			this->potvrdi1Btn->Enabled = false;
			this->potvrdi1Btn->Location = System::Drawing::Point(271, 26);
			this->potvrdi1Btn->Name = L"potvrdi1Btn";
			this->potvrdi1Btn->Size = System::Drawing::Size(75, 23);
			this->potvrdi1Btn->TabIndex = 5;
			this->potvrdi1Btn->Text = L"Потврди";
			this->potvrdi1Btn->UseVisualStyleBackColor = true;
			this->potvrdi1Btn->Click += gcnew System::EventHandler(this, &Form1::potvrdiBtn_Click);
			// 
			// cena1Tb
			// 
			this->cena1Tb->Cursor = System::Windows::Forms::Cursors::No;
			this->cena1Tb->Location = System::Drawing::Point(139, 56);
			this->cena1Tb->Name = L"cena1Tb";
			this->cena1Tb->ReadOnly = true;
			this->cena1Tb->Size = System::Drawing::Size(59, 20);
			this->cena1Tb->TabIndex = 3;
			this->cena1Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// litri1Tb
			// 
			this->litri1Tb->Location = System::Drawing::Point(127, 29);
			this->litri1Tb->Name = L"litri1Tb";
			this->litri1Tb->Size = System::Drawing::Size(84, 20);
			this->litri1Tb->TabIndex = 2;
			this->litri1Tb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->litri1Tb->ReadOnlyChanged += gcnew System::EventHandler(this, &Form1::litriTb_ReadOnlyChanged);
			this->litri1Tb->TextChanged += gcnew System::EventHandler(this, &Form1::litriTb_TextChanged);
			// 
			// vozilaSliki1Btn
			// 
			this->vozilaSliki1Btn->ImageList = this->transportniSredstva;
			this->vozilaSliki1Btn->Location = System::Drawing::Point(382, 37);
			this->vozilaSliki1Btn->Name = L"vozilaSliki1Btn";
			this->vozilaSliki1Btn->Size = System::Drawing::Size(156, 103);
			this->vozilaSliki1Btn->TabIndex = 1;
			this->vozilaSliki1Btn->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(25, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 115);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->progressBar1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(553, 172);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Пумпа бр.1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(202, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 15);
			this->label2->TabIndex = 17;
			this->label2->Text = L"l";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(59, 20);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::CadetBlue;
			this->label3->Location = System::Drawing::Point(32, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(250, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 14;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(216, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ден";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(149, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Вкупно:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(207, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ден/л";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(271, 83);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(75, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox2->Location = System::Drawing::Point(127, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(84, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(217, 33);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"литри";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(124, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Внесете литри :";
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(271, 26);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Потврди";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox3->Location = System::Drawing::Point(139, 56);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(59, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(127, 29);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(84, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button6
			// 
			this->button6->ImageList = this->transportniSredstva;
			this->button6->Location = System::Drawing::Point(382, 37);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 103);
			this->button6->TabIndex = 1;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Location = System::Drawing::Point(25, 27);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 115);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 466);
			this->Controls->Add(this->pumpiGb);
			this->Controls->Add(this->benzinGb);
			this->Controls->Add(this->prvastrPn);
			this->Name = L"Form1";
			this->Text = L"Бензинска пумпа";
			this->prvastrPn->ResumeLayout(false);
			this->prvastrPn->PerformLayout();
			this->benzinGb->ResumeLayout(false);
			this->benzinGb->PerformLayout();
			this->izborPumpiGb->ResumeLayout(false);
			this->izborPumpiGb->PerformLayout();
			this->izborVoziloGb->ResumeLayout(false);
			this->izborVoziloGb->PerformLayout();
			this->pumpiGb->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->pump2Tp->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->pump1Tp->ResumeLayout(false);
			this->pump1Pg->ResumeLayout(false);
			this->pump1Pg->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void napolniBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 benzinGb->Visible = true;
				 prvastrPn->Visible = false;
				 }
public: System::Void kupiBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			  prvastrPn->Visible = false;
		 }

public: System::Void gorivaCb_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if(gorivaCb->SelectedIndex<0 || gorivaCb->SelectedIndex>3)
			 {
				 statusLbl->Text = L"Ве молам селектирајте гориво";
			 }
			 else
			 {
				 izborVoziloGb->Visible = true;	
				 izborPumpiGb->Visible = true;
				 napolni1Btn->Visible = true;
				 statusLbl->Text = L"Ве молам селектирајте типот на возило и бр. на пимпа";
			 }
		 }


public: System::Void kolaRbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			if(((kolaRbtn->Checked == true || avtobusRbtn->Checked == true || tovarnoRbtn->Checked == true) && (pumpa1Rbtn->Checked == true 
				|| pumpa2Rbtn->Checked == true)) && (gorivaCb->SelectedIndex>=0 && gorivaCb->SelectedIndex<=3))
			{
				 napolni1Btn->Enabled= true;
				statusLbl->Text = L"Притиснете го копчето";
			}
				else
				{
				napolni1Btn->Enabled= false;
				}
		 }
public: System::Void napolni1Btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 pumpiGb->Visible = true;
			 benzinGb->Visible = false;
		 }
public: System::Void pumpiGb_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			 pump1Tp->Visible = false;
			 pump2Tp->Visible = false;
			 if(pumpa1Rbtn->Checked == true)
				 pump1Tp->Visible = true;
			 if(pumpa2Rbtn->Checked == true)
				 pump2Tp->Visible = true;			 
			 if(gorivaCb->SelectedIndex==0)
			 {
				 cena1Tb->Text= L"75";
				 gorivo1Lbl->Text = L"ЕуроДизел";
				  cena2Tb->Text= L"75";
				 gorivo2Lbl->Text = L"ЕуроДизел";
			 }
			 if(gorivaCb->SelectedIndex==1)
			 {
				 gorivo1Lbl->Text = L"Супер-98";
				 cena1Tb->Text= L"72";
				 gorivo2Lbl->Text = L"Супер-98";
				 cena2Tb->Text= L"72";
			 }
			  if(gorivaCb->SelectedIndex==2)
			  {
				 cena1Tb->Text= L"70";
				 gorivo1Lbl->Text = L"Безоловен";
				 cena2Tb->Text= L"70";
				 gorivo2Lbl->Text = L"Безоловен";
			  }
			  if(gorivaCb->SelectedIndex==3)
			  {
				 cena1Tb->Text= L"55";
				 gorivo1Lbl->Text = L"Плин";
				 cena2Tb->Text= L"55";
				 gorivo2Lbl->Text = L"Плин";
			  }
			  

		 }
public: System::Void pump1Tp_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			pump1Tp->Enabled = true;
			 if(kolaRbtn->Checked == true)
				 vozilaSliki1Btn->ImageIndex=0;
			 if(avtobusRbtn->Checked == true)
				 vozilaSliki1Btn->ImageIndex=1;
			 if(tovarnoRbtn->Checked == true)
				 vozilaSliki1Btn->ImageIndex=2;
		 }
public: System::Void litriTb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			potvrdi1Btn->Enabled = true;
		 }
public: System::Void potvrdiBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 litri1Tb->ReadOnly = true;
			 potvrdi1Btn->Enabled = false;
			  polnam1Pb->Maximum = System::Convert::ToInt32(litri1Tb->Text);
			 for(int i=0;i<polnam1Pb->Maximum;i+=1)
			 {	
				 Application::DoEvents();
				 statusPolniLbl->Text = L"Полнам...";
				 System::Threading::Thread::Sleep(500);
				 polnam1Pb->PerformStep();
				 tureno1Tb->Text = System::Convert::ToString(i+1);
				 vkupnoGorivo1Tb->Text =System::Convert::ToString((i+1) * System::Convert::ToInt32(cena1Tb->Text));
				 
			 }
			 statusPolniLbl->Text = L"Пристапите на плаќање";
			 pump1Tp->Enabled = false;
			 smetkaBtn->Visible = true;
		 }
public: System::Void litriTb_ReadOnlyChanged(System::Object^  sender, System::EventArgs^  e) {
			 litri1Tb->Cursor = System::Windows::Forms::Cursors::No;
		 }
public: System::Void pump2Tp_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
			 pump1Tp->Enabled = true;
			 if(kolaRbtn->Checked == true)
				 vozilaSliki2Btn->ImageIndex=0;
			 if(avtobusRbtn->Checked == true)
				 vozilaSliki2Btn->ImageIndex=1;
			 if(tovarnoRbtn->Checked == true)
				 vozilaSliki2Btn->ImageIndex=2;
		 }
public: System::Void litri2Tb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if(litri2Tb->TextLength !=0)
			{

			if(System::Convert::ToInt32(litri2Tb->Text)>200)
			{
				Windows::Forms::Form^ p = gcnew Form2(L"Внесете помалку од 200");
				p->ShowDialog();				
				litri2Tb->Text = "0";
				litri2Tb->SelectAll();

			}
			else
			potvrdi2Btn->Enabled = true;
			}
			
		 }
public: System::Void potvrdi2Btn_Click(System::Object^  sender, System::EventArgs^  e) {
			  litri2Tb->ReadOnly = true;
			 potvrdi2Btn->Enabled = false;
			 polnam2Pb->Maximum = System::Convert::ToInt32(litri2Tb->Text);
			 for(int i=0;i<polnam2Pb->Maximum;i++)
			 {	
				 Application::DoEvents();
				 statusPolni2Lbl->Text = L"Полнам...";
				 System::Threading::Thread::Sleep(500);
				 polnam2Pb->PerformStep();
				 tureno2Tb->Text = System::Convert::ToString(i+1);
				 vkupnoGorivo2Tb->Text =System::Convert::ToString((i+1) * System::Convert::ToInt32(cena1Tb->Text));
				 
			 }
			 statusPolni2Lbl->Text = L"Пристапите на плаќање";
			 pump2Tp->Enabled = false;
			 smetkaBtn->Visible = true;
		 }
};
}

