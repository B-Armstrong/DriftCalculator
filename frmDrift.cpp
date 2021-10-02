#include "stdafx.h"
#include "frmDrift.h"
#include <windows.h>
#include "clsCoordinates.h"

using namespace DriftCalculator;

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	System::Threading::Thread::CurrentThread->ApartmentState = System::Threading::ApartmentState::STA;
	Application::Run(new frmDrift());
	return 0;
}

