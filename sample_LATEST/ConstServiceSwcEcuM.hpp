#pragma once
/******************************************************************************/
/* File   : ConstServiceSwcEcuM.hpp                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infServiceEcuMClient.hpp"
#include "infServiceSwcEcuM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR                           4
#define CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MINOR                           3
#define IndexServiceEcuMClient_ServiceBswM                                                  49
#define IndexServiceEcuMClient_ServiceSchM                                                  50
#define SizeDriverInitData_One                                                51
#define SizeDriverInitData_Zero                                                7

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSERVICESWCECUM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstServiceSwcEcuM_Type:
      public ConstModule_TypeAbstract
{
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      uint8                           u8SizeDriverInitData_One;
      infServiceEcuMClient*                  aptrinfServiceEcuMClient_One  [SizeDriverInitData_One];
      const ConstModule_TypeAbstract* aptrConstModule_One    [SizeDriverInitData_One];
      CfgModule_TypeAbstract*         aptrCfgModule_One      [SizeDriverInitData_One];
      uint8                           u8SizeDriverInitData_Zero;
      infServiceEcuMClient*                  aptrinfServiceEcuMClient_Zero [SizeDriverInitData_Zero];
      const ConstModule_TypeAbstract* aptrConstModule_Zero   [SizeDriverInitData_Zero];
      CfgModule_TypeAbstract*         aptrCfgModule_Zero     [SizeDriverInitData_Zero];
      infServiceEcuM_ServiceSwcEcuM*         ptrinfServiceEcuM_ServiceSwcEcuM;
      infServiceSchM_ServiceEcuM*                   ptrinfServiceSchM_ServiceEcuM;
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

