#pragma once
#include"Cliente.h"
#include"ColaClientes.h"
#include"Mascota.h"
#include"ListaMascotas.h"

namespace VETERINARIA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private: 
		int n = 0;
		ColaClientes^ cola = gcnew ColaClientes();
		ListaMascotas^ listaMascotas = gcnew ListaMascotas();

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ txtEspecie;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtNombreMascota;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;








	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNumeroMascotas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreDelCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumeroContacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraDeLlegada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CostoConsulta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EstadoDePago;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumeroDeMascotas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreDeLaMascota;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EspecieDeLaMascota;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EdadDeLaMascota;






	private: System::Windows::Forms::TextBox^ txtEdad;




	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtNumero;
	private: System::Windows::Forms::DateTimePicker^ dtpHoraLlegada;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ txtCosto;
	private: System::Windows::Forms::RadioButton^ rbno;


	private: System::Windows::Forms::RadioButton^ rbsi;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Button^ btnAgregarCliente;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ btnAtenderCliente;








	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->dtpHoraLlegada = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbno = (gcnew System::Windows::Forms::RadioButton());
			this->rbsi = (gcnew System::Windows::Forms::RadioButton());
			this->txtCosto = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarCliente = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->NombreDelCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumeroContacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraDeLlegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CostoConsulta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EstadoDePago = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumeroDeMascotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreDeLaMascota = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EspecieDeLaMascota = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EdadDeLaMascota = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAtenderCliente = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEspecie = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtNombreMascota = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroMascotas = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre del Cliente: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(254, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número de Contacto: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(501, 20);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Hora de Llegada: ";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(112, 17);
			this->txtNombre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(116, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(360, 17);
			this->txtNumero->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(116, 20);
			this->txtNumero->TabIndex = 4;
			// 
			// dtpHoraLlegada
			// 
			this->dtpHoraLlegada->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dtpHoraLlegada->Location = System::Drawing::Point(592, 17);
			this->dtpHoraLlegada->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dtpHoraLlegada->Name = L"dtpHoraLlegada";
			this->dtpHoraLlegada->ShowUpDown = true;
			this->dtpHoraLlegada->Size = System::Drawing::Size(95, 20);
			this->dtpHoraLlegada->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->txtCosto);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(11, 49);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(477, 85);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Información de Pago";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(152, 37);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Bs.";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbno);
			this->groupBox2->Controls->Add(this->rbsi);
			this->groupBox2->Location = System::Drawing::Point(244, 17);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(219, 53);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"¿El pago ha sido realizado\?:";
			// 
			// rbno
			// 
			this->rbno->AutoSize = true;
			this->rbno->Location = System::Drawing::Point(104, 20);
			this->rbno->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rbno->Name = L"rbno";
			this->rbno->Size = System::Drawing::Size(39, 17);
			this->rbno->TabIndex = 1;
			this->rbno->TabStop = true;
			this->rbno->Text = L"No";
			this->rbno->UseVisualStyleBackColor = true;
			// 
			// rbsi
			// 
			this->rbsi->AutoSize = true;
			this->rbsi->Location = System::Drawing::Point(44, 20);
			this->rbsi->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->rbsi->Name = L"rbsi";
			this->rbsi->Size = System::Drawing::Size(34, 17);
			this->rbsi->TabIndex = 0;
			this->rbsi->TabStop = true;
			this->rbsi->Text = L"Si";
			this->rbsi->UseVisualStyleBackColor = true;
			// 
			// txtCosto
			// 
			this->txtCosto->Location = System::Drawing::Point(124, 34);
			this->txtCosto->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtCosto->Name = L"txtCosto";
			this->txtCosto->Size = System::Drawing::Size(31, 20);
			this->txtCosto->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 37);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Costo de la Consulta: ";
			// 
			// btnAgregarCliente
			// 
			this->btnAgregarCliente->Location = System::Drawing::Point(220, 285);
			this->btnAgregarCliente->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAgregarCliente->Name = L"btnAgregarCliente";
			this->btnAgregarCliente->Size = System::Drawing::Size(142, 35);
			this->btnAgregarCliente->TabIndex = 9;
			this->btnAgregarCliente->Text = L"Agregar Cliente";
			this->btnAgregarCliente->UseVisualStyleBackColor = true;
			this->btnAgregarCliente->Click += gcnew System::EventHandler(this, &MyForm::btnAgregarCliente_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(14, 336);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox3->Size = System::Drawing::Size(682, 317);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Cola de Clientes: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->NombreDelCliente,
					this->NumeroContacto, this->HoraDeLlegada, this->CostoConsulta, this->EstadoDePago, this->NumeroDeMascotas, this->NombreDeLaMascota,
					this->EspecieDeLaMascota, this->EdadDeLaMascota
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 17);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(682, 295);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// NombreDelCliente
			// 
			this->NombreDelCliente->HeaderText = L"Nombre del Cliente";
			this->NombreDelCliente->MinimumWidth = 6;
			this->NombreDelCliente->Name = L"NombreDelCliente";
			this->NombreDelCliente->Width = 125;
			// 
			// NumeroContacto
			// 
			this->NumeroContacto->HeaderText = L"Número Contacto";
			this->NumeroContacto->MinimumWidth = 6;
			this->NumeroContacto->Name = L"NumeroContacto";
			this->NumeroContacto->Width = 125;
			// 
			// HoraDeLlegada
			// 
			this->HoraDeLlegada->HeaderText = L"Hora de Llegada";
			this->HoraDeLlegada->MinimumWidth = 6;
			this->HoraDeLlegada->Name = L"HoraDeLlegada";
			this->HoraDeLlegada->Width = 125;
			// 
			// CostoConsulta
			// 
			this->CostoConsulta->HeaderText = L"Costo Consulta (Bs.)";
			this->CostoConsulta->MinimumWidth = 6;
			this->CostoConsulta->Name = L"CostoConsulta";
			this->CostoConsulta->Width = 125;
			// 
			// EstadoDePago
			// 
			this->EstadoDePago->HeaderText = L"Estado de Pago";
			this->EstadoDePago->MinimumWidth = 6;
			this->EstadoDePago->Name = L"EstadoDePago";
			this->EstadoDePago->Width = 125;
			// 
			// NumeroDeMascotas
			// 
			this->NumeroDeMascotas->HeaderText = L"Numero de Mascotas";
			this->NumeroDeMascotas->MinimumWidth = 6;
			this->NumeroDeMascotas->Name = L"NumeroDeMascotas";
			this->NumeroDeMascotas->Width = 125;
			// 
			// NombreDeLaMascota
			// 
			this->NombreDeLaMascota->HeaderText = L"Nombre de la Mascota";
			this->NombreDeLaMascota->MinimumWidth = 6;
			this->NombreDeLaMascota->Name = L"NombreDeLaMascota";
			this->NombreDeLaMascota->Width = 125;
			// 
			// EspecieDeLaMascota
			// 
			this->EspecieDeLaMascota->HeaderText = L"Especie de la Mascota";
			this->EspecieDeLaMascota->MinimumWidth = 6;
			this->EspecieDeLaMascota->Name = L"EspecieDeLaMascota";
			this->EspecieDeLaMascota->Width = 125;
			// 
			// EdadDeLaMascota
			// 
			this->EdadDeLaMascota->HeaderText = L"Edad de la Mascota";
			this->EdadDeLaMascota->MinimumWidth = 6;
			this->EdadDeLaMascota->Name = L"EdadDeLaMascota";
			this->EdadDeLaMascota->Width = 125;
			// 
			// btnAtenderCliente
			// 
			this->btnAtenderCliente->Location = System::Drawing::Point(384, 285);
			this->btnAtenderCliente->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAtenderCliente->Name = L"btnAtenderCliente";
			this->btnAtenderCliente->Size = System::Drawing::Size(128, 35);
			this->btnAtenderCliente->TabIndex = 11;
			this->btnAtenderCliente->Text = L"Atender Cliente";
			this->btnAtenderCliente->UseVisualStyleBackColor = true;
			this->btnAtenderCliente->Click += gcnew System::EventHandler(this, &MyForm::btnAtenderCliente_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->txtEdad);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->txtEspecie);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->txtNombreMascota);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Location = System::Drawing::Point(11, 153);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox4->Size = System::Drawing::Size(682, 116);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Datos de la Mascota:";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(480, 50);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"año(s)";
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(454, 45);
			this->txtEdad->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(23, 20);
			this->txtEdad->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(415, 50);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Edad: ";
			// 
			// txtEspecie
			// 
			this->txtEspecie->Location = System::Drawing::Point(303, 47);
			this->txtEspecie->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtEspecie->Name = L"txtEspecie";
			this->txtEspecie->Size = System::Drawing::Size(76, 20);
			this->txtEspecie->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(251, 50);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Especie: ";
			// 
			// txtNombreMascota
			// 
			this->txtNombreMascota->Location = System::Drawing::Point(134, 47);
			this->txtNombreMascota->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNombreMascota->Name = L"txtNombreMascota";
			this->txtNombreMascota->Size = System::Drawing::Size(86, 20);
			this->txtNombreMascota->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 50);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Nombre de la Mascota: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(501, 66);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Numero de Mascotas: ";
			// 
			// txtNumeroMascotas
			// 
			this->txtNumeroMascotas->Location = System::Drawing::Point(612, 63);
			this->txtNumeroMascotas->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNumeroMascotas->Name = L"txtNumeroMascotas";
			this->txtNumeroMascotas->Size = System::Drawing::Size(36, 20);
			this->txtNumeroMascotas->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 609);
			this->Controls->Add(this->txtNumeroMascotas);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->btnAgregarCliente);
			this->Controls->Add(this->btnAtenderCliente);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dtpHoraLlegada);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAgregarCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ nombreDuenio = txtNombre->Text;
			String^ infoContacto = txtNumero->Text;
			double costoTotal = Convert::ToDouble(txtCosto->Text);
			String^ estadoPago;
			int numeroMascotas = Convert::ToInt32(txtNumeroMascotas->Text);
			String^ nombreMascota = txtNombreMascota->Text;
			String^ tipoMascota = txtEspecie->Text;
			int edadMascota = Convert::ToInt32(txtEdad->Text);
			if (rbsi->Checked) {
				estadoPago = "Realizado";
			}
			else if (rbno->Checked) {
				estadoPago = "Pendiente";
			}

			int n = dataGridView1->Rows->Add();
			dataGridView1->Rows[n]->Cells[0]->Value = txtNombre->Text;
			dataGridView1->Rows[n]->Cells[1]->Value = txtNumero->Text;
			dataGridView1->Rows[n]->Cells[2]->Value = dtpHoraLlegada->Text;
			dataGridView1->Rows[n]->Cells[3]->Value = txtCosto->Text;
			dataGridView1->Rows[n]->Cells[4]->Value = estadoPago;
		    dataGridView1->Rows[n]->Cells[5]->Value = txtNumeroMascotas->Text;
			//dataGridView1->Rows[n]->Cells[6]->Value = txtNombreMascota->Text;
			//dataGridView1->Rows[n]->Cells[7]->Value = txtEspecie->Text;
			//dataGridView1->Rows[n]->Cells[8]->Value = txtEdad->Text;
			//
			listaMascotas = gcnew ListaMascotas();
			//

			for (int i = 0; i < numeroMascotas; ++i) {
				
				dataGridView1->Rows[n]->Cells[6]->Value = /*(i + 1) + ". " +*/ txtNombreMascota->Text;
				dataGridView1->Rows[n]->Cells[7]->Value = txtEspecie->Text;
				dataGridView1->Rows[n]->Cells[8]->Value = txtEdad->Text;
				listaMascotas->agregarMascota(nombreMascota, tipoMascota, edadMascota);
				
			}

			Cliente^ cliente = gcnew Cliente(nombreDuenio, infoContacto, listaMascotas, costoTotal, estadoPago);
			cola->anadirCliente(cliente);


			txtNombre->Text = " ";
			txtNumero->Text = " ";
			txtCosto->Text = " ";
			txtNumeroMascotas->Text = " ";
			txtNombreMascota->Text = " ";
			txtEspecie->Text = " ";
			txtEdad->Text = " ";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}


	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try 
		{

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

	private: System::Void btnAtenderCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			if (dataGridView1->Rows->Count > 0) {
				String^ nombreCliente = dataGridView1->Rows[0]->Cells[0]->Value->ToString();
				MessageBox::Show("Atendiendo al cliente: " + nombreCliente);
				dataGridView1->Rows->RemoveAt(0);
				cola->atenderCliente();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
