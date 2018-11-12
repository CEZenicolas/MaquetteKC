/**
 * \file UFonctionsKC.h
 * \brief Constantes et fonctions de base
 * \author E.N.
 * \version 0.1
 * \date 09/11/2018
 *
 * Regroupe la d�finition des constantes et les fonctions de
 * calcule des coordonn�es
 *
 */
#ifndef UFonctionsKCH
#define UFonctionsKCH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
//#include "cspin.h"
//#include <Vcl.Samples.Spin.hpp>
//#include <Vcl.Dialogs.hpp>
//#include <System.Actions.hpp>
//#include <Vcl.ActnList.hpp>
//#include <Vcl.Touch.GestureMgr.hpp>
//#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
//const int DeltaNone = 0;
//const int DeltaCons = 1;
//const int DeltaReagent = 2;

const int iNbK7 = 5;			//  \def Nombre de cassettes sur le carousel
//const int iNbTubeK7=16;
const int iNbTubeK7Ext = 8;		//  \def Nombre de tubes sur la couronne ext�rieure d'une cassette �chantillon
const int iNbTubeK7Int = 8;		//  \def Nombre de tubes sur la couronne int�rieure d'une cassette �chantillon
const int iNbReagent = 4;		//  \def Nombre de r�actifs par cassette
const int iNbDil = 2;			//  \def Nombre de plaques de dilution par cassette
const int iNbBottle = 4;		//  \def Nombre de bouteilles par cassette

const int DeltaCentreX = 0;//15;
const int DeltaCentreY = 0;//5;
const double Pi = 3.141592653589793; //  \def valeur de pi

//Rayons des K7
const double RayonExtK7 = 370.0;     //  \def rayon ext�rieur des cassettes
const double RayonIntK7 = 150.0;     //  \def rayon int�rieur des cassettes

//Rayons des centres de tube
//const double RayonExtTube = 345.0;
//const double RayonIntTube = 305.0;

//Rayon des bouteilles
//const double RayonExtBottle = 365.0;
//const double RayonIntBottle = 326.0; //331.0;

//Rayon des plaques de dilution
//const double RayonExtDil = 325.0; //330.0;
//const double RayonIntDil = 275.0; //280.0;

//Rayon de l'anneau de temp�rature
//const double RayonTempExt = 250.0;
//const double RayonTempInt = 240.0;

//Rayon des zones de Kit
//const double RayonExtReagent = 240.0; //250.0;
//const double RayonIntReagent = 70.0; //110.0;

//Rayon des zones de status des Kit
//const double RayonExtReagentStatus = 130.0; //250.0;
//const double RayonIntReagentStatus = 120.0; //110.0;

//Rayon du centre du carousel
//const double RayonInterne = 70.0; //110.0;

const int TubeWidth = 30;		//  \def Largeur d'un tube en pixels
const int BottleWidth = 50;		//  \def Largeur d'une bouteille en pixels

//const TColor clrCenter = clSilver;
//const TColor clrNone = clSilver;
//const TColor clrPresent = clGreen;
//const TColor clrK7Tube = clSkyBlue;
//const TColor clrReagentSegment = clSkyBlue;
//---------------------------------------------------------------------------

int iOffsetK7 = 0; //Variable globale

double GetAngleObject(int iTypeObj);
void Rotation(double dAngle, TImage *sBmp, TImage *dBmp, int iXDelta, int iYDelta);
int CalculDistance(int X1, int Y1, int X2, int Y2);
void CoordMilieu(TImage *imgCarousel, int *X, int *Y);
void GetClickObject(TImage *imgCarousel, int X, int Y, int iPrecision, int *iTypeObj, int *iIndObj);
double GetDelta();
void SetOffsetK7(int iVal);
int GetOffsetK7();

#endif
