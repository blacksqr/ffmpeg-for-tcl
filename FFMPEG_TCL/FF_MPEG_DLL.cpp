// FF_MPEG_DLL.cpp�: d�finit les fonctions d'initialisation pour la DLL.
//
#define inline _inline
#include "stdafx.h"
#include "FF_MPEG_DLL.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO�: si cette DLL est li�e dynamiquement aux DLL MFC,
//		toute fonction export�e de cette DLL qui appelle
//		MFC doit avoir la macro AFX_MANAGE_STATE ajout�e au
//		tout d�but de la fonction.
//
//		Par exemple�:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// corps de fonction normal ici
//		}
//
//		Il est tr�s important que cette macro se trouve dans chaque
//		fonction, avant tout appel � MFC. Cela signifie qu'elle
//		doit �tre la premi�re instruction dans la 
//		fonction, avant toute d�claration de variable objet
//		dans la mesure o� leurs constructeurs peuvent g�n�rer des appels � la DLL
//		MFC.
//
//		Consultez les notes techniques MFC 33 et 58 pour plus de
//		d�tails.
//


// CFF_MPEG_DLLApp

/* DEBUG BEGIN_MESSAGE_MAP(CFF_MPEG_DLLApp, CWinApp)
 END_MESSAGE_MAP()


// construction CFF_MPEG_DLLApp

CFF_MPEG_DLLApp::CFF_MPEG_DLLApp()
{
	// TODO�: ajoutez ici du code de construction,
	// Placez toutes les initialisations significatives dans InitInstance
}


// Seul et unique objet CFF_MPEG_DLLApp

CFF_MPEG_DLLApp theApp;


// initialisation de CFF_MPEG_DLLApp

BOOL CFF_MPEG_DLLApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
*/