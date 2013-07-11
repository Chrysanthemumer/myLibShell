#ifndef EXC_H
#define EXC_H

# include "petscmat.h"
/**************************************************************
 ****************** EXCITER MODELS **************************
 **************************************************************/
/***************** PRE-EXISTENT MODELS ***************************/

#include <petsc.h>

#define MAX_ID_LENGTH 2
/* TYPE 1 Model */
typedef struct{
  PetscInt      Nexc1;
  PetscInt      nexc1;
  PetscInt    * bus;
  PetscScalar * K_A;
  PetscScalar * T_A;
  PetscScalar * K_E;
  PetscScalar * T_E;
  PetscScalar * K_F;
  PetscScalar * T_F;
  PetscScalar * SE1;
  PetscScalar * SE2;
  char    * gen_id;
}EXC1_MODEL;

/***************** PSSE MODELS ***************************/

/* ESAC1A MODEL*/
typedef struct{
  PetscInt Nesac1a;
  PetscInt nesac1a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;

  PetscInt    *ET_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VA_idx;
  PetscInt    *VE_idx;
  PetscInt    *VF_idx;
  PetscInt    *EFD_idx;


}ESAC1A_MODEL;

/* ESAC2A MODEL*/
typedef struct{
  PetscInt Nesac2a;
  //PetscInt nesac2a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Kb;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Vfemax;
  PetscScalar *Kh;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *ET_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VA_idx;
  PetscInt    *VE_idx;
  PetscInt    *VF_idx;
  PetscInt    *EFD_idx;
}ESAC2A_MODEL;

/* ESAC3A MODEL*/
typedef struct{
  PetscInt Nesac3a;
  //PetscInt nesac3a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Te;
  PetscScalar *Vemin;
  PetscScalar *Kr;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kn;
  PetscScalar *EFDn;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *Vfemax;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *ET;
  PetscInt    *VLL_idx;
  PetscInt    *VA_idx;
  PetscInt    *VE_idx;
  PetscInt    *VF_idx;
  PetscInt    *EFD_idx;
}ESAC3A_MODEL;

/* ESAC4A MODEL*/
typedef struct{
  PetscInt Nesac4a;
  //PetscInt nesac4a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kc;
}ESAC4A_MODEL;

/* ESAC5A MODEL*/
typedef struct{
  PetscInt Nesac5a;
  //PetscInt nesac5a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *Tf3;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *VT_idx;
  PetscInt    *VR_idx;
  PetscInt    *EFD_idx;
  PetscInt    *VF_idx;
  PetscInt    *VLL_idx;
}ESAC5A_MODEL;

/* ESAC6A MODEL*/
typedef struct{
  PetscInt Nesac6a;
  //PetscInt nesac6a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tk;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Vrmax;
  PetscScalar *Te;
  PetscScalar *Vfelim;
  PetscScalar *Kh;
  PetscScalar *Vhmax;
  PetscScalar *Th;
  PetscScalar *Tj;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *ET_idx;
  PetscInt    *V1b_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VE_idx;
  PetscInt    *VF_idx;
  PetscInt    *EFD_idx;
}ESAC6A_MODEL;

/* ESAC8B MODEL*/
typedef struct{
  PetscInt Nesac8b;
  //PetscInt nesac8b;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Kd;
  PetscScalar *Td;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *VT_idx;
  PetscInt    *VIC_idx;
  PetscInt    *VDC_idx;
  PetscInt    *VR_idx;
  PetscInt    *EFD_idx;
}ESAC8B_MODEL;

/* ESDC1A MODEL*/
typedef struct{
  PetscInt Nesdc1a;
  PetscInt nesdc1a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  
  PetscInt    *VC_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VR_idx;
  PetscInt    *EFD_idx;
  PetscInt    *VF_idx;
}ESDC1A_MODEL;

/* ESDC2A MODEL*/
typedef struct{
  PetscInt Nesdc2a;
  //PetscInt nesdc2a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  
  PetscInt    *VC_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VR_idx;
  PetscInt    *EFD_idx;
  PetscInt    *VF_idx;
}ESDC2A_MODEL;

/* ESST1A MODEL*/
typedef struct{
  PetscInt Nesst1a;
  //PetscInt nesst1a;
  PetscInt *bus;
  char * gen_id;
  PetscInt *UEL;
  PetscInt *VOS;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Tc1;
  PetscScalar *Tb1;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kc;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Klr;
  PetscScalar *Ilr;
  

}ESST1A_MODEL;

/* ESST2A MODEL*/
typedef struct{
  PetscInt Nesst2a;
  //PetscInt nesst2a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Kc;
  PetscScalar *EFDmax;
}ESST2A_MODEL;

/* ESST3A MODEL*/
typedef struct{
  PetscInt Nesst3a;
  //PetscInt nesst3a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Km;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kg;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Vbmax;
  PetscScalar *Kc;
  PetscScalar *Xl;
  PetscScalar *Vgmax;
  PetscScalar *Op;
  PetscScalar *Tm;
  PetscScalar *Vmmax;
  PetscScalar *Vmmin;
}ESST3A_MODEL;

/* ESST4B MODEL*/
typedef struct{
  PetscInt Nesst4b;
  //PetscInt nesst4b;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Kpr;
  PetscScalar *Kir;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ta;
  PetscScalar *Kpm;
  PetscScalar *Kim;
  PetscScalar *Vmmax;
  PetscScalar *Vmmin;
  PetscScalar *Kg;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Vbmax;
  PetscScalar *Kc;
  PetscScalar *Xl;
  PetscScalar *thetap;
}ESST4B_MODEL;

/* EX2000 MODEL*/
typedef struct{
  PetscInt Nex2000;
  //PetscInt nex2000;
  PetscInt *bus;
  char * gen_id;
  PetscInt *M;
  PetscInt *M1;
  PetscScalar *kpr;
  PetscScalar *kir;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *kpa;
  PetscScalar *kia;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Kp;
  PetscScalar *Kl;
  PetscScalar *Te;
  PetscScalar *Vfemax;
  PetscScalar *Ke;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Kf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *Kvhz;
  PetscScalar *Krcc;
  PetscScalar *Tr;
  PetscScalar *ifdref1;
  PetscScalar *ifdref2;
  PetscScalar *ifdref3;
  PetscScalar *ifdref4;
  PetscScalar *I1;
  PetscScalar *T1;
  PetscScalar *I2;
  PetscScalar *T2;
  PetscScalar *I3;
  PetscScalar *T3;
  PetscScalar *I4;
  PetscScalar *T4;
  PetscScalar *Tlead;
  PetscScalar *Tlag;
  PetscScalar *kpifd;
  PetscScalar *kiifd;
  PetscScalar *ifdlimp;
  PetscScalar *ifdlimn;
  PetscScalar *ifdadvlim;
  PetscScalar *Vemin;
  PetscScalar *reflimp;
}EX2000_MODEL;

/* EXAC1 MODEL*/
typedef struct{
  PetscInt Nexac1;
//  PetscInt nexac1;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

  PetscInt    *ET_idx;
  PetscInt    *VLL_idx;
  PetscInt    *VR_idx;
  PetscInt    *VE_idx;
  PetscInt    *VF_idx;
  PetscInt    *EFD_idx;
}EXAC1_MODEL;

/* EXAC1A MODEL*/
typedef struct{
  PetscInt Nexac1a;
  //PetscInt nexac1a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
}EXAC1A_MODEL;

/* EXAC2 MODEL*/
typedef struct{
  PetscInt Nexac2;
  PetscInt nexac2;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Kb;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kl;
  PetscScalar *Kh;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *Vlr;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  
  PetscInt *ET_idx;
  PetscInt *VLL_idx;
  PetscInt *VR_idx;
  PetscInt *VE_idx;
  PetscInt *VF_idx;
  PetscInt *EFD_idx;
}EXAC2_MODEL;

/* EXAC3 MODEL*/
typedef struct{
  PetscInt Nexac3;
  PetscInt nexac3;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *Te;
  PetscScalar *Klv;
  PetscScalar *Kr;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kn;
  PetscScalar *EFDn;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  
}EXAC3_MODEL;

/* EXAC4 MODEL*/
typedef struct{
  PetscInt Nexac4;
  PetscInt nexac4;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kc;
}EXAC4_MODEL;

/* EXBAS MODEL*/
typedef struct{
  PetscInt Nexbas;
  PetscInt nexbas;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
}EXBAS_MODEL;

/* EXDC2 MODEL*/
typedef struct{
  PetscInt Nexdc2;
  PetscInt nexdc2;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
}EXDC2_MODEL;

/* EXELI MODEL*/
typedef struct{
  PetscInt Nexeli;
  PetscInt nexeli;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tfv;
  PetscScalar *Tfi;
  PetscScalar *Tnu;
  PetscScalar *Vpu;
  PetscScalar *Vpi;
  PetscScalar *Vpnf;
  PetscScalar *Dpnf;
  PetscScalar *EFDmin;
  PetscScalar *EFDmax;
  PetscScalar *Xe;
  PetscScalar *Tw;
  PetscScalar *Ks1;
  PetscScalar *Ks2;
  PetscScalar *Ts1;
  PetscScalar *Ts2;
  PetscScalar *Smax;
}EXELI_MODEL;

/* EXPIC1 MODEL*/
typedef struct{
  PetscInt Nexpic1;
  PetscInt nexpic1;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta1;
  PetscScalar *Vr1;
  PetscScalar *Vr2;
  PetscScalar *Ta2;
  PetscScalar *Ta3;
  PetscScalar *Ta4;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *EFDmax;
  PetscScalar *EFDmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Kc;
}EXPIC1_MODEL;

/* EXST1 MODEL*/
typedef struct{
  PetscInt Nexst1;
  PetscInt nexst1;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kc;
  PetscScalar *Kf;
  PetscScalar *Tf;
  
  PetscInt *VM_idx;
  PetscInt *VLL_idx;
  PetscInt *VR_idx;
  PetscInt *VF_idx;
  PetscInt *EFD_idx;
}EXST1_MODEL;

/* EXST2 MODEL*/
typedef struct{
  PetscInt Nexst2;
  PetscInt nexst2;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Kc;
  PetscScalar *EFDmax;
}EXST2_MODEL;

/* EXST2A MODEL*/
typedef struct{
  PetscInt Nexst2a;
  PetscInt nexst2a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Kc;
  PetscScalar *EFDmax;
}EXST2A_MODEL;

/* EXST3 MODEL*/
typedef struct{
  PetscInt Nexst3;
  //PetscInt nexst3;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Kj;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kg;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *EFDmax;
  PetscScalar *Kc;
  PetscScalar *Xl;
  PetscScalar *Vgmax;
  PetscScalar *Op;
}EXST3_MODEL;

/* IEEET1 MODEL*/
typedef struct{

  PetscInt Nieeet1;
  //PetscInt nieeet1;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEET1_MODEL;

/* IEEET2 MODEL*/
typedef struct{

  PetscInt Nieeet2;
  PetscInt nieeet2;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEET2_MODEL;

/* IEEET3 MODEL*/
typedef struct{

  PetscInt Nieeet3;
  PetscInt nieeet3;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Vbmax;
  PetscScalar *Ke;

}IEEET3_MODEL;

/* IEEET4 MODEL*/
typedef struct{

  PetscInt Nieeet4;
  PetscInt nieeet4;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Kr;
  PetscScalar *Trh;
  PetscScalar *Kv;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEET4_MODEL;

/* IEEET5 MODEL*/
typedef struct{

  PetscInt Nieeet5;
  PetscInt nieeet5;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Trh;
  PetscScalar *Kv;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEET5_MODEL;

/* IEEEX1 MODEL*/
typedef struct{

  PetscInt Nieeex1;
  PetscInt nieeex1;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEEX1_MODEL;

/* IEEEX2 MODEL*/
typedef struct{

  PetscInt Nieeex2;
  PetscInt nieeex2;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEEX2_MODEL;

/* IEEEX3 MODEL*/
typedef struct{

  PetscInt Nieeex3;
  PetscInt nieeex3;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kp;
  PetscScalar *Ki;
  PetscScalar *Vbmax;
  PetscScalar *Ke;

}IEEEX3_MODEL;

/* IEEEX4 MODEL*/
typedef struct{

  PetscInt Nieeex4;
  PetscInt nieeex4;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Trh;
  PetscScalar *Kv;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEEEX4_MODEL;

/* IEET1A MODEL*/
typedef struct{

  PetscInt Nieet1a;
  PetscInt nieet1a;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *EFDmin;

  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}IEET1A_MODEL;

/* IEET1B MODEL*/
typedef struct{

  PetscInt Nieet1b;
  PetscInt nieet1b;

  PetscInt *bus;
  char * gen_id;
  PetscInt *swich; // switch is not working

  PetscScalar *Tr;
  PetscScalar *Vsmax;
  PetscScalar *Vsmin;
  PetscScalar *Ka;
  PetscScalar *Ta1;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ta2;
  PetscScalar *Kf1;
  PetscScalar *Tf1;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *Xe;

}IEET1B_MODEL;

/* IEET5A MODEL*/
typedef struct{

  PetscInt Nieet5a;
  PetscInt nieet5a;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Ka;
  PetscScalar *Trh;
  PetscScalar *Kv;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *EFDmax;
  PetscScalar *EFDmin;

}IEET5A_MODEL;

/* IEEX2A MODEL*/
typedef struct{
  PetscInt Nieex2a;
  PetscInt nieex2a;
  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf1;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
}IEEX2A_MODEL;

/* SCRX MODEL*/
typedef struct{

  PetscInt Nscrx;
  //PetscInt nscrx;

  PetscInt *bus;
  char * gen_id;
  PetscScalar *Tab;
  PetscScalar *Tb;
  PetscScalar *K;
  PetscScalar *Te;
  PetscScalar *Emin;
  PetscScalar *Emax;
  PetscScalar *Cswitch;
  //PetscInt *Cswitch;
  PetscScalar *rcfd;

}SCRX_MODEL;

/* SEXS MODEL*/
typedef struct{

  PetscInt Nsexs;
  //PetscInt nsexs;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tab;
  PetscScalar *Tb;
  PetscScalar *K;
  PetscScalar *Te;
  PetscScalar *Emin;
  PetscScalar *Emax;

}SEXS_MODEL;

/* URST5T MODEL*/
typedef struct{

  PetscInt Nurst5t;
  PetscInt nurst5t;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Tc1;
  PetscScalar *Tb1;
  PetscScalar *Tc2;
  PetscScalar *Tb2;
  PetscScalar *Kr;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *T1;
  PetscScalar *Kc;

}URST5T_MODEL;

/* BBSEX1 MODEL*/
typedef struct{

  PetscInt Nbbsex1;
  PetscInt nbbsex1;

  PetscInt *bus;
  char * gen_id;
  PetscInt *swich;  //switch is not working

  PetscScalar *Tf;
  PetscScalar *K;
  PetscScalar *T1;
  PetscScalar *T2;
  PetscScalar *T3;
  PetscScalar *T4;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *EFDmax;
  PetscScalar *EFDmin;

}BBSEX1_MODEL;

/* BUDCZT MODEL*/
typedef struct{

  PetscInt Nbudczt;
  PetscInt nbudczt;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Kp;
  PetscScalar *Ka;
  PetscScalar *Ke;
  PetscScalar *Tr;
  PetscScalar *Ti;
  PetscScalar *Ta;
  PetscScalar *Te;
  PetscScalar *Urmax;
  PetscScalar *Urmin;
  PetscScalar *EFDmax;
  PetscScalar *EFDmin;

}BUDCZT_MODEL;

/* CELIN MODEL*/
typedef struct{

  PetscInt Ncelin;
  PetscInt ncelin;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr1;
  PetscScalar *Tr2; // Duplicate Tr2
  PetscScalar *alpha;
  PetscScalar *beta;
  PetscScalar *Te2;
  PetscScalar *EFD;
  PetscScalar *Ke2;
  PetscScalar *Tr4;
  PetscScalar *T1;
  PetscScalar *T2;
  PetscScalar *T3;
  PetscScalar *T4;
  PetscScalar *T5;
  PetscScalar *T6;
  PetscScalar *K1;
  PetscScalar *K2;
  PetscScalar *p_PSS;
  PetscScalar *a_PSS;
  PetscScalar *Psslim;
  PetscScalar *K1_2;  // change K1 to K1_2
  PetscScalar *kiec;
  PetscScalar *kd1;
  PetscScalar *Tb1;
  PetscScalar *T11;
  PetscScalar *limmax_pid1;
  PetscScalar *limmin_pid1;
  PetscScalar *K2_2;  // change K2 to K2_2
  PetscScalar *Upp;
  PetscScalar *Upm;
  PetscScalar *K3;
  PetscScalar *T13;
  PetscScalar *K4;
  PetscScalar *T14;
  PetscScalar *Ketb;
  PetscScalar *Te;
  PetscScalar *Xp;
  PetscScalar *IEFmax1;
  PetscScalar *IEFmax2;
  PetscScalar *IEFmin;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}CELIN_MODEL;

/* EMAC1T MODEL*/
typedef struct{

  PetscInt Nemac1t;
  PetscInt nemac1t;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *T4;
  PetscScalar *T3;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *T6;
  PetscScalar *T5;
  PetscScalar *T2;
  PetscScalar *T1;
  PetscScalar *Kfe;
  PetscScalar *Tfe;

}EMAC1T_MODEL;

/* ESURRY MODEL*/
typedef struct{

  PetscInt Nesurry;
  PetscInt nesurry;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Ta;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Td;
  PetscScalar *K10;
  PetscScalar *T1;
  PetscScalar *K16;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;

}ESURRY_MODEL;

/* EXNEBB MODEL*/
typedef struct{

  PetscInt Nexnebb;
  PetscInt nexnebb;

  PetscInt *bus;
  char * gen_id;
  PetscInt *flag;

  PetscScalar *Tr;
  PetscScalar *K1;
  PetscScalar *T11;
  PetscScalar *T12;
  PetscScalar *T13;
  PetscScalar *K2;
  PetscScalar *T21;
  PetscScalar *T22;
  PetscScalar *T23;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Ifmax;
  PetscScalar *Ifmin;

}EXNEBB_MODEL;

/* EXNI MODEL*/
typedef struct{

  PetscInt Nexni;
  PetscInt nexni;

  PetscInt *bus;
  char * gen_id;
  PetscInt *swich;  //switch is not working 

  PetscScalar *Tr;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *R;

}EXNI_MODEL;

/* IVOEX MODEL*/
typedef struct{

  PetscInt Nivoex;
  PetscInt nivoex;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *K1;
  PetscScalar *A1;
  PetscScalar *A2;
  PetscScalar *T1;
  PetscScalar *T2;
  PetscScalar *MAX1;
  PetscScalar *MIN1;
  PetscScalar *K3;
  PetscScalar *A3;
  PetscScalar *A4;
  PetscScalar *T3;
  PetscScalar *T4;
  PetscScalar *MAX3;
  PetscScalar *MIN3;
  PetscScalar *K5;
  PetscScalar *A5;
  PetscScalar *A6;
  PetscScalar *T5;
  PetscScalar *T6;
  PetscScalar *MAX5;
  PetscScalar *MIN5;

}IVOEX_MODEL;

/* OEX12T MODEL*/
typedef struct{

  PetscInt Noex12t;
  PetscInt noex12t;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tc;
  PetscScalar *Tb;
  PetscScalar *Ka;
  PetscScalar *Ta;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kc;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Etmin;
  PetscScalar *Vtmax;
  PetscScalar *Vtmin;
  PetscScalar *limout;
  PetscScalar *acon;
  PetscScalar *bcon;
  PetscScalar *Vemax;
  PetscScalar *Vemin;
  PetscScalar *Iflmt;
  PetscScalar *Kifl;
  PetscScalar *Etlmt;
  PetscScalar *Ketl;
  PetscScalar *Tl1;
  PetscScalar *Tl2;
  PetscScalar *Vomx;
  PetscScalar *Vomn;

}OEX12T_MODEL;

/* OEX3T MODEL*/
typedef struct{

  PetscInt Noex3t;
  PetscInt noex3t;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *T1;
  PetscScalar *T2;
  PetscScalar *T3;
  PetscScalar *T4;
  PetscScalar *Ka;
  PetscScalar *T5;
  PetscScalar *T6;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Te;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *Ke;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}OEX3T_MODEL;

/* REXSYS MODEL*/
typedef struct{

  PetscInt Nrexsys;
  PetscInt nrexsys;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Kvp;
  PetscScalar *Kvi;
  PetscScalar *Vimax;
  PetscScalar *Ta;
  PetscScalar *Tb1;
  PetscScalar *Tc1;
  PetscScalar *Tb2;
  PetscScalar *Tc2;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *Fbf;
  PetscScalar *Kip;
  PetscScalar *Kii;
  PetscScalar *Tp;
  PetscScalar *Vfmax;
  PetscScalar *Vfmin;
  PetscScalar *Kh;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;

}REXSYS_MODEL;

/* REXSY1 MODEL*/
typedef struct{

  PetscInt Nrexsy1;
  PetscInt nrexsy1;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Tr;
  PetscScalar *Kvp;
  PetscScalar *Kvi;
  PetscScalar *Vimax;
  PetscScalar *Ta;
  PetscScalar *Tb1;
  PetscScalar *Tc1;
  PetscScalar *Tb2;
  PetscScalar *Tc2;
  PetscScalar *Vrmax;
  PetscScalar *Vrmin;
  PetscScalar *Kf;
  PetscScalar *Tf;
  PetscScalar *Tf1;
  PetscScalar *Tf2;
  PetscScalar *Fbf;
  PetscScalar *Kip;
  PetscScalar *Kii;
  PetscScalar *Tp;
  PetscScalar *Vfmax;
  PetscScalar *Vfmin;
  PetscScalar *Kh;
  PetscScalar *Ke;
  PetscScalar *Te;
  PetscScalar *Kc;
  PetscScalar *Kd;
  PetscScalar *E1;
  PetscScalar *SeE1;
  PetscScalar *E2;
  PetscScalar *SeE2;
  PetscScalar *F1imf;
  PetscScalar *Xc;
  PetscScalar *Vcmax;

}REXSY1_MODEL;

/* URHIDT MODEL*/
typedef struct{

  PetscInt Nurhidt;
  PetscInt nurhidt;

  PetscInt *bus;
  char * gen_id;

  PetscScalar *Kdv;
  PetscScalar *Tdv;
  PetscScalar *Ki;
  PetscScalar *Tdi;
  PetscScalar *Tie;
  PetscScalar *Kdi;
  PetscScalar *Kd2i;
  PetscScalar *Kdifd;
  PetscScalar *Tdifd;
  PetscScalar *Tr;
  PetscScalar *Vimax;
  PetscScalar *Vimin;
  PetscScalar *Tb;
  PetscScalar *Tc;
  PetscScalar *Tbl;
  PetscScalar *Tcl;
  PetscScalar *Ta;
  PetscScalar *Taw;
  PetscScalar *Vamax;
  PetscScalar *Vamin;
  PetscScalar *a;
  PetscScalar *Tb2;
  PetscScalar *Kir;
  PetscScalar *Ilr;
  PetscScalar *Xe;
  PetscScalar *Vlothrsh;
  PetscScalar *Tlodelay;
  PetscScalar *Taf;
  PetscScalar *Vhithrsh;
  PetscScalar *b;

}URHIDT_MODEL;





/*Pack structures*/
typedef struct{

  EXC1_MODEL     * EXC1; //Shri's
  ESAC1A_MODEL   * ESAC1A;
  ESAC2A_MODEL   * ESAC2A;
  ESAC3A_MODEL   * ESAC3A;
  ESAC4A_MODEL   * ESAC4A;
  ESAC5A_MODEL   * ESAC5A;
  ESAC6A_MODEL   * ESAC6A;
  ESAC8B_MODEL   * ESAC8B;
  ESDC1A_MODEL   * ESDC1A;
  ESDC2A_MODEL   * ESDC2A;
  ESST1A_MODEL   * ESST1A;
  ESST2A_MODEL   * ESST2A;
  ESST3A_MODEL   * ESST3A;
  ESST4B_MODEL   * ESST4B;
  EX2000_MODEL   * EX2000;
  EXAC1_MODEL   * EXAC1;
  EXAC1A_MODEL   * EXAC1A;
  EXAC2_MODEL   * EXAC2;
  EXAC3_MODEL   * EXAC3;
  EXAC4_MODEL   * EXAC4;
  EXBAS_MODEL   * EXBAS;
  EXDC2_MODEL   * EXDC2;
  EXELI_MODEL   * EXELI;
  EXPIC1_MODEL   * EXPIC1;
  EXST1_MODEL   * EXST1;
  EXST2_MODEL   * EXST2;
  EXST2A_MODEL   * EXST2A;
  EXST3_MODEL   * EXST3;
  IEEET1_MODEL   * IEEET1;
  IEEET2_MODEL   * IEEET2;
  IEEET3_MODEL   * IEEET3;
  IEEET4_MODEL   * IEEET4;
  IEEET5_MODEL   * IEEET5;
  IEEEX1_MODEL   * IEEEX1;
  IEEEX2_MODEL   * IEEEX2;
  IEEEX3_MODEL   * IEEEX3;
  IEEEX4_MODEL   * IEEEX4;
  IEET1A_MODEL   * IEET1A;
  IEET1B_MODEL   * IEET1B;
  IEET5A_MODEL   * IEET5A;
  IEEX2A_MODEL   * IEEX2A;
  SCRX_MODEL   * SCRX;
  SEXS_MODEL   * SEXS;
  URST5T_MODEL   * URST5T;
  BBSEX1_MODEL   * BBSEX1;
  BUDCZT_MODEL   * BUDCZT;
  CELIN_MODEL   * CELIN;
  EMAC1T_MODEL   * EMAC1T;
  ESURRY_MODEL   * ESURRY;
  EXNEBB_MODEL   * EXNEBB;
  EXNI_MODEL   * EXNI;
  IVOEX_MODEL   * IVOEX;
  OEX12T_MODEL   * OEX12T;
  OEX3T_MODEL   * OEX3T;
  REXSYS_MODEL   * REXSYS;
  REXSY1_MODEL   * REXSY1;
  URHIDT_MODEL   * URHIDT;

}EXC_MODELS;

#endif
