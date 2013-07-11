#include "ReadDyrData/ReadDyrData.h"

PetscInt num_EXC1=0;
PetscInt num_ESAC1A=0;
PetscInt num_ESAC2A=0;
PetscInt num_ESAC3A=0;
PetscInt num_ESAC4A=0;
PetscInt num_ESAC5A=0;
PetscInt num_ESAC6A=0;
PetscInt num_ESAC8B=0;
PetscInt num_ESDC1A=0;
PetscInt num_ESDC2A=0;
PetscInt num_ESST1A=0;
PetscInt num_ESST2A=0;
PetscInt num_ESST3A=0;
PetscInt num_ESST4B=0;
PetscInt num_EX2000=0;
PetscInt num_EXAC1=0;
PetscInt num_EXAC1A=0;
PetscInt num_EXAC2=0;
PetscInt num_EXAC3=0;
PetscInt num_EXAC4=0;
PetscInt num_EXBAS=0;
PetscInt num_EXDC2=0;
PetscInt num_EXELI=0;
PetscInt num_EXPIC1=0;
PetscInt num_EXST1=0;
PetscInt num_EXST2=0;
PetscInt num_EXST2A=0;
PetscInt num_EXST3=0;
PetscInt num_IEEET1=0;
PetscInt num_IEEET2=0;
PetscInt num_IEEET3=0;
PetscInt num_IEEET4=0;
PetscInt num_IEEET5=0;
PetscInt num_IEEEX1=0;
PetscInt num_IEEEX2=0;
PetscInt num_IEEEX3=0;
PetscInt num_IEEEX4=0;
PetscInt num_IEET1A=0;
PetscInt num_IEET1B=0;
PetscInt num_IEET5A=0;
PetscInt num_IEEX2A=0;
PetscInt num_SCRX=0;
PetscInt num_SEXS=0;
PetscInt num_URST5T=0;
PetscInt num_BBSEX1;
PetscInt num_BUDCZT;
PetscInt num_CELIN;
PetscInt num_EMAC1T;
PetscInt num_ESURRY;
PetscInt num_EXNEBB;
PetscInt num_EXNI;
PetscInt num_IVOEX;
PetscInt num_OEX12T;
PetscInt num_OEX3T;
PetscInt num_REXSYS;
PetscInt num_REXSY1;
PetscInt num_URHIDT;

EXC1_node_ptr    EXC1_head=NULL,   EXC1_cur,   EXC1_pre=NULL;
ESAC1A_node_ptr  ESAC1A_head=NULL, ESAC1A_cur, ESAC1A_pre=NULL;
ESAC2A_node_ptr  ESAC2A_head=NULL, ESAC2A_cur, ESAC2A_pre=NULL;
ESAC3A_node_ptr  ESAC3A_head=NULL, ESAC3A_cur, ESAC3A_pre=NULL;
ESAC4A_node_ptr  ESAC4A_head=NULL, ESAC4A_cur, ESAC4A_pre=NULL;
ESAC5A_node_ptr  ESAC5A_head=NULL, ESAC5A_cur, ESAC5A_pre=NULL;
ESAC6A_node_ptr  ESAC6A_head=NULL, ESAC6A_cur, ESAC6A_pre=NULL;
ESAC8B_node_ptr  ESAC8B_head=NULL, ESAC8B_cur, ESAC8B_pre=NULL;
ESDC1A_node_ptr  ESDC1A_head=NULL, ESDC1A_cur, ESDC1A_pre=NULL;
ESDC2A_node_ptr  ESDC2A_head=NULL, ESDC2A_cur, ESDC2A_pre=NULL;
ESST1A_node_ptr  ESST1A_head=NULL, ESST1A_cur, ESST1A_pre=NULL;
ESST2A_node_ptr  ESST2A_head=NULL, ESST2A_cur, ESST2A_pre=NULL;
ESST3A_node_ptr  ESST3A_head=NULL, ESST3A_cur, ESST3A_pre=NULL;
ESST4B_node_ptr  ESST4B_head=NULL, ESST4B_cur, ESST4B_pre=NULL;
EX2000_node_ptr  EX2000_head=NULL, EX2000_cur, EX2000_pre=NULL;
EXAC1_node_ptr   EXAC1_head=NULL,  EXAC1_cur,  EXAC1_pre=NULL;
EXAC1A_node_ptr  EXAC1A_head=NULL, EXAC1A_cur, EXAC1A_pre=NULL;
EXAC2_node_ptr  EXAC2_head=NULL, EXAC2_cur, EXAC2_pre=NULL;
EXAC3_node_ptr  EXAC3_head=NULL, EXAC3_cur, EXAC3_pre=NULL;
EXAC4_node_ptr  EXAC4_head=NULL, EXAC4_cur, EXAC4_pre=NULL;
EXBAS_node_ptr  EXBAS_head=NULL, EXBAS_cur, EXBAS_pre=NULL;
EXDC2_node_ptr  EXDC2_head=NULL, EXDC2_cur, EXDC2_pre=NULL;
EXELI_node_ptr  EXELI_head=NULL, EXELI_cur, EXELI_pre=NULL;
EXPIC1_node_ptr  EXPIC1_head=NULL, EXPIC1_cur, EXPIC1_pre=NULL;
EXST1_node_ptr  EXST1_head=NULL, EXST1_cur, EXST1_pre=NULL;
EXST2_node_ptr  EXST2_head=NULL, EXST2_cur, EXST2_pre=NULL;
EXST2A_node_ptr  EXST2A_head=NULL, EXST2A_cur, EXST2A_pre=NULL;
EXST3_node_ptr  EXST3_head=NULL, EXST3_cur, EXST3_pre=NULL;
IEEET1_node_ptr  IEEET1_head=NULL, IEEET1_cur, IEEET1_pre=NULL;
IEEET2_node_ptr  IEEET2_head=NULL, IEEET2_cur, IEEET2_pre=NULL;
IEEET3_node_ptr  IEEET3_head=NULL, IEEET3_cur, IEEET3_pre=NULL;
IEEET4_node_ptr  IEEET4_head=NULL, IEEET4_cur, IEEET4_pre=NULL;
IEEET5_node_ptr  IEEET5_head=NULL, IEEET5_cur, IEEET5_pre=NULL;
IEEEX1_node_ptr  IEEEX1_head=NULL, IEEEX1_cur, IEEEX1_pre=NULL;
IEEEX2_node_ptr  IEEEX2_head=NULL, IEEEX2_cur, IEEEX2_pre=NULL;
IEEEX3_node_ptr  IEEEX3_head=NULL, IEEEX3_cur, IEEEX3_pre=NULL;
IEEEX4_node_ptr  IEEEX4_head=NULL, IEEEX4_cur, IEEEX4_pre=NULL;
IEET1A_node_ptr  IEET1A_head=NULL, IEET1A_cur, IEET1A_pre=NULL;
IEET1B_node_ptr  IEET1B_head=NULL, IEET1B_cur, IEET1B_pre=NULL;
IEET5A_node_ptr  IEET5A_head=NULL, IEET5A_cur, IEET5A_pre=NULL;
IEEX2A_node_ptr  IEEX2A_head=NULL, IEEX2A_cur, IEEX2A_pre=NULL;
SCRX_node_ptr    SCRX_head=NULL,   SCRX_cur,   SCRX_pre=NULL;
SEXS_node_ptr    SEXS_head=NULL,   SEXS_cur,   SEXS_pre=NULL;
URST5T_node_ptr    URST5T_head=NULL,   URST5T_cur,   URST5T_pre=NULL;
BBSEX1_node_ptr    BBSEX1_head=NULL,   BBSEX1_cur,   BBSEX1_pre=NULL;
BUDCZT_node_ptr    BUDCZT_head=NULL,   BUDCZT_cur,   BUDCZT_pre=NULL;
CELIN_node_ptr    CELIN_head=NULL,   CELIN_cur,   CELIN_pre=NULL;
EMAC1T_node_ptr    EMAC1T_head=NULL,   EMAC1T_cur,   EMAC1T_pre=NULL;
ESURRY_node_ptr    ESURRY_head=NULL,   ESURRY_cur,   ESURRY_pre=NULL;
EXNEBB_node_ptr    EXNEBB_head=NULL,   EXNEBB_cur,   EXNEBB_pre=NULL;
EXNI_node_ptr    EXNI_head=NULL,   EXNI_cur,   EXNI_pre=NULL;
IVOEX_node_ptr    IVOEX_head=NULL,   IVOEX_cur,   IVOEX_pre=NULL;
OEX12T_node_ptr    OEX12T_head=NULL,   OEX12T_cur,   OEX12T_pre=NULL;
OEX3T_node_ptr    OEX3T_head=NULL,   OEX3T_cur,   OEX3T_pre=NULL;
REXSYS_node_ptr    REXSYS_head=NULL,   REXSYS_cur,   REXSYS_pre=NULL;
REXSY1_node_ptr    REXSY1_head=NULL,   REXSY1_cur,   REXSY1_pre=NULL;
URHIDT_node_ptr    URHIDT_head=NULL,   URHIDT_cur,   URHIDT_pre=NULL;


/* Begin fun Count_EXC */
PetscErrorCode Count_EXC(PetscInt*num_EXC1,PetscInt*num_ESAC1A,PetscInt*num_ESAC2A,PetscInt*num_ESAC3A,PetscInt*num_ESAC4A,PetscInt*num_ESAC5A,PetscInt*num_ESAC6A,PetscInt*num_ESAC8B,PetscInt*num_ESDC1A,PetscInt*num_ESDC2A,PetscInt*num_ESST1A,PetscInt*num_ESST2A,PetscInt*num_ESST3A,PetscInt*num_ESST4B,PetscInt*num_EX2000,PetscInt*num_EXAC1,PetscInt*num_EXAC1A,PetscInt*num_EXAC2,PetscInt*num_EXAC3,PetscInt*num_EXAC4,PetscInt*num_EXBAS,PetscInt*num_EXDC2,PetscInt*num_EXELI,PetscInt*num_EXPIC1,PetscInt*num_EXST1,PetscInt*num_EXST2,PetscInt*num_EXST2A,PetscInt*num_EXST3,PetscInt*num_IEEET1,PetscInt*num_IEEET2,PetscInt*num_IEEET3,PetscInt*num_IEEET4,PetscInt*num_IEEET5,PetscInt*num_IEEEX1,PetscInt*num_IEEEX2,PetscInt*num_IEEEX3,PetscInt*num_IEEEX4,PetscInt*num_IEET1A,PetscInt*num_IEET1B,PetscInt*num_IEET5A,PetscInt*num_IEEX2A,PetscInt*num_SCRX,PetscInt*num_SEXS,PetscInt*num_URST5T,PetscInt*num_BBSEX1,PetscInt*num_BUDCZT,PetscInt*num_CELIN,PetscInt*num_EMAC1T,PetscInt*num_ESURRY,PetscInt*num_EXNEBB,PetscInt*num_EXNI,PetscInt*num_IVOEX,PetscInt*num_OEX12T,PetscInt*num_OEX3T,PetscInt*num_REXSYS,PetscInt*num_REXSY1,PetscInt*num_URHIDT){
  EXC1_node_ptr   exc1=EXC1_head;
  ESAC1A_node_ptr esac1a=ESAC1A_head;
  ESAC2A_node_ptr esac2a=ESAC2A_head;
  ESAC3A_node_ptr esac3a=ESAC3A_head;
  ESAC4A_node_ptr esac4a=ESAC4A_head;
  ESAC5A_node_ptr esac5a=ESAC5A_head;
  ESAC6A_node_ptr esac6a=ESAC6A_head;
  ESAC8B_node_ptr esac8b=ESAC8B_head;
  ESDC1A_node_ptr esdc1a=ESDC1A_head;
  ESDC2A_node_ptr esdc2a=ESDC2A_head;
  ESST1A_node_ptr esst1a=ESST1A_head;
  ESST2A_node_ptr esst2a=ESST2A_head;
  ESST3A_node_ptr esst3a=ESST3A_head;
  ESST4B_node_ptr esst4b=ESST4B_head;
  EX2000_node_ptr ex2000=EX2000_head;
  EXAC1_node_ptr  exac1=EXAC1_head;
  EXAC1A_node_ptr  exac1a=EXAC1A_head;
  EXAC2_node_ptr  exac2=EXAC2_head;
  EXAC3_node_ptr  exac3=EXAC3_head;
  EXAC4_node_ptr  exac4=EXAC4_head;
  EXBAS_node_ptr  exbas=EXBAS_head;
  EXDC2_node_ptr  exdc2=EXDC2_head;
  EXELI_node_ptr  exeli=EXELI_head;
  EXPIC1_node_ptr  expic1=EXPIC1_head;
  EXST1_node_ptr  exst1=EXST1_head;
  EXST2_node_ptr  exst2=EXST2_head;
  EXST2A_node_ptr  exst2a=EXST2A_head;
  EXST3_node_ptr  exst3=EXST3_head;
  IEEET1_node_ptr ieeet1=IEEET1_head;
  IEEET2_node_ptr ieeet2=IEEET2_head;
  IEEET3_node_ptr ieeet3=IEEET3_head;
  IEEET4_node_ptr ieeet4=IEEET4_head;
  IEEET5_node_ptr ieeet5=IEEET5_head;
  IEEEX1_node_ptr ieeex1=IEEEX1_head;
  IEEEX2_node_ptr ieeex2=IEEEX2_head;
  IEEEX3_node_ptr ieeex3=IEEEX3_head;
  IEEEX4_node_ptr ieeex4=IEEEX4_head;
  IEET1A_node_ptr ieet1a=IEET1A_head;
  IEET1B_node_ptr ieet1b=IEET1B_head;
  IEET5A_node_ptr ieet5a=IEET5A_head;
  IEEX2A_node_ptr ieex2a=IEEX2A_head;
  SCRX_node_ptr scrx=SCRX_head;
  SEXS_node_ptr sexs=SEXS_head;
  URST5T_node_ptr urst5t=URST5T_head;
  BBSEX1_node_ptr bbsex1=BBSEX1_head;
  BUDCZT_node_ptr budczt=BUDCZT_head;
  CELIN_node_ptr celin=CELIN_head;
  EMAC1T_node_ptr emac1t=EMAC1T_head;
  ESURRY_node_ptr esurry=ESURRY_head;
  EXNEBB_node_ptr exnebb=EXNEBB_head;
  EXNI_node_ptr exni=EXNI_head;
  IVOEX_node_ptr ivoex=IVOEX_head;
  OEX12T_node_ptr oex12t=OEX12T_head;
  OEX3T_node_ptr oex3t=OEX3T_head;
  REXSYS_node_ptr rexsys=REXSYS_head;
  REXSY1_node_ptr rexsy1=REXSY1_head;
  URHIDT_node_ptr urhidt=URHIDT_head;

  PetscFunctionBegin;

  while(exc1!=NULL){
    (*num_EXC1)++;
    exc1=exc1->next;
  }
  while(esac1a!=NULL){
    (*num_ESAC1A)++;
    esac1a=esac1a->next;
  }
  while(esac2a!=NULL){
    (*num_ESAC2A)++;
    esac2a=esac2a->next;
  }
  while(esac3a!=NULL){
    (*num_ESAC3A)++;
    esac3a=esac3a->next;
  }
  while(esac4a!=NULL){
    (*num_ESAC4A)++;
    esac4a=esac4a->next;
  }
  while(esac5a!=NULL){
    (*num_ESAC5A)++;
    esac5a=esac5a->next;
  }
  while(esac6a!=NULL){
    (*num_ESAC6A)++;
    esac6a=esac6a->next;
  }
  while(esac8b!=NULL){
    (*num_ESAC8B)++;
    esac8b=esac8b->next;
  }
  while(esdc1a!=NULL){
    (*num_ESDC1A)++;
    esdc1a=esdc1a->next;
  }
  while(esdc2a!=NULL){
    (*num_ESDC2A)++;
    esdc2a=esdc2a->next;
  }
  while(esst1a!=NULL){
    (*num_ESST1A)++;
    esst1a=esst1a->next;
  }
  while(esst2a!=NULL){
    (*num_ESST2A)++;
    esst2a=esst2a->next;
  }
  while(esst3a!=NULL){
    (*num_ESST3A)++;
    esst3a=esst3a->next;
  }
  while(esst4b!=NULL){
    (*num_ESST4B)++;
    esst4b=esst4b->next;
  }
  while(ex2000!=NULL){
    (*num_EX2000)++;
    ex2000=ex2000->next;
  }
  while(exac1!=NULL){
    (*num_EXAC1)++;
    exac1=exac1->next;
  }
  while(exac1a!=NULL){
    (*num_EXAC1A)++;
    exac1a=exac1a->next;
  }
  while(exac2!=NULL){
    (*num_EXAC2)++;
    exac2=exac2->next;
  }
  while(exac3!=NULL){
    (*num_EXAC3)++;
    exac3=exac3->next;
  }
  while(exac4!=NULL){
    (*num_EXAC4)++;
    exac4=exac4->next;
  }
  while(exbas!=NULL){
    (*num_EXBAS)++;
    exbas=exbas->next;
  }
  while(exdc2!=NULL){
    (*num_EXDC2)++;
    exdc2=exdc2->next;
  }
  while(exeli!=NULL){
    (*num_EXELI)++;
    exeli=exeli->next;
  }
  while(expic1!=NULL){
    (*num_EXPIC1)++;
    expic1=expic1->next;
  }
  while(exst1!=NULL){
    (*num_EXST1)++;
    exst1=exst1->next;
  }
  while(exst2!=NULL){
    (*num_EXST2)++;
    exst2=exst2->next;
  }
  while(exst2a!=NULL){
    (*num_EXST2A)++;
    exst2a=exst2a->next;
  }
  while(exst3!=NULL){
    (*num_EXST3)++;
    exst3=exst3->next;
  }
  while(ieeet1!=NULL){
    (*num_IEEET1)++;
    ieeet1=ieeet1->next;
  }
  while(ieeet2!=NULL){
    (*num_IEEET2)++;
    ieeet2=ieeet2->next;
  }
  while(ieeet3!=NULL){
    (*num_IEEET3)++;
    ieeet3=ieeet3->next;
  }
  while(ieeet4!=NULL){
    (*num_IEEET4)++;
    ieeet4=ieeet4->next;
  }
  while(ieeet5!=NULL){
    (*num_IEEET5)++;
    ieeet5=ieeet5->next;
  }
  while(ieeex1!=NULL){
    (*num_IEEEX1)++;
    ieeex1=ieeex1->next;
  }
  while(ieeex2!=NULL){
    (*num_IEEEX2)++;
    ieeex2=ieeex2->next;
  }
  while(ieeex3!=NULL){
    (*num_IEEEX3)++;
    ieeex3=ieeex3->next;
  }
  while(ieeex4!=NULL){
    (*num_IEEEX4)++;
    ieeex4=ieeex4->next;
  }
  while(ieet1a!=NULL){
    (*num_IEET1A)++;
    ieet1a=ieet1a->next;
  }
  while(ieet1b!=NULL){
    (*num_IEET1B)++;
    ieet1b=ieet1b->next;
  }
  while(ieet5a!=NULL){
    (*num_IEET5A)++;
    ieet5a=ieet5a->next;
  }
  while(ieex2a!=NULL){
    (*num_IEEX2A)++;
    ieex2a=ieex2a->next;
  }
  while(scrx!=NULL){
    (*num_SCRX)++;
    scrx=scrx->next;
  } 
  while(sexs!=NULL){
    (*num_SEXS)++;
    sexs=sexs->next;
  }
  while(urst5t!=NULL){
    (*num_URST5T)++;
    urst5t=urst5t->next;
  }
  while(bbsex1!=NULL){
    (*num_BBSEX1)++;
    bbsex1=bbsex1->next;
  }
  while(budczt!=NULL){
    (*num_BUDCZT)++;
    budczt=budczt->next;
  }
  while(celin!=NULL){
    (*num_CELIN)++;
    celin=celin->next;
  }
  while(emac1t!=NULL){
    (*num_EMAC1T)++;
    emac1t=emac1t->next;
  }
  while(esurry!=NULL){
    (*num_ESURRY)++;
    esurry=esurry->next;
  }
  while(exnebb!=NULL){
    (*num_EXNEBB)++;
    exnebb=exnebb->next;
  }
  while(exni!=NULL){
    (*num_EXNI)++;
    exni=exni->next;
  }
  while(ivoex!=NULL){
    (*num_IVOEX)++;
    ivoex=ivoex->next;
  }
  while(oex12t!=NULL){
    (*num_OEX12T)++;
    oex12t=oex12t->next;
  }
  while(oex3t!=NULL){
    (*num_OEX3T)++;
    oex3t=oex3t->next;
  }
  while(rexsys!=NULL){
    (*num_REXSYS)++;
    rexsys=rexsys->next;
  }
  while(rexsy1!=NULL){
    (*num_REXSY1)++;
    rexsy1=rexsy1->next;
  }
  while(urhidt!=NULL){
    (*num_URHIDT)++;
    urhidt=urhidt->next;
  }

  PetscFunctionReturn(0);
}/* end of fun Count_EXC */


/* Begin fun parse_exc */
PetscErrorCode parse_exc(char * line){
  PetscErrorCode ierr;
  char data_format[512];
  PetscFunctionBegin;

  /* EXC1 MODEL */
  if(strstr(line,"EXC1")!=NULL){
    ierr = PetscMalloc(sizeof(EXC1_node),&(EXC1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXC1_cur->bus,(char*)&EXC1_cur->gen_id,&EXC1_cur->K_A,&EXC1_cur->T_A,&EXC1_cur->K_E,&EXC1_cur->T_E,&EXC1_cur->K_F,&EXC1_cur->T_F,&EXC1_cur->SE1,&EXC1_cur->SE2);
    if(EXC1_pre!=NULL) EXC1_pre->next=EXC1_cur;
    EXC1_cur->next=NULL;
    EXC1_pre=EXC1_cur;
    if(EXC1_head==NULL) EXC1_head=EXC1_cur;
  }/*end if*/

  /* ESAC1A MODEL */
  if(strstr(line,"ESAC1A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC1A_node),&(ESAC1A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC1A_cur->bus,(char*)&ESAC1A_cur->gen_id,&ESAC1A_cur->Tr,&ESAC1A_cur->Tb,&ESAC1A_cur->Tc,&ESAC1A_cur->Ka,&ESAC1A_cur->Ta,&ESAC1A_cur->Vamax,&ESAC1A_cur->Vamin,&ESAC1A_cur->Te,&ESAC1A_cur->Kf,&ESAC1A_cur->Tf,&ESAC1A_cur->Kc,&ESAC1A_cur->Kd,&ESAC1A_cur->Ke,&ESAC1A_cur->E1,&ESAC1A_cur->SeE1,&ESAC1A_cur->E2,&ESAC1A_cur->SeE2,&ESAC1A_cur->Vrmax,&ESAC1A_cur->Vrmin);
    if(ESAC1A_pre!=NULL) ESAC1A_pre->next=ESAC1A_cur;
    ESAC1A_cur->next=NULL;
    ESAC1A_pre=ESAC1A_cur;
    if(ESAC1A_head==NULL) ESAC1A_head=ESAC1A_cur;
  }/*end if*/

  /* ESAC2A MODEL */
  if(strstr(line,"ESAC2A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC2A_node),&(ESAC2A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC2A_cur->bus,(char*)&ESAC2A_cur->gen_id,&ESAC2A_cur->Tr,&ESAC2A_cur->Tb,&ESAC2A_cur->Tc,&ESAC2A_cur->Ka,&ESAC2A_cur->Ta,&ESAC2A_cur->Vamax,&ESAC2A_cur->Vamin,&ESAC2A_cur->Kb,&ESAC2A_cur->Vrmax,&ESAC2A_cur->Vrmin,&ESAC2A_cur->Te,&ESAC2A_cur->Vfemax,&ESAC2A_cur->Kh,&ESAC2A_cur->Kf,&ESAC2A_cur->Tf,&ESAC2A_cur->Kc,&ESAC2A_cur->Kd,&ESAC2A_cur->Ke,&ESAC2A_cur->E1,&ESAC2A_cur->SeE1,&ESAC2A_cur->E2,&ESAC2A_cur->SeE2);
    if(ESAC2A_pre!=NULL) ESAC2A_pre->next=ESAC2A_cur;
    ESAC2A_cur->next=NULL;
    ESAC2A_pre=ESAC2A_cur;
    if(ESAC2A_head==NULL) ESAC2A_head=ESAC2A_cur;
  }/*end if*/

  /* ESAC3A MODEL */
  if(strstr(line,"ESAC3A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC3A_node),&(ESAC3A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC3A_cur->bus,(char*)&ESAC3A_cur->gen_id,&ESAC3A_cur->Tr,&ESAC3A_cur->Tb,&ESAC3A_cur->Tc,&ESAC3A_cur->Ka,&ESAC3A_cur->Ta,&ESAC3A_cur->Vamax,&ESAC3A_cur->Vamin,&ESAC3A_cur->Te,&ESAC3A_cur->Vemin,&ESAC3A_cur->Kr,&ESAC3A_cur->Kf,&ESAC3A_cur->Tf,&ESAC3A_cur->Kn,&ESAC3A_cur->EFDn,&ESAC3A_cur->Kc,&ESAC3A_cur->Kd,&ESAC3A_cur->Ke,&ESAC3A_cur->Vfemax,&ESAC3A_cur->E1,&ESAC3A_cur->SeE1,&ESAC3A_cur->E2,&ESAC3A_cur->SeE2);
    if(ESAC3A_pre!=NULL) ESAC3A_pre->next=ESAC3A_cur;
    ESAC3A_cur->next=NULL;
    ESAC3A_pre=ESAC3A_cur;
    if(ESAC3A_head==NULL) ESAC3A_head=ESAC3A_cur;
  }/*end if*/

  /* ESAC4A MODEL */
  if(strstr(line,"ESAC4A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC4A_node),&(ESAC4A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC4A_cur->bus,(char*)&ESAC4A_cur->gen_id,&ESAC4A_cur->Tr,&ESAC4A_cur->Vimax,&ESAC4A_cur->Vimin,&ESAC4A_cur->Tc,&ESAC4A_cur->Tb,&ESAC4A_cur->Ka,&ESAC4A_cur->Ta,&ESAC4A_cur->Vrmax,&ESAC4A_cur->Vrmin,&ESAC4A_cur->Kc);
    if(ESAC4A_pre!=NULL) ESAC4A_pre->next=ESAC4A_cur;
    ESAC4A_cur->next=NULL;
    ESAC4A_pre=ESAC4A_cur;
    if(ESAC4A_head==NULL) ESAC4A_head=ESAC4A_cur;
  }/*end if*/

  /* ESAC5A MODEL */
  if(strstr(line,"ESAC5A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC5A_node),&(ESAC5A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC5A_cur->bus,(char*)&ESAC5A_cur->gen_id,&ESAC5A_cur->Tr,&ESAC5A_cur->Ka,&ESAC5A_cur->Ta,&ESAC5A_cur->Vrmax,&ESAC5A_cur->Vrmin,&ESAC5A_cur->Ke,&ESAC5A_cur->Te,&ESAC5A_cur->Kf,&ESAC5A_cur->Tf1,&ESAC5A_cur->Tf2,&ESAC5A_cur->Tf3,&ESAC5A_cur->E1,&ESAC5A_cur->SeE1,&ESAC5A_cur->E2,&ESAC5A_cur->SeE2);
    if(ESAC5A_pre!=NULL) ESAC5A_pre->next=ESAC5A_cur;
    ESAC5A_cur->next=NULL;
    ESAC5A_pre=ESAC5A_cur;
    if(ESAC5A_head==NULL) ESAC5A_head=ESAC5A_cur;
  }/*end if*/

  /* ESAC6A MODEL */
  if(strstr(line,"ESAC6A")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC6A_node),&(ESAC6A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC6A_cur->bus,(char*)&ESAC6A_cur->gen_id,&ESAC6A_cur->Tr,&ESAC6A_cur->Ka,&ESAC6A_cur->Ta,&ESAC6A_cur->Tk,&ESAC6A_cur->Tb,&ESAC6A_cur->Tc,&ESAC6A_cur->Vamax,&ESAC6A_cur->Vamin,&ESAC6A_cur->Vrmax,&ESAC6A_cur->Te,&ESAC6A_cur->Vfelim,&ESAC6A_cur->Kh,&ESAC6A_cur->Vhmax,&ESAC6A_cur->Th,&ESAC6A_cur->Tj,&ESAC6A_cur->Kc,&ESAC6A_cur->Kd,&ESAC6A_cur->Ke,&ESAC6A_cur->E1,&ESAC6A_cur->SeE1,&ESAC6A_cur->E2,&ESAC6A_cur->SeE2);
    if(ESAC6A_pre!=NULL) ESAC6A_pre->next=ESAC6A_cur;
    ESAC6A_cur->next=NULL;
    ESAC6A_pre=ESAC6A_cur;
    if(ESAC6A_head==NULL) ESAC6A_head=ESAC6A_cur;
  }/*end if*/

  /* ESAC8B MODEL */
  if(strstr(line,"ESAC8B")!=NULL){
    ierr = PetscMalloc(sizeof(ESAC8B_node),&(ESAC8B_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESAC8B_cur->bus,(char*)&ESAC8B_cur->gen_id,&ESAC8B_cur->Tr,&ESAC8B_cur->Kp,&ESAC8B_cur->Ki,&ESAC8B_cur->Kd,&ESAC8B_cur->Td,&ESAC8B_cur->Ka,&ESAC8B_cur->Ta,&ESAC8B_cur->Vrmax,&ESAC8B_cur->Vrmin,&ESAC8B_cur->Te,&ESAC8B_cur->Ke,&ESAC8B_cur->E1,&ESAC8B_cur->SeE1,&ESAC8B_cur->E2,&ESAC8B_cur->SeE2);
    if(ESAC8B_pre!=NULL) ESAC8B_pre->next=ESAC8B_cur;
    ESAC8B_cur->next=NULL;
    ESAC8B_pre=ESAC8B_cur;
    if(ESAC8B_head==NULL) ESAC8B_head=ESAC8B_cur;
  }/*end if*/

  /* ESDC1A MODEL */
  if(strstr(line,"ESDC1A")!=NULL){
    ierr = PetscMalloc(sizeof(ESDC1A_node),&(ESDC1A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESDC1A_cur->bus,(char*)&ESDC1A_cur->gen_id,&ESDC1A_cur->Tr,&ESDC1A_cur->Ka,&ESDC1A_cur->Ta,&ESDC1A_cur->Tb,&ESDC1A_cur->Tc,&ESDC1A_cur->Vrmax,&ESDC1A_cur->Vrmin,&ESDC1A_cur->Ke,&ESDC1A_cur->Te,&ESDC1A_cur->Kf,&ESDC1A_cur->Tf1,&ESDC1A_cur->E1,&ESDC1A_cur->SeE1,&ESDC1A_cur->E2,&ESDC1A_cur->SeE2);
    if(ESDC1A_pre!=NULL) ESDC1A_pre->next=ESDC1A_cur;
    ESDC1A_cur->next=NULL;
    ESDC1A_pre=ESDC1A_cur;
    if(ESDC1A_head==NULL) ESDC1A_head=ESDC1A_cur;
  }/*end if*/

  /* ESDC2A MODEL */
  if(strstr(line,"ESDC2A")!=NULL){
    ierr = PetscMalloc(sizeof(ESDC2A_node),&(ESDC2A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESDC2A_cur->bus,(char*)&ESDC2A_cur->gen_id,&ESDC2A_cur->Tr,&ESDC2A_cur->Ka,&ESDC2A_cur->Ta,&ESDC2A_cur->Tb,&ESDC2A_cur->Tc,&ESDC2A_cur->Vrmax,&ESDC2A_cur->Vrmin,&ESDC2A_cur->Ke,&ESDC2A_cur->Te,&ESDC2A_cur->Kf,&ESDC2A_cur->Tf1,&ESDC2A_cur->E1,&ESDC2A_cur->SeE1,&ESDC2A_cur->E2,&ESDC2A_cur->SeE2);
    if(ESDC2A_pre!=NULL) ESDC2A_pre->next=ESDC2A_cur;
    ESDC2A_cur->next=NULL;
    ESDC2A_pre=ESDC2A_cur;
    if(ESDC2A_head==NULL) ESDC2A_head=ESDC2A_cur;
  }/*end if*/

  /* ESST1A MODEL */
  if(strstr(line,"ESST1A")!=NULL){
    ierr = PetscMalloc(sizeof(ESST1A_node),&(ESST1A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%d %%d %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESST1A_cur->bus,(char*)&ESST1A_cur->gen_id,&ESST1A_cur->UEL,&ESST1A_cur->VOS,&ESST1A_cur->Tr,&ESST1A_cur->Vimax,&ESST1A_cur->Vimin,&ESST1A_cur->Tc,&ESST1A_cur->Tb,&ESST1A_cur->Tc1,&ESST1A_cur->Tb1,&ESST1A_cur->Ka,&ESST1A_cur->Ta,&ESST1A_cur->Vamax,&ESST1A_cur->Vamin,&ESST1A_cur->Vrmax,&ESST1A_cur->Vrmin,&ESST1A_cur->Kc,&ESST1A_cur->Kf,&ESST1A_cur->Tf,&ESST1A_cur->Klr,&ESST1A_cur->Ilr); 
    if(ESST1A_pre!=NULL) ESST1A_pre->next=ESST1A_cur;
    ESST1A_cur->next=NULL;
    ESST1A_pre=ESST1A_cur;
    if(ESST1A_head==NULL) ESST1A_head=ESST1A_cur;
  }/*end if*/

  /* ESST2A MODEL */
  if(strstr(line,"ESST2A")!=NULL){
    ierr = PetscMalloc(sizeof(ESST2A_node),&(ESST2A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESST2A_cur->bus,(char*)&ESST2A_cur->gen_id,&ESST2A_cur->Tr,&ESST2A_cur->Ka,&ESST2A_cur->Ta,&ESST2A_cur->Vrmax,&ESST2A_cur->Vrmin,&ESST2A_cur->Ke,&ESST2A_cur->Te,&ESST2A_cur->Kf,&ESST2A_cur->Tf,&ESST2A_cur->Kp,&ESST2A_cur->Ki,&ESST2A_cur->Kc,&ESST2A_cur->EFDmax);
    if(ESST2A_pre!=NULL) ESST2A_pre->next=ESST2A_cur;
    ESST2A_cur->next=NULL;
    ESST2A_pre=ESST2A_cur;
    if(ESST2A_head==NULL) ESST2A_head=ESST2A_cur;
  }/*end if*/

  /* ESST3A MODEL */
  if(strstr(line,"ESST3A")!=NULL){
    ierr = PetscMalloc(sizeof(ESST3A_node),&(ESST3A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESST3A_cur->bus,(char*)&ESST3A_cur->gen_id,&ESST3A_cur->Tr,&ESST3A_cur->Vimax,&ESST3A_cur->Vimin,&ESST3A_cur->Km,&ESST3A_cur->Tc,&ESST3A_cur->Tb,&ESST3A_cur->Ka,&ESST3A_cur->Ta,&ESST3A_cur->Vrmax,&ESST3A_cur->Vrmin,&ESST3A_cur->Kg,&ESST3A_cur->Kp,&ESST3A_cur->Ki,&ESST3A_cur->Vbmax,&ESST3A_cur->Kc,&ESST3A_cur->Xl,&ESST3A_cur->Vgmax,&ESST3A_cur->Op,&ESST3A_cur->Tm,&ESST3A_cur->Vmmax,&ESST3A_cur->Vmmin);
    if(ESST3A_pre!=NULL) ESST3A_pre->next=ESST3A_cur;
    ESST3A_cur->next=NULL;
    ESST3A_pre=ESST3A_cur;
    if(ESST3A_head==NULL) ESST3A_head=ESST3A_cur;
  }/*end if*/

  /* ESST4B MODEL */
  if(strstr(line,"ESST4B")!=NULL){
    ierr = PetscMalloc(sizeof(ESST4B_node),&(ESST4B_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESST4B_cur->bus,(char*)&ESST4B_cur->gen_id,&ESST4B_cur->Tr,&ESST4B_cur->Kpr,&ESST4B_cur->Kir,&ESST4B_cur->Vrmax,&ESST4B_cur->Vrmin,&ESST4B_cur->Ta,&ESST4B_cur->Kpm,&ESST4B_cur->Kim,&ESST4B_cur->Vmmax,&ESST4B_cur->Vmmin,&ESST4B_cur->Kg,&ESST4B_cur->Kp,&ESST4B_cur->Ki,&ESST4B_cur->Vbmax,&ESST4B_cur->Kc,&ESST4B_cur->Xl,&ESST4B_cur->thetap);
    if(ESST4B_pre!=NULL) ESST4B_pre->next=ESST4B_cur;
    ESST4B_cur->next=NULL;
    ESST4B_pre=ESST4B_cur;
    if(ESST4B_head==NULL) ESST4B_head=ESST4B_cur;
  }/*end if*/

  /* EX2000 MODEL */
  if(strstr(line,"EX2000")!=NULL){
    ierr = PetscMalloc(sizeof(EX2000_node),&(EX2000_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%d %%d %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EX2000_cur->bus,(char*)&EX2000_cur->gen_id,&EX2000_cur->M,&EX2000_cur->M1,&EX2000_cur->kpr,&EX2000_cur->kir,&EX2000_cur->Vrmax,&EX2000_cur->Vrmin,&EX2000_cur->kpa,&EX2000_cur->kia,&EX2000_cur->Vamax,&EX2000_cur->Vamin,&EX2000_cur->Kp,&EX2000_cur->Kl,&EX2000_cur->Te,&EX2000_cur->Vfemax,&EX2000_cur->Ke,&EX2000_cur->Kc,&EX2000_cur->Kd,&EX2000_cur->Kf1,&EX2000_cur->E1,&EX2000_cur->SeE1,&EX2000_cur->E2,&EX2000_cur->SeE2,&EX2000_cur->Kvhz,&EX2000_cur->Krcc,&EX2000_cur->Tr,&EX2000_cur->ifdref1,&EX2000_cur->ifdref2,&EX2000_cur->ifdref3,&EX2000_cur->ifdref4,&EX2000_cur->I1,&EX2000_cur->T1,&EX2000_cur->I2,&EX2000_cur->T2,&EX2000_cur->I3,&EX2000_cur->T3,&EX2000_cur->I4,&EX2000_cur->T4,&EX2000_cur->Tlead,&EX2000_cur->Tlag,&EX2000_cur->kpifd,&EX2000_cur->kiifd,&EX2000_cur->ifdlimp,&EX2000_cur->ifdlimn,&EX2000_cur->ifdadvlim,&EX2000_cur->Vemin,&EX2000_cur->reflimp); 
    if(EX2000_pre!=NULL) EX2000_pre->next=EX2000_cur;
    EX2000_cur->next=NULL;
    EX2000_pre=EX2000_cur;
    if(EX2000_head==NULL) EX2000_head=EX2000_cur;
  }/*end if*/

  /* EXAC1 MODEL*/
  if(strstr(line,"EXAC1")!=NULL && strstr(line,"EXAC1")==NULL){
    ierr = PetscMalloc(sizeof(EXAC1_node),&(EXAC1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &EXAC1_cur->bus,(char*)&EXAC1_cur->gen_id,&EXAC1_cur->Tr,&EXAC1_cur->Tb,&EXAC1_cur->Tc,&EXAC1_cur->Ka,&EXAC1_cur->Ta,&EXAC1_cur->Vamax,&EXAC1_cur->Vamin,&EXAC1_cur->Te,&EXAC1_cur->Kf,&EXAC1_cur->Tf,&EXAC1_cur->Kc,&EXAC1_cur->Kd,&EXAC1_cur->Ke,&EXAC1_cur->E1,&EXAC1_cur->SeE1,&EXAC1_cur->E2,&EXAC1_cur->SeE2);
    if(EXAC1_pre!=NULL) EXAC1_pre->next=EXAC1_cur;
    EXAC1_cur->next=NULL;
    EXAC1_pre=EXAC1_cur;
    if(EXAC1_head==NULL) EXAC1_head=EXAC1_cur;
  }/*end if*/

  /* EXAC1A MODEL */
  if(strstr(line,"EXAC1A")!=NULL){
    ierr = PetscMalloc(sizeof(EXAC1A_node),&(EXAC1A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXAC1A_cur->bus,(char*)&EXAC1A_cur->gen_id,&EXAC1A_cur->Tr,&EXAC1A_cur->Tb,&EXAC1A_cur->Tc,&EXAC1A_cur->Ka,&EXAC1A_cur->Ta,&EXAC1A_cur->Vrmax,&EXAC1A_cur->Vrmin,&EXAC1A_cur->Te,&EXAC1A_cur->Kf,&EXAC1A_cur->Tf,&EXAC1A_cur->Kc,&EXAC1A_cur->Kd,&EXAC1A_cur->Ke,&EXAC1A_cur->E1,&EXAC1A_cur->SeE1,&EXAC1A_cur->E2,&EXAC1A_cur->SeE2);
    if(EXAC1A_pre!=NULL) EXAC1A_pre->next=EXAC1A_cur;
    EXAC1A_cur->next=NULL;
    EXAC1A_pre=EXAC1A_cur;
    if(EXAC1A_head==NULL) EXAC1A_head=EXAC1A_cur;
  }/*end if*/


  /* EXAC2 MODEL */
  if(strstr(line,"EXAC2")!=NULL){
    ierr = PetscMalloc(sizeof(EXAC2_node),&(EXAC2_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXAC2_cur->bus,(char*)&EXAC2_cur->gen_id,&EXAC2_cur->Tr,&EXAC2_cur->Tb,&EXAC2_cur->Tc,&EXAC2_cur->Ka,&EXAC2_cur->Ta,&EXAC2_cur->Vamax,&EXAC2_cur->Vamin,&EXAC2_cur->Kb,&EXAC2_cur->Vrmax,&EXAC2_cur->Vrmin,&EXAC2_cur->Te,&EXAC2_cur->Kl,&EXAC2_cur->Kh,&EXAC2_cur->Kf,&EXAC2_cur->Tf,&EXAC2_cur->Kc,&EXAC2_cur->Kd,&EXAC2_cur->Ke,&EXAC2_cur->Vlr,&EXAC2_cur->E1,&EXAC2_cur->SeE1,&EXAC2_cur->E2,&EXAC2_cur->SeE2);
    if(EXAC2_pre!=NULL) EXAC2_pre->next=EXAC2_cur;
    EXAC2_cur->next=NULL;
    EXAC2_pre=EXAC2_cur;
    if(EXAC2_head==NULL) EXAC2_head=EXAC2_cur;
  }/*end if*/

 /* EXAC3 MODEL */
  if(strstr(line,"EXAC3")!=NULL){
    ierr = PetscMalloc(sizeof(EXAC3_node),&(EXAC3_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXAC3_cur->bus,(char*)&EXAC3_cur->gen_id,&EXAC3_cur->Tr,&EXAC3_cur->Tb,&EXAC3_cur->Tc,&EXAC3_cur->Ka,&EXAC3_cur->Ta,&EXAC3_cur->Vamax,&EXAC3_cur->Vamin,&EXAC3_cur->Te,&EXAC3_cur->Klv,&EXAC3_cur->Kr,&EXAC3_cur->Kf,&EXAC3_cur->Tf,&EXAC3_cur->Kn,&EXAC3_cur->EFDn,&EXAC3_cur->Kc,&EXAC3_cur->Kd,&EXAC3_cur->Ke,&EXAC3_cur->E1,&EXAC3_cur->SeE1,&EXAC3_cur->E2,&EXAC3_cur->SeE2);
    if(EXAC3_pre!=NULL) EXAC3_pre->next=EXAC3_cur;
    EXAC3_cur->next=NULL;
    EXAC3_pre=EXAC3_cur;
    if(EXAC3_head==NULL) EXAC3_head=EXAC3_cur;
  }/*end if*/

  /* EXAC4 MODEL */
  if(strstr(line,"EXAC4")!=NULL){
    ierr = PetscMalloc(sizeof(EXAC4_node),&(EXAC4_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXAC4_cur->bus,(char*)&EXAC4_cur->gen_id,&EXAC4_cur->Tr,&EXAC4_cur->Vimax,&EXAC4_cur->Vimin,&EXAC4_cur->Tc,&EXAC4_cur->Tb,&EXAC4_cur->Ka,&EXAC4_cur->Ta,&EXAC4_cur->Vrmax,&EXAC4_cur->Vrmin,&EXAC4_cur->Kc);
    if(EXAC4_pre!=NULL) EXAC4_pre->next=EXAC4_cur;
    EXAC4_cur->next=NULL;
    EXAC4_pre=EXAC4_cur;
    if(EXAC4_head==NULL) EXAC4_head=EXAC4_cur;
  }/*end if*/


/* EXBAS MODEL */
  if(strstr(line,"EXBAS")!=NULL){
    ierr = PetscMalloc(sizeof(EXBAS_node),&(EXBAS_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXBAS_cur->bus,(char*)&EXBAS_cur->gen_id,&EXBAS_cur->Tr,&EXBAS_cur->Kp,&EXBAS_cur->Ki,&EXBAS_cur->Ka,&EXBAS_cur->Ta,&EXBAS_cur->Tb,&EXBAS_cur->Tc,&EXBAS_cur->Vrmax,&EXBAS_cur->Vrmin,&EXBAS_cur->Kf,&EXBAS_cur->Tf,&EXBAS_cur->Tf1,&EXBAS_cur->Tf2,&EXBAS_cur->Ke,&EXBAS_cur->Te,&EXBAS_cur->Kc,&EXBAS_cur->Kd,&EXBAS_cur->E1,&EXBAS_cur->SeE1,&EXBAS_cur->E2,&EXBAS_cur->SeE2);
    if(EXBAS_pre!=NULL) EXBAS_pre->next=EXBAS_cur;
    EXBAS_cur->next=NULL;
    EXBAS_pre=EXBAS_cur;
    if(EXBAS_head==NULL) EXBAS_head=EXBAS_cur;
  }/*end if*/


/* EXDC2 MODEL */
  if(strstr(line,"EXDC2")!=NULL){
    ierr = PetscMalloc(sizeof(EXDC2_node),&(EXDC2_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXDC2_cur->bus,(char*)&EXDC2_cur->gen_id,&EXDC2_cur->Tr,&EXDC2_cur->Ka,&EXDC2_cur->Ta,&EXDC2_cur->Tb,&EXDC2_cur->Tc,&EXDC2_cur->Vrmax,&EXDC2_cur->Vrmin,&EXDC2_cur->Ke,&EXDC2_cur->Te,&EXDC2_cur->Kf,&EXDC2_cur->Tf1,&EXDC2_cur->E1,&EXDC2_cur->SeE1,&EXDC2_cur->E2,&EXDC2_cur->SeE2);
    if(EXDC2_pre!=NULL) EXDC2_pre->next=EXDC2_cur;
    EXDC2_cur->next=NULL;
    EXDC2_pre=EXDC2_cur;
    if(EXDC2_head==NULL) EXDC2_head=EXDC2_cur;
  }/*end if*/


  /* EXELI MODEL */
  if(strstr(line,"EXELI")!=NULL){
    ierr = PetscMalloc(sizeof(EXELI_node),&(EXELI_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXELI_cur->bus,(char*)&EXELI_cur->gen_id,&EXELI_cur->Tfv,&EXELI_cur->Tfi,&EXELI_cur->Tnu,&EXELI_cur->Vpu,&EXELI_cur->Vpi,&EXELI_cur->Vpnf,&EXELI_cur->Dpnf,&EXELI_cur->EFDmin,&EXELI_cur->EFDmax,&EXELI_cur->Xe,&EXELI_cur->Tw,&EXELI_cur->Ks1,&EXELI_cur->Ks2,&EXELI_cur->Ts1,&EXELI_cur->Ts2,&EXELI_cur->Smax);
    if(EXELI_pre!=NULL) EXELI_pre->next=EXELI_cur;
    EXELI_cur->next=NULL;
    EXELI_pre=EXELI_cur;
    if(EXELI_head==NULL) EXELI_head=EXELI_cur;
  }/*end if*/

 /* EXPIC1 MODEL */
  if(strstr(line,"EXPIC1")!=NULL){
    ierr = PetscMalloc(sizeof(EXPIC1_node),&(EXPIC1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXPIC1_cur->bus,(char*)&EXPIC1_cur->gen_id,&EXPIC1_cur->Tr,&EXPIC1_cur->Ka,&EXPIC1_cur->Ta1,&EXPIC1_cur->Vr1,&EXPIC1_cur->Vr2,&EXPIC1_cur->Ta2,&EXPIC1_cur->Ta3,&EXPIC1_cur->Ta4,&EXPIC1_cur->Vrmax,&EXPIC1_cur->Vrmin,&EXPIC1_cur->Kf,&EXPIC1_cur->Tf1,&EXPIC1_cur->Tf2,&EXPIC1_cur->EFDmax,&EXPIC1_cur->EFDmin,&EXPIC1_cur->Ke,&EXPIC1_cur->Te,&EXPIC1_cur->E1,&EXPIC1_cur->SeE1,&EXPIC1_cur->E2,&EXPIC1_cur->SeE2,&EXPIC1_cur->Kp,&EXPIC1_cur->Ki,&EXPIC1_cur->Kc);
    if(EXPIC1_pre!=NULL) EXPIC1_pre->next=EXPIC1_cur;
    EXPIC1_cur->next=NULL;
    EXPIC1_pre=EXPIC1_cur;
    if(EXPIC1_head==NULL) EXPIC1_head=EXPIC1_cur;
  }/*end if*/


 /* EXST1 MODEL */
  if(strstr(line,"EXST1")!=NULL){
    ierr = PetscMalloc(sizeof(EXST1_node),&(EXST1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXST1_cur->bus,(char*)&EXST1_cur->gen_id,&EXST1_cur->Tr,&EXST1_cur->Vimax,&EXST1_cur->Vimin,&EXST1_cur->Tc,&EXST1_cur->Tb,&EXST1_cur->Ka,&EXST1_cur->Ta,&EXST1_cur->Vrmax,&EXST1_cur->Vrmin,&EXST1_cur->Kc,&EXST1_cur->Kf,&EXST1_cur->Tf);
    if(EXST1_pre!=NULL) EXST1_pre->next=EXST1_cur;
    EXST1_cur->next=NULL;
    EXST1_pre=EXST1_cur;
    if(EXST1_head==NULL) EXST1_head=EXST1_cur;
  }/*end if*/


 /* EXST2 MODEL */
  if(strstr(line,"EXST2")!=NULL && strstr(line,"EXST2A")==NULL){
    ierr = PetscMalloc(sizeof(EXST2_node),&(EXST2_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXST2_cur->bus,(char*)&EXST2_cur->gen_id,&EXST2_cur->Tr,&EXST2_cur->Ka,&EXST2_cur->Ta,&EXST2_cur->Vrmax,&EXST2_cur->Vrmin,&EXST2_cur->Ke,&EXST2_cur->Te,&EXST2_cur->Kf,&EXST2_cur->Tf,&EXST2_cur->Kp,&EXST2_cur->Ki,&EXST2_cur->Kc,&EXST2_cur->EFDmax);
    if(EXST2_pre!=NULL) EXST2_pre->next=EXST2_cur;
    EXST2_cur->next=NULL;
    EXST2_pre=EXST2_cur;
    if(EXST2_head==NULL) EXST2_head=EXST2_cur;
  }/*end if*/

  /* EXST2A MODEL */
  if(strstr(line,"EXST2A")!=NULL){
    ierr = PetscMalloc(sizeof(EXST2A_node),&(EXST2A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXST2A_cur->bus,(char*)&EXST2A_cur->gen_id,&EXST2A_cur->Tr,&EXST2A_cur->Ka,&EXST2A_cur->Ta,&EXST2A_cur->Vrmax,&EXST2A_cur->Vrmin,&EXST2A_cur->Ke,&EXST2A_cur->Te,&EXST2A_cur->Kf,&EXST2A_cur->Tf,&EXST2A_cur->Kp,&EXST2A_cur->Ki,&EXST2A_cur->Kc,&EXST2A_cur->EFDmax);
    if(EXST2A_pre!=NULL) EXST2A_pre->next=EXST2A_cur;
    EXST2A_cur->next=NULL;
    EXST2A_pre=EXST2A_cur;
    if(EXST2A_head==NULL) EXST2A_head=EXST2A_cur;
  }/*end if*/


  /* EXST3 MODEL */
  if(strstr(line,"EXST3")!=NULL){
    ierr = PetscMalloc(sizeof(EXST3_node),&(EXST3_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXST3_cur->bus,(char*)&EXST3_cur->gen_id,&EXST3_cur->Tr,&EXST3_cur->Vimax,&EXST3_cur->Vimin,&EXST3_cur->Kj,&EXST3_cur->Tc,&EXST3_cur->Tb,&EXST3_cur->Ka,&EXST3_cur->Ta,&EXST3_cur->Vrmax,&EXST3_cur->Vrmin,&EXST3_cur->Kg,&EXST3_cur->Kp,&EXST3_cur->Ki,&EXST3_cur->EFDmax,&EXST3_cur->Kc,&EXST3_cur->Xl,&EXST3_cur->Vgmax,&EXST3_cur->Op);
    if(EXST3_pre!=NULL) EXST3_pre->next=EXST3_cur;
    EXST3_cur->next=NULL;
    EXST3_pre=EXST3_cur;
    if(EXST3_head==NULL) EXST3_head=EXST3_cur;
  }/*end if*/


  /* IEEET1 MODEL*/
  if(strstr(line,"IEEET1")!=NULL){
    ierr = PetscMalloc(sizeof(IEEET1_node),&(IEEET1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%*f %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEET1_cur->bus,(char*)&IEEET1_cur->gen_id,&IEEET1_cur->Tr,&IEEET1_cur->Ka,&IEEET1_cur->Ta,&IEEET1_cur->Vrmax,&IEEET1_cur->Vrmin,&IEEET1_cur->Ke,&IEEET1_cur->Te,&IEEET1_cur->Kf,&IEEET1_cur->Tf,&IEEET1_cur->E1,&IEEET1_cur->SeE1,&IEEET1_cur->E2,&IEEET1_cur->SeE2);
    if(IEEET1_pre!=NULL) IEEET1_pre->next=IEEET1_cur;
    IEEET1_cur->next=NULL;
    IEEET1_pre=IEEET1_cur;
    if(IEEET1_head==NULL) IEEET1_head=IEEET1_cur;
  }/*end if*/


  /* IEEET2 MODEL*/
  if(strstr(line,"IEEET2")!=NULL){
    ierr = PetscMalloc(sizeof(IEEET2_node),&(IEEET2_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEET2_cur->bus,(char*)&IEEET2_cur->gen_id,&IEEET2_cur->Tr,&IEEET2_cur->Ka,&IEEET2_cur->Ta,&IEEET2_cur->Vrmax,&IEEET2_cur->Vrmin,&IEEET2_cur->Ke,&IEEET2_cur->Te,&IEEET2_cur->Kf,&IEEET2_cur->Tf1,&IEEET2_cur->Tf2,&IEEET2_cur->E1,&IEEET2_cur->SeE1,&IEEET2_cur->E2,&IEEET2_cur->SeE2);
    if(IEEET2_pre!=NULL) IEEET2_pre->next=IEEET2_cur;
    IEEET2_cur->next=NULL;
    IEEET2_pre=IEEET2_cur;
    if(IEEET2_head==NULL) IEEET2_head=IEEET2_cur;
  }/*end if*/


  /* IEEET3 MODEL*/
  if(strstr(line,"IEEET3")!=NULL){
    ierr = PetscMalloc(sizeof(IEEET3_node),&(IEEET3_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEET3_cur->bus,(char*)&IEEET3_cur->gen_id,&IEEET3_cur->Tr,&IEEET3_cur->Ka,&IEEET3_cur->Ta,&IEEET3_cur->Vrmax,&IEEET3_cur->Vrmin,&IEEET3_cur->Te,&IEEET3_cur->Kf,&IEEET3_cur->Tf,&IEEET3_cur->Kp,&IEEET3_cur->Ki,&IEEET3_cur->Vbmax,&IEEET3_cur->Ke);
    if(IEEET3_pre!=NULL) IEEET3_pre->next=IEEET3_cur;
    IEEET3_cur->next=NULL;
    IEEET3_pre=IEEET3_cur;
    if(IEEET3_head==NULL) IEEET3_head=IEEET3_cur;
  }/*end if*/


  /* IEEET4 MODEL*/
  if(strstr(line,"IEEET4")!=NULL){
    ierr = PetscMalloc(sizeof(IEEET4_node),&(IEEET4_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEET4_cur->bus,(char*)&IEEET4_cur->gen_id,&IEEET4_cur->Kr,&IEEET4_cur->Trh,&IEEET4_cur->Kv,&IEEET4_cur->Vrmax,&IEEET4_cur->Vrmin,&IEEET4_cur->Te,&IEEET4_cur->Ke,&IEEET4_cur->E1,&IEEET4_cur->SeE1,&IEEET4_cur->E2,&IEEET4_cur->SeE2);
    if(IEEET4_pre!=NULL) IEEET4_pre->next=IEEET4_cur;
    IEEET4_cur->next=NULL;
    IEEET4_pre=IEEET4_cur;
    if(IEEET4_head==NULL) IEEET4_head=IEEET4_cur;
  }/*end if*/


  /* IEEET5 MODEL*/
  if(strstr(line,"IEEET5")!=NULL){
    ierr = PetscMalloc(sizeof(IEEET5_node),&(IEEET5_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEET5_cur->bus,(char*)&IEEET5_cur->gen_id,&IEEET5_cur->Trh,&IEEET5_cur->Kv,&IEEET5_cur->Vrmax,&IEEET5_cur->Vrmin,&IEEET5_cur->Te,&IEEET5_cur->Ke,&IEEET5_cur->E1,&IEEET5_cur->SeE1,&IEEET5_cur->E2,&IEEET5_cur->SeE2);
    if(IEEET5_pre!=NULL) IEEET5_pre->next=IEEET5_cur;
    IEEET5_cur->next=NULL;
    IEEET5_pre=IEEET5_cur;
    if(IEEET5_head==NULL) IEEET5_head=IEEET5_cur;
  }/*end if*/


  /* IEEEX1 MODEL*/
  if(strstr(line,"IEEEX1")!=NULL){
    ierr = PetscMalloc(sizeof(IEEEX1_node),&(IEEEX1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEEX1_cur->bus,(char*)&IEEEX1_cur->gen_id,&IEEEX1_cur->Tr,&IEEEX1_cur->Ka,&IEEEX1_cur->Ta,&IEEEX1_cur->Tb,&IEEEX1_cur->Tc,&IEEEX1_cur->Vrmax,&IEEEX1_cur->Vrmin,&IEEEX1_cur->Ke,&IEEEX1_cur->Te,&IEEEX1_cur->Kf,&IEEEX1_cur->Tf1,&IEEEX1_cur->E1,&IEEEX1_cur->SeE1,&IEEEX1_cur->E2,&IEEEX1_cur->SeE2);
    if(IEEEX1_pre!=NULL) IEEEX1_pre->next=IEEEX1_cur;
    IEEEX1_cur->next=NULL;
    IEEEX1_pre=IEEEX1_cur;
    if(IEEEX1_head==NULL) IEEEX1_head=IEEEX1_cur;
  }/*end if*/


  /* IEEEX2 MODEL*/
  if(strstr(line,"IEEEX2")!=NULL){
    ierr = PetscMalloc(sizeof(IEEEX2_node),&(IEEEX2_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEEX2_cur->bus,(char*)&IEEEX2_cur->gen_id,&IEEEX2_cur->Tr,&IEEEX2_cur->Ka,&IEEEX2_cur->Ta,&IEEEX2_cur->Tb,&IEEEX2_cur->Tc,&IEEEX2_cur->Vrmax,&IEEEX2_cur->Vrmin,&IEEEX2_cur->Ke,&IEEEX2_cur->Te,&IEEEX2_cur->Kf,&IEEEX2_cur->Tf1,&IEEEX2_cur->Tf2,&IEEEX2_cur->E1,&IEEEX2_cur->SeE1,&IEEEX2_cur->E2,&IEEEX2_cur->SeE2);
    if(IEEEX2_pre!=NULL) IEEEX2_pre->next=IEEEX2_cur;
    IEEEX2_cur->next=NULL;
    IEEEX2_pre=IEEEX2_cur;
    if(IEEEX2_head==NULL) IEEEX2_head=IEEEX2_cur;
  }/*end if*/


  /* IEEEX3 MODEL*/
  if(strstr(line,"IEEEX3")!=NULL){
    ierr = PetscMalloc(sizeof(IEEEX3_node),&(IEEEX3_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEEX3_cur->bus,(char*)&IEEEX3_cur->gen_id,&IEEEX3_cur->Tr,&IEEEX3_cur->Ka,&IEEEX3_cur->Ta,&IEEEX3_cur->Vrmax,&IEEEX3_cur->Vrmin,&IEEEX3_cur->Te,&IEEEX3_cur->Kf,&IEEEX3_cur->Tf,&IEEEX3_cur->Kp,&IEEEX3_cur->Ki,&IEEEX3_cur->Vbmax,&IEEEX3_cur->Ke);
    if(IEEEX3_pre!=NULL) IEEEX3_pre->next=IEEEX3_cur;
    IEEEX3_cur->next=NULL;
    IEEEX3_pre=IEEEX3_cur;
    if(IEEEX3_head==NULL) IEEEX3_head=IEEEX3_cur;
  }/*end if*/


  /* IEEEX4 MODEL*/
  if(strstr(line,"IEEEX4")!=NULL){
    ierr = PetscMalloc(sizeof(IEEEX4_node),&(IEEEX4_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEEX4_cur->bus,(char*)&IEEEX4_cur->gen_id,&IEEEX4_cur->Tr,&IEEEX4_cur->Trh,&IEEEX4_cur->Kv,&IEEEX4_cur->Vrmax,&IEEEX4_cur->Vrmin,&IEEEX4_cur->Te,&IEEEX4_cur->Ke,&IEEEX4_cur->E1,&IEEEX4_cur->SeE1,&IEEEX4_cur->E2,&IEEEX4_cur->SeE2);
    if(IEEEX4_pre!=NULL) IEEEX4_pre->next=IEEEX4_cur;
    IEEEX4_cur->next=NULL;
    IEEEX4_pre=IEEEX4_cur;
    if(IEEEX4_head==NULL) IEEEX4_head=IEEEX4_cur;
  }/*end if*/


  /* IEET1A MODEL*/
  if(strstr(line,"IEET1A")!=NULL){
    ierr = PetscMalloc(sizeof(IEET1A_node),&(IEET1A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEET1A_cur->bus,(char*)&IEET1A_cur->gen_id,&IEET1A_cur->Ka,&IEET1A_cur->Ta,&IEET1A_cur->Vrmax,&IEET1A_cur->Vrmin,&IEET1A_cur->Ke,&IEET1A_cur->Te,&IEET1A_cur->Kf,&IEET1A_cur->Tf,&IEET1A_cur->EFDmin,&IEET1A_cur->E1,&IEET1A_cur->SeE1,&IEET1A_cur->E2,&IEET1A_cur->SeE2);
    if(IEET1A_pre!=NULL) IEET1A_pre->next=IEET1A_cur;
    IEET1A_cur->next=NULL;
    IEET1A_pre=IEET1A_cur;
    if(IEET1A_head==NULL) IEET1A_head=IEET1A_cur;
  }/*end if*/


  /* IEET1B MODEL*/
  if(strstr(line,"IEET1B")!=NULL){
    ierr = PetscMalloc(sizeof(IEET1B_node),&(IEET1B_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEET1B_cur->bus,(char*)&IEET1B_cur->gen_id,&IEET1B_cur->Tr,&IEET1B_cur->Vsmax,&IEET1B_cur->Vsmin,&IEET1B_cur->Ka,&IEET1B_cur->Ta1,&IEET1B_cur->Vrmax,&IEET1B_cur->Vrmin,&IEET1B_cur->Ta2,&IEET1B_cur->Kf1,&IEET1B_cur->Tf1,&IEET1B_cur->Ke,&IEET1B_cur->Te,&IEET1B_cur->E1,&IEET1B_cur->SeE1,&IEET1B_cur->E2,&IEET1B_cur->SeE2,&IEET1B_cur->Xe);
    if(IEET1B_pre!=NULL) IEET1B_pre->next=IEET1B_cur;
    IEET1B_cur->next=NULL;
    IEET1B_pre=IEET1B_cur;
    if(IEET1B_head==NULL) IEET1B_head=IEET1B_cur;
  }/*end if*/


  /* IEET5A MODEL*/
  if(strstr(line,"IEET5A")!=NULL){
    ierr = PetscMalloc(sizeof(IEET5A_node),&(IEET5A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEET5A_cur->bus,(char*)&IEET5A_cur->gen_id,&IEET5A_cur->Ka,&IEET5A_cur->Trh,&IEET5A_cur->Kv,&IEET5A_cur->Vrmax,&IEET5A_cur->Vrmin,&IEET5A_cur->Te,&IEET5A_cur->Ke,&IEET5A_cur->E1,&IEET5A_cur->SeE1,&IEET5A_cur->E2,&IEET5A_cur->SeE2,&IEET5A_cur->EFDmax,&IEET5A_cur->EFDmin);
    if(IEET5A_pre!=NULL) IEET5A_pre->next=IEET5A_cur;
    IEET5A_cur->next=NULL;
    IEET5A_pre=IEET5A_cur;
    if(IEET5A_head==NULL) IEET5A_head=IEET5A_cur;
  }/*end if*/


  /* IEEX2A MODEL*/
  if(strstr(line,"IEEX2A")!=NULL){
    ierr = PetscMalloc(sizeof(IEEX2A_node),&(IEEX2A_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format, &IEEX2A_cur->bus,(char*)&IEEX2A_cur->gen_id,&IEEX2A_cur->Tr,&IEEX2A_cur->Ka,&IEEX2A_cur->Ta,&IEEX2A_cur->Tb,&IEEX2A_cur->Tc,&IEEX2A_cur->Vrmax,&IEEX2A_cur->Vrmin,&IEEX2A_cur->Ke,&IEEX2A_cur->Te,&IEEX2A_cur->Kf,&IEEX2A_cur->Tf1,&IEEX2A_cur->E1,&IEEX2A_cur->SeE1,&IEEX2A_cur->E2,&IEEX2A_cur->SeE2);
    if(IEEX2A_pre!=NULL) IEEX2A_pre->next=IEEX2A_cur;
    IEEX2A_cur->next=NULL;
    IEEX2A_pre=IEEX2A_cur;
    if(IEEX2A_head==NULL) IEEX2A_head=IEEX2A_cur;
  }/*end if*/


  /* SCRX MODEL */
  if(strstr(line,"SCRX")!=NULL){
    ierr = PetscMalloc(sizeof(SCRX_node),&(SCRX_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&SCRX_cur->bus,(char*)&SCRX_cur->gen_id,&SCRX_cur->Tab,&SCRX_cur->Tb,&SCRX_cur->K,&SCRX_cur->Te,&SCRX_cur->Emin,&SCRX_cur->Emax,&SCRX_cur->Cswitch,&SCRX_cur->rcfd);
    if(SCRX_pre!=NULL) SCRX_pre->next=SCRX_cur;
    SCRX_cur->next=NULL;
    SCRX_pre=SCRX_cur;
    if(SCRX_head==NULL) SCRX_head=SCRX_cur;
  }/*end if*/

  /* SEXS MODEL */
  if(strstr(line,"SEXS")!=NULL){
    ierr = PetscMalloc(sizeof(SEXS_node),&(SEXS_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&SEXS_cur->bus,(char*)&SEXS_cur->gen_id,&SEXS_cur->Tab,&SEXS_cur->Tb,&SEXS_cur->K,&SEXS_cur->Te,&SEXS_cur->Emin,&SEXS_cur->Emax);
    if(SEXS_pre!=NULL) SEXS_pre->next=SEXS_cur;
    SEXS_cur->next=NULL;
    SEXS_pre=SEXS_cur;
    if(SEXS_head==NULL) SEXS_head=SEXS_cur;
  }/*end if*/


  /* URST5T MODEL */
  if(strstr(line,"URST5T")!=NULL){
    ierr = PetscMalloc(sizeof(URST5T_node),&(URST5T_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&URST5T_cur->bus,(char*)&URST5T_cur->gen_id,&URST5T_cur->Tr,&URST5T_cur->Tc1,&URST5T_cur->Tb1,&URST5T_cur->Tc2,&URST5T_cur->Tb2,&URST5T_cur->Kr,&URST5T_cur->Vrmax,&URST5T_cur->Vrmin,&URST5T_cur->T1,&URST5T_cur->Kc);
    if(URST5T_pre!=NULL) URST5T_pre->next=URST5T_cur;
    URST5T_cur->next=NULL;
    URST5T_pre=URST5T_cur;
    if(URST5T_head==NULL) URST5T_head=URST5T_cur;
  }/*end if*/


  /* BBSEX1 MODEL */
  if(strstr(line,"BBSEX1")!=NULL){
    ierr = PetscMalloc(sizeof(BBSEX1_node),&(BBSEX1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%d",MAX_ID_LENGTH); 
    sscanf(line,data_format,&BBSEX1_cur->bus,(char*)&BBSEX1_cur->gen_id,&BBSEX1_cur->Tf,&BBSEX1_cur->K,&BBSEX1_cur->T1,&BBSEX1_cur->T2,&BBSEX1_cur->T3,&BBSEX1_cur->T4,&BBSEX1_cur->Vrmax,&BBSEX1_cur->Vrmin,&BBSEX1_cur->EFDmax,&BBSEX1_cur->EFDmin,&BBSEX1_cur->swich);
    if(BBSEX1_pre!=NULL) BBSEX1_pre->next=BBSEX1_cur;
    BBSEX1_cur->next=NULL;
    BBSEX1_pre=BBSEX1_cur;
    if(BBSEX1_head==NULL) BBSEX1_head=BBSEX1_cur;
  }/*end if*/

  /* BUDCZT MODEL */
  if(strstr(line,"BUDCZT")!=NULL){
    ierr = PetscMalloc(sizeof(BUDCZT_node),&(BUDCZT_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&BUDCZT_cur->bus,(char*)&BUDCZT_cur->gen_id,&BUDCZT_cur->Kp,&BUDCZT_cur->Ka,&BUDCZT_cur->Ke,&BUDCZT_cur->Tr,&BUDCZT_cur->Ti,&BUDCZT_cur->Ta,&BUDCZT_cur->Te,&BUDCZT_cur->Urmax,&BUDCZT_cur->Urmin,&BUDCZT_cur->EFDmax,&BUDCZT_cur->EFDmin);
    if(BUDCZT_pre!=NULL) BUDCZT_pre->next=BUDCZT_cur;
    BUDCZT_cur->next=NULL;
    BUDCZT_pre=BUDCZT_cur;
    if(BUDCZT_head==NULL) BUDCZT_head=BUDCZT_cur;
  }/*end if*/

  /* CELIN MODEL */
  if(strstr(line,"CELIN")!=NULL){
    ierr = PetscMalloc(sizeof(CELIN_node),&(CELIN_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&CELIN_cur->bus,(char*)&CELIN_cur->gen_id,&CELIN_cur->Tr1,&CELIN_cur->Tr2,&CELIN_cur->alpha,&CELIN_cur->beta,&CELIN_cur->Te2,&CELIN_cur->EFD,&CELIN_cur->Ke2,&CELIN_cur->Tr4,&CELIN_cur->T1,&CELIN_cur->T2,&CELIN_cur->T3,&CELIN_cur->T4,&CELIN_cur->T5,&CELIN_cur->T6,&CELIN_cur->K1,&CELIN_cur->K2,&CELIN_cur->p_PSS,&CELIN_cur->a_PSS,&CELIN_cur->Psslim,&CELIN_cur->K1_2,&CELIN_cur->kiec,&CELIN_cur->kd1,&CELIN_cur->Tb1,&CELIN_cur->T11,&CELIN_cur->limmax_pid1,&CELIN_cur->limmin_pid1,&CELIN_cur->K2_2,&CELIN_cur->Upp,&CELIN_cur->Upm,&CELIN_cur->K3,&CELIN_cur->T13,&CELIN_cur->K4,&CELIN_cur->T14,&CELIN_cur->Ketb,&CELIN_cur->Te,&CELIN_cur->Xp,&CELIN_cur->IEFmax1,&CELIN_cur->IEFmax2,&CELIN_cur->IEFmin,&CELIN_cur->E1,&CELIN_cur->SeE1,&CELIN_cur->E2,&CELIN_cur->SeE2);
    if(CELIN_pre!=NULL) CELIN_pre->next=CELIN_cur;
    CELIN_cur->next=NULL;
    CELIN_pre=CELIN_cur;
    if(CELIN_head==NULL) CELIN_head=CELIN_cur;
  }/*end if*/


  /* EMAC1T MODEL */
  if(strstr(line,"EMAC1T")!=NULL){
    ierr = PetscMalloc(sizeof(EMAC1T_node),&(EMAC1T_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EMAC1T_cur->bus,(char*)&EMAC1T_cur->gen_id,&EMAC1T_cur->Tr,&EMAC1T_cur->T4,&EMAC1T_cur->T3,&EMAC1T_cur->Ka,&EMAC1T_cur->Ta,&EMAC1T_cur->Vrmax,&EMAC1T_cur->Vrmin,&EMAC1T_cur->Te,&EMAC1T_cur->Kf,&EMAC1T_cur->Tf,&EMAC1T_cur->Kc,&EMAC1T_cur->Kd,&EMAC1T_cur->Ke,&EMAC1T_cur->E1,&EMAC1T_cur->SeE1,&EMAC1T_cur->E2,&EMAC1T_cur->SeE2,&EMAC1T_cur->T6,&EMAC1T_cur->T5,&EMAC1T_cur->T2,&EMAC1T_cur->T1,&EMAC1T_cur->Kfe,&EMAC1T_cur->Tfe);
    if(EMAC1T_pre!=NULL) EMAC1T_pre->next=EMAC1T_cur;
    EMAC1T_cur->next=NULL;
    EMAC1T_pre=EMAC1T_cur;
    if(EMAC1T_head==NULL) EMAC1T_head=EMAC1T_cur;
  }/*end if*/

  /* ESURRY MODEL */
  if(strstr(line,"ESURRY")!=NULL){
    ierr = PetscMalloc(sizeof(ESURRY_node),&(ESURRY_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&ESURRY_cur->bus,(char*)&ESURRY_cur->gen_id,&ESURRY_cur->Tr,&ESURRY_cur->Ta,&ESURRY_cur->Tb,&ESURRY_cur->Tc,&ESURRY_cur->Td,&ESURRY_cur->K10,&ESURRY_cur->T1,&ESURRY_cur->K16,&ESURRY_cur->Kf,&ESURRY_cur->Tf,&ESURRY_cur->Vrmax,&ESURRY_cur->Vrmin,&ESURRY_cur->Te,&ESURRY_cur->E1,&ESURRY_cur->SeE1,&ESURRY_cur->E2,&ESURRY_cur->SeE2,&ESURRY_cur->Kc,&ESURRY_cur->Kd,&ESURRY_cur->Ke);
    if(ESURRY_pre!=NULL) ESURRY_pre->next=ESURRY_cur;
    ESURRY_cur->next=NULL;
    ESURRY_pre=ESURRY_cur;
    if(ESURRY_head==NULL) ESURRY_head=ESURRY_cur;
  }/*end if*/


  /* EXNEBB MODEL */
  if(strstr(line,"EXNEBB")!=NULL){
    ierr = PetscMalloc(sizeof(EXNEBB_node),&(EXNEBB_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%d",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXNEBB_cur->bus,(char*)&EXNEBB_cur->gen_id,&EXNEBB_cur->Tr,&EXNEBB_cur->K1,&EXNEBB_cur->T11,&EXNEBB_cur->T12,&EXNEBB_cur->T13,&EXNEBB_cur->K2,&EXNEBB_cur->T21,&EXNEBB_cur->T22,&EXNEBB_cur->T23,&EXNEBB_cur->Vrmax,&EXNEBB_cur->Vrmin,&EXNEBB_cur->Ifmax,&EXNEBB_cur->Ifmin,&EXNEBB_cur->flag);
    if(EXNEBB_pre!=NULL) EXNEBB_pre->next=EXNEBB_cur;
    EXNEBB_cur->next=NULL;
    EXNEBB_pre=EXNEBB_cur;
    if(EXNEBB_head==NULL) EXNEBB_head=EXNEBB_cur;
  }/*end if*/


  /* EXNI MODEL */
  if(strstr(line,"EXNI")!=NULL){
    ierr = PetscMalloc(sizeof(EXNI_node),&(EXNI_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%d %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&EXNI_cur->bus,(char*)&EXNI_cur->gen_id,&EXNI_cur->Tr,&EXNI_cur->Ka,&EXNI_cur->Ta,&EXNI_cur->Vrmax,&EXNI_cur->Vrmin,&EXNI_cur->Tf1,&EXNI_cur->Tf2,&EXNI_cur->swich,&EXNI_cur->R);
    if(EXNI_pre!=NULL) EXNI_pre->next=EXNI_cur;
    EXNI_cur->next=NULL;
    EXNI_pre=EXNI_cur;
    if(EXNI_head==NULL) EXNI_head=EXNI_cur;
  }/*end if*/

  /* IVOEX MODEL */
  if(strstr(line,"IVOEX")!=NULL){
    ierr = PetscMalloc(sizeof(IVOEX_node),&(IVOEX_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&IVOEX_cur->bus,(char*)&IVOEX_cur->gen_id,&IVOEX_cur->K1,&IVOEX_cur->A1,&IVOEX_cur->A2,&IVOEX_cur->T1,&IVOEX_cur->T2,&IVOEX_cur->MAX1,&IVOEX_cur->MIN1,&IVOEX_cur->K3,&IVOEX_cur->A3,&IVOEX_cur->A4,&IVOEX_cur->T3,&IVOEX_cur->T4,&IVOEX_cur->MAX3,&IVOEX_cur->MIN3,&IVOEX_cur->K5,&IVOEX_cur->A5,&IVOEX_cur->A6,&IVOEX_cur->T5,&IVOEX_cur->T6,&IVOEX_cur->MAX5,&IVOEX_cur->MIN5);
    if(IVOEX_pre!=NULL) IVOEX_pre->next=IVOEX_cur;
    IVOEX_cur->next=NULL;
    IVOEX_pre=IVOEX_cur;
    if(IVOEX_head==NULL) IVOEX_head=IVOEX_cur;
  }/*end if*/


  /* OEX12T MODEL */
  if(strstr(line,"OEX12T")!=NULL){
    ierr = PetscMalloc(sizeof(OEX12T_node),&(OEX12T_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&OEX12T_cur->bus,(char*)&OEX12T_cur->gen_id,&OEX12T_cur->Tr,&OEX12T_cur->Vimax,&OEX12T_cur->Vimin,&OEX12T_cur->Tc,&OEX12T_cur->Tb,&OEX12T_cur->Ka,&OEX12T_cur->Ta,&OEX12T_cur->Vrmax,&OEX12T_cur->Vrmin,&OEX12T_cur->Kc,&OEX12T_cur->Kf,&OEX12T_cur->Tf,&OEX12T_cur->Etmin,&OEX12T_cur->Vtmax,&OEX12T_cur->Vtmin,&OEX12T_cur->limout,&OEX12T_cur->acon,&OEX12T_cur->bcon,&OEX12T_cur->Vemax,&OEX12T_cur->Vemin,&OEX12T_cur->Iflmt,&OEX12T_cur->Kifl,&OEX12T_cur->Etlmt,&OEX12T_cur->Ketl,&OEX12T_cur->Tl1,&OEX12T_cur->Tl2,&OEX12T_cur->Vomx,&OEX12T_cur->Vomn);
    if(OEX12T_pre!=NULL) OEX12T_pre->next=OEX12T_cur;
    OEX12T_cur->next=NULL;
    OEX12T_pre=OEX12T_cur;
    if(OEX12T_head==NULL) OEX12T_head=OEX12T_cur;
  }/*end if*/

  /* OEX3T MODEL */
  if(strstr(line,"OEX3T")!=NULL){
    ierr = PetscMalloc(sizeof(OEX3T_node),&(OEX3T_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&OEX3T_cur->bus,(char*)&OEX3T_cur->gen_id,&OEX3T_cur->Tr,&OEX3T_cur->T1,&OEX3T_cur->T2,&OEX3T_cur->T3,&OEX3T_cur->T4,&OEX3T_cur->Ka,&OEX3T_cur->T5,&OEX3T_cur->T6,&OEX3T_cur->Vrmax,&OEX3T_cur->Vrmin,&OEX3T_cur->Te,&OEX3T_cur->Kf,&OEX3T_cur->Tf,&OEX3T_cur->Kc,&OEX3T_cur->Kd,&OEX3T_cur->Ke,&OEX3T_cur->E1,&OEX3T_cur->SeE1,&OEX3T_cur->E2,&OEX3T_cur->SeE2);
    if(OEX3T_pre!=NULL) OEX3T_pre->next=OEX3T_cur;
    OEX3T_cur->next=NULL;
    OEX3T_pre=OEX3T_cur;
    if(OEX3T_head==NULL) OEX3T_head=OEX3T_cur;
  }/*end if*/


  /* REXSYS MODEL */
  if(strstr(line,"REXSYS")!=NULL){
    ierr = PetscMalloc(sizeof(REXSYS_node),&(REXSYS_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&REXSYS_cur->bus,(char*)&REXSYS_cur->gen_id,&REXSYS_cur->Tr,&REXSYS_cur->Kvp,&REXSYS_cur->Kvi,&REXSYS_cur->Vimax,&REXSYS_cur->Ta,&REXSYS_cur->Tb1,&REXSYS_cur->Tc1,&REXSYS_cur->Tb2,&REXSYS_cur->Tc2,&REXSYS_cur->Vrmax,&REXSYS_cur->Vrmin,&REXSYS_cur->Kf,&REXSYS_cur->Tf,&REXSYS_cur->Tf1,&REXSYS_cur->Tf2,&REXSYS_cur->Fbf,&REXSYS_cur->Kip,&REXSYS_cur->Kii,&REXSYS_cur->Tp,&REXSYS_cur->Vfmax,&REXSYS_cur->Vfmin,&REXSYS_cur->Kh,&REXSYS_cur->Ke,&REXSYS_cur->Te,&REXSYS_cur->Kc,&REXSYS_cur->Kd,&REXSYS_cur->E1,&REXSYS_cur->SeE1,&REXSYS_cur->E2,&REXSYS_cur->SeE2);
    if(REXSYS_pre!=NULL) REXSYS_pre->next=REXSYS_cur;
    REXSYS_cur->next=NULL;
    REXSYS_pre=REXSYS_cur;
    if(REXSYS_head==NULL) REXSYS_head=REXSYS_cur;
  }/*end if*/


  /* REXSY1 MODEL */
  if(strstr(line,"REXSY1")!=NULL){
    ierr = PetscMalloc(sizeof(REXSY1_node),&(REXSY1_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&REXSY1_cur->bus,(char*)&REXSY1_cur->gen_id,&REXSY1_cur->Tr,&REXSY1_cur->Kvp,&REXSY1_cur->Kvi,&REXSY1_cur->Vimax,&REXSY1_cur->Ta,&REXSY1_cur->Tb1,&REXSY1_cur->Tc1,&REXSY1_cur->Tb2,&REXSY1_cur->Tc2,&REXSY1_cur->Vrmax,&REXSY1_cur->Vrmin,&REXSY1_cur->Kf,&REXSY1_cur->Tf,&REXSY1_cur->Tf1,&REXSY1_cur->Tf2,&REXSY1_cur->Fbf,&REXSY1_cur->Kip,&REXSY1_cur->Kii,&REXSY1_cur->Tp,&REXSY1_cur->Vfmax,&REXSY1_cur->Vfmin,&REXSY1_cur->Kh,&REXSY1_cur->Ke,&REXSY1_cur->Te,&REXSY1_cur->Kc,&REXSY1_cur->Kd,&REXSY1_cur->E1,&REXSY1_cur->SeE1,&REXSY1_cur->E2,&REXSY1_cur->SeE2,&REXSY1_cur->F1imf,&REXSY1_cur->Xc,&REXSY1_cur->Vcmax);
    if(REXSY1_pre!=NULL) REXSY1_pre->next=REXSY1_cur;
    REXSY1_cur->next=NULL;
    REXSY1_pre=REXSY1_cur;
    if(REXSY1_head==NULL) REXSY1_head=REXSY1_cur;
  }/*end if*/


  /* URHIDT MODEL */
  if(strstr(line,"URHIDT")!=NULL){
    ierr = PetscMalloc(sizeof(URHIDT_node),&(URHIDT_cur));CHKERRQ(ierr);
    sprintf(data_format,"%%d %%*s %%%dc %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf %%lf",MAX_ID_LENGTH); 
    sscanf(line,data_format,&URHIDT_cur->bus,(char*)&URHIDT_cur->gen_id,&URHIDT_cur->Kdv,&URHIDT_cur->Tdv,&URHIDT_cur->Ki,&URHIDT_cur->Tdi,&URHIDT_cur->Tie,&URHIDT_cur->Kdi,&URHIDT_cur->Kd2i,&URHIDT_cur->Kdifd,&URHIDT_cur->Tdifd,&URHIDT_cur->Tr,&URHIDT_cur->Vimax,&URHIDT_cur->Vimin,&URHIDT_cur->Tb,&URHIDT_cur->Tc,&URHIDT_cur->Tbl,&URHIDT_cur->Tcl,&URHIDT_cur->Ta,&URHIDT_cur->Taw,&URHIDT_cur->Vamax,&URHIDT_cur->Vamin,&URHIDT_cur->a,&URHIDT_cur->Tb2,&URHIDT_cur->Kir,&URHIDT_cur->Ilr,&URHIDT_cur->Xe,&URHIDT_cur->Vlothrsh,&URHIDT_cur->Tlodelay,&URHIDT_cur->Taf,&URHIDT_cur->Vhithrsh,&URHIDT_cur->b);
    if(URHIDT_pre!=NULL) URHIDT_pre->next=URHIDT_cur;
    URHIDT_cur->next=NULL;
    URHIDT_pre=URHIDT_cur;
    if(URHIDT_head==NULL) URHIDT_head=URHIDT_cur;
  }/*end if*/

  PetscFunctionReturn(0);

}/* end fun parse_exc */



/****************************************************
  function store exciter model to defined struct
****************************************************/
/* Begin fun StoreExcModel */      
PetscErrorCode StoreExcModel(EXC_MODELS * exc_model,RAW_BUSDATA* busdata){
  PetscErrorCode ierr;
  PetscInt i=0;
  PetscFunctionBegin;

  /* store EXC1 */
  if(num_EXC1==0){
    ierr = PetscMalloc(sizeof(EXC1_MODEL),&(exc_model->EXC1));CHKERRQ(ierr);
    exc_model->EXC1->Nexc1=0;
   }else{
    ierr = PetscMalloc(sizeof(EXC1_MODEL),&(exc_model->EXC1));CHKERRQ(ierr);
    exc_model->EXC1->Nexc1=num_EXC1;
    ierr = PetscMalloc(num_EXC1*sizeof(PetscInt),&(exc_model->EXC1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXC1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->K_A));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->T_A));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->K_E));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->T_E));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->K_F));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->T_F));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->SE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXC1*sizeof(PetscScalar),&(exc_model->EXC1->SE2));CHKERRQ(ierr);
    for(i=0;i<num_EXC1;i++){
      exc_model->EXC1->bus[i]=get_bus_index(EXC1_head->bus, busdata->I, busdata->nbus);
      strncpy(&(exc_model->EXC1->gen_id[i*MAX_ID_LENGTH]), EXC1_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXC1->K_A[i]=EXC1_head->K_A;
      exc_model->EXC1->T_A[i]=EXC1_head->T_A;
      exc_model->EXC1->K_E[i]=EXC1_head->K_E;
      exc_model->EXC1->T_E[i]=EXC1_head->T_E;
      exc_model->EXC1->K_F[i]=EXC1_head->K_F;
      exc_model->EXC1->T_F[i]=EXC1_head->T_F;
      exc_model->EXC1->SE1[i]=EXC1_head->SE1;
      exc_model->EXC1->SE2[i]=EXC1_head->SE2;

      EXC1_node_ptr EXC1_tmp=EXC1_head->next;
      PetscFree(EXC1_head);
      EXC1_head=EXC1_tmp;
    }/* end for */
  }/* end if */

  /* store ESAC1A */
  if(num_ESAC1A==0){
    ierr = PetscMalloc(sizeof(ESAC1A_MODEL),&(exc_model->ESAC1A));CHKERRQ(ierr);
    exc_model->ESAC1A->Nesac1a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC1A_MODEL),&(exc_model->ESAC1A));CHKERRQ(ierr);
    exc_model->ESAC1A->Nesac1a=num_ESAC1A;
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC1A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscScalar),&(exc_model->ESAC1A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->VA_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC1A*sizeof(PetscInt),&(exc_model->ESAC1A->EFD_idx);CHKERRQ(ierr);
    for(i=0;i<num_ESAC1A;i++){
      exc_model->ESAC1A->bus[i]=get_bus_index(ESAC1A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC1A->gen_id[i * MAX_ID_LENGTH], ESAC1A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC1A->Tr[i]=ESAC1A_head->Tr;
      exc_model->ESAC1A->Tb[i]=ESAC1A_head->Tb;
      exc_model->ESAC1A->Tc[i]=ESAC1A_head->Tc;
      if(ESAC1A_head->Tb == 0 && ESAC1A_head->Tc!=0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC1A model at bus [%d] with ID of [%s] has parameters which Tb = 0 but Tc != 0\n",ESAC1A_head->bus, ESAC1A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC1A->Ka[i]=ESAC1A_head->Ka;
      exc_model->ESAC1A->Ta[i]=ESAC1A_head->Ta;
      if(FUNNYEXP2_head->TTT <= 0 ){
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The FUNNYEXP2 model at bus [%d] with ID of [%s] has parameter TTT <= 0 (should be TTT > 0)\n",FUNNYEXP2_head->bus, FUNNYEXP2_head->gen_id); CHKERRQ(ierr);
      }
      if(FUNNYEXP2_head->TTT <= 0 ){
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The FUNNYEXP2 model at bus [%d] with ID of [%s] has parameter TTT <= 0 (should be TTT > 0)
",FUNNYEXP2_head->bus, FUNNYEXP2_head->gen_id); CHKERRQ(ierr);
      }
      if(FUNNYEXP2_head->TTT <= 0 ){
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The FUNNYEXP2 model at bus [%d] with ID of [%s] has parameter TTT <= 0 (should be TTT > 0)/
",FUNNYEXP2_head->bus, FUNNYEXP2_head->gen_id); CHKERRQ(ierr);
      }
      if(FUNNYEXP2_head->TTT <= 0 ){
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The FUNNYEXP2 model at bus [%d] with ID of [%s] has parameter TTT <= 0 (should be TTT > 0)
",FUNNYEXP2_head->bus, FUNNYEXP2_head->gen_id); CHKERRQ(ierr);
      }
      if(FUNNYEXP2_head->TTT <= 0 ){
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The FUNNYEXP2 model at bus [%d] with ID of [%s] has parameter TTT <= 0 (should be TTT > 0)
",FUNNYEXP2_head->bus, FUNNYEXP2_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC1A->Vamax[i]=ESAC1A_head->Vamax;
      exc_model->ESAC1A->Vamin[i]=ESAC1A_head->Vamin;
      exc_model->ESAC1A->Te[i]=ESAC1A_head->Te;
      if(ESAC1A_head->Te <= 0 ){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC1A model at bus [%d] with ID of [%s] has parameter Te <= 0 (should be Te > 0)\n",ESAC1A_head->bus, ESAC1A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC1A->Kf[i]=ESAC1A_head->Kf;
      exc_model->ESAC1A->Tf[i]=ESAC1A_head->Tf;
      if(ESAC1A_head->Tf <= 0 ){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC1A model at bus [%d] with ID of [%s] has parameter Tf <= 0 (should be Tf > 0)\n",ESAC1A_head->bus, ESAC1A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC1A->Kc[i]=ESAC1A_head->Kc;
      exc_model->ESAC1A->Kd[i]=ESAC1A_head->Kd;
      exc_model->ESAC1A->Ke[i]=ESAC1A_head->Ke;
      exc_model->ESAC1A->E1[i]=ESAC1A_head->E1;
      exc_model->ESAC1A->SeE1[i]=ESAC1A_head->SeE1;
      exc_model->ESAC1A->E2[i]=ESAC1A_head->E2;
      exc_model->ESAC1A->SeE2[i]=ESAC1A_head->SeE2;
      exc_model->ESAC1A->Vrmax[i]=ESAC1A_head->Vrmax;
      exc_model->ESAC1A->Vrmin[i]=ESAC1A_head->Vrmin;

      ESAC1A_node_ptr ESAC1A_tmp=ESAC1A_head->next;
      PetscFree(ESAC1A_head);
      ESAC1A_head=ESAC1A_tmp;
    }/* end for */
  }/* end if */

  /* store ESAC2A */
  if(num_ESAC2A==0){
    ierr = PetscMalloc(sizeof(ESAC2A_MODEL),&(exc_model->ESAC2A));CHKERRQ(ierr);
    exc_model->ESAC2A->Nesac2a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC2A_MODEL),&(exc_model->ESAC2A));CHKERRQ(ierr);
    exc_model->ESAC2A->Nesac2a=num_ESAC2A;
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC2A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Kb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Vfemax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Kh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscScalar),&(exc_model->ESAC2A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->VA_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC2A*sizeof(PetscInt),&(exc_model->ESAC2A->EFD_idx);CHKERRQ(ierr);
    for(i=0;i<num_ESAC2A;i++){
      exc_model->ESAC2A->bus[i]=get_bus_index(ESAC2A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC2A->gen_id[i * MAX_ID_LENGTH], ESAC2A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC2A->Tr[i]=ESAC2A_head->Tr;
      exc_model->ESAC2A->Tb[i]=ESAC2A_head->Tb;
      exc_model->ESAC2A->Tc[i]=ESAC2A_head->Tc;
      if(ESAC2A_head->Tb == 0 && ESAC2A_head->Tc!=0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC2A model at bus [%d] with ID of [%s] has parameters Tb = 0 but Tc != 0\n",ESAC2A_head->bus, ESAC2A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC2A->Ka[i]=ESAC2A_head->Ka;
      exc_model->ESAC2A->Ta[i]=ESAC2A_head->Ta;
      exc_model->ESAC2A->Vamax[i]=ESAC2A_head->Vamax;
      exc_model->ESAC2A->Vamin[i]=ESAC2A_head->Vamin;
      exc_model->ESAC2A->Kb[i]=ESAC2A_head->Kb;
      exc_model->ESAC2A->Vrmax[i]=ESAC2A_head->Vrmax;
      exc_model->ESAC2A->Vrmin[i]=ESAC2A_head->Vrmin;
      exc_model->ESAC2A->Te[i]=ESAC2A_head->Te;
      if(ESAC2A_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC2A model at bus [%d] with ID of [%s] has parameter Te <=0 (should be Te > 0)\n",ESAC2A_head->bus, ESAC2A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC2A->Vfemax[i]=ESAC2A_head->Vfemax;
      exc_model->ESAC2A->Kh[i]=ESAC2A_head->Kh;
      exc_model->ESAC2A->Kf[i]=ESAC2A_head->Kf;
      exc_model->ESAC2A->Tf[i]=ESAC2A_head->Tf;
      if(ESAC2A_head->Tf <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC2A model at bus [%d] with ID of [%s] has parameter Tf <=0 (should be Tf > 0)\n",ESAC2A_head->bus, ESAC2A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC2A->Kc[i]=ESAC2A_head->Kc;
      exc_model->ESAC2A->Kd[i]=ESAC2A_head->Kd;
      exc_model->ESAC2A->Ke[i]=ESAC2A_head->Ke;
      exc_model->ESAC2A->E1[i]=ESAC2A_head->E1;
      exc_model->ESAC2A->SeE1[i]=ESAC2A_head->SeE1;
      exc_model->ESAC2A->E2[i]=ESAC2A_head->E2;
      exc_model->ESAC2A->SeE2[i]=ESAC2A_head->SeE2;

      ESAC2A_node_ptr ESAC2A_tmp=ESAC2A_head->next;
      PetscFree(ESAC2A_head);
      ESAC2A_head=ESAC2A_tmp;
    }/* end for */
  }/* end if */

  /* store ESAC3A */
  if(num_ESAC3A==0){
    ierr = PetscMalloc(sizeof(ESAC3A_MODEL),&(exc_model->ESAC3A));CHKERRQ(ierr);
    exc_model->ESAC3A->Nesac3a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC3A_MODEL),&(exc_model->ESAC3A));CHKERRQ(ierr);
    exc_model->ESAC3A->Nesac3a=num_ESAC3A;
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC3A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Vemin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Kr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Kn));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->EFDn));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->Vfemax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscScalar),&(exc_model->ESAC3A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->VA_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC3A*sizeof(PetscInt),&(exc_model->ESAC3A->EFD_idx);CHKERRQ(ierr);
    for(i=0;i<num_ESAC3A;i++){
      exc_model->ESAC3A->bus[i]=get_bus_index(ESAC3A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC3A->gen_id[i * MAX_ID_LENGTH], ESAC3A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC3A->Tr[i]=ESAC3A_head->Tr;
      exc_model->ESAC3A->Tb[i]=ESAC3A_head->Tb;
      exc_model->ESAC3A->Tc[i]=ESAC3A_head->Tc;
      if(ESAC3A_head->Tb == 0 && ESAC3A_head->Tc!=0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC3A model at bus [%d] with ID of [%s] has parameters Tb = 0 but Tc != 0\n",ESAC3A_head->bus, ESAC3A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC3A->Ka[i]=ESAC3A_head->Ka;
      exc_model->ESAC3A->Ta[i]=ESAC3A_head->Ta;
      exc_model->ESAC3A->Vamax[i]=ESAC3A_head->Vamax;
      exc_model->ESAC3A->Vamin[i]=ESAC3A_head->Vamin;
      exc_model->ESAC3A->Te[i]=ESAC3A_head->Te;
      if(ESAC3A_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC3A model at bus [%d] with ID of [%s] has parameter Te <= 0 (should be Te > 0)\n",ESAC3A_head->bus, ESAC3A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC3A->Vemin[i]=ESAC3A_head->Vemin;
      exc_model->ESAC3A->Kr[i]=ESAC3A_head->Kr;
      exc_model->ESAC3A->Kf[i]=ESAC3A_head->Kf;
      exc_model->ESAC3A->Tf[i]=ESAC3A_head->Tf;
      if(ESAC3A_head->Tf <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC3A model at bus [%d] with ID of [%s] has parameter Tf <= 0 (should be Te > 0)\n",ESAC3A_head->bus, ESAC3A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC3A->Kn[i]=ESAC3A_head->Kn;
      exc_model->ESAC3A->EFDn[i]=ESAC3A_head->EFDn;
      exc_model->ESAC3A->Kc[i]=ESAC3A_head->Kc;
      exc_model->ESAC3A->Kd[i]=ESAC3A_head->Kd;
      exc_model->ESAC3A->Ke[i]=ESAC3A_head->Ke;
      exc_model->ESAC3A->Vfemax[i]=ESAC3A_head->Vfemax;
      exc_model->ESAC3A->E1[i]=ESAC3A_head->E1;
      exc_model->ESAC3A->SeE1[i]=ESAC3A_head->SeE1;
      exc_model->ESAC3A->E2[i]=ESAC3A_head->E2;
      exc_model->ESAC3A->SeE2[i]=ESAC3A_head->SeE2;

      ESAC3A_node_ptr ESAC3A_tmp=ESAC3A_head->next;
      PetscFree(ESAC3A_head);
      ESAC3A_head=ESAC3A_tmp;
    }/* end for */
  }/* end if */

  /* store ESAC4A */
  if(num_ESAC4A==0){
    ierr = PetscMalloc(sizeof(ESAC4A_MODEL),&(exc_model->ESAC4A));CHKERRQ(ierr);
    exc_model->ESAC4A->Nesac4a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC4A_MODEL),&(exc_model->ESAC4A));CHKERRQ(ierr);
    exc_model->ESAC4A->Nesac4a=num_ESAC4A;
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscInt),&(exc_model->ESAC4A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC4A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC4A*sizeof(PetscScalar),&(exc_model->ESAC4A->Kc));CHKERRQ(ierr);
    for(i=0;i<num_ESAC4A;i++){
      exc_model->ESAC4A->bus[i]=get_bus_index(ESAC4A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC4A->gen_id[i * MAX_ID_LENGTH], ESAC4A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC4A->Tr[i]=ESAC4A_head->Tr;
      exc_model->ESAC4A->Vimax[i]=ESAC4A_head->Vimax;
      exc_model->ESAC4A->Vimin[i]=ESAC4A_head->Vimin;
      exc_model->ESAC4A->Tc[i]=ESAC4A_head->Tc;
      exc_model->ESAC4A->Tb[i]=ESAC4A_head->Tb;
      exc_model->ESAC4A->Ka[i]=ESAC4A_head->Ka;
      exc_model->ESAC4A->Ta[i]=ESAC4A_head->Ta;
      exc_model->ESAC4A->Vrmax[i]=ESAC4A_head->Vrmax;
      exc_model->ESAC4A->Vrmin[i]=ESAC4A_head->Vrmin;
      exc_model->ESAC4A->Kc[i]=ESAC4A_head->Kc;

      ESAC4A_node_ptr ESAC4A_tmp=ESAC4A_head->next;
      PetscFree(ESAC4A_head);
      ESAC4A_head=ESAC4A_tmp;
    }/* end for */
  }/* end if */

  /* store ESAC5A */
  if(num_ESAC5A==0){
    ierr = PetscMalloc(sizeof(ESAC5A_MODEL),&(exc_model->ESAC5A));CHKERRQ(ierr);
    exc_model->ESAC5A->Nesac5a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC5A_MODEL),&(exc_model->ESAC5A));CHKERRQ(ierr);
    exc_model->ESAC5A->Nesac5a=num_ESAC5A;
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC5A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->Tf3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscScalar),&(exc_model->ESAC5A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->VT_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->EFD_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC5A*sizeof(PetscInt),&(exc_model->ESAC5A->VF_idx));CHKERRQ(ierr);
    for(i=0;i<num_ESAC5A;i++){
      exc_model->ESAC5A->bus[i]=get_bus_index(ESAC5A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC5A->gen_id[i * MAX_ID_LENGTH], ESAC5A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC5A->Tr[i]=ESAC5A_head->Tr;
      exc_model->ESAC5A->Ka[i]=ESAC5A_head->Ka;
      exc_model->ESAC5A->Ta[i]=ESAC5A_head->Ta;
      exc_model->ESAC5A->Vrmax[i]=ESAC5A_head->Vrmax;
      exc_model->ESAC5A->Vrmin[i]=ESAC5A_head->Vrmin;
      exc_model->ESAC5A->Ke[i]=ESAC5A_head->Ke;
      exc_model->ESAC5A->Te[i]=ESAC5A_head->Te;
      if(ESAC5A_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC5A model at bus [%d] with ID of [%s] has parameter Te <= 0(should be Te > 0)\n",ESAC5A_head->bus, ESAC5A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC5A->Kf[i]=ESAC5A_head->Kf;
      exc_model->ESAC5A->Tf1[i]=ESAC5A_head->Tf1;
      if(ESAC5A_head->Tf1 <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC5A model at bus [%d] with ID of [%s] has parameter Tf1 <= 0(should be Tf1 > 0)\n",ESAC5A_head->bus, ESAC5A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC5A->Tf2[i]=ESAC5A_head->Tf2;
      exc_model->ESAC5A->Tf3[i]=ESAC5A_head->Tf3;
      if(ESAC5A_head->Tf2 == 0 && ESAC5A_head->Tf3 != 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC5A model at bus [%d] with ID of [%s] has parameters Tf2 = 0 but Tf3 != 0\n",ESAC5A_head->bus, ESAC5A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC5A->E1[i]=ESAC5A_head->E1;
      exc_model->ESAC5A->SeE1[i]=ESAC5A_head->SeE1;
      exc_model->ESAC5A->E2[i]=ESAC5A_head->E2;
      exc_model->ESAC5A->SeE2[i]=ESAC5A_head->SeE2;

      ESAC5A_node_ptr ESAC5A_tmp=ESAC5A_head->next;
      PetscFree(ESAC5A_head);
      ESAC5A_head=ESAC5A_tmp;
    }/* end for */
  }/* end if */


  /* store ESAC6A */
  if(num_ESAC6A==0){
    ierr = PetscMalloc(sizeof(ESAC6A_MODEL),&(exc_model->ESAC6A));CHKERRQ(ierr);
    exc_model->ESAC6A->Nesac6a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC6A_MODEL),&(exc_model->ESAC6A));CHKERRQ(ierr);
    exc_model->ESAC6A->Nesac6a=num_ESAC6A;
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC6A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Tk));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Vfelim));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Kh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Vhmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Th));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Tj));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscScalar),&(exc_model->ESAC6A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->V1b_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->EFD_idx));CHKERRQ(ierr);
    for(i=0;i<num_ESAC6A;i++){
      exc_model->ESAC6A->bus[i]=get_bus_index(ESAC6A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC6A->gen_id[i * MAX_ID_LENGTH], ESAC6A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC6A->Tr[i]=ESAC6A_head->Tr;
      exc_model->ESAC6A->Ka[i]=ESAC6A_head->Ka;
      exc_model->ESAC6A->Ta[i]=ESAC6A_head->Ta;
      exc_model->ESAC6A->Tk[i]=ESAC6A_head->Tk;
      exc_model->ESAC6A->Tb[i]=ESAC6A_head->Tb;
      exc_model->ESAC6A->Tc[i]=ESAC6A_head->Tc;
      if(ESAC6A_head->Tb == 0 && ESAC6A_head->Tc != 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC6A model at bus [%d] with ID of [%s] has parameters Tb = 0 but Tc != 0\n",ESAC6A_head->bus, ESAC6A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC6A->Vamax[i]=ESAC6A_head->Vamax;
      exc_model->ESAC6A->Vamin[i]=ESAC6A_head->Vamin;
      exc_model->ESAC6A->Vrmax[i]=ESAC6A_head->Vrmax;
      exc_model->ESAC6A->Te[i]=ESAC6A_head->Te;
      if(ESAC6A_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC6A model at bus [%d] with ID of [%s] has parameter Te <= 0(should be Te > 0)\n",ESAC6A_head->bus, ESAC6A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC6A->Vfelim[i]=ESAC6A_head->Vfelim;
      exc_model->ESAC6A->Kh[i]=ESAC6A_head->Kh;
      exc_model->ESAC6A->Vhmax[i]=ESAC6A_head->Vhmax;
      exc_model->ESAC6A->Th[i]=ESAC6A_head->Th;
      exc_model->ESAC6A->Tj[i]=ESAC6A_head->Tj;
      exc_model->ESAC6A->Kc[i]=ESAC6A_head->Kc;
      exc_model->ESAC6A->Kd[i]=ESAC6A_head->Kd;
      exc_model->ESAC6A->Ke[i]=ESAC6A_head->Ke;
      exc_model->ESAC6A->E1[i]=ESAC6A_head->E1;
      exc_model->ESAC6A->SeE1[i]=ESAC6A_head->SeE1;
      exc_model->ESAC6A->E2[i]=ESAC6A_head->E2;
      exc_model->ESAC6A->SeE2[i]=ESAC6A_head->SeE2;

      ESAC6A_node_ptr ESAC6A_tmp=ESAC6A_head->next;
      PetscFree(ESAC6A_head);
      ESAC6A_head=ESAC6A_tmp;
    }/* end for */
  }/* end if */


  /* store ESAC8B */
  if(num_ESAC8B==0){
    ierr = PetscMalloc(sizeof(ESAC8B_MODEL),&(exc_model->ESAC8B));CHKERRQ(ierr);
    exc_model->ESAC8B->Nesac8b=0;
   }else{
    ierr = PetscMalloc(sizeof(ESAC8B_MODEL),&(exc_model->ESAC8B));CHKERRQ(ierr);
    exc_model->ESAC8B->Nesac8b=num_ESAC8B;
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscInt),&(exc_model->ESAC8B->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESAC8B->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Td));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC8B*sizeof(PetscScalar),&(exc_model->ESAC8B->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VT_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VIC_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VDC_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESAC6A*sizeof(PetscInt),&(exc_model->ESAC6A->EFD_idx));CHKERRQ(ierr);
    for(i=0;i<num_ESAC8B;i++){
      exc_model->ESAC8B->bus[i]=get_bus_index(ESAC8B_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESAC8B->gen_id[i * MAX_ID_LENGTH], ESAC8B_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESAC8B->Tr[i]=ESAC8B_head->Tr;
      exc_model->ESAC8B->Kp[i]=ESAC8B_head->Kp;
      exc_model->ESAC8B->Ki[i]=ESAC8B_head->Ki;
      exc_model->ESAC8B->Kd[i]=ESAC8B_head->Kd;
      exc_model->ESAC8B->Td[i]=ESAC8B_head->Td;
      exc_model->ESAC8B->Ka[i]=ESAC8B_head->Ka;
      exc_model->ESAC8B->Ta[i]=ESAC8B_head->Ta;
      exc_model->ESAC8B->Vrmax[i]=ESAC8B_head->Vrmax;
      exc_model->ESAC8B->Vrmin[i]=ESAC8B_head->Vrmin;
      exc_model->ESAC8B->Te[i]=ESAC8B_head->Te;
      if(ESAC8B_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESAC8B model at bus [%d] with ID of [%s] has parameter Te <= 0(should be Te > 0)\n",ESAC8B_head->bus, ESAC8B_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESAC8B->Ke[i]=ESAC8B_head->Ke;
      exc_model->ESAC8B->E1[i]=ESAC8B_head->E1;
      exc_model->ESAC8B->SeE1[i]=ESAC8B_head->SeE1;
      exc_model->ESAC8B->E2[i]=ESAC8B_head->E2;
      exc_model->ESAC8B->SeE2[i]=ESAC8B_head->SeE2;

      ESAC8B_node_ptr ESAC8B_tmp=ESAC8B_head->next;
      PetscFree(ESAC8B_head);
      ESAC8B_head=ESAC8B_tmp;
    }/* end for */
  }/* end if */

  /* store ESDC1A */
  if(num_ESDC1A==0){
    ierr = PetscMalloc(sizeof(ESDC1A_MODEL),&(exc_model->ESDC1A));CHKERRQ(ierr);
    exc_model->ESDC1A->Nesdc1a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESDC1A_MODEL),&(exc_model->ESDC1A));CHKERRQ(ierr);
    exc_model->ESDC1A->Nesdc1a=num_ESDC1A;
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESDC1A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscScalar),&(exc_model->ESDC1A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->VC_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->EFD_idx);CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC1A*sizeof(PetscInt),&(exc_model->ESDC1A->VF_idx));CHKERRQ(ierr);
    for(i=0;i<num_ESDC1A;i++){
      exc_model->ESDC1A->bus[i]=get_bus_index(ESDC1A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESDC1A->gen_id[i * MAX_ID_LENGTH], ESDC1A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESDC1A->Tr[i]=ESDC1A_head->Tr;
      exc_model->ESDC1A->Ka[i]=ESDC1A_head->Ka;
      exc_model->ESDC1A->Ta[i]=ESDC1A_head->Ta;
      exc_model->ESDC1A->Tb[i]=ESDC1A_head->Tb;
      exc_model->ESDC1A->Tc[i]=ESDC1A_head->Tc; 
      if(ESDC1A_head->Tb == 0 && ESDC1A_head->Tc!=0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESDC1A model at bus [%d] with ID of [%s] has parameters which Tb is zero but Tc is non-zero\n",ESDC1A_head->bus, ESDC1A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESDC1A->Vrmax[i]=ESDC1A_head->Vrmax;
      exc_model->ESDC1A->Vrmin[i]=ESDC1A_head->Vrmin;
      exc_model->ESDC1A->Ke[i]=ESDC1A_head->Ke;
      exc_model->ESDC1A->Te[i]=ESDC1A_head->Te;
      exc_model->ESDC1A->Kf[i]=ESDC1A_head->Kf;
      exc_model->ESDC1A->Tf1[i]=ESDC1A_head->Tf1;
      exc_model->ESDC1A->E1[i]=ESDC1A_head->E1;
      exc_model->ESDC1A->SeE1[i]=ESDC1A_head->SeE1;
      exc_model->ESDC1A->E2[i]=ESDC1A_head->E2;
      exc_model->ESDC1A->SeE2[i]=ESDC1A_head->SeE2;
      
      ESDC1A_node_ptr ESDC1A_tmp=ESDC1A_head->next;
      PetscFree(ESDC1A_head);
      ESDC1A_head=ESDC1A_tmp;
    }/*end for*/
  }/* end if */


  /* store ESDC2A */
  if(num_ESDC2A==0){
    ierr = PetscMalloc(sizeof(ESDC2A_MODEL),&(exc_model->ESDC2A));CHKERRQ(ierr);
    exc_model->ESDC2A->Nesdc2a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESDC2A_MODEL),&(exc_model->ESDC2A));CHKERRQ(ierr);
    exc_model->ESDC2A->Nesdc2a=num_ESDC2A;
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESDC2A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscScalar),&(exc_model->ESDC2A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->VC_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->EFD_idx);CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESDC2A*sizeof(PetscInt),&(exc_model->ESDC2A->VF_idx));CHKERRQ(ierr);
    for(i=0;i<num_ESDC2A;i++){
      exc_model->ESDC2A->bus[i]=get_bus_index(ESDC2A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESDC2A->gen_id[i * MAX_ID_LENGTH], ESDC2A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESDC2A->Tr[i]=ESDC2A_head->Tr;
      exc_model->ESDC2A->Ka[i]=ESDC2A_head->Ka;
      exc_model->ESDC2A->Ta[i]=ESDC2A_head->Ta;
      exc_model->ESDC2A->Tb[i]=ESDC2A_head->Tb;
      exc_model->ESDC2A->Tc[i]=ESDC2A_head->Tc;
      if(ESDC2A_head->Tb == 0 && ESDC2A_head->Tc!=0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The ESDC2A model at bus [%d] with ID of [%s] has parameters which Tb is zero but Tc is non-zero\n",ESDC2A_head->bus, ESDC2A_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->ESDC2A->Vrmax[i]=ESDC2A_head->Vrmax;
      exc_model->ESDC2A->Vrmin[i]=ESDC2A_head->Vrmin;
      exc_model->ESDC2A->Ke[i]=ESDC2A_head->Ke;
      exc_model->ESDC2A->Te[i]=ESDC2A_head->Te;
      exc_model->ESDC2A->Kf[i]=ESDC2A_head->Kf;
      exc_model->ESDC2A->Tf1[i]=ESDC2A_head->Tf1;
      exc_model->ESDC2A->E1[i]=ESDC2A_head->E1;
      exc_model->ESDC2A->SeE1[i]=ESDC2A_head->SeE1;
      exc_model->ESDC2A->E2[i]=ESDC2A_head->E2;
      exc_model->ESDC2A->SeE2[i]=ESDC2A_head->SeE2;

      ESDC2A_node_ptr ESDC2A_tmp=ESDC2A_head->next;
      PetscFree(ESDC2A_head);
      ESDC2A_head=ESDC2A_tmp;
    }/* end for */
  }/* end if */


  /* store ESST1A */
  if(num_ESST1A==0){
    ierr = PetscMalloc(sizeof(ESST1A_MODEL),&(exc_model->ESST1A));CHKERRQ(ierr);
    exc_model->ESST1A->Nesst1a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESST1A_MODEL),&(exc_model->ESST1A));CHKERRQ(ierr);
    exc_model->ESST1A->Nesst1a=num_ESST1A;
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscInt),&(exc_model->ESST1A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESST1A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscInt),&(exc_model->ESST1A->UEL));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscInt),&(exc_model->ESST1A->VOS));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tc1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tb1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Klr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST1A*sizeof(PetscScalar),&(exc_model->ESST1A->Ilr));CHKERRQ(ierr);
    for(i=0;i<num_ESST1A;i++){
      exc_model->ESST1A->bus[i]=get_bus_index(ESST1A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESST1A->gen_id[i * MAX_ID_LENGTH], ESST1A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESST1A->UEL[i]=ESST1A_head->UEL;
      exc_model->ESST1A->VOS[i]=ESST1A_head->VOS;
      exc_model->ESST1A->Tr[i]=ESST1A_head->Tr;
      exc_model->ESST1A->Vimax[i]=ESST1A_head->Vimax;
      exc_model->ESST1A->Vimin[i]=ESST1A_head->Vimin;
      exc_model->ESST1A->Tc[i]=ESST1A_head->Tc;
      exc_model->ESST1A->Tb[i]=ESST1A_head->Tb;
      exc_model->ESST1A->Tc1[i]=ESST1A_head->Tc1;
      exc_model->ESST1A->Tb1[i]=ESST1A_head->Tb1;
      exc_model->ESST1A->Ka[i]=ESST1A_head->Ka;
      exc_model->ESST1A->Ta[i]=ESST1A_head->Ta;
      exc_model->ESST1A->Vamax[i]=ESST1A_head->Vamax;
      exc_model->ESST1A->Vamin[i]=ESST1A_head->Vamin;
      exc_model->ESST1A->Vrmax[i]=ESST1A_head->Vrmax;
      exc_model->ESST1A->Vrmin[i]=ESST1A_head->Vrmin;
      exc_model->ESST1A->Kc[i]=ESST1A_head->Kc;
      exc_model->ESST1A->Kf[i]=ESST1A_head->Kf;
      exc_model->ESST1A->Tf[i]=ESST1A_head->Tf;
      exc_model->ESST1A->Klr[i]=ESST1A_head->Klr;
      exc_model->ESST1A->Ilr[i]=ESST1A_head->Ilr;
      ESST1A_node_ptr ESST1A_tmp=ESST1A_head->next;
      PetscFree(ESST1A_head);
      ESST1A_head=ESST1A_tmp;
    }/* end for */
  }/* end if */

  /* store ESST2A */
  if(num_ESST2A==0){
    ierr = PetscMalloc(sizeof(ESST2A_MODEL),&(exc_model->ESST2A));CHKERRQ(ierr);
    exc_model->ESST2A->Nesst2a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESST2A_MODEL),&(exc_model->ESST2A));CHKERRQ(ierr);
    exc_model->ESST2A->Nesst2a=num_ESST2A;
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscInt),&(exc_model->ESST2A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESST2A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST2A*sizeof(PetscScalar),&(exc_model->ESST2A->EFDmax));CHKERRQ(ierr);
    for(i=0;i<num_ESST2A;i++){
      exc_model->ESST2A->bus[i]=get_bus_index(ESST2A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESST2A->gen_id[i * MAX_ID_LENGTH], ESST2A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESST2A->Tr[i]=ESST2A_head->Tr;
      exc_model->ESST2A->Ka[i]=ESST2A_head->Ka;
      exc_model->ESST2A->Ta[i]=ESST2A_head->Ta;
      exc_model->ESST2A->Vrmax[i]=ESST2A_head->Vrmax;
      exc_model->ESST2A->Vrmin[i]=ESST2A_head->Vrmin;
      exc_model->ESST2A->Ke[i]=ESST2A_head->Ke;
      exc_model->ESST2A->Te[i]=ESST2A_head->Te;
      exc_model->ESST2A->Kf[i]=ESST2A_head->Kf;
      exc_model->ESST2A->Tf[i]=ESST2A_head->Tf;
      exc_model->ESST2A->Kp[i]=ESST2A_head->Kp;
      exc_model->ESST2A->Ki[i]=ESST2A_head->Ki;
      exc_model->ESST2A->Kc[i]=ESST2A_head->Kc;
      exc_model->ESST2A->EFDmax[i]=ESST2A_head->EFDmax;
      ESST2A_node_ptr ESST2A_tmp=ESST2A_head->next;
      PetscFree(ESST2A_head);
      ESST2A_head=ESST2A_tmp;
    }/* end for */
  }/* end if */

  /* store ESST3A */
  if(num_ESST3A==0){
    ierr = PetscMalloc(sizeof(ESST3A_MODEL),&(exc_model->ESST3A));CHKERRQ(ierr);
    exc_model->ESST3A->Nesst3a=0;
   }else{
    ierr = PetscMalloc(sizeof(ESST3A_MODEL),&(exc_model->ESST3A));CHKERRQ(ierr);
    exc_model->ESST3A->Nesst3a=num_ESST3A;
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscInt),&(exc_model->ESST3A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESST3A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Km));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Kg));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vbmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Xl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vgmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Op));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Tm));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vmmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST3A*sizeof(PetscScalar),&(exc_model->ESST3A->Vmmin));CHKERRQ(ierr);
    for(i=0;i<num_ESST3A;i++){
      exc_model->ESST3A->bus[i]=get_bus_index(ESST3A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESST3A->gen_id[i * MAX_ID_LENGTH], ESST3A_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESST3A->Tr[i]=ESST3A_head->Tr;
      exc_model->ESST3A->Vimax[i]=ESST3A_head->Vimax;
      exc_model->ESST3A->Vimin[i]=ESST3A_head->Vimin;
      exc_model->ESST3A->Km[i]=ESST3A_head->Km;
      exc_model->ESST3A->Tc[i]=ESST3A_head->Tc;
      exc_model->ESST3A->Tb[i]=ESST3A_head->Tb;
      exc_model->ESST3A->Ka[i]=ESST3A_head->Ka;
      exc_model->ESST3A->Ta[i]=ESST3A_head->Ta;
      exc_model->ESST3A->Vrmax[i]=ESST3A_head->Vrmax;
      exc_model->ESST3A->Vrmin[i]=ESST3A_head->Vrmin;
      exc_model->ESST3A->Kg[i]=ESST3A_head->Kg;
      exc_model->ESST3A->Kp[i]=ESST3A_head->Kp;
      exc_model->ESST3A->Ki[i]=ESST3A_head->Ki;
      exc_model->ESST3A->Vbmax[i]=ESST3A_head->Vbmax;
      exc_model->ESST3A->Kc[i]=ESST3A_head->Kc;
      exc_model->ESST3A->Xl[i]=ESST3A_head->Xl;
      exc_model->ESST3A->Vgmax[i]=ESST3A_head->Vgmax;
      exc_model->ESST3A->Op[i]=ESST3A_head->Op;
      exc_model->ESST3A->Tm[i]=ESST3A_head->Tm;
      exc_model->ESST3A->Vmmax[i]=ESST3A_head->Vmmax;
      exc_model->ESST3A->Vmmin[i]=ESST3A_head->Vmmin;
      ESST3A_node_ptr ESST3A_tmp=ESST3A_head->next;
      PetscFree(ESST3A_head);
      ESST3A_head=ESST3A_tmp;
    }/* end for */
  }/* end if */

  /* store ESST4B */
  if(num_ESST4B==0){
    ierr = PetscMalloc(sizeof(ESST4B_MODEL),&(exc_model->ESST4B));CHKERRQ(ierr);
    exc_model->ESST4B->Nesst4b=0;
   }else{
    ierr = PetscMalloc(sizeof(ESST4B_MODEL),&(exc_model->ESST4B));CHKERRQ(ierr);
    exc_model->ESST4B->Nesst4b=num_ESST4B;
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscInt),&(exc_model->ESST4B->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESST4B->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kpr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kir));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kpm));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kim));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Vmmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Vmmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kg));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Vbmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->Xl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESST4B*sizeof(PetscScalar),&(exc_model->ESST4B->thetap));CHKERRQ(ierr);
    for(i=0;i<num_ESST4B;i++){
      exc_model->ESST4B->bus[i]=get_bus_index(ESST4B_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESST4B->gen_id[i * MAX_ID_LENGTH], ESST4B_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESST4B->Tr[i]=ESST4B_head->Tr;
      exc_model->ESST4B->Kpr[i]=ESST4B_head->Kpr;
      exc_model->ESST4B->Kir[i]=ESST4B_head->Kir;
      exc_model->ESST4B->Vrmax[i]=ESST4B_head->Vrmax;
      exc_model->ESST4B->Vrmin[i]=ESST4B_head->Vrmin;
      exc_model->ESST4B->Ta[i]=ESST4B_head->Ta;
      exc_model->ESST4B->Kpm[i]=ESST4B_head->Kpm;
      exc_model->ESST4B->Kim[i]=ESST4B_head->Kim;
      exc_model->ESST4B->Vmmax[i]=ESST4B_head->Vmmax;
      exc_model->ESST4B->Vmmin[i]=ESST4B_head->Vmmin;
      exc_model->ESST4B->Kg[i]=ESST4B_head->Kg;
      exc_model->ESST4B->Kp[i]=ESST4B_head->Kp;
      exc_model->ESST4B->Ki[i]=ESST4B_head->Ki;
      exc_model->ESST4B->Vbmax[i]=ESST4B_head->Vbmax;
      exc_model->ESST4B->Kc[i]=ESST4B_head->Kc;
      exc_model->ESST4B->Xl[i]=ESST4B_head->Xl;
      exc_model->ESST4B->thetap[i]=ESST4B_head->thetap;
      ESST4B_node_ptr ESST4B_tmp=ESST4B_head->next;
      PetscFree(ESST4B_head);
      ESST4B_head=ESST4B_tmp;
    }/* end for */
  }/* end if */

  /* store EX2000 */
  if(num_EX2000==0){
    ierr = PetscMalloc(sizeof(EX2000_MODEL),&(exc_model->EX2000));CHKERRQ(ierr);
    exc_model->EX2000->Nex2000=0;
   }else{
    ierr = PetscMalloc(sizeof(EX2000_MODEL),&(exc_model->EX2000));CHKERRQ(ierr);
    exc_model->EX2000->Nex2000=num_EX2000;
    ierr = PetscMalloc(num_EX2000*sizeof(PetscInt),&(exc_model->EX2000->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EX2000->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscInt),&(exc_model->EX2000->M));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscInt),&(exc_model->EX2000->M1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kpr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kir));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kpa));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kia));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vfemax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Kvhz));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Krcc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdref1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdref2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdref3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdref4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->I1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->I2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->I3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->I4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Tlead));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Tlag));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kpifd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->kiifd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdlimp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdlimn));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->ifdadvlim));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->Vemin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EX2000*sizeof(PetscScalar),&(exc_model->EX2000->reflimp));CHKERRQ(ierr);
    for(i=0;i<num_EX2000;i++){
      exc_model->EX2000->bus[i]=get_bus_index(EX2000_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EX2000->gen_id[i * MAX_ID_LENGTH], EX2000_head->gen_id , MAX_ID_LENGTH);
      exc_model->EX2000->M[i]=EX2000_head->M;
      exc_model->EX2000->M1[i]=EX2000_head->M1;
      exc_model->EX2000->kpr[i]=EX2000_head->kpr;
      exc_model->EX2000->kir[i]=EX2000_head->kir;
      exc_model->EX2000->Vrmax[i]=EX2000_head->Vrmax;
      exc_model->EX2000->Vrmin[i]=EX2000_head->Vrmin;
      exc_model->EX2000->kpa[i]=EX2000_head->kpa;
      exc_model->EX2000->kia[i]=EX2000_head->kia;
      exc_model->EX2000->Vamax[i]=EX2000_head->Vamax;
      exc_model->EX2000->Vamin[i]=EX2000_head->Vamin;
      exc_model->EX2000->Kp[i]=EX2000_head->Kp;
      exc_model->EX2000->Kl[i]=EX2000_head->Kl;
      exc_model->EX2000->Te[i]=EX2000_head->Te;
      exc_model->EX2000->Vfemax[i]=EX2000_head->Vfemax;
      exc_model->EX2000->Ke[i]=EX2000_head->Ke;
      exc_model->EX2000->Kc[i]=EX2000_head->Kc;
      exc_model->EX2000->Kd[i]=EX2000_head->Kd;
      exc_model->EX2000->Kf1[i]=EX2000_head->Kf1;
      exc_model->EX2000->E1[i]=EX2000_head->E1;
      exc_model->EX2000->SeE1[i]=EX2000_head->SeE1;
      exc_model->EX2000->E2[i]=EX2000_head->E2;
      exc_model->EX2000->SeE2[i]=EX2000_head->SeE2;
      exc_model->EX2000->Kvhz[i]=EX2000_head->Kvhz;
      exc_model->EX2000->Krcc[i]=EX2000_head->Krcc;
      exc_model->EX2000->Tr[i]=EX2000_head->Tr;
      exc_model->EX2000->ifdref1[i]=EX2000_head->ifdref1;
      exc_model->EX2000->ifdref2[i]=EX2000_head->ifdref2;
      exc_model->EX2000->ifdref3[i]=EX2000_head->ifdref3;
      exc_model->EX2000->ifdref4[i]=EX2000_head->ifdref4;
      exc_model->EX2000->I1[i]=EX2000_head->I1;
      exc_model->EX2000->T1[i]=EX2000_head->T1;
      exc_model->EX2000->I2[i]=EX2000_head->I2;
      exc_model->EX2000->T2[i]=EX2000_head->T2;
      exc_model->EX2000->I3[i]=EX2000_head->I3;
      exc_model->EX2000->T3[i]=EX2000_head->T3;
      exc_model->EX2000->I4[i]=EX2000_head->I4;
      exc_model->EX2000->T4[i]=EX2000_head->T4;
      exc_model->EX2000->Tlead[i]=EX2000_head->Tlead;
      exc_model->EX2000->Tlag[i]=EX2000_head->Tlag;
      exc_model->EX2000->kpifd[i]=EX2000_head->kpifd;
      exc_model->EX2000->kiifd[i]=EX2000_head->kiifd;
      exc_model->EX2000->ifdlimp[i]=EX2000_head->ifdlimp;
      exc_model->EX2000->ifdadvlim[i]=EX2000_head->ifdadvlim;
      exc_model->EX2000->Vemin[i]=EX2000_head->Vemin;
      exc_model->EX2000->reflimp[i]=EX2000_head->reflimp;

      EX2000_node_ptr EX2000_tmp=EX2000_head->next;
      PetscFree(EX2000_head);
      EX2000_head=EX2000_tmp;
    }/* end for */
  }/* end if */

  /* store EXAC1 */
  if(num_EXAC1==0){
    ierr = PetscMalloc(sizeof(EXAC1_MODEL),&(exc_model->EXAC1));CHKERRQ(ierr);
    exc_model->EXAC1->Nexac1=0;
   }else{
    ierr = PetscMalloc(sizeof(EXAC1_MODEL),&(exc_model->EXAC1));CHKERRQ(ierr);
    exc_model->EXAC1->Nexac1=num_EXAC1;
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXAC1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscScalar),&(exc_model->EXAC1->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1*sizeof(PetscInt),&(exc_model->EXAC1->EFD_idx));CHKERRQ(ierr);
    for(i=0;i<num_EXAC1;i++){
      exc_model->EXAC1->bus[i]=get_bus_index(EXAC1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXAC1->gen_id[i * MAX_ID_LENGTH], EXAC1_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXAC1->Tr[i]=EXAC1_head->Tr;
      exc_model->EXAC1->Tb[i]=EXAC1_head->Tb;
      exc_model->EXAC1->Tc[i]=EXAC1_head->Tc;
      if(EXAC1_head->Tb == 0 && EXAC1_head->Tc != 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC1 model at bus [%d] with ID of [%s] has parameter Tb=0 but Tc!=0\n",EXAC1_head->bus, EXAC1_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC1->Ka[i]=EXAC1_head->Ka;
      exc_model->EXAC1->Ta[i]=EXAC1_head->Ta;
      exc_model->EXAC1->Vamax[i]=EXAC1_head->Vamax;
      exc_model->EXAC1->Vamin[i]=EXAC1_head->Vamin;
      exc_model->EXAC1->Te[i]=EXAC1_head->Te;
      if(EXAC1_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC1 model at bus [%d] with ID of [%s] has parameters which Te <= 0(should be Te > 0)\n",EXAC1_head->bus, EXAC1_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC1->Kf[i]=EXAC1_head->Kf;
      exc_model->EXAC1->Tf[i]=EXAC1_head->Tf;
      if(EXAC1_head->Tf <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC1 model at bus [%d] with ID of [%s] has parameters which Tf <= 0(should be Tf > 0)\n",EXAC1_head->bus, EXAC1_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC1->Kc[i]=EXAC1_head->Kc;
      exc_model->EXAC1->Kd[i]=EXAC1_head->Kd;
      exc_model->EXAC1->Ke[i]=EXAC1_head->Ke;
      exc_model->EXAC1->E1[i]=EXAC1_head->E1;
      exc_model->EXAC1->SeE1[i]=EXAC1_head->SeE1;
      exc_model->EXAC1->E2[i]=EXAC1_head->E2;
      exc_model->EXAC1->SeE2[i]=EXAC1_head->SeE2;

      EXAC1_node_ptr EXAC1_tmp=EXAC1_head->next;
      PetscFree(EXAC1_head);
      EXAC1_head=EXAC1_tmp;
    }/* end for */
  }/* end if */


  /* store EXAC1A */
  if(num_EXAC1A==0){
    ierr = PetscMalloc(sizeof(EXAC1A_MODEL),&(exc_model->EXAC1A));CHKERRQ(ierr);
    exc_model->EXAC1A->Nexac1a=0;
   }else{
    ierr = PetscMalloc(sizeof(EXAC1A_MODEL),&(exc_model->EXAC1A));CHKERRQ(ierr);
    exc_model->EXAC1A->Nexac1a=num_EXAC1A;
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscInt),&(exc_model->EXAC1A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXAC1A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC1A*sizeof(PetscScalar),&(exc_model->EXAC1A->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_EXAC1A;i++){
      exc_model->EXAC1A->bus[i]=get_bus_index(EXAC1A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXAC1A->gen_id[i * MAX_ID_LENGTH], EXAC1A_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXAC1A->Tr[i]=EXAC1A_head->Tr;
      exc_model->EXAC1A->Tb[i]=EXAC1A_head->Tb;
      exc_model->EXAC1A->Tc[i]=EXAC1A_head->Tc;
      exc_model->EXAC1A->Ka[i]=EXAC1A_head->Ka;
      exc_model->EXAC1A->Ta[i]=EXAC1A_head->Ta;
      exc_model->EXAC1A->Vrmax[i]=EXAC1A_head->Vrmax;
      exc_model->EXAC1A->Vrmin[i]=EXAC1A_head->Vrmin;
      exc_model->EXAC1A->Te[i]=EXAC1A_head->Te;
      exc_model->EXAC1A->Kf[i]=EXAC1A_head->Kf;
      exc_model->EXAC1A->Tf[i]=EXAC1A_head->Tf;
      exc_model->EXAC1A->Kc[i]=EXAC1A_head->Kc;
      exc_model->EXAC1A->Kd[i]=EXAC1A_head->Kd;
      exc_model->EXAC1A->Ke[i]=EXAC1A_head->Ke;
      exc_model->EXAC1A->E1[i]=EXAC1A_head->E1;
      exc_model->EXAC1A->SeE1[i]=EXAC1A_head->SeE1;
      exc_model->EXAC1A->E2[i]=EXAC1A_head->E2;
      exc_model->EXAC1A->SeE2[i]=EXAC1A_head->SeE2;
      EXAC1A_node_ptr EXAC1A_tmp=EXAC1A_head->next;
      PetscFree(EXAC1A_head);
      EXAC1A_head=EXAC1A_tmp;
    }/* end for */
  }/* end if */


  /* store EXAC2 */
  if(num_EXAC2==0){
    ierr = PetscMalloc(sizeof(EXAC2_MODEL),&(exc_model->EXAC2));CHKERRQ(ierr);
    exc_model->EXAC2->Nexac2=0;
   }else{
    ierr = PetscMalloc(sizeof(EXAC2_MODEL),&(exc_model->EXAC2));CHKERRQ(ierr);
    exc_model->EXAC2->Nexac2=num_EXAC2;
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXAC2->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->Vlr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscScalar),&(exc_model->EXAC2->SeE2));CHKERRQ(ierr);
    
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->ET_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->VE_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC2*sizeof(PetscInt),&(exc_model->EXAC2->EFD_idx));CHKERRQ(ierr);
    
    for(i=0;i<num_EXAC2;i++){
      exc_model->EXAC2->bus[i]=get_bus_index(EXAC2_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXAC2->gen_id[i * MAX_ID_LENGTH], EXAC2_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXAC2->Tr[i]=EXAC2_head->Tr;
      exc_model->EXAC2->Tb[i]=EXAC2_head->Tb;
      exc_model->EXAC2->Tc[i]=EXAC2_head->Tc;
      if(EXAC2_head->Tb == 0 && EXAC2_head->Tc != 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC2 model at bus [%d] with ID of [%s] has parameter Tb=0 but Tc!=0\n",EXAC2_head->bus, EXAC2_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC2->Ka[i]=EXAC2_head->Ka;
      exc_model->EXAC2->Ta[i]=EXAC2_head->Ta;
      exc_model->EXAC2->Vamax[i]=EXAC2_head->Vamax;
      exc_model->EXAC2->Vamin[i]=EXAC2_head->Vamin;
      exc_model->EXAC2->Kb[i]=EXAC2_head->Kb;
      exc_model->EXAC2->Vrmax[i]=EXAC2_head->Vrmax;
      exc_model->EXAC2->Vrmin[i]=EXAC2_head->Vrmin;
      exc_model->EXAC2->Te[i]=EXAC2_head->Te;
      if(EXAC2_head->Te <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC2 model at bus [%d] with ID of [%s] has parameter Te<=0(should Te>0)\n",EXAC2_head->bus, EXAC2_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC2->Kl[i]=EXAC2_head->Kl;
      exc_model->EXAC2->Kh[i]=EXAC2_head->Kh;
      exc_model->EXAC2->Kf[i]=EXAC2_head->Kf;
      exc_model->EXAC2->Tf[i]=EXAC2_head->Tf;
      if(EXAC2_head->Tf <= 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXAC2 model at bus [%d] with ID of [%s] has parameter Tf<=0(should Tf>0)\n",EXAC2_head->bus, EXAC2_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXAC2->Kc[i]=EXAC2_head->Kc;
      exc_model->EXAC2->Kd[i]=EXAC2_head->Kd;
      exc_model->EXAC2->Ke[i]=EXAC2_head->Ke;
      exc_model->EXAC2->Vlr[i]=EXAC2_head->Vlr;
      exc_model->EXAC2->E1[i]=EXAC2_head->E1;
      exc_model->EXAC2->SeE1[i]=EXAC2_head->SeE1;
      exc_model->EXAC2->E2[i]=EXAC2_head->E2;
      exc_model->EXAC2->SeE2[i]=EXAC2_head->SeE2;
      EXAC2_node_ptr EXAC2_tmp=EXAC2_head->next;
      PetscFree(EXAC2_head);
      EXAC2_head=EXAC2_tmp;
    }/* end for */
  }/* end if */


 /* store EXAC3 */
  if(num_EXAC3==0){
    ierr = PetscMalloc(sizeof(EXAC3_MODEL),&(exc_model->EXAC3));CHKERRQ(ierr);
    exc_model->EXAC3->Nexac3=0;
   }else{
    ierr = PetscMalloc(sizeof(EXAC3_MODEL),&(exc_model->EXAC3));CHKERRQ(ierr);
    exc_model->EXAC3->Nexac3=num_EXAC3;
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscInt),&(exc_model->EXAC3->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXAC3->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Klv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Kr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Kn));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->EFDn));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC3*sizeof(PetscScalar),&(exc_model->EXAC3->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_EXAC3;i++){
      exc_model->EXAC3->bus[i]=get_bus_index(EXAC3_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXAC3->gen_id[i * MAX_ID_LENGTH], EXAC3_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXAC3->Tr[i]=EXAC3_head->Tr;
      exc_model->EXAC3->Tb[i]=EXAC3_head->Tb;
      exc_model->EXAC3->Tc[i]=EXAC3_head->Tc;
      exc_model->EXAC3->Ka[i]=EXAC3_head->Ka;
      exc_model->EXAC3->Ta[i]=EXAC3_head->Ta;
      exc_model->EXAC3->Vamax[i]=EXAC3_head->Vamax;
      exc_model->EXAC3->Vamin[i]=EXAC3_head->Vamin;
      exc_model->EXAC3->Te[i]=EXAC3_head->Te;
      exc_model->EXAC3->Klv[i]=EXAC3_head->Klv;
      exc_model->EXAC3->Kr[i]=EXAC3_head->Kr;
      exc_model->EXAC3->Kf[i]=EXAC3_head->Kf;
      exc_model->EXAC3->Tf[i]=EXAC3_head->Tf;
      exc_model->EXAC3->Kn[i]=EXAC3_head->Kn;
      exc_model->EXAC3->EFDn[i]=EXAC3_head->EFDn;
      exc_model->EXAC3->Kc[i]=EXAC3_head->Kc;
      exc_model->EXAC3->Kd[i]=EXAC3_head->Kd;
      exc_model->EXAC3->Ke[i]=EXAC3_head->Ke;
      exc_model->EXAC3->E1[i]=EXAC3_head->E1;
      exc_model->EXAC3->SeE1[i]=EXAC3_head->SeE1;
      exc_model->EXAC3->E2[i]=EXAC3_head->E2;
      exc_model->EXAC3->SeE2[i]=EXAC3_head->SeE2;
      EXAC3_node_ptr EXAC3_tmp=EXAC3_head->next;
      PetscFree(EXAC3_head);
      EXAC3_head=EXAC3_tmp;
    }/* end for */
  }/* end if */

/* store EXAC4 */
  if(num_EXAC4==0){
    ierr = PetscMalloc(sizeof(EXAC4_MODEL),&(exc_model->EXAC4));CHKERRQ(ierr);
    exc_model->EXAC4->Nexac4=0;
   }else{
    ierr = PetscMalloc(sizeof(EXAC4_MODEL),&(exc_model->EXAC4));CHKERRQ(ierr);
    exc_model->EXAC4->Nexac4=num_EXAC4;
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscInt),&(exc_model->EXAC4->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXAC4->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXAC4*sizeof(PetscScalar),&(exc_model->EXAC4->Kc));CHKERRQ(ierr);
    for(i=0;i<num_EXAC4;i++){
      exc_model->EXAC4->bus[i]=get_bus_index(EXAC4_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXAC4->gen_id[i * MAX_ID_LENGTH], EXAC4_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXAC4->Tr[i]=EXAC4_head->Tr;
      exc_model->EXAC4->Vimax[i]=EXAC4_head->Vimax;
      exc_model->EXAC4->Vimin[i]=EXAC4_head->Vimin;
      exc_model->EXAC4->Tc[i]=EXAC4_head->Tc;
      exc_model->EXAC4->Tb[i]=EXAC4_head->Tb;
      exc_model->EXAC4->Ka[i]=EXAC4_head->Ka;
      exc_model->EXAC4->Vrmax[i]=EXAC4_head->Vrmax;
      exc_model->EXAC4->Vrmin[i]=EXAC4_head->Vrmin;
      exc_model->EXAC4->Kc[i]=EXAC4_head->Kc;
      EXAC4_node_ptr EXAC4_tmp=EXAC4_head->next;
      PetscFree(EXAC4_head);
      EXAC4_head=EXAC4_tmp;
    }/* end for */
  }/* end if */

/* store EXBAS */
  if(num_EXBAS==0){
    ierr = PetscMalloc(sizeof(EXBAS_MODEL),&(exc_model->EXBAS));CHKERRQ(ierr);
    exc_model->EXBAS->Nexbas=0;
   }else{
    ierr = PetscMalloc(sizeof(EXBAS_MODEL),&(exc_model->EXBAS));CHKERRQ(ierr);
    exc_model->EXBAS->Nexbas=num_EXBAS;
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscInt),&(exc_model->EXBAS->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXBAS->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXBAS*sizeof(PetscScalar),&(exc_model->EXBAS->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_EXBAS;i++){
      exc_model->EXBAS->bus[i]=get_bus_index(EXBAS_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXBAS->gen_id[i * MAX_ID_LENGTH], EXBAS_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXBAS->Tr[i]=EXBAS_head->Tr;
      exc_model->EXBAS->Kp[i]=EXBAS_head->Kp;
      exc_model->EXBAS->Ki[i]=EXBAS_head->Ki;
      exc_model->EXBAS->Ka[i]=EXBAS_head->Ka;
      exc_model->EXBAS->Ta[i]=EXBAS_head->Ta;
      exc_model->EXBAS->Tb[i]=EXBAS_head->Tb;
      exc_model->EXBAS->Tc[i]=EXBAS_head->Tc;
      exc_model->EXBAS->Vrmax[i]=EXBAS_head->Vrmax;
      exc_model->EXBAS->Vrmin[i]=EXBAS_head->Vrmin;
      exc_model->EXBAS->Kf[i]=EXBAS_head->Kf;
      exc_model->EXBAS->Tf[i]=EXBAS_head->Tf;
      exc_model->EXBAS->Tf1[i]=EXBAS_head->Tf1;
      exc_model->EXBAS->Tf2[i]=EXBAS_head->Tf2;
      exc_model->EXBAS->Ke[i]=EXBAS_head->Ke;
      exc_model->EXBAS->Te[i]=EXBAS_head->Te;
      exc_model->EXBAS->Kc[i]=EXBAS_head->Kc;
      exc_model->EXBAS->Kd[i]=EXBAS_head->Kd;
      exc_model->EXBAS->E1[i]=EXBAS_head->E1;
      exc_model->EXBAS->SeE1[i]=EXBAS_head->SeE1;
      exc_model->EXBAS->E2[i]=EXBAS_head->E1;
      exc_model->EXBAS->SeE2[i]=EXBAS_head->SeE2;
      EXBAS_node_ptr EXBAS_tmp=EXBAS_head->next;
      PetscFree(EXBAS_head);
      EXBAS_head=EXBAS_tmp;
    }/* end for */
  }/* end if */


  /* store EXDC2 */
  if(num_EXDC2==0){
    ierr = PetscMalloc(sizeof(EXDC2_MODEL),&(exc_model->EXDC2));CHKERRQ(ierr);
    exc_model->EXDC2->Nexdc2=0;
   }else{
    ierr = PetscMalloc(sizeof(EXDC2_MODEL),&(exc_model->EXDC2));CHKERRQ(ierr);
    exc_model->EXDC2->Nexdc2=num_EXDC2;
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscInt),&(exc_model->EXDC2->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXDC2->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->E2));CHKERRQ(ierr);
  ierr = PetscMalloc(num_EXDC2CUTE*sizeof(PetscInt),&(exc_model->EXDC2CUTE->cute1_idx));CHKERRQ(ierr);
  ierr = PetscMalloc(num_EXDC2CUTE*sizeof(PetscInt),&(exc_model->EXDC2CUTE->cute2_idx));CHKERRQ(ierr);
  ierr = PetscMalloc(num_EXDC2CUTE*sizeof(PetscInt),&(exc_model->EXDC2CUTE->cute3_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXDC2*sizeof(PetscScalar),&(exc_model->EXDC2->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_EXDC2;i++){
      exc_model->EXDC2->bus[i]=get_bus_index(EXDC2_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXDC2->gen_id[i * MAX_ID_LENGTH], EXDC2_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXDC2->Tr[i]=EXDC2_head->Tr;
      exc_model->EXDC2->Ka[i]=EXDC2_head->Ka;
      exc_model->EXDC2->Ta[i]=EXDC2_head->Ta;
      exc_model->EXDC2->Tb[i]=EXDC2_head->Tb;
      exc_model->EXDC2->Tc[i]=EXDC2_head->Tc;
      exc_model->EXDC2->Vrmax[i]=EXDC2_head->Vrmax;
      exc_model->EXDC2->Vrmin[i]=EXDC2_head->Vrmin;
      exc_model->EXDC2->Ke[i]=EXDC2_head->Ke;
      exc_model->EXDC2->Te[i]=EXDC2_head->Te;
      exc_model->EXDC2->Kf[i]=EXDC2_head->Kf;
      exc_model->EXDC2->Tf1[i]=EXDC2_head->Tf1;
      exc_model->EXDC2->E1[i]=EXDC2_head->E1;
      exc_model->EXDC2->SeE1[i]=EXDC2_head->SeE1;
      exc_model->EXDC2->E2[i]=EXDC2_head->E1;
      exc_model->EXDC2->SeE2[i]=EXDC2_head->SeE2;
      EXDC2_node_ptr EXDC2_tmp=EXDC2_head->next;
      PetscFree(EXDC2_head);
      EXDC2_head=EXDC2_tmp;
    }/* end for */
  }/* end if */



  /* store EXELI */
  if(num_EXELI==0){
    ierr = PetscMalloc(sizeof(EXELI_MODEL),&(exc_model->EXELI));CHKERRQ(ierr);
    exc_model->EXELI->Nexeli=0;
   }else{
    ierr = PetscMalloc(sizeof(EXELI_MODEL),&(exc_model->EXELI));CHKERRQ(ierr);
    exc_model->EXELI->Nexeli=num_EXELI;
    ierr = PetscMalloc(num_EXELI*sizeof(PetscInt),&(exc_model->EXELI->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXELI->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Tfv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Tfi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Tnu));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Vpu));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Vpi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Vpnf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Dpnf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->EFDmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Xe));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Tw));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Ks1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Ks2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Ts1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Ts2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXELI*sizeof(PetscScalar),&(exc_model->EXELI->Smax));CHKERRQ(ierr);
    for(i=0;i<num_EXELI;i++){
      exc_model->EXELI->bus[i]=get_bus_index(EXELI_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXELI->gen_id[i * MAX_ID_LENGTH], EXELI_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXELI->Tfv[i]=EXELI_head->Tfv;
      exc_model->EXELI->Tfi[i]=EXELI_head->Tfi;
      exc_model->EXELI->Tnu[i]=EXELI_head->Tnu;
      exc_model->EXELI->Vpu[i]=EXELI_head->Vpu;
      exc_model->EXELI->Vpi[i]=EXELI_head->Vpi;
      exc_model->EXELI->Vpnf[i]=EXELI_head->Vpnf;
      exc_model->EXELI->Dpnf[i]=EXELI_head->Dpnf;
      exc_model->EXELI->EFDmin[i]=EXELI_head->EFDmin;
      exc_model->EXELI->EFDmax[i]=EXELI_head->EFDmax;
      exc_model->EXELI->Xe[i]=EXELI_head->Xe;
      exc_model->EXELI->Tw[i]=EXELI_head->Tw;
      exc_model->EXELI->Ks1[i]=EXELI_head->Ks1;
      exc_model->EXELI->Ks2[i]=EXELI_head->Ks1;
      exc_model->EXELI->Ts1[i]=EXELI_head->Ts1;
      exc_model->EXELI->Ts2[i]=EXELI_head->Ts2;
      exc_model->EXELI->Smax[i]=EXELI_head->Smax;
      EXELI_node_ptr EXELI_tmp=EXELI_head->next;
      PetscFree(EXELI_head);
      EXELI_head=EXELI_tmp;
    }/* end for */
  }/* end if */

 /* store EXPIC1 */
  if(num_EXPIC1==0){
    ierr = PetscMalloc(sizeof(EXPIC1_MODEL),&(exc_model->EXPIC1));CHKERRQ(ierr);
    exc_model->EXPIC1->Nexpic1=0;
   }else{
    ierr = PetscMalloc(sizeof(EXPIC1_MODEL),&(exc_model->EXPIC1));CHKERRQ(ierr);
    exc_model->EXPIC1->Nexpic1=num_EXPIC1;
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscInt),&(exc_model->EXPIC1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXPIC1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ta1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Vr1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Vr2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ta2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ta3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ta4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->EFDmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXPIC1*sizeof(PetscScalar),&(exc_model->EXPIC1->Kc));CHKERRQ(ierr);
    for(i=0;i<num_EXPIC1;i++){
      exc_model->EXPIC1->bus[i]=get_bus_index(EXPIC1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXPIC1->gen_id[i * MAX_ID_LENGTH], EXPIC1_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXPIC1->Tr[i]=EXPIC1_head->Tr;
      exc_model->EXPIC1->Ka[i]=EXPIC1_head->Ka;
      exc_model->EXPIC1->Ta1[i]=EXPIC1_head->Ta1;
      exc_model->EXPIC1->Vr1[i]=EXPIC1_head->Vr1;
      exc_model->EXPIC1->Vr2[i]=EXPIC1_head->Vr2;
      exc_model->EXPIC1->Ta2[i]=EXPIC1_head->Ta2;
      exc_model->EXPIC1->Ta3[i]=EXPIC1_head->Ta3;
      exc_model->EXPIC1->Ta4[i]=EXPIC1_head->Ta4;
      exc_model->EXPIC1->Vrmax[i]=EXPIC1_head->Vrmax;
      exc_model->EXPIC1->Vrmin[i]=EXPIC1_head->Vrmin;
      exc_model->EXPIC1->Kf[i]=EXPIC1_head->Kf;
      exc_model->EXPIC1->Tf1[i]=EXPIC1_head->Tf1;
      exc_model->EXPIC1->Tf2[i]=EXPIC1_head->Tf2;
      exc_model->EXPIC1->EFDmax[i]=EXPIC1_head->EFDmax;
      exc_model->EXPIC1->EFDmin[i]=EXPIC1_head->EFDmin;
      exc_model->EXPIC1->Ke[i]=EXPIC1_head->Ke;
      exc_model->EXPIC1->Te[i]=EXPIC1_head->Te;
      exc_model->EXPIC1->E1[i]=EXPIC1_head->E1;
      exc_model->EXPIC1->SeE1[i]=EXPIC1_head->SeE1;
      exc_model->EXPIC1->E2[i]=EXPIC1_head->E2;
      exc_model->EXPIC1->SeE2[i]=EXPIC1_head->SeE2;
      exc_model->EXPIC1->Kp[i]=EXPIC1_head->Kp;
      exc_model->EXPIC1->Ki[i]=EXPIC1_head->Ki;
      exc_model->EXPIC1->Kc[i]=EXPIC1_head->Kc;

      EXPIC1_node_ptr EXPIC1_tmp=EXPIC1_head->next;
      PetscFree(EXPIC1_head);
      EXPIC1_head=EXPIC1_tmp;
    }/* end for */
  }/* end if */



 /* store EXST1 */
  if(num_EXST1==0){
    ierr = PetscMalloc(sizeof(EXST1_MODEL),&(exc_model->EXST1));CHKERRQ(ierr);
    exc_model->EXST1->Nexst1=0;
   }else{
    ierr = PetscMalloc(sizeof(EXST1_MODEL),&(exc_model->EXST1));CHKERRQ(ierr);
    exc_model->EXST1->Nexst1=num_EXST1;
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXST1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscScalar),&(exc_model->EXST1->Tf));CHKERRQ(ierr);
    
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->VM_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->VLL_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->VR_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->VF_idx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST1*sizeof(PetscInt),&(exc_model->EXST1->EFD_idx));CHKERRQ(ierr);
    for(i=0;i<num_EXST1;i++){
      exc_model->EXST1->bus[i]=get_bus_index(EXST1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXST1->gen_id[i * MAX_ID_LENGTH], EXST1_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXST1->Tr[i]=EXST1_head->Tr;
      exc_model->EXST1->Vimax[i]=EXST1_head->Vimax;
      exc_model->EXST1->Vimin[i]=EXST1_head->Vimin;
      exc_model->EXST1->Tc[i]=EXST1_head->Tc;
      exc_model->EXST1->Tb[i]=EXST1_head->Tb;
      if(EXST1_head->Tb == 0 && EXST1_head->Tc != 0){ 
        ierr = PetscPrintf(PETSC_COMM_SELF,"Input Data Error Message : The EXST1 model at bus [%d] with ID of [%s] has parameter Tb=0 but Tc!=0\n",EXST1_head->bus, EXST1_head->gen_id); CHKERRQ(ierr);
      }
      exc_model->EXST1->Ka[i]=EXST1_head->Ka;
      exc_model->EXST1->Ta[i]=EXST1_head->Ta;
      exc_model->EXST1->Vrmax[i]=EXST1_head->Vrmax;
      exc_model->EXST1->Vrmin[i]=EXST1_head->Vrmin;
      exc_model->EXST1->Kc[i]=EXST1_head->Kc;
      exc_model->EXST1->Kf[i]=EXST1_head->Kf;
      exc_model->EXST1->Tf[i]=EXST1_head->Tf;

      EXST1_node_ptr EXST1_tmp=EXST1_head->next;
      PetscFree(EXST1_head);
      EXST1_head=EXST1_tmp;
    }/* end for */
  }/* end if */



 /* store EXST2 */
  if(num_EXST2==0){
    ierr = PetscMalloc(sizeof(EXST2_MODEL),&(exc_model->EXST2));CHKERRQ(ierr);
    exc_model->EXST2->Nexst2=0;
   }else{
    ierr = PetscMalloc(sizeof(EXST2_MODEL),&(exc_model->EXST2));CHKERRQ(ierr);
    exc_model->EXST2->Nexst2=num_EXST2;
    ierr = PetscMalloc(num_EXST2*sizeof(PetscInt),&(exc_model->EXST2->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXST2->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2*sizeof(PetscScalar),&(exc_model->EXST2->EFDmax));CHKERRQ(ierr);
    for(i=0;i<num_EXST2;i++){
      exc_model->EXST2->bus[i]=get_bus_index(EXST2_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXST2->gen_id[i * MAX_ID_LENGTH], EXST2_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXST2->Tr[i]=EXST2_head->Tr;
      exc_model->EXST2->Ka[i]=EXST2_head->Ka;
      exc_model->EXST2->Ta[i]=EXST2_head->Ta;
      exc_model->EXST2->Vrmax[i]=EXST2_head->Vrmax;
      exc_model->EXST2->Vrmin[i]=EXST2_head->Vrmin;
      exc_model->EXST2->Ke[i]=EXST2_head->Ke;
      exc_model->EXST2->Te[i]=EXST2_head->Te;
      exc_model->EXST2->Kf[i]=EXST2_head->Kf;
      exc_model->EXST2->Tf[i]=EXST2_head->Tf;
      exc_model->EXST2->Kp[i]=EXST2_head->Kp;
      exc_model->EXST2->Ki[i]=EXST2_head->Ki;
      exc_model->EXST2->Kc[i]=EXST2_head->Kc;
      exc_model->EXST2->EFDmax[i]=EXST2_head->EFDmax;

      EXST2_node_ptr EXST2_tmp=EXST2_head->next;
      PetscFree(EXST2_head);
      EXST2_head=EXST2_tmp;
    }/* end for */
  }/* end if */


 /* store EXST2A */
  if(num_EXST2A==0){
    ierr = PetscMalloc(sizeof(EXST2A_MODEL),&(exc_model->EXST2A));CHKERRQ(ierr);
    exc_model->EXST2A->Nexst2a=0;
   }else{
    ierr = PetscMalloc(sizeof(EXST2A_MODEL),&(exc_model->EXST2A));CHKERRQ(ierr);
    exc_model->EXST2A->Nexst2a=num_EXST2A;
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscInt),&(exc_model->EXST2A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXST2A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST2A*sizeof(PetscScalar),&(exc_model->EXST2A->EFDmax));CHKERRQ(ierr);
    for(i=0;i<num_EXST2A;i++){
      exc_model->EXST2A->bus[i]=get_bus_index(EXST2A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXST2A->gen_id[i * MAX_ID_LENGTH], EXST2A_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXST2A->Tr[i]=EXST2A_head->Tr;
      exc_model->EXST2A->Ka[i]=EXST2A_head->Ka;
      exc_model->EXST2A->Ta[i]=EXST2A_head->Ta;
      exc_model->EXST2A->Vrmax[i]=EXST2A_head->Vrmax;
      exc_model->EXST2A->Vrmin[i]=EXST2A_head->Vrmin;
      exc_model->EXST2A->Ke[i]=EXST2A_head->Ke;
      exc_model->EXST2A->Te[i]=EXST2A_head->Te;
      exc_model->EXST2A->Kf[i]=EXST2A_head->Kf;
      exc_model->EXST2A->Tf[i]=EXST2A_head->Tf;
      exc_model->EXST2A->Kp[i]=EXST2A_head->Kp;
      exc_model->EXST2A->Ki[i]=EXST2A_head->Ki;
      exc_model->EXST2A->Kc[i]=EXST2A_head->Kc;
      exc_model->EXST2A->EFDmax[i]=EXST2A_head->EFDmax;

      EXST2A_node_ptr EXST2A_tmp=EXST2A_head->next;
      PetscFree(EXST2A_head);
      EXST2A_head=EXST2A_tmp;
    }/* end for */
  }/* end if */


 /* store EXST3 */
  if(num_EXST3==0){
    ierr = PetscMalloc(sizeof(EXST3_MODEL),&(exc_model->EXST3));CHKERRQ(ierr);
    exc_model->EXST3->Nexst3=0;
   }else{
    ierr = PetscMalloc(sizeof(EXST3_MODEL),&(exc_model->EXST3));CHKERRQ(ierr);
    exc_model->EXST3->Nexst3=num_EXST3;
    ierr = PetscMalloc(num_EXST3*sizeof(PetscInt),&(exc_model->EXST3->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXST3->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Kj));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Kg));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Xl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Vgmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXST3*sizeof(PetscScalar),&(exc_model->EXST3->Op));CHKERRQ(ierr);
    for(i=0;i<num_EXST3;i++){
      exc_model->EXST3->bus[i]=get_bus_index(EXST3_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXST3->gen_id[i * MAX_ID_LENGTH], EXST3_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXST3->Tr[i]=EXST3_head->Tr;
      exc_model->EXST3->Vimax[i]=EXST3_head->Vimax;
      exc_model->EXST3->Vimin[i]=EXST3_head->Vimin;
      exc_model->EXST3->Kj[i]=EXST3_head->Kj;
      exc_model->EXST3->Tc[i]=EXST3_head->Tc;
      exc_model->EXST3->Tb[i]=EXST3_head->Tb;
      exc_model->EXST3->Ka[i]=EXST3_head->Ka;
      exc_model->EXST3->Ta[i]=EXST3_head->Ta;
      exc_model->EXST3->Vrmax[i]=EXST3_head->Vrmax;
      exc_model->EXST3->Vrmin[i]=EXST3_head->Vrmin;
      exc_model->EXST3->Kg[i]=EXST3_head->Kg;
      exc_model->EXST3->Kp[i]=EXST3_head->Kp;
      exc_model->EXST3->Ki[i]=EXST3_head->Ki;
      exc_model->EXST3->EFDmax[i]=EXST3_head->EFDmax;
      exc_model->EXST3->Kc[i]=EXST3_head->Kc;
      exc_model->EXST3->Xl[i]=EXST3_head->Xl;
      exc_model->EXST3->Vgmax[i]=EXST3_head->Vgmax;
      exc_model->EXST3->Op[i]=EXST3_head->Op;

      EXST3_node_ptr EXST3_tmp=EXST3_head->next;
      PetscFree(EXST3_head);
      EXST3_head=EXST3_tmp;
    }/* end for */
  }/* end if */


  /* store IEEET1 */
  if(num_IEEET1==0){
    ierr = PetscMalloc(sizeof(IEEET1_MODEL),&(exc_model->IEEET1));CHKERRQ(ierr);
    exc_model->IEEET1->Nieeet1=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEET1_MODEL),&(exc_model->IEEET1));CHKERRQ(ierr);
    exc_model->IEEET1->Nieeet1=num_IEEET1;
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscInt),&(exc_model->IEEET1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEET1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET1*sizeof(PetscScalar),&(exc_model->IEEET1->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEET1;i++){
      exc_model->IEEET1->bus[i]=get_bus_index(IEEET1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEET1->gen_id[i * MAX_ID_LENGTH], IEEET1_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEET1->Tr[i]=IEEET1_head->Tr;
      exc_model->IEEET1->Ka[i]=IEEET1_head->Ka;
      exc_model->IEEET1->Ta[i]=IEEET1_head->Ta;
      exc_model->IEEET1->Vrmax[i]=IEEET1_head->Vrmax;
      exc_model->IEEET1->Vrmin[i]=IEEET1_head->Vrmin;
      exc_model->IEEET1->Ke[i]=IEEET1_head->Ke;
      exc_model->IEEET1->Te[i]=IEEET1_head->Te;
      exc_model->IEEET1->Kf[i]=IEEET1_head->Kf;
      exc_model->IEEET1->Tf[i]=IEEET1_head->Tf;
      exc_model->IEEET1->E1[i]=IEEET1_head->E1;
      exc_model->IEEET1->SeE1[i]=IEEET1_head->SeE1;
      exc_model->IEEET1->E2[i]=IEEET1_head->E2;
      exc_model->IEEET1->SeE2[i]=IEEET1_head->SeE2;

      IEEET1_node_ptr IEEET1_tmp=IEEET1_head->next;
      PetscFree(IEEET1_head);
      IEEET1_head=IEEET1_tmp;
    }/* end for */
  }/* end if */


  /* store IEEET2 */
  if(num_IEEET2==0){
    ierr = PetscMalloc(sizeof(IEEET2_MODEL),&(exc_model->IEEET2));CHKERRQ(ierr);
    exc_model->IEEET2->Nieeet2=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEET2_MODEL),&(exc_model->IEEET2));CHKERRQ(ierr);
    exc_model->IEEET2->Nieeet2=num_IEEET2;
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscInt),&(exc_model->IEEET2->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEET2->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET2*sizeof(PetscScalar),&(exc_model->IEEET2->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEET2;i++){
      exc_model->IEEET2->bus[i]=get_bus_index(IEEET2_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEET2->gen_id[i * MAX_ID_LENGTH], IEEET2_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEET2->Tr[i]=IEEET2_head->Tr;
      exc_model->IEEET2->Ka[i]=IEEET2_head->Ka;
      exc_model->IEEET2->Ta[i]=IEEET2_head->Ta;
      exc_model->IEEET2->Vrmax[i]=IEEET2_head->Vrmax;
      exc_model->IEEET2->Vrmin[i]=IEEET2_head->Vrmin;
      exc_model->IEEET2->Ke[i]=IEEET2_head->Ke;
      exc_model->IEEET2->Te[i]=IEEET2_head->Te;
      exc_model->IEEET2->Kf[i]=IEEET2_head->Kf;
      exc_model->IEEET2->Tf1[i]=IEEET2_head->Tf1;
      exc_model->IEEET2->Tf2[i]=IEEET2_head->Tf2;
      exc_model->IEEET2->E1[i]=IEEET2_head->E1;
      exc_model->IEEET2->SeE1[i]=IEEET2_head->SeE1;
      exc_model->IEEET2->E2[i]=IEEET2_head->E2;
      exc_model->IEEET2->SeE2[i]=IEEET2_head->SeE2;

      IEEET2_node_ptr IEEET2_tmp=IEEET2_head->next;
      PetscFree(IEEET2_head);
      IEEET2_head=IEEET2_tmp;
    }/* end for */
  }/* end if */


  /* store IEEET3 */
  if(num_IEEET3==0){
    ierr = PetscMalloc(sizeof(IEEET3_MODEL),&(exc_model->IEEET3));CHKERRQ(ierr);
    exc_model->IEEET3->Nieeet3=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEET3_MODEL),&(exc_model->IEEET3));CHKERRQ(ierr);
    exc_model->IEEET3->Nieeet3=num_IEEET3;
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscInt),&(exc_model->IEEET3->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEET3->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Vbmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET3*sizeof(PetscScalar),&(exc_model->IEEET3->Ke));CHKERRQ(ierr);
    for(i=0;i<num_IEEET3;i++){
      exc_model->IEEET3->bus[i]=get_bus_index(IEEET3_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEET3->gen_id[i * MAX_ID_LENGTH], IEEET3_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEET3->Tr[i]=IEEET3_head->Tr;
      exc_model->IEEET3->Ka[i]=IEEET3_head->Ka;
      exc_model->IEEET3->Ta[i]=IEEET3_head->Ta;
      exc_model->IEEET3->Vrmax[i]=IEEET3_head->Vrmax;
      exc_model->IEEET3->Vrmin[i]=IEEET3_head->Vrmin;
      exc_model->IEEET3->Te[i]=IEEET3_head->Te;
      exc_model->IEEET3->Kf[i]=IEEET3_head->Kf;
      exc_model->IEEET3->Tf[i]=IEEET3_head->Tf;
      exc_model->IEEET3->Kp[i]=IEEET3_head->Kp;
      exc_model->IEEET3->Ki[i]=IEEET3_head->Ki;
      exc_model->IEEET3->Vbmax[i]=IEEET3_head->Vbmax;
      exc_model->IEEET3->Ke[i]=IEEET3_head->Ke;

      IEEET3_node_ptr IEEET3_tmp=IEEET3_head->next;
      PetscFree(IEEET3_head);
      IEEET3_head=IEEET3_tmp;
    }/* end for */
  }/* end if */


  /* store IEEET4 */
  if(num_IEEET4==0){
    ierr = PetscMalloc(sizeof(IEEET4_MODEL),&(exc_model->IEEET4));CHKERRQ(ierr);
    exc_model->IEEET4->Nieeet4=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEET4_MODEL),&(exc_model->IEEET4));CHKERRQ(ierr);
    exc_model->IEEET4->Nieeet4=num_IEEET4;
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscInt),&(exc_model->IEEET4->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEET4->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Kr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Trh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Kv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET4*sizeof(PetscScalar),&(exc_model->IEEET4->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEET4;i++){
      exc_model->IEEET4->bus[i]=get_bus_index(IEEET4_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEET4->gen_id[i * MAX_ID_LENGTH], IEEET4_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEET4->Kr[i]=IEEET4_head->Kr;
      exc_model->IEEET4->Trh[i]=IEEET4_head->Trh;
      exc_model->IEEET4->Kv[i]=IEEET4_head->Kv;
      exc_model->IEEET4->Vrmax[i]=IEEET4_head->Vrmax;
      exc_model->IEEET4->Vrmin[i]=IEEET4_head->Vrmin;
      exc_model->IEEET4->Te[i]=IEEET4_head->Te;
      exc_model->IEEET4->Ke[i]=IEEET4_head->Ke;
      exc_model->IEEET4->E1[i]=IEEET4_head->E1;
      exc_model->IEEET4->SeE1[i]=IEEET4_head->SeE1;
      exc_model->IEEET4->E2[i]=IEEET4_head->E2;
      exc_model->IEEET4->SeE2[i]=IEEET4_head->SeE2;

      IEEET4_node_ptr IEEET4_tmp=IEEET4_head->next;
      PetscFree(IEEET4_head);
      IEEET4_head=IEEET4_tmp;
    }/* end for */
  }/* end if */


  /* store IEEET5 */
  if(num_IEEET5==0){
    ierr = PetscMalloc(sizeof(IEEET5_MODEL),&(exc_model->IEEET5));CHKERRQ(ierr);
    exc_model->IEEET5->Nieeet5=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEET5_MODEL),&(exc_model->IEEET5));CHKERRQ(ierr);
    exc_model->IEEET5->Nieeet5=num_IEEET5;
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscInt),&(exc_model->IEEET5->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEET5->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Trh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Kv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEET5*sizeof(PetscScalar),&(exc_model->IEEET5->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEET5;i++){
      exc_model->IEEET5->bus[i]=get_bus_index(IEEET5_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEET5->gen_id[i * MAX_ID_LENGTH], IEEET5_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEET5->Trh[i]=IEEET5_head->Trh;
      exc_model->IEEET5->Kv[i]=IEEET5_head->Kv;
      exc_model->IEEET5->Vrmax[i]=IEEET5_head->Vrmax;
      exc_model->IEEET5->Vrmin[i]=IEEET5_head->Vrmin;
      exc_model->IEEET5->Te[i]=IEEET5_head->Te;
      exc_model->IEEET5->Ke[i]=IEEET5_head->Ke;
      exc_model->IEEET5->E1[i]=IEEET5_head->E1;
      exc_model->IEEET5->SeE1[i]=IEEET5_head->SeE1;
      exc_model->IEEET5->E2[i]=IEEET5_head->E2;
      exc_model->IEEET5->SeE2[i]=IEEET5_head->SeE2;

      IEEET5_node_ptr IEEET5_tmp=IEEET5_head->next;
      PetscFree(IEEET5_head);
      IEEET5_head=IEEET5_tmp;
    }/* end for */
  }/* end if */


  /* store IEEEX1 */
  if(num_IEEEX1==0){
    ierr = PetscMalloc(sizeof(IEEEX1_MODEL),&(exc_model->IEEEX1));CHKERRQ(ierr);
    exc_model->IEEEX1->Nieeex1=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEEX1_MODEL),&(exc_model->IEEEX1));CHKERRQ(ierr);
    exc_model->IEEEX1->Nieeex1=num_IEEEX1;
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscInt),&(exc_model->IEEEX1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEEX1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX1*sizeof(PetscScalar),&(exc_model->IEEEX1->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEEX1;i++){
      exc_model->IEEEX1->bus[i]=get_bus_index(IEEEX1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEEX1->gen_id[i * MAX_ID_LENGTH], IEEEX1_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEEX1->Tr[i]=IEEEX1_head->Tr;
      exc_model->IEEEX1->Ka[i]=IEEEX1_head->Ka;
      exc_model->IEEEX1->Ta[i]=IEEEX1_head->Ta;
      exc_model->IEEEX1->Tb[i]=IEEEX1_head->Tb;
      exc_model->IEEEX1->Tc[i]=IEEEX1_head->Tc;
      exc_model->IEEEX1->Vrmax[i]=IEEEX1_head->Vrmax;
      exc_model->IEEEX1->Vrmin[i]=IEEEX1_head->Vrmin;
      exc_model->IEEEX1->Ke[i]=IEEEX1_head->Ke;
      exc_model->IEEEX1->Te[i]=IEEEX1_head->Te;
      exc_model->IEEEX1->Kf[i]=IEEEX1_head->Kf;
      exc_model->IEEEX1->Tf1[i]=IEEEX1_head->Tf1;
      exc_model->IEEEX1->E1[i]=IEEEX1_head->E1;
      exc_model->IEEEX1->SeE1[i]=IEEEX1_head->SeE1;
      exc_model->IEEEX1->E2[i]=IEEEX1_head->E2;
      exc_model->IEEEX1->SeE2[i]=IEEEX1_head->SeE2;

      IEEEX1_node_ptr IEEEX1_tmp=IEEEX1_head->next;
      PetscFree(IEEEX1_head);
      IEEEX1_head=IEEEX1_tmp;
    }/* end for */
  }/* end if */



  /* store IEEEX2 */
  if(num_IEEEX2==0){
    ierr = PetscMalloc(sizeof(IEEEX2_MODEL),&(exc_model->IEEEX2));CHKERRQ(ierr);
    exc_model->IEEEX2->Nieeex2=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEEX2_MODEL),&(exc_model->IEEEX2));CHKERRQ(ierr);
    exc_model->IEEEX2->Nieeex2=num_IEEEX2;
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscInt),&(exc_model->IEEEX2->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEEX2->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX2*sizeof(PetscScalar),&(exc_model->IEEEX2->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEEX2;i++){
      exc_model->IEEEX2->bus[i]=get_bus_index(IEEEX2_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEEX2->gen_id[i * MAX_ID_LENGTH], IEEEX2_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEEX2->Tr[i]=IEEEX2_head->Tr;
      exc_model->IEEEX2->Ka[i]=IEEEX2_head->Ka;
      exc_model->IEEEX2->Ta[i]=IEEEX2_head->Ta;
      exc_model->IEEEX2->Tb[i]=IEEEX2_head->Tb;
      exc_model->IEEEX2->Tc[i]=IEEEX2_head->Tc;
      exc_model->IEEEX2->Vrmax[i]=IEEEX2_head->Vrmax;
      exc_model->IEEEX2->Vrmin[i]=IEEEX2_head->Vrmin;
      exc_model->IEEEX2->Ke[i]=IEEEX2_head->Ke;
      exc_model->IEEEX2->Te[i]=IEEEX2_head->Te;
      exc_model->IEEEX2->Kf[i]=IEEEX2_head->Kf;
      exc_model->IEEEX2->Tf1[i]=IEEEX2_head->Tf1;
      exc_model->IEEEX2->Tf2[i]=IEEEX2_head->Tf2;
      exc_model->IEEEX2->E1[i]=IEEEX2_head->E1;
      exc_model->IEEEX2->SeE1[i]=IEEEX2_head->SeE1;
      exc_model->IEEEX2->E2[i]=IEEEX2_head->E2;
      exc_model->IEEEX2->SeE2[i]=IEEEX2_head->SeE2;

      IEEEX2_node_ptr IEEEX2_tmp=IEEEX2_head->next;
      PetscFree(IEEEX2_head);
      IEEEX2_head=IEEEX2_tmp;
    }/* end for */
  }/* end if */



  /* store IEEEX3 */
  if(num_IEEEX3==0){
    ierr = PetscMalloc(sizeof(IEEEX3_MODEL),&(exc_model->IEEEX3));CHKERRQ(ierr);
    exc_model->IEEEX3->Nieeex3=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEEX3_MODEL),&(exc_model->IEEEX3));CHKERRQ(ierr);
    exc_model->IEEEX3->Nieeex3=num_IEEEX3;
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscInt),&(exc_model->IEEEX3->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEEX3->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Vbmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX3*sizeof(PetscScalar),&(exc_model->IEEEX3->Ke));CHKERRQ(ierr);
    for(i=0;i<num_IEEEX3;i++){
      exc_model->IEEEX3->bus[i]=get_bus_index(IEEEX3_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEEX3->gen_id[i * MAX_ID_LENGTH], IEEEX3_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEEX3->Tr[i]=IEEEX3_head->Tr;
      exc_model->IEEEX3->Ka[i]=IEEEX3_head->Ka;
      exc_model->IEEEX3->Ta[i]=IEEEX3_head->Ta;
      exc_model->IEEEX3->Vrmax[i]=IEEEX3_head->Vrmax;
      exc_model->IEEEX3->Vrmin[i]=IEEEX3_head->Vrmin;
      exc_model->IEEEX3->Te[i]=IEEEX3_head->Te;
      exc_model->IEEEX3->Kf[i]=IEEEX3_head->Kf;
      exc_model->IEEEX3->Tf[i]=IEEEX3_head->Tf;
      exc_model->IEEEX3->Kp[i]=IEEEX3_head->Kp;
      exc_model->IEEEX3->Ki[i]=IEEEX3_head->Ki;
      exc_model->IEEEX3->Vbmax[i]=IEEEX3_head->Vbmax;
      exc_model->IEEEX3->Ke[i]=IEEEX3_head->Ke;

      IEEEX3_node_ptr IEEEX3_tmp=IEEEX3_head->next;
      PetscFree(IEEEX3_head);
      IEEEX3_head=IEEEX3_tmp;
    }/* end for */
  }/* end if */



  /* store IEEEX4 */
  if(num_IEEEX4==0){
    ierr = PetscMalloc(sizeof(IEEEX4_MODEL),&(exc_model->IEEEX4));CHKERRQ(ierr);
    exc_model->IEEEX4->Nieeex4=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEEX4_MODEL),&(exc_model->IEEEX4));CHKERRQ(ierr);
    exc_model->IEEEX4->Nieeex4=num_IEEEX4;
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscInt),&(exc_model->IEEEX4->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEEX4->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Trh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Kv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEEX4*sizeof(PetscScalar),&(exc_model->IEEEX4->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEEX4;i++){
      exc_model->IEEEX4->bus[i]=get_bus_index(IEEEX4_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEEX4->gen_id[i * MAX_ID_LENGTH], IEEEX4_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEEX4->Tr[i]=IEEEX4_head->Tr;
      exc_model->IEEEX4->Trh[i]=IEEEX4_head->Trh;
      exc_model->IEEEX4->Kv[i]=IEEEX4_head->Kv;
      exc_model->IEEEX4->Vrmax[i]=IEEEX4_head->Vrmax;
      exc_model->IEEEX4->Vrmin[i]=IEEEX4_head->Vrmin;
      exc_model->IEEEX4->Te[i]=IEEEX4_head->Te;
      exc_model->IEEEX4->Ke[i]=IEEEX4_head->Ke;
      exc_model->IEEEX4->E1[i]=IEEEX4_head->E1;
      exc_model->IEEEX4->SeE1[i]=IEEEX4_head->SeE1;
      exc_model->IEEEX4->E2[i]=IEEEX4_head->E2;
      exc_model->IEEEX4->SeE2[i]=IEEEX4_head->SeE2;

      IEEEX4_node_ptr IEEEX4_tmp=IEEEX4_head->next;
      PetscFree(IEEEX4_head);
      IEEEX4_head=IEEEX4_tmp;
    }/* end for */
  }/* end if */


  /* store IEET1A */
  if(num_IEET1A==0){
    ierr = PetscMalloc(sizeof(IEET1A_MODEL),&(exc_model->IEET1A));CHKERRQ(ierr);
    exc_model->IEET1A->Nieet1a=0;
   }else{
    ierr = PetscMalloc(sizeof(IEET1A_MODEL),&(exc_model->IEET1A));CHKERRQ(ierr);
    exc_model->IEET1A->Nieet1a=num_IEET1A;
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscInt),&(exc_model->IEET1A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEET1A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->EFDmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1A*sizeof(PetscScalar),&(exc_model->IEET1A->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEET1A;i++){
      exc_model->IEET1A->bus[i]=get_bus_index(IEET1A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEET1A->gen_id[i * MAX_ID_LENGTH], IEET1A_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEET1A->Ka[i]=IEET1A_head->Ka;
      exc_model->IEET1A->Ta[i]=IEET1A_head->Ta;
      exc_model->IEET1A->Vrmax[i]=IEET1A_head->Vrmax;
      exc_model->IEET1A->Vrmin[i]=IEET1A_head->Vrmin;
      exc_model->IEET1A->Ke[i]=IEET1A_head->Ke;
      exc_model->IEET1A->Te[i]=IEET1A_head->Te;
      exc_model->IEET1A->Kf[i]=IEET1A_head->Kf;
      exc_model->IEET1A->Tf[i]=IEET1A_head->Tf;
      exc_model->IEET1A->EFDmin[i]=IEET1A_head->EFDmin;
      exc_model->IEET1A->E1[i]=IEET1A_head->E1;
      exc_model->IEET1A->SeE1[i]=IEET1A_head->SeE1;
      exc_model->IEET1A->E2[i]=IEET1A_head->E2;
      exc_model->IEET1A->SeE2[i]=IEET1A_head->SeE2;

      IEET1A_node_ptr IEET1A_tmp=IEET1A_head->next;
      PetscFree(IEET1A_head);
      IEET1A_head=IEET1A_tmp;
    }/* end for */
  }/* end if */


  /* store IEET1B */
  if(num_IEET1B==0){
    ierr = PetscMalloc(sizeof(IEET1B_MODEL),&(exc_model->IEET1B));CHKERRQ(ierr);
    exc_model->IEET1B->Nieet1b=0;
   }else{
    ierr = PetscMalloc(sizeof(IEET1B_MODEL),&(exc_model->IEET1B));CHKERRQ(ierr);
    exc_model->IEET1B->Nieet1b=num_IEET1B;
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscInt),&(exc_model->IEET1B->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEET1B->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Vsmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Vsmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Ta1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Ta2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Kf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET1B*sizeof(PetscScalar),&(exc_model->IEET1B->Xe));CHKERRQ(ierr);
    for(i=0;i<num_IEET1B;i++){
      exc_model->IEET1B->bus[i]=get_bus_index(IEET1B_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEET1B->gen_id[i * MAX_ID_LENGTH], IEET1B_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEET1B->Tr[i]=IEET1B_head->Tr;
      exc_model->IEET1B->Vsmax[i]=IEET1B_head->Vsmax;
      exc_model->IEET1B->Vsmin[i]=IEET1B_head->Vsmin;
      exc_model->IEET1B->Ka[i]=IEET1B_head->Ka;
      exc_model->IEET1B->Ta1[i]=IEET1B_head->Ta1;
      exc_model->IEET1B->Vrmax[i]=IEET1B_head->Vrmax;
      exc_model->IEET1B->Vrmin[i]=IEET1B_head->Vrmin;
      exc_model->IEET1B->Ta2[i]=IEET1B_head->Ta2;
      exc_model->IEET1B->Kf1[i]=IEET1B_head->Kf1;
      exc_model->IEET1B->Tf1[i]=IEET1B_head->Tf1;
      exc_model->IEET1B->Ke[i]=IEET1B_head->Ke;
      exc_model->IEET1B->Te[i]=IEET1B_head->Te;
      exc_model->IEET1B->E1[i]=IEET1B_head->E1;
      exc_model->IEET1B->SeE1[i]=IEET1B_head->SeE1;
      exc_model->IEET1B->E2[i]=IEET1B_head->E2;
      exc_model->IEET1B->SeE2[i]=IEET1B_head->SeE2;
      exc_model->IEET1B->Xe[i]=IEET1B_head->Xe;

      IEET1B_node_ptr IEET1B_tmp=IEET1B_head->next;
      PetscFree(IEET1B_head);
      IEET1B_head=IEET1B_tmp;
    }/* end for */
  }/* end if */


  /* store IEET5A */
  if(num_IEET5A==0){
    ierr = PetscMalloc(sizeof(IEET5A_MODEL),&(exc_model->IEET5A));CHKERRQ(ierr);
    exc_model->IEET5A->Nieet5a=0;
   }else{
    ierr = PetscMalloc(sizeof(IEET5A_MODEL),&(exc_model->IEET5A));CHKERRQ(ierr);
    exc_model->IEET5A->Nieet5a=num_IEET5A;
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscInt),&(exc_model->IEET5A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEET5A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Trh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Kv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEET5A*sizeof(PetscScalar),&(exc_model->IEET5A->EFDmin));CHKERRQ(ierr);
    for(i=0;i<num_IEET5A;i++){
      exc_model->IEET5A->bus[i]=get_bus_index(IEET5A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEET5A->gen_id[i * MAX_ID_LENGTH], IEET5A_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEET5A->Ka[i]=IEET5A_head->Ka;
      exc_model->IEET5A->Trh[i]=IEET5A_head->Trh;
      exc_model->IEET5A->Kv[i]=IEET5A_head->Kv;
      exc_model->IEET5A->Vrmax[i]=IEET5A_head->Vrmax;
      exc_model->IEET5A->Vrmin[i]=IEET5A_head->Vrmin;
      exc_model->IEET5A->Te[i]=IEET5A_head->Te;
      exc_model->IEET5A->Ke[i]=IEET5A_head->Ke;
      exc_model->IEET5A->E1[i]=IEET5A_head->E1;
      exc_model->IEET5A->SeE1[i]=IEET5A_head->SeE1;
      exc_model->IEET5A->E2[i]=IEET5A_head->E2;
      exc_model->IEET5A->SeE2[i]=IEET5A_head->SeE2;
      exc_model->IEET5A->EFDmax[i]=IEET5A_head->EFDmax;
      exc_model->IEET5A->EFDmin[i]=IEET5A_head->EFDmin;

      IEET5A_node_ptr IEET5A_tmp=IEET5A_head->next;
      PetscFree(IEET5A_head);
      IEET5A_head=IEET5A_tmp;
    }/* end for */
  }/* end if */


  /* store IEEX2A */
  if(num_IEEX2A==0){
    ierr = PetscMalloc(sizeof(IEEX2A_MODEL),&(exc_model->IEEX2A));CHKERRQ(ierr);
    exc_model->IEEX2A->Nieex2a=0;
   }else{
    ierr = PetscMalloc(sizeof(IEEX2A_MODEL),&(exc_model->IEEX2A));CHKERRQ(ierr);
    exc_model->IEEX2A->Nieex2a=num_IEEX2A;
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscInt),&(exc_model->IEEX2A->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IEEX2A->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IEEX2A*sizeof(PetscScalar),&(exc_model->IEEX2A->SeE2));CHKERRQ(ierr);
    for(i=0;i<num_IEEX2A;i++){
      exc_model->IEEX2A->bus[i]=get_bus_index(IEEX2A_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IEEX2A->gen_id[i * MAX_ID_LENGTH], IEEX2A_head->gen_id , MAX_ID_LENGTH);
      exc_model->IEEX2A->Tr[i]=IEEX2A_head->Tr;
      exc_model->IEEX2A->Ka[i]=IEEX2A_head->Ka;
      exc_model->IEEX2A->Ta[i]=IEEX2A_head->Ta;
      exc_model->IEEX2A->Tb[i]=IEEX2A_head->Tb;
      exc_model->IEEX2A->Tc[i]=IEEX2A_head->Tc;
      exc_model->IEEX2A->Vrmax[i]=IEEX2A_head->Vrmax;
      exc_model->IEEX2A->Vrmin[i]=IEEX2A_head->Vrmin;
      exc_model->IEEX2A->Ke[i]=IEEX2A_head->Ke;
      exc_model->IEEX2A->Te[i]=IEEX2A_head->Te;
      exc_model->IEEX2A->Kf[i]=IEEX2A_head->Kf;
      exc_model->IEEX2A->Tf1[i]=IEEX2A_head->Tf1;
      exc_model->IEEX2A->E1[i]=IEEX2A_head->E1;
      exc_model->IEEX2A->SeE1[i]=IEEX2A_head->SeE1;
      exc_model->IEEX2A->E2[i]=IEEX2A_head->E2;
      exc_model->IEEX2A->SeE2[i]=IEEX2A_head->SeE2;

      IEEX2A_node_ptr IEEX2A_tmp=IEEX2A_head->next;
      PetscFree(IEEX2A_head);
      IEEX2A_head=IEEX2A_tmp;
    }/* end for */
  }/* end if */


  /* store SCRX */
  if(num_SCRX==0){
    ierr = PetscMalloc(sizeof(SCRX_MODEL),&(exc_model->SCRX));CHKERRQ(ierr);
    exc_model->SCRX->Nscrx=0;
   }else{
    ierr = PetscMalloc(sizeof(SCRX_MODEL),&(exc_model->SCRX));CHKERRQ(ierr);
    exc_model->SCRX->Nscrx=num_SCRX;
    ierr = PetscMalloc(num_SCRX*sizeof(PetscInt),&(exc_model->SCRX->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(char)*MAX_ID_LENGTH,&(exc_model->SCRX->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Tab));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->K));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Emin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Emax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->Cswitch));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SCRX*sizeof(PetscScalar),&(exc_model->SCRX->rcfd));CHKERRQ(ierr);
    for(i=0;i<num_SCRX;i++){
      exc_model->SCRX->bus[i]=get_bus_index(SCRX_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->SCRX->gen_id[i * MAX_ID_LENGTH], SCRX_head->gen_id , MAX_ID_LENGTH);
      exc_model->SCRX->Tab[i]=SCRX_head->Tab;
      exc_model->SCRX->Tb[i]=SCRX_head->Tb;
      exc_model->SCRX->K[i]=SCRX_head->K;
      exc_model->SCRX->Te[i]=SCRX_head->Te;
      exc_model->SCRX->Emin[i]=SCRX_head->Emin;
      exc_model->SCRX->Emax[i]=SCRX_head->Emax;
      exc_model->SCRX->Cswitch[i]=SCRX_head->Cswitch;
      exc_model->SCRX->rcfd[i]=SCRX_head->rcfd;

      SCRX_node_ptr SCRX_tmp=SCRX_head->next;
      PetscFree(SCRX_head);
      SCRX_head=SCRX_tmp;
    }/* end for */
  }/* end if */


  /* store SEXS */
  if(num_SEXS==0){
    ierr = PetscMalloc(sizeof(SEXS_MODEL),&(exc_model->SEXS));CHKERRQ(ierr);
    exc_model->SEXS->Nsexs=0;
   }else{
    ierr = PetscMalloc(sizeof(SEXS_MODEL),&(exc_model->SEXS));CHKERRQ(ierr);
    exc_model->SEXS->Nsexs=num_SEXS;
    ierr = PetscMalloc(num_SEXS*sizeof(PetscInt),&(exc_model->SEXS->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(char)*MAX_ID_LENGTH,&(exc_model->SEXS->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->Tab));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->K));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->Emin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_SEXS*sizeof(PetscScalar),&(exc_model->SEXS->Emax));CHKERRQ(ierr);
    for(i=0;i<num_SEXS;i++){
      exc_model->SEXS->bus[i]=get_bus_index(SEXS_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->SEXS->gen_id[i * MAX_ID_LENGTH], SEXS_head->gen_id , MAX_ID_LENGTH);
      exc_model->SEXS->Tab[i]=SEXS_head->Tab;
      exc_model->SEXS->Tb[i]=SEXS_head->Tb;
      exc_model->SEXS->K[i]=SEXS_head->K;
      exc_model->SEXS->Te[i]=SEXS_head->Te;
      exc_model->SEXS->Emin[i]=SEXS_head->Emin;
      exc_model->SEXS->Emax[i]=SEXS_head->Emax;

      SEXS_node_ptr SEXS_tmp=SEXS_head->next;
      PetscFree(SEXS_head);
      SEXS_head=SEXS_tmp;
    }/* end for */
  }/* end if */

 /* store URST5T */
  if(num_URST5T==0){
    ierr = PetscMalloc(sizeof(URST5T_MODEL),&(exc_model->URST5T));CHKERRQ(ierr);
    exc_model->URST5T->Nurst5t=0;
   }else{
    ierr = PetscMalloc(sizeof(URST5T_MODEL),&(exc_model->URST5T));CHKERRQ(ierr);
    exc_model->URST5T->Nurst5t=num_URST5T;
    ierr = PetscMalloc(num_URST5T*sizeof(PetscInt),&(exc_model->URST5T->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(char)*MAX_ID_LENGTH,&(exc_model->URST5T->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Tc1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Tb1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Tc2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Tb2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Kr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URST5T*sizeof(PetscScalar),&(exc_model->URST5T->Kc));CHKERRQ(ierr);
    for(i=0;i<num_URST5T;i++){
      exc_model->URST5T->bus[i]=get_bus_index(URST5T_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->URST5T->gen_id[i * MAX_ID_LENGTH], URST5T_head->gen_id , MAX_ID_LENGTH);
      exc_model->URST5T->Tr[i]=URST5T_head->Tr;
      exc_model->URST5T->Tc1[i]=URST5T_head->Tc1;
      exc_model->URST5T->Tb1[i]=URST5T_head->Tb1;
      exc_model->URST5T->Tc2[i]=URST5T_head->Tc2;
      exc_model->URST5T->Tb2[i]=URST5T_head->Tb2;
      exc_model->URST5T->Kr[i]=URST5T_head->Kr;
      exc_model->URST5T->Vrmax[i]=URST5T_head->Vrmax;
      exc_model->URST5T->Vrmin[i]=URST5T_head->Vrmin;
      exc_model->URST5T->T1[i]=URST5T_head->T1;
      exc_model->URST5T->Kc[i]=URST5T_head->Kc;

      URST5T_node_ptr URST5T_tmp=URST5T_head->next;
      PetscFree(URST5T_head);
      URST5T_head=URST5T_tmp;
    }/* end for */
  }/* end if */

 /* store BBSEX1 */
  if(num_BBSEX1==0){
    ierr = PetscMalloc(sizeof(BBSEX1_MODEL),&(exc_model->BBSEX1));CHKERRQ(ierr);
    exc_model->BBSEX1->Nbbsex1=0;
   }else{
    ierr = PetscMalloc(sizeof(BBSEX1_MODEL),&(exc_model->BBSEX1));CHKERRQ(ierr);
    exc_model->BBSEX1->Nbbsex1=num_BBSEX1;
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscInt),&(exc_model->BBSEX1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->BBSEX1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->K));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscScalar),&(exc_model->BBSEX1->EFDmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BBSEX1*sizeof(PetscInt),&(exc_model->BBSEX1->swich));CHKERRQ(ierr);

    for(i=0;i<num_BBSEX1;i++){
      exc_model->BBSEX1->bus[i]=get_bus_index(BBSEX1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->BBSEX1->gen_id[i * MAX_ID_LENGTH], BBSEX1_head->gen_id , MAX_ID_LENGTH);
      exc_model->BBSEX1->Tf[i]=BBSEX1_head->Tf;
      exc_model->BBSEX1->K[i]=BBSEX1_head->K;
      exc_model->BBSEX1->T1[i]=BBSEX1_head->T1;
      exc_model->BBSEX1->T2[i]=BBSEX1_head->T2;
      exc_model->BBSEX1->T3[i]=BBSEX1_head->T3;
      exc_model->BBSEX1->T4[i]=BBSEX1_head->T4;
      exc_model->BBSEX1->Vrmax[i]=BBSEX1_head->Vrmax;
      exc_model->BBSEX1->Vrmin[i]=BBSEX1_head->Vrmin;
      exc_model->BBSEX1->EFDmax[i]=BBSEX1_head->EFDmax;
      exc_model->BBSEX1->EFDmin[i]=BBSEX1_head->EFDmin;
      exc_model->BBSEX1->swich[i]=BBSEX1_head->swich;

      BBSEX1_node_ptr BBSEX1_tmp=BBSEX1_head->next;
      PetscFree(BBSEX1_head);
      BBSEX1_head=BBSEX1_tmp;
    }/* end for */
  }/* end if */


 /* store BUDCZT */
  if(num_BUDCZT==0){
    ierr = PetscMalloc(sizeof(BUDCZT_MODEL),&(exc_model->BUDCZT));CHKERRQ(ierr);
    exc_model->BUDCZT->Nbudczt=0;
   }else{
    ierr = PetscMalloc(sizeof(BUDCZT_MODEL),&(exc_model->BUDCZT));CHKERRQ(ierr);
    exc_model->BUDCZT->Nbudczt=num_BUDCZT;
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscInt),&(exc_model->BUDCZT->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(char)*MAX_ID_LENGTH,&(exc_model->BUDCZT->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Kp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Ti));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Urmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->Urmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->EFDmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_BUDCZT*sizeof(PetscScalar),&(exc_model->BUDCZT->EFDmin));CHKERRQ(ierr);

    for(i=0;i<num_BUDCZT;i++){
      exc_model->BUDCZT->bus[i]=get_bus_index(BUDCZT_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->BUDCZT->gen_id[i * MAX_ID_LENGTH], BUDCZT_head->gen_id , MAX_ID_LENGTH);
      exc_model->BUDCZT->Kp[i]=BUDCZT_head->Kp;
      exc_model->BUDCZT->Ka[i]=BUDCZT_head->Ka;
      exc_model->BUDCZT->Ke[i]=BUDCZT_head->Ke;
      exc_model->BUDCZT->Tr[i]=BUDCZT_head->Tr;
      exc_model->BUDCZT->Ti[i]=BUDCZT_head->Ti;
      exc_model->BUDCZT->Ta[i]=BUDCZT_head->Ta;
      exc_model->BUDCZT->Te[i]=BUDCZT_head->Te;
      exc_model->BUDCZT->Urmax[i]=BUDCZT_head->Urmax;
      exc_model->BUDCZT->Urmin[i]=BUDCZT_head->Urmin;
      exc_model->BUDCZT->EFDmax[i]=BUDCZT_head->EFDmax;
      exc_model->BUDCZT->EFDmin[i]=BUDCZT_head->EFDmin;

      BUDCZT_node_ptr BUDCZT_tmp=BUDCZT_head->next;
      PetscFree(BUDCZT_head);
      BUDCZT_head=BUDCZT_tmp;
    }/* end for */
  }/* end if */


 /* store CELIN */
  if(num_CELIN==0){
    ierr = PetscMalloc(sizeof(CELIN_MODEL),&(exc_model->CELIN));CHKERRQ(ierr);
    exc_model->CELIN->Ncelin=0;
   }else{
    ierr = PetscMalloc(sizeof(CELIN_MODEL),&(exc_model->CELIN));CHKERRQ(ierr);
    exc_model->CELIN->Ncelin=num_CELIN;
    ierr = PetscMalloc(num_CELIN*sizeof(PetscInt),&(exc_model->CELIN->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(char)*MAX_ID_LENGTH,&(exc_model->CELIN->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Tr1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Tr2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->alpha));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->beta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Te2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->EFD));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Ke2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Tr4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T6));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->p_PSS));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->a_PSS));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Psslim));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K1_2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->kiec));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->kd1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Tb1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T11));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->limmax_pid1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->limmin_pid1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K2_2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Upp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Upm));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T13));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->K4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->T14));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Ketb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->Xp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->IEFmax1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->IEFmax2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->IEFmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_CELIN*sizeof(PetscScalar),&(exc_model->CELIN->SeE2));CHKERRQ(ierr);

    for(i=0;i<num_CELIN;i++){
      exc_model->CELIN->bus[i]=get_bus_index(CELIN_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->CELIN->gen_id[i * MAX_ID_LENGTH], CELIN_head->gen_id , MAX_ID_LENGTH);
      exc_model->CELIN->Tr1[i]=CELIN_head->Tr1;
      exc_model->CELIN->Tr2[i]=CELIN_head->Tr2;
      exc_model->CELIN->alpha[i]=CELIN_head->alpha;
      exc_model->CELIN->beta[i]=CELIN_head->beta;
      exc_model->CELIN->Te2[i]=CELIN_head->Te2;
      exc_model->CELIN->EFD[i]=CELIN_head->EFD;
      exc_model->CELIN->Ke2[i]=CELIN_head->Ke2;
      exc_model->CELIN->Tr4[i]=CELIN_head->Tr4;
      exc_model->CELIN->T1[i]=CELIN_head->T1;
      exc_model->CELIN->T2[i]=CELIN_head->T2;
      exc_model->CELIN->T3[i]=CELIN_head->T3;
      exc_model->CELIN->T4[i]=CELIN_head->T4;
      exc_model->CELIN->T5[i]=CELIN_head->T5;
      exc_model->CELIN->T6[i]=CELIN_head->T6;
      exc_model->CELIN->K1[i]=CELIN_head->K1;
      exc_model->CELIN->K2[i]=CELIN_head->K2;
      exc_model->CELIN->p_PSS[i]=CELIN_head->p_PSS;
      exc_model->CELIN->a_PSS[i]=CELIN_head->a_PSS;
      exc_model->CELIN->Psslim[i]=CELIN_head->Psslim;
      exc_model->CELIN->K1_2[i]=CELIN_head->K1_2;
      exc_model->CELIN->kiec[i]=CELIN_head->kiec;
      exc_model->CELIN->kd1[i]=CELIN_head->kd1;
      exc_model->CELIN->Tb1[i]=CELIN_head->Tb1;
      exc_model->CELIN->T11[i]=CELIN_head->T11;
      exc_model->CELIN->limmax_pid1[i]=CELIN_head->limmax_pid1;
      exc_model->CELIN->limmin_pid1[i]=CELIN_head->limmin_pid1;
      exc_model->CELIN->K2_2[i]=CELIN_head->K2_2;
      exc_model->CELIN->Upp[i]=CELIN_head->Upp;
      exc_model->CELIN->Upm[i]=CELIN_head->Upm;
      exc_model->CELIN->K3[i]=CELIN_head->K3;
      exc_model->CELIN->T13[i]=CELIN_head->T13;
      exc_model->CELIN->K4[i]=CELIN_head->K4;
      exc_model->CELIN->T14[i]=CELIN_head->T14;
      exc_model->CELIN->Ketb[i]=CELIN_head->Ketb;
      exc_model->CELIN->Te[i]=CELIN_head->Te;
      exc_model->CELIN->Xp[i]=CELIN_head->Xp;
      exc_model->CELIN->IEFmax1[i]=CELIN_head->IEFmax1;
      exc_model->CELIN->IEFmax2[i]=CELIN_head->IEFmax2;
      exc_model->CELIN->IEFmin[i]=CELIN_head->IEFmin;
      exc_model->CELIN->E1[i]=CELIN_head->E1;
      exc_model->CELIN->SeE1[i]=CELIN_head->SeE1;
      exc_model->CELIN->E2[i]=CELIN_head->E2;
      exc_model->CELIN->SeE2[i]=CELIN_head->SeE2;

      CELIN_node_ptr CELIN_tmp=CELIN_head->next;
      PetscFree(CELIN_head);
      CELIN_head=CELIN_tmp;
    }/* end for */
  }/* end if */


 /* store EMAC1T */
  if(num_EMAC1T==0){
    ierr = PetscMalloc(sizeof(EMAC1T_MODEL),&(exc_model->EMAC1T));CHKERRQ(ierr);
    exc_model->EMAC1T->Nemac1t=0;
   }else{
    ierr = PetscMalloc(sizeof(EMAC1T_MODEL),&(exc_model->EMAC1T));CHKERRQ(ierr);
    exc_model->EMAC1T->Nemac1t=num_EMAC1T;
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscInt),&(exc_model->EMAC1T->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EMAC1T->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T6));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Kfe));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EMAC1T*sizeof(PetscScalar),&(exc_model->EMAC1T->Tfe));CHKERRQ(ierr);

    for(i=0;i<num_EMAC1T;i++){
      exc_model->EMAC1T->bus[i]=get_bus_index(EMAC1T_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EMAC1T->gen_id[i * MAX_ID_LENGTH], EMAC1T_head->gen_id , MAX_ID_LENGTH);
      exc_model->EMAC1T->Tr[i]=EMAC1T_head->Tr;
      exc_model->EMAC1T->T4[i]=EMAC1T_head->T4;
      exc_model->EMAC1T->T3[i]=EMAC1T_head->T3;
      exc_model->EMAC1T->Ka[i]=EMAC1T_head->Ka;
      exc_model->EMAC1T->Ta[i]=EMAC1T_head->Ta;
      exc_model->EMAC1T->Vrmax[i]=EMAC1T_head->Vrmax;
      exc_model->EMAC1T->Vrmin[i]=EMAC1T_head->Vrmin;
      exc_model->EMAC1T->Te[i]=EMAC1T_head->Te;
      exc_model->EMAC1T->Kf[i]=EMAC1T_head->Kf;
      exc_model->EMAC1T->Tf[i]=EMAC1T_head->Tf;
      exc_model->EMAC1T->Kc[i]=EMAC1T_head->Kc;
      exc_model->EMAC1T->Kd[i]=EMAC1T_head->Kd;
      exc_model->EMAC1T->Ke[i]=EMAC1T_head->Ke;
      exc_model->EMAC1T->E1[i]=EMAC1T_head->E1;
      exc_model->EMAC1T->SeE1[i]=EMAC1T_head->SeE1;
      exc_model->EMAC1T->E2[i]=EMAC1T_head->E2;
      exc_model->EMAC1T->SeE2[i]=EMAC1T_head->SeE2;
      exc_model->EMAC1T->T6[i]=EMAC1T_head->T6;
      exc_model->EMAC1T->T5[i]=EMAC1T_head->T5;
      exc_model->EMAC1T->T2[i]=EMAC1T_head->T2;
      exc_model->EMAC1T->T1[i]=EMAC1T_head->T1;
      exc_model->EMAC1T->Kfe[i]=EMAC1T_head->Kfe;
      exc_model->EMAC1T->Tfe[i]=EMAC1T_head->Tfe;

      EMAC1T_node_ptr EMAC1T_tmp=EMAC1T_head->next;
      PetscFree(EMAC1T_head);
      EMAC1T_head=EMAC1T_tmp;
    }/* end for */
  }/* end if */

 /* store ESURRY */
  if(num_ESURRY==0){
    ierr = PetscMalloc(sizeof(ESURRY_MODEL),&(exc_model->ESURRY));CHKERRQ(ierr);
    exc_model->ESURRY->Nesurry=0;
   }else{
    ierr = PetscMalloc(sizeof(ESURRY_MODEL),&(exc_model->ESURRY));CHKERRQ(ierr);
    exc_model->ESURRY->Nesurry=num_ESURRY;
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscInt),&(exc_model->ESURRY->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(char)*MAX_ID_LENGTH,&(exc_model->ESURRY->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Td));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->K10));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->K16));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_ESURRY*sizeof(PetscScalar),&(exc_model->ESURRY->Ke));CHKERRQ(ierr);

    for(i=0;i<num_ESURRY;i++){
      exc_model->ESURRY->bus[i]=get_bus_index(ESURRY_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->ESURRY->gen_id[i * MAX_ID_LENGTH], ESURRY_head->gen_id , MAX_ID_LENGTH);
      exc_model->ESURRY->Tr[i]=ESURRY_head->Tr;
      exc_model->ESURRY->Ta[i]=ESURRY_head->Ta;
      exc_model->ESURRY->Tb[i]=ESURRY_head->Tb;
      exc_model->ESURRY->Tc[i]=ESURRY_head->Tc;
      exc_model->ESURRY->Td[i]=ESURRY_head->Td;
      exc_model->ESURRY->K10[i]=ESURRY_head->K10;
      exc_model->ESURRY->T1[i]=ESURRY_head->T1;
      exc_model->ESURRY->K16[i]=ESURRY_head->K16;
      exc_model->ESURRY->Kf[i]=ESURRY_head->Kf;
      exc_model->ESURRY->Tf[i]=ESURRY_head->Tf;
      exc_model->ESURRY->Vrmax[i]=ESURRY_head->Vrmax;
      exc_model->ESURRY->Vrmin[i]=ESURRY_head->Vrmin;
      exc_model->ESURRY->Te[i]=ESURRY_head->Te;
      exc_model->ESURRY->E1[i]=ESURRY_head->E1;
      exc_model->ESURRY->SeE1[i]=ESURRY_head->SeE1;
      exc_model->ESURRY->E2[i]=ESURRY_head->E2;
      exc_model->ESURRY->SeE2[i]=ESURRY_head->SeE2;
      exc_model->ESURRY->Kc[i]=ESURRY_head->Kc;
      exc_model->ESURRY->Kd[i]=ESURRY_head->Kd;
      exc_model->ESURRY->Ke[i]=ESURRY_head->Ke;

      ESURRY_node_ptr ESURRY_tmp=ESURRY_head->next;
      PetscFree(ESURRY_head);
      ESURRY_head=ESURRY_tmp;
    }/* end for */
  }/* end if */

 /* store EXNEBB */
  if(num_EXNEBB==0){
    ierr = PetscMalloc(sizeof(EXNEBB_MODEL),&(exc_model->EXNEBB));CHKERRQ(ierr);
    exc_model->EXNEBB->Nexnebb=0;
   }else{
    ierr = PetscMalloc(sizeof(EXNEBB_MODEL),&(exc_model->EXNEBB));CHKERRQ(ierr);
    exc_model->EXNEBB->Nexnebb=num_EXNEBB;
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscInt),&(exc_model->EXNEBB->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXNEBB->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->K1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T11));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T12));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T13));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->K2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T21));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T22));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->T23));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->Ifmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscScalar),&(exc_model->EXNEBB->Ifmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNEBB*sizeof(PetscInt),&(exc_model->EXNEBB->flag));CHKERRQ(ierr);

    for(i=0;i<num_EXNEBB;i++){
      exc_model->EXNEBB->bus[i]=get_bus_index(EXNEBB_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXNEBB->gen_id[i * MAX_ID_LENGTH], EXNEBB_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXNEBB->Tr[i]=EXNEBB_head->Tr;
      exc_model->EXNEBB->K1[i]=EXNEBB_head->K1;
      exc_model->EXNEBB->T11[i]=EXNEBB_head->T11;
      exc_model->EXNEBB->T12[i]=EXNEBB_head->T12;
      exc_model->EXNEBB->T13[i]=EXNEBB_head->T13;
      exc_model->EXNEBB->K2[i]=EXNEBB_head->K2;
      exc_model->EXNEBB->T21[i]=EXNEBB_head->T21;
      exc_model->EXNEBB->T22[i]=EXNEBB_head->T22;
      exc_model->EXNEBB->T23[i]=EXNEBB_head->T23;
      exc_model->EXNEBB->Vrmax[i]=EXNEBB_head->Vrmax;
      exc_model->EXNEBB->Vrmin[i]=EXNEBB_head->Vrmin;
      exc_model->EXNEBB->Ifmax[i]=EXNEBB_head->Ifmax;
      exc_model->EXNEBB->Ifmin[i]=EXNEBB_head->Ifmin;
      exc_model->EXNEBB->flag[i]=EXNEBB_head->flag;

      EXNEBB_node_ptr EXNEBB_tmp=EXNEBB_head->next;
      PetscFree(EXNEBB_head);
      EXNEBB_head=EXNEBB_tmp;
    }/* end for */
  }/* end if */


 /* store EXNI */
  if(num_EXNI==0){
    ierr = PetscMalloc(sizeof(EXNI_MODEL),&(exc_model->EXNI));CHKERRQ(ierr);
    exc_model->EXNI->Nexni=0;
   }else{
    ierr = PetscMalloc(sizeof(EXNI_MODEL),&(exc_model->EXNI));CHKERRQ(ierr);
    exc_model->EXNI->Nexni=num_EXNI;
    ierr = PetscMalloc(num_EXNI*sizeof(PetscInt),&(exc_model->EXNI->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(char)*MAX_ID_LENGTH,&(exc_model->EXNI->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscInt),&(exc_model->EXNI->swich));CHKERRQ(ierr);
    ierr = PetscMalloc(num_EXNI*sizeof(PetscScalar),&(exc_model->EXNI->R));CHKERRQ(ierr);

    for(i=0;i<num_EXNI;i++){
      exc_model->EXNI->bus[i]=get_bus_index(EXNI_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->EXNI->gen_id[i * MAX_ID_LENGTH], EXNI_head->gen_id , MAX_ID_LENGTH);
      exc_model->EXNI->Tr[i]=EXNI_head->Tr;
      exc_model->EXNI->Ka[i]=EXNI_head->Ka;
      exc_model->EXNI->Ta[i]=EXNI_head->Ta;
      exc_model->EXNI->Vrmax[i]=EXNI_head->Vrmax;
      exc_model->EXNI->Vrmin[i]=EXNI_head->Vrmin;
      exc_model->EXNI->Tf1[i]=EXNI_head->Tf1;
      exc_model->EXNI->Tf2[i]=EXNI_head->Tf2;
      exc_model->EXNI->swich[i]=EXNI_head->swich;
      exc_model->EXNI->R[i]=EXNI_head->R;

      EXNI_node_ptr EXNI_tmp=EXNI_head->next;
      PetscFree(EXNI_head);
      EXNI_head=EXNI_tmp;
    }/* end for */
  }/* end if */

 /* store IVOEX */
  if(num_IVOEX==0){
    ierr = PetscMalloc(sizeof(IVOEX_MODEL),&(exc_model->IVOEX));CHKERRQ(ierr);
    exc_model->IVOEX->Nivoex=0;
   }else{
    ierr = PetscMalloc(sizeof(IVOEX_MODEL),&(exc_model->IVOEX));CHKERRQ(ierr);
    exc_model->IVOEX->Nivoex=num_IVOEX;
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscInt),&(exc_model->IVOEX->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(char)*MAX_ID_LENGTH,&(exc_model->IVOEX->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->K1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MAX1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MIN1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->K3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MAX3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MIN3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->K5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->A6));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->T6));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MAX5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_IVOEX*sizeof(PetscScalar),&(exc_model->IVOEX->MIN5));CHKERRQ(ierr);

    for(i=0;i<num_IVOEX;i++){
      exc_model->IVOEX->bus[i]=get_bus_index(IVOEX_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->IVOEX->gen_id[i * MAX_ID_LENGTH], IVOEX_head->gen_id , MAX_ID_LENGTH);
      exc_model->IVOEX->K1[i]=IVOEX_head->K1;
      exc_model->IVOEX->A1[i]=IVOEX_head->A1;
      exc_model->IVOEX->A2[i]=IVOEX_head->A2;
      exc_model->IVOEX->T1[i]=IVOEX_head->T1;
      exc_model->IVOEX->T2[i]=IVOEX_head->T2;
      exc_model->IVOEX->MAX1[i]=IVOEX_head->MAX1;
      exc_model->IVOEX->MIN1[i]=IVOEX_head->MIN1;
      exc_model->IVOEX->K3[i]=IVOEX_head->K3;
      exc_model->IVOEX->A3[i]=IVOEX_head->A3;
      exc_model->IVOEX->A4[i]=IVOEX_head->A4;
      exc_model->IVOEX->T3[i]=IVOEX_head->T3;
      exc_model->IVOEX->T4[i]=IVOEX_head->T4;
      exc_model->IVOEX->MAX3[i]=IVOEX_head->MAX3;
      exc_model->IVOEX->MIN3[i]=IVOEX_head->MIN3;
      exc_model->IVOEX->K5[i]=IVOEX_head->K5;
      exc_model->IVOEX->A5[i]=IVOEX_head->A5;
      exc_model->IVOEX->A6[i]=IVOEX_head->A6;
      exc_model->IVOEX->T5[i]=IVOEX_head->T5;
      exc_model->IVOEX->T6[i]=IVOEX_head->T6;
      exc_model->IVOEX->MAX5[i]=IVOEX_head->MAX5;
      exc_model->IVOEX->MIN5[i]=IVOEX_head->MIN5;

      IVOEX_node_ptr IVOEX_tmp=IVOEX_head->next;
      PetscFree(IVOEX_head);
      IVOEX_head=IVOEX_tmp;
    }/* end for */
  }/* end if */


 /* store OEX12T */
  if(num_OEX12T==0){
    ierr = PetscMalloc(sizeof(OEX12T_MODEL),&(exc_model->OEX12T));CHKERRQ(ierr);
    exc_model->OEX12T->Noex12t=0;
   }else{
    ierr = PetscMalloc(sizeof(OEX12T_MODEL),&(exc_model->OEX12T));CHKERRQ(ierr);
    exc_model->OEX12T->Noex12t=num_OEX12T;
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscInt),&(exc_model->OEX12T->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(char)*MAX_ID_LENGTH,&(exc_model->OEX12T->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Etmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vtmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vtmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->limout));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->acon));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->bcon));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vemax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vemin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Iflmt));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Kifl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Etlmt));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Ketl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tl1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Tl2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vomx));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX12T*sizeof(PetscScalar),&(exc_model->OEX12T->Vomn));CHKERRQ(ierr);
    for(i=0;i<num_OEX12T;i++){
      exc_model->OEX12T->bus[i]=get_bus_index(OEX12T_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->OEX12T->gen_id[i * MAX_ID_LENGTH], OEX12T_head->gen_id , MAX_ID_LENGTH);
      exc_model->OEX12T->Tr[i]=OEX12T_head->Tr;
      exc_model->OEX12T->Vimax[i]=OEX12T_head->Vimax;
      exc_model->OEX12T->Vimin[i]=OEX12T_head->Vimin;
      exc_model->OEX12T->Tc[i]=OEX12T_head->Tc;
      exc_model->OEX12T->Tb[i]=OEX12T_head->Tb;
      exc_model->OEX12T->Ka[i]=OEX12T_head->Ka;
      exc_model->OEX12T->Ta[i]=OEX12T_head->Ta;
      exc_model->OEX12T->Vrmax[i]=OEX12T_head->Vrmax;
      exc_model->OEX12T->Vrmin[i]=OEX12T_head->Vrmin;
      exc_model->OEX12T->Kc[i]=OEX12T_head->Kc;
      exc_model->OEX12T->Kf[i]=OEX12T_head->Kf;
      exc_model->OEX12T->Tf[i]=OEX12T_head->Tf;
      exc_model->OEX12T->Etmin[i]=OEX12T_head->Etmin;
      exc_model->OEX12T->Vtmax[i]=OEX12T_head->Vtmax;
      exc_model->OEX12T->Vtmin[i]=OEX12T_head->Vtmin;
      exc_model->OEX12T->limout[i]=OEX12T_head->limout;
      exc_model->OEX12T->acon[i]=OEX12T_head->acon;
      exc_model->OEX12T->bcon[i]=OEX12T_head->bcon;
      exc_model->OEX12T->Vemax[i]=OEX12T_head->Vemax;
      exc_model->OEX12T->Vemin[i]=OEX12T_head->Vemin;
      exc_model->OEX12T->Iflmt[i]=OEX12T_head->Iflmt;
      exc_model->OEX12T->Kifl[i]=OEX12T_head->Kifl;
      exc_model->OEX12T->Etlmt[i]=OEX12T_head->Etlmt;
      exc_model->OEX12T->Ketl[i]=OEX12T_head->Ketl;
      exc_model->OEX12T->Tl1[i]=OEX12T_head->Tl1;
      exc_model->OEX12T->Tl2[i]=OEX12T_head->Tl2;
      exc_model->OEX12T->Vomx[i]=OEX12T_head->Vomx;
      exc_model->OEX12T->Vomn[i]=OEX12T_head->Vomn;

      OEX12T_node_ptr OEX12T_tmp=OEX12T_head->next;
      PetscFree(OEX12T_head);
      OEX12T_head=OEX12T_tmp;
    }/* end for */
  }/* end if */


 /* store OEX3T */
  if(num_OEX3T==0){
    ierr = PetscMalloc(sizeof(OEX3T_MODEL),&(exc_model->OEX3T));CHKERRQ(ierr);
    exc_model->OEX3T->Noex3t=0;
   }else{
    ierr = PetscMalloc(sizeof(OEX3T_MODEL),&(exc_model->OEX3T));CHKERRQ(ierr);
    exc_model->OEX3T->Noex3t=num_OEX3T;
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscInt),&(exc_model->OEX3T->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(char)*MAX_ID_LENGTH,&(exc_model->OEX3T->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T3));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T4));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Ka));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T5));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->T6));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_OEX3T*sizeof(PetscScalar),&(exc_model->OEX3T->SeE2));CHKERRQ(ierr);

    for(i=0;i<num_OEX3T;i++){
      exc_model->OEX3T->bus[i]=get_bus_index(OEX3T_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->OEX3T->gen_id[i * MAX_ID_LENGTH], OEX3T_head->gen_id , MAX_ID_LENGTH);
      exc_model->OEX3T->Tr[i]=OEX3T_head->Tr;
      exc_model->OEX3T->T1[i]=OEX3T_head->T1;
      exc_model->OEX3T->T2[i]=OEX3T_head->T2;
      exc_model->OEX3T->T3[i]=OEX3T_head->T3;
      exc_model->OEX3T->T4[i]=OEX3T_head->T4;
      exc_model->OEX3T->Ka[i]=OEX3T_head->Ka;
      exc_model->OEX3T->T5[i]=OEX3T_head->T5;
      exc_model->OEX3T->T6[i]=OEX3T_head->T6;
      exc_model->OEX3T->Vrmax[i]=OEX3T_head->Vrmax;
      exc_model->OEX3T->Vrmin[i]=OEX3T_head->Vrmin;
      exc_model->OEX3T->Te[i]=OEX3T_head->Te;
      exc_model->OEX3T->Kf[i]=OEX3T_head->Kf;
      exc_model->OEX3T->Tf[i]=OEX3T_head->Tf;
      exc_model->OEX3T->Kc[i]=OEX3T_head->Kc;
      exc_model->OEX3T->Kd[i]=OEX3T_head->Kd;
      exc_model->OEX3T->Ke[i]=OEX3T_head->Ke;
      exc_model->OEX3T->E1[i]=OEX3T_head->E1;
      exc_model->OEX3T->SeE1[i]=OEX3T_head->SeE1;
      exc_model->OEX3T->E2[i]=OEX3T_head->E2;
      exc_model->OEX3T->SeE2[i]=OEX3T_head->SeE2;

      OEX3T_node_ptr OEX3T_tmp=OEX3T_head->next;
      PetscFree(OEX3T_head);
      OEX3T_head=OEX3T_tmp;
    }/* end for */
  }/* end if */

 /* store REXSYS */
  if(num_REXSYS==0){
    ierr = PetscMalloc(sizeof(REXSYS_MODEL),&(exc_model->REXSYS));CHKERRQ(ierr);
    exc_model->REXSYS->Nrexsys=0;
   }else{
    ierr = PetscMalloc(sizeof(REXSYS_MODEL),&(exc_model->REXSYS));CHKERRQ(ierr);
    exc_model->REXSYS->Nrexsys=num_REXSYS;
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscInt),&(exc_model->REXSYS->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(char)*MAX_ID_LENGTH,&(exc_model->REXSYS->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kvp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kvi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tb1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tc1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tb2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tc2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Fbf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kip));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kii));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Tp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Vfmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Vfmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSYS*sizeof(PetscScalar),&(exc_model->REXSYS->SeE2));CHKERRQ(ierr);

    for(i=0;i<num_REXSYS;i++){
      exc_model->REXSYS->bus[i]=get_bus_index(REXSYS_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->REXSYS->gen_id[i * MAX_ID_LENGTH], REXSYS_head->gen_id , MAX_ID_LENGTH);
      exc_model->REXSYS->Tr[i]=REXSYS_head->Tr;
      exc_model->REXSYS->Kvp[i]=REXSYS_head->Kvp;
      exc_model->REXSYS->Kvi[i]=REXSYS_head->Kvi;
      exc_model->REXSYS->Vimax[i]=REXSYS_head->Vimax;
      exc_model->REXSYS->Ta[i]=REXSYS_head->Ta;
      exc_model->REXSYS->Tb1[i]=REXSYS_head->Tb1;
      exc_model->REXSYS->Tc1[i]=REXSYS_head->Tc1;
      exc_model->REXSYS->Tb2[i]=REXSYS_head->Tb2;
      exc_model->REXSYS->Tc2[i]=REXSYS_head->Tc2;
      exc_model->REXSYS->Vrmax[i]=REXSYS_head->Vrmax;
      exc_model->REXSYS->Vrmin[i]=REXSYS_head->Vrmin;
      exc_model->REXSYS->Kf[i]=REXSYS_head->Kf;
      exc_model->REXSYS->Tf[i]=REXSYS_head->Tf;
      exc_model->REXSYS->Tf1[i]=REXSYS_head->Tf1;
      exc_model->REXSYS->Tf2[i]=REXSYS_head->Tf2;
      exc_model->REXSYS->Fbf[i]=REXSYS_head->Fbf;
      exc_model->REXSYS->Kip[i]=REXSYS_head->Kip;
      exc_model->REXSYS->Kii[i]=REXSYS_head->Kii;
      exc_model->REXSYS->Tp[i]=REXSYS_head->Tp;
      exc_model->REXSYS->Vfmax[i]=REXSYS_head->Vfmax;
      exc_model->REXSYS->Vfmin[i]=REXSYS_head->Vfmin;
      exc_model->REXSYS->Kh[i]=REXSYS_head->Kh;
      exc_model->REXSYS->Ke[i]=REXSYS_head->Ke;
      exc_model->REXSYS->Te[i]=REXSYS_head->Te;
      exc_model->REXSYS->Kc[i]=REXSYS_head->Kc;
      exc_model->REXSYS->Kd[i]=REXSYS_head->Kd;
      exc_model->REXSYS->E1[i]=REXSYS_head->E1;
      exc_model->REXSYS->SeE1[i]=REXSYS_head->SeE1;
      exc_model->REXSYS->E2[i]=REXSYS_head->E2;
      exc_model->REXSYS->SeE2[i]=REXSYS_head->SeE2;

      REXSYS_node_ptr REXSYS_tmp=REXSYS_head->next;
      PetscFree(REXSYS_head);
      REXSYS_head=REXSYS_tmp;
    }/* end for */
  }/* end if */


 /* store REXSY1 */
  if(num_REXSY1==0){
    ierr = PetscMalloc(sizeof(REXSY1_MODEL),&(exc_model->REXSY1));CHKERRQ(ierr);
    exc_model->REXSY1->Nrexsy1=0;
   }else{
    ierr = PetscMalloc(sizeof(REXSY1_MODEL),&(exc_model->REXSY1));CHKERRQ(ierr);
    exc_model->REXSY1->Nrexsy1=num_REXSY1;
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscInt),&(exc_model->REXSY1->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(char)*MAX_ID_LENGTH,&(exc_model->REXSY1->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kvp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kvi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tb1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tc1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tb2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tc2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vrmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vrmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tf1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tf2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Fbf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kip));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kii));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Tp));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vfmax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vfmin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Ke));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Te));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Kd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->E1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->SeE1));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->E2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->SeE2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->F1imf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Xc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_REXSY1*sizeof(PetscScalar),&(exc_model->REXSY1->Vcmax));CHKERRQ(ierr);

    for(i=0;i<num_REXSY1;i++){
      exc_model->REXSY1->bus[i]=get_bus_index(REXSY1_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->REXSY1->gen_id[i * MAX_ID_LENGTH], REXSY1_head->gen_id , MAX_ID_LENGTH);
      exc_model->REXSY1->Tr[i]=REXSY1_head->Tr;
      exc_model->REXSY1->Kvp[i]=REXSY1_head->Kvp;
      exc_model->REXSY1->Kvi[i]=REXSY1_head->Kvi;
      exc_model->REXSY1->Vimax[i]=REXSY1_head->Vimax;
      exc_model->REXSY1->Ta[i]=REXSY1_head->Ta;
      exc_model->REXSY1->Tb1[i]=REXSY1_head->Tb1;
      exc_model->REXSY1->Tc1[i]=REXSY1_head->Tc1;
      exc_model->REXSY1->Tb2[i]=REXSY1_head->Tb2;
      exc_model->REXSY1->Tc2[i]=REXSY1_head->Tc2;
      exc_model->REXSY1->Vrmax[i]=REXSY1_head->Vrmax;
      exc_model->REXSY1->Vrmin[i]=REXSY1_head->Vrmin;
      exc_model->REXSY1->Kf[i]=REXSY1_head->Kf;
      exc_model->REXSY1->Tf[i]=REXSY1_head->Tf;
      exc_model->REXSY1->Tf1[i]=REXSY1_head->Tf1;
      exc_model->REXSY1->Tf2[i]=REXSY1_head->Tf2;
      exc_model->REXSY1->Fbf[i]=REXSY1_head->Fbf;
      exc_model->REXSY1->Kip[i]=REXSY1_head->Kip;
      exc_model->REXSY1->Kii[i]=REXSY1_head->Kii;
      exc_model->REXSY1->Tp[i]=REXSY1_head->Tp;
      exc_model->REXSY1->Vfmax[i]=REXSY1_head->Vfmax;
      exc_model->REXSY1->Vfmin[i]=REXSY1_head->Vfmin;
      exc_model->REXSY1->Kh[i]=REXSY1_head->Kh;
      exc_model->REXSY1->Ke[i]=REXSY1_head->Ke;
      exc_model->REXSY1->Te[i]=REXSY1_head->Te;
      exc_model->REXSY1->Kc[i]=REXSY1_head->Kc;
      exc_model->REXSY1->Kd[i]=REXSY1_head->Kd;
      exc_model->REXSY1->E1[i]=REXSY1_head->E1;
      exc_model->REXSY1->SeE1[i]=REXSY1_head->SeE1;
      exc_model->REXSY1->E2[i]=REXSY1_head->E2;
      exc_model->REXSY1->SeE2[i]=REXSY1_head->SeE2;
      exc_model->REXSY1->F1imf[i]=REXSY1_head->F1imf;
      exc_model->REXSY1->Xc[i]=REXSY1_head->Xc;
      exc_model->REXSY1->Vcmax[i]=REXSY1_head->Vcmax;

      REXSY1_node_ptr REXSY1_tmp=REXSY1_head->next;
      PetscFree(REXSY1_head);
      REXSY1_head=REXSY1_tmp;
    }/* end for */
  }/* end if */


 /* store URHIDT */
  if(num_URHIDT==0){
    ierr = PetscMalloc(sizeof(URHIDT_MODEL),&(exc_model->URHIDT));CHKERRQ(ierr);
    exc_model->URHIDT->Nurhidt=0;
   }else{
    ierr = PetscMalloc(sizeof(URHIDT_MODEL),&(exc_model->URHIDT));CHKERRQ(ierr);
    exc_model->URHIDT->Nurhidt=num_URHIDT;
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscInt),&(exc_model->URHIDT->bus));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(char)*MAX_ID_LENGTH,&(exc_model->URHIDT->gen_id));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Kdv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tdv));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Ki));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tdi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tie));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Kdi));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Kd2i));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Kdifd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tdifd));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vimax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vimin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tb));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tc));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tbl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tcl));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Ta));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Taw));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vamax));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vamin));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->a));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tb2));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Kir));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Ilr));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Xe));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vlothrsh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Tlodelay));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Taf));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->Vhithrsh));CHKERRQ(ierr);
    ierr = PetscMalloc(num_URHIDT*sizeof(PetscScalar),&(exc_model->URHIDT->b));CHKERRQ(ierr);

    for(i=0;i<num_URHIDT;i++){
      exc_model->URHIDT->bus[i]=get_bus_index(URHIDT_head->bus, busdata->I, busdata->nbus);
      strncpy(&exc_model->URHIDT->gen_id[i * MAX_ID_LENGTH], URHIDT_head->gen_id , MAX_ID_LENGTH);
      exc_model->URHIDT->Kdv[i]=URHIDT_head->Kdv;
      exc_model->URHIDT->Tdv[i]=URHIDT_head->Tdv;
      exc_model->URHIDT->Ki[i]=URHIDT_head->Ki;
      exc_model->URHIDT->Tdi[i]=URHIDT_head->Tdi;
      exc_model->URHIDT->Tie[i]=URHIDT_head->Tie;
      exc_model->URHIDT->Kdi[i]=URHIDT_head->Kdi;
      exc_model->URHIDT->Kd2i[i]=URHIDT_head->Kd2i;
      exc_model->URHIDT->Kdifd[i]=URHIDT_head->Kdifd;
      exc_model->URHIDT->Tdifd[i]=URHIDT_head->Tdifd;
      exc_model->URHIDT->Tr[i]=URHIDT_head->Tr;
      exc_model->URHIDT->Vimax[i]=URHIDT_head->Vimax;
      exc_model->URHIDT->Vimin[i]=URHIDT_head->Vimin;
      exc_model->URHIDT->Tb[i]=URHIDT_head->Tb;
      exc_model->URHIDT->Tc[i]=URHIDT_head->Tc;
      exc_model->URHIDT->Tbl[i]=URHIDT_head->Tbl;
      exc_model->URHIDT->Tcl[i]=URHIDT_head->Tcl;
      exc_model->URHIDT->Ta[i]=URHIDT_head->Ta;
      exc_model->URHIDT->Taw[i]=URHIDT_head->Taw;
      exc_model->URHIDT->Vamax[i]=URHIDT_head->Vamax;
      exc_model->URHIDT->Vamin[i]=URHIDT_head->Vamin;
      exc_model->URHIDT->a[i]=URHIDT_head->a;
      exc_model->URHIDT->Tb2[i]=URHIDT_head->Tb2;
      exc_model->URHIDT->Kir[i]=URHIDT_head->Kir;
      exc_model->URHIDT->Ilr[i]=URHIDT_head->Ilr;
      exc_model->URHIDT->Xe[i]=URHIDT_head->Xe;
      exc_model->URHIDT->Vlothrsh[i]=URHIDT_head->Vlothrsh;
      exc_model->URHIDT->Tlodelay[i]=URHIDT_head->Tlodelay;
      exc_model->URHIDT->Taf[i]=URHIDT_head->Taf;
      exc_model->URHIDT->Vhithrsh[i]=URHIDT_head->Vhithrsh;
      exc_model->URHIDT->b[i]=URHIDT_head->b;

      URHIDT_node_ptr URHIDT_tmp=URHIDT_head->next;
      PetscFree(URHIDT_head);
      URHIDT_head=URHIDT_tmp;
    }/* end for */
  }/* end if */
  
  PetscFunctionReturn(0);
}/* end fun StoreExcModel */

