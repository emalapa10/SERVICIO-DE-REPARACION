#pragma once
#include "PanelPrin.h"
#include "PanelPrin.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ connectionString = "datasource=localhost; username=root; password=""; database=rps;";
	private: MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	private: System::Windows::Forms::Button^ btn_ingresar;
	protected:
	private: System::Windows::Forms::Label^ lbl_usuario;
	private: System::Windows::Forms::TextBox^ txt_usuario;
	private: System::Windows::Forms::TextBox^ txt_contrasenia;


	private: System::Windows::Forms::Label^ lbl_contrasenia;
	private: System::Windows::Forms::Label^ lbl_bienvenido;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_ingresar = (gcnew System::Windows::Forms::Button());
			this->lbl_usuario = (gcnew System::Windows::Forms::Label());
			this->txt_usuario = (gcnew System::Windows::Forms::TextBox());
			this->txt_contrasenia = (gcnew System::Windows::Forms::TextBox());
			this->lbl_contrasenia = (gcnew System::Windows::Forms::Label());
			this->lbl_bienvenido = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_ingresar
			// 
			this->btn_ingresar->BackColor = System::Drawing::Color::White;
			this->btn_ingresar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ingresar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btn_ingresar->FlatAppearance->BorderSize = 45;
			this->btn_ingresar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ingresar->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_ingresar->Location = System::Drawing::Point(185, 244);
			this->btn_ingresar->Name = L"btn_ingresar";
			this->btn_ingresar->Size = System::Drawing::Size(118, 39);
			this->btn_ingresar->TabIndex = 0;
			this->btn_ingresar->Text = L"INGRESAR";
			this->btn_ingresar->UseVisualStyleBackColor = false;
			this->btn_ingresar->Click += gcnew System::EventHandler(this, &Form1::btn_ingresar_Click);
			// 
			// lbl_usuario
			// 
			this->lbl_usuario->AutoSize = true;
			this->lbl_usuario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_usuario->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_usuario->Location = System::Drawing::Point(36, 109);
			this->lbl_usuario->Name = L"lbl_usuario";
			this->lbl_usuario->Size = System::Drawing::Size(84, 21);
			this->lbl_usuario->TabIndex = 1;
			this->lbl_usuario->Text = L"USUARIO";
			// 
			// txt_usuario
			// 
			this->txt_usuario->Location = System::Drawing::Point(143, 112);
			this->txt_usuario->Multiline = true;
			this->txt_usuario->Name = L"txt_usuario";
			this->txt_usuario->Size = System::Drawing::Size(160, 20);
			this->txt_usuario->TabIndex = 2;
			// 
			// txt_contrasenia
			// 
			this->txt_contrasenia->Location = System::Drawing::Point(143, 172);
			this->txt_contrasenia->Multiline = true;
			this->txt_contrasenia->Name = L"txt_contrasenia";
			this->txt_contrasenia->PasswordChar = '*';
			this->txt_contrasenia->Size = System::Drawing::Size(160, 20);
			this->txt_contrasenia->TabIndex = 3;
			// 
			// lbl_contrasenia
			// 
			this->lbl_contrasenia->AutoSize = true;
			this->lbl_contrasenia->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_contrasenia->Location = System::Drawing::Point(25, 170);
			this->lbl_contrasenia->Name = L"lbl_contrasenia";
			this->lbl_contrasenia->Size = System::Drawing::Size(112, 20);
			this->lbl_contrasenia->TabIndex = 4;
			this->lbl_contrasenia->Text = L"CONTRASEÑA";
			// 
			// lbl_bienvenido
			// 
			this->lbl_bienvenido->AutoSize = true;
			this->lbl_bienvenido->Font = (gcnew System::Drawing::Font(L"Segoe Print", 24, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_bienvenido->ForeColor = System::Drawing::Color::Navy;
			this->lbl_bienvenido->Location = System::Drawing::Point(46, 21);
			this->lbl_bienvenido->Name = L"lbl_bienvenido";
			this->lbl_bienvenido->Size = System::Drawing::Size(238, 57);
			this->lbl_bienvenido->TabIndex = 5;
			this->lbl_bienvenido->Text = L"BIENVENIDO";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(341, 323);
			this->Controls->Add(this->lbl_bienvenido);
			this->Controls->Add(this->lbl_contrasenia);
			this->Controls->Add(this->txt_contrasenia);
			this->Controls->Add(this->txt_usuario);
			this->Controls->Add(this->lbl_usuario);
			this->Controls->Add(this->btn_ingresar);
			this->Name = L"Form1";
			this->Text = L"SERVICIO TECNICO CUTRALCO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Boton de login, conexion a BD, creacion y ejecucion del qwery
	private: System::Void btn_ingresar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ sql = "select * from tech where tech_cuil = '" + txt_usuario->Text + "' and tech_pwd= '" + txt_contrasenia->Text + "' ";
		MySqlCommand^ cursor = gcnew MySqlCommand(sql, conn);
		MySqlDataReader^ dataReader;

		try
		{
			this->conn->Open();
			dataReader = cursor->ExecuteReader();
			if (dataReader->Read())
			{
				MessageBox::Show(L"Bienvenido Usuario " + txt_usuario->Text);
				ST_Cutralco::PanelPrin^ PanelPrincipal = gcnew ST_Cutralco::PanelPrin();
				this->Visible = false;
				PanelPrincipal->ShowDialog();
				this->Visible = true;

			}
			else
			{
				MessageBox::Show(L"Usuario Incorrecto");
			}
		}
		catch (Exception^ x)
		{
			MessageBox::Show(x->Message);
		}
	}
};
}
