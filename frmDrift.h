#pragma once
#include "clsCoordinates.h"
#include "clsLatitude.h"
#include "clsLongitude.h"
#using <mscorlib.dll>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DriftCalculator
{
	/// <summary> 
	/// Summary for frmDrift
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class frmDrift : public System::Windows::Forms::Form
	{
	public: 
		frmDrift(void)
		{
			InitializeComponent();
		}
        
	protected: 
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}

		static	bool isMetric = true;

	private: System::Windows::Forms::Label *  lblLatitude;
	private: System::Windows::Forms::Label *  lblNorth;
	private: System::Windows::Forms::Label *  lblStart;
	private: System::Windows::Forms::Label *  lblFinish;

	private: System::Windows::Forms::Label *  lblDrifted;

	private: System::Windows::Forms::Label *  lblEast;
	private: System::Windows::Forms::Label *  lblSeconds;
	private: System::Windows::Forms::Label *  lblDistance;
	private: System::Windows::Forms::Label *  lblMeterFeet;
	private: System::Windows::Forms::Button *  btnClear;
	private: System::Windows::Forms::Button *  btnCalculate;
	private: System::Windows::Forms::Button *  btnMeterFeet;
	private: System::Windows::Forms::Button *  btnExit;


	private: System::Windows::Forms::Label *  lblLat;
	private: System::Windows::Forms::Label *  lblLongitude;




	private: System::Windows::Forms::TextBox *  txtDegree;
	private: System::Windows::Forms::TextBox *  txtStartLat;
	private: System::Windows::Forms::TextBox *  txtMinute;
	private: System::Windows::Forms::TextBox *  txtFinishLat;
	private: System::Windows::Forms::TextBox *  txtStartLon;
	private: System::Windows::Forms::TextBox *  txtFinishLon;
	private: System::Windows::Forms::TextBox *  txtNorth;
	private: System::Windows::Forms::TextBox *  txtEast;
	private: System::Windows::Forms::TextBox *  txtDrifted;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container* components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Resources::ResourceManager *  resources = new System::Resources::ResourceManager(__typeof(DriftCalculator::frmDrift));
			this->lblLatitude = new System::Windows::Forms::Label();
			this->lblNorth = new System::Windows::Forms::Label();
			this->lblStart = new System::Windows::Forms::Label();
			this->lblFinish = new System::Windows::Forms::Label();
			this->lblDistance = new System::Windows::Forms::Label();
			this->lblDrifted = new System::Windows::Forms::Label();
			this->lblMeterFeet = new System::Windows::Forms::Label();
			this->lblEast = new System::Windows::Forms::Label();
			this->lblSeconds = new System::Windows::Forms::Label();
			this->btnClear = new System::Windows::Forms::Button();
			this->btnCalculate = new System::Windows::Forms::Button();
			this->btnMeterFeet = new System::Windows::Forms::Button();
			this->btnExit = new System::Windows::Forms::Button();
			this->txtDegree = new System::Windows::Forms::TextBox();
			this->txtMinute = new System::Windows::Forms::TextBox();
			this->lblLat = new System::Windows::Forms::Label();
			this->lblLongitude = new System::Windows::Forms::Label();
			this->txtStartLat = new System::Windows::Forms::TextBox();
			this->txtFinishLat = new System::Windows::Forms::TextBox();
			this->txtStartLon = new System::Windows::Forms::TextBox();
			this->txtFinishLon = new System::Windows::Forms::TextBox();
			this->txtNorth = new System::Windows::Forms::TextBox();
			this->txtEast = new System::Windows::Forms::TextBox();
			this->txtDrifted = new System::Windows::Forms::TextBox();
			this->SuspendLayout();
			// 
			// lblLatitude
			// 
			this->lblLatitude->Location = System::Drawing::Point(16, 16);
			this->lblLatitude->Name = S"lblLatitude";
			this->lblLatitude->Size = System::Drawing::Size(48, 23);
			this->lblLatitude->TabIndex = 0;
			this->lblLatitude->Text = S"Latitude: ";
			this->lblLatitude->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblNorth
			// 
			this->lblNorth->Location = System::Drawing::Point(16, 176);
			this->lblNorth->Name = S"lblNorth";
			this->lblNorth->Size = System::Drawing::Size(40, 23);
			this->lblNorth->TabIndex = 1;
			this->lblNorth->Text = S"North:";
			this->lblNorth->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblStart
			// 
			this->lblStart->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->lblStart->Location = System::Drawing::Point(104, 56);
			this->lblStart->Name = S"lblStart";
			this->lblStart->Size = System::Drawing::Size(80, 23);
			this->lblStart->TabIndex = 2;
			this->lblStart->Text = S"START";
			this->lblStart->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// lblFinish
			// 
			this->lblFinish->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->lblFinish->Location = System::Drawing::Point(192, 56);
			this->lblFinish->Name = S"lblFinish";
			this->lblFinish->Size = System::Drawing::Size(80, 23);
			this->lblFinish->TabIndex = 3;
			this->lblFinish->Text = S"FINISH";
			this->lblFinish->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// lblDistance
			// 
			this->lblDistance->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->lblDistance->Location = System::Drawing::Point(16, 152);
			this->lblDistance->Name = S"lblDistance";
			this->lblDistance->Size = System::Drawing::Size(136, 16);
			this->lblDistance->TabIndex = 4;
			this->lblDistance->Text = S"DISTANCE";
			this->lblDistance->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// lblDrifted
			// 
			this->lblDrifted->Location = System::Drawing::Point(8, 240);
			this->lblDrifted->Name = S"lblDrifted";
			this->lblDrifted->Size = System::Drawing::Size(48, 23);
			this->lblDrifted->TabIndex = 5;
			this->lblDrifted->Text = S"Drifted:";
			this->lblDrifted->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblMeterFeet
			// 
			this->lblMeterFeet->Location = System::Drawing::Point(120, 152);
			this->lblMeterFeet->Name = S"lblMeterFeet";
			this->lblMeterFeet->Size = System::Drawing::Size(24, 23);
			this->lblMeterFeet->TabIndex = 6;
			this->lblMeterFeet->Text = S"(M)";
			this->lblMeterFeet->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblEast
			// 
			this->lblEast->Location = System::Drawing::Point(16, 208);
			this->lblEast->Name = S"lblEast";
			this->lblEast->Size = System::Drawing::Size(40, 23);
			this->lblEast->TabIndex = 7;
			this->lblEast->Text = S"East:";
			this->lblEast->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblSeconds
			// 
			this->lblSeconds->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->lblSeconds->Location = System::Drawing::Point(16, 56);
			this->lblSeconds->Name = S"lblSeconds";
			this->lblSeconds->Size = System::Drawing::Size(80, 23);
			this->lblSeconds->TabIndex = 8;
			this->lblSeconds->Text = S"SECONDS";
			this->lblSeconds->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(184, 16);
			this->btnClear->Name = S"btnClear";
			this->btnClear->TabIndex = 8;
			this->btnClear->TabStop = false;
			this->btnClear->Text = S"Clear Data";
			this->btnClear->Click += new System::EventHandler(this, btnClear_Click);
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(184, 152);
			this->btnCalculate->Name = S"btnCalculate";
			this->btnCalculate->TabIndex = 6;
			this->btnCalculate->Text = S"Calculate";
			this->btnCalculate->Click += new System::EventHandler(this, btnCalculate_Click);
			// 
			// btnMeterFeet
			// 
			this->btnMeterFeet->Location = System::Drawing::Point(184, 192);
			this->btnMeterFeet->Name = S"btnMeterFeet";
			this->btnMeterFeet->TabIndex = 7;
			this->btnMeterFeet->Text = S"Meter/Feet";
			this->btnMeterFeet->Click += new System::EventHandler(this, btnMeterFeet_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(184, 232);
			this->btnExit->Name = S"btnExit";
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = S"Exit";
			this->btnExit->Click += new System::EventHandler(this, btnExit_Click);
			// 
			// txtDegree
			// 
			this->txtDegree->Location = System::Drawing::Point(72, 16);
			this->txtDegree->MaxLength = 3;
			this->txtDegree->Name = S"txtDegree";
			this->txtDegree->Size = System::Drawing::Size(32, 20);
			this->txtDegree->TabIndex = 0;
			this->txtDegree->Text = S"";
			// 
			// txtMinute
			// 
			this->txtMinute->Location = System::Drawing::Point(112, 16);
			this->txtMinute->MaxLength = 3;
			this->txtMinute->Name = S"txtMinute";
			this->txtMinute->Size = System::Drawing::Size(32, 20);
			this->txtMinute->TabIndex = 1;
			this->txtMinute->Text = S"";
			// 
			// lblLat
			// 
			this->lblLat->Location = System::Drawing::Point(24, 88);
			this->lblLat->Name = S"lblLat";
			this->lblLat->Size = System::Drawing::Size(64, 16);
			this->lblLat->TabIndex = 13;
			this->lblLat->Text = S"LATITUDE:";
			this->lblLat->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblLongitude
			// 
			this->lblLongitude->Location = System::Drawing::Point(8, 120);
			this->lblLongitude->Name = S"lblLongitude";
			this->lblLongitude->Size = System::Drawing::Size(80, 23);
			this->lblLongitude->TabIndex = 14;
			this->lblLongitude->Text = S"LONGITUDE:";
			this->lblLongitude->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtStartLat
			// 
			this->txtStartLat->Location = System::Drawing::Point(112, 88);
			this->txtStartLat->MaxLength = 6;
			this->txtStartLat->Name = S"txtStartLat";
			this->txtStartLat->Size = System::Drawing::Size(64, 20);
			this->txtStartLat->TabIndex = 2;
			this->txtStartLat->Text = S"";
			// 
			// txtFinishLat
			// 
			this->txtFinishLat->Location = System::Drawing::Point(200, 88);
			this->txtFinishLat->MaxLength = 6;
			this->txtFinishLat->Name = S"txtFinishLat";
			this->txtFinishLat->Size = System::Drawing::Size(64, 20);
			this->txtFinishLat->TabIndex = 3;
			this->txtFinishLat->Text = S"";
			// 
			// txtStartLon
			// 
			this->txtStartLon->Location = System::Drawing::Point(112, 120);
			this->txtStartLon->MaxLength = 6;
			this->txtStartLon->Name = S"txtStartLon";
			this->txtStartLon->Size = System::Drawing::Size(64, 20);
			this->txtStartLon->TabIndex = 4;
			this->txtStartLon->Text = S"";
			// 
			// txtFinishLon
			// 
			this->txtFinishLon->Location = System::Drawing::Point(200, 120);
			this->txtFinishLon->MaxLength = 6;
			this->txtFinishLon->Name = S"txtFinishLon";
			this->txtFinishLon->Size = System::Drawing::Size(64, 20);
			this->txtFinishLon->TabIndex = 5;
			this->txtFinishLon->Text = S"";
			// 
			// txtNorth
			// 
			this->txtNorth->Enabled = false;
			this->txtNorth->Location = System::Drawing::Point(64, 176);
			this->txtNorth->MaxLength = 9;
			this->txtNorth->Name = S"txtNorth";
			this->txtNorth->Size = System::Drawing::Size(88, 20);
			this->txtNorth->TabIndex = 19;
			this->txtNorth->TabStop = false;
			this->txtNorth->Text = S"";
			// 
			// txtEast
			// 
			this->txtEast->Enabled = false;
			this->txtEast->Location = System::Drawing::Point(64, 208);
			this->txtEast->MaxLength = 9;
			this->txtEast->Name = S"txtEast";
			this->txtEast->Size = System::Drawing::Size(88, 20);
			this->txtEast->TabIndex = 20;
			this->txtEast->TabStop = false;
			this->txtEast->Text = S"";
			// 
			// txtDrifted
			// 
			this->txtDrifted->Enabled = false;
			this->txtDrifted->Location = System::Drawing::Point(64, 240);
			this->txtDrifted->MaxLength = 9;
			this->txtDrifted->Name = S"txtDrifted";
			this->txtDrifted->Size = System::Drawing::Size(88, 20);
			this->txtDrifted->TabIndex = 21;
			this->txtDrifted->TabStop = false;
			this->txtDrifted->Text = S"";
			// 
			// frmDrift
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(292, 273);
			this->Controls->Add(this->txtDrifted);
			this->Controls->Add(this->txtEast);
			this->Controls->Add(this->txtNorth);
			this->Controls->Add(this->txtFinishLon);
			this->Controls->Add(this->txtStartLon);
			this->Controls->Add(this->txtFinishLat);
			this->Controls->Add(this->txtStartLat);
			this->Controls->Add(this->lblLongitude);
			this->Controls->Add(this->lblLat);
			this->Controls->Add(this->txtMinute);
			this->Controls->Add(this->txtDegree);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnMeterFeet);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->lblSeconds);
			this->Controls->Add(this->lblEast);
			this->Controls->Add(this->lblMeterFeet);
			this->Controls->Add(this->lblDrifted);
			this->Controls->Add(this->lblDistance);
			this->Controls->Add(this->lblFinish);
			this->Controls->Add(this->lblStart);
			this->Controls->Add(this->lblNorth);
			this->Controls->Add(this->lblLatitude);
			this->Icon = (__try_cast<System::Drawing::Icon *  >(resources->GetObject(S"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = S"frmDrift";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"Drift Calculator";
			this->Load += new System::EventHandler(this, frmDrift_Load);
			this->Paint += new System::Windows::Forms::PaintEventHandler(this, frmDrift_Paint);
			this->ResumeLayout(false);

		}		




















private: System::Void btnClear_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 txtDegree->Text = "";
			 txtMinute->Text = "";
			 txtStartLat->Text = "";
			 txtFinishLat->Text = "";
			 txtFinishLon->Text = "";
			 txtStartLon->Text = "";
			 txtNorth->Text = "";
			 txtEast->Text = "";
			 txtDrifted->Text = "";
			 txtNorth->Enabled = false;
			 txtEast->Enabled = false;
			 txtDrifted->Enabled = false;
			 btnMeterFeet->Enabled = true;
		 }

private: System::Void btnCalculate_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 double dblTotalMoved;
			 double dblStartLat, dblStartLon;
			 double dblFinishLat, dblFinishLon;
			 double dblLatDiff, dblLonDiff;
			 double dblLatMoved, dblLonMoved;
			 
			try
			{
			 
			 clsLatitude* lat = new clsLatitude();
			 clsLongitude* lon = new clsLongitude();
			 
			 dblFinishLat = Convert::ToDouble(String::Concat(".", txtFinishLat->Text));
             dblFinishLon = Convert::ToDouble(String::Concat(".", txtFinishLon->Text));
			 dblStartLon = Convert::ToDouble(String::Concat(".", txtStartLon->Text));
			 dblStartLat = Convert::ToDouble(String::Concat(".", txtStartLat->Text));
			 lat->setLatitude(Convert::ToDouble(txtDegree->Text),Convert::ToDouble(txtMinute->Text));
			 dblLatDiff = lat->coordinateDifference(dblStartLat,dblFinishLat);
			 dblLonDiff = lon->coordinateDifference(dblStartLon,dblFinishLon);
			 dblLatMoved = lat->coordinateDistanceMoved(dblLatDiff, isMetric);
			 lon->setCosine(lat->getLatitude());	
			 dblLonMoved = lon->coordinateDistanceMoved(dblLonDiff, lon->getCosine(), isMetric);
			 dblTotalMoved = lat->coordinateTotalMoved(dblLatMoved, dblLonMoved);
			 txtNorth->Enabled = true;
			 txtEast->Enabled = true;
			 txtDrifted->Enabled = true;				
			 txtNorth->Text = dblLatMoved.ToString("N4");
			 txtEast->Text = dblLonMoved.ToString("N4");
			 txtDrifted->Text = dblTotalMoved.ToString("N4");
			 btnMeterFeet->Enabled = false;
			 
			 delete lat;
			 delete lon;
			}
			catch(System::SystemException*)
			{
				MessageBox::Show("Latitude, lat/lon Start and Finish \n boxes must have only numbers!","ERROR");
			}	
			
				
		 }

private: System::Void btnMeterFeet_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 if (isMetric == false)
			{
				isMetric = true;
				lblMeterFeet->Text = "(M)";
			}
			else
			{
				isMetric = false;
				lblMeterFeet->Text = "(F)";
			}
		 }

private: System::Void btnExit_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 Application::Exit();

		 }

private: System::Void frmDrift_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			 Graphics* gp = e->Graphics;

				 // Draw a filled ellipse
				SolidBrush* sb = new SolidBrush(Color::Black);
				gp->FillEllipse(sb, 104,28, 7,7);
			
			
		 }

private: System::Void frmDrift_Load(System::Object *  sender, System::EventArgs *  e)
		 {
		 }

};
}