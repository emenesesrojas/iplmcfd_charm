





/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::start_2_closure : public SDAG::Closure {
      

      start_2_closure() {
        init();
      }
      start_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::finish_3_closure : public SDAG::Closure {
      

      finish_3_closure() {
        init();
      }
      finish_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finish_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(finish_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::reduce_dt_4_closure : public SDAG::Closure {
      double dt;


      reduce_dt_4_closure() {
        init();
      }
      reduce_dt_4_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dt;}
      void pup(PUP::er& __p) {
        __p | dt;
        packClosure(__p);
      }
      virtual ~reduce_dt_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(reduce_dt_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::reduce_ke_5_closure : public SDAG::Closure {
      double ke;


      reduce_ke_5_closure() {
        init();
      }
      reduce_ke_5_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return ke;}
      void pup(PUP::er& __p) {
        __p | ke;
        packClosure(__p);
      }
      virtual ~reduce_ke_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(reduce_ke_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::update_dt_2_closure : public SDAG::Closure {
      double dt;


      update_dt_2_closure() {
        init();
      }
      update_dt_2_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return dt;}
      void pup(PUP::er& __p) {
        __p | dt;
        packClosure(__p);
      }
      virtual ~update_dt_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(update_dt_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::update_ke_3_closure : public SDAG::Closure {
      double ke;


      update_ke_3_closure() {
        init();
      }
      update_ke_3_closure(CkMigrateMessage*) {
        init();
      }
      double & getP0() { return ke;}
      void pup(PUP::er& __p) {
        __p | ke;
        packClosure(__p);
      }
      virtual ~update_ke_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(update_ke_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::receive_particles_4_closure : public SDAG::Closure {
      std::vector<iplmcfd::Particle > particles;


      receive_particles_4_closure() {
        init();
      }
      receive_particles_4_closure(CkMigrateMessage*) {
        init();
      }
      std::vector<iplmcfd::Particle > & getP0() { return particles;}
      void pup(PUP::er& __p) {
        __p | particles;
        packClosure(__p);
      }
      virtual ~receive_particles_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(receive_particles_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::ResumeFromSync_5_closure : public SDAG::Closure {
      

      ResumeFromSync_5_closure() {
        init();
      }
      ResumeFromSync_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~ResumeFromSync_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(ResumeFromSync_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Block::start_6_closure : public SDAG::Closure {
      

      start_6_closure() {
        init();
      }
      start_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_Config groupProxy;
 */
extern CProxy_Config groupProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_groupProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|groupProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int chares_x;
 */
extern int chares_x;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_chares_x(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|chares_x;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int chares_y;
 */
extern int chares_y;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_chares_y(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|chares_y;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int chares_z;
 */
extern int chares_z;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_chares_z(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|chares_z;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message ConfigMessage;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_ConfigMessage::operator new(size_t s){
  return ConfigMessage::alloc(__idx, s, 0, 0);
}
void *CMessage_ConfigMessage::operator new(size_t s, int* sz){
  return ConfigMessage::alloc(__idx, s, sz, 0);
}
void *CMessage_ConfigMessage::operator new(size_t s, int* sz,const int pb){
  return ConfigMessage::alloc(__idx, s, sz, pb);
}
void *CMessage_ConfigMessage::operator new(size_t s, const int p) {
  return ConfigMessage::alloc(__idx, s, 0, p);
}
void* CMessage_ConfigMessage::alloc(int msgnum, size_t sz, int *sizes, int pb) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb);
}
CMessage_ConfigMessage::CMessage_ConfigMessage() {
ConfigMessage *newmsg = (ConfigMessage *)this;
}
void CMessage_ConfigMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_ConfigMessage::pack(ConfigMessage *msg) {
  return (void *) msg;
}
ConfigMessage* CMessage_ConfigMessage::unpack(void* buf) {
  ConfigMessage *msg = (ConfigMessage *) buf;
  return msg;
}
int CMessage_ConfigMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void start(void);
void finish(void);
void reduce_dt(double dt);
void reduce_ke(double ke);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */

CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

  CProxy_Main::CProxy_Main(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  ckSetChareID(impl_ret);
}

// Entry point registration function

int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      _call_Main_CkArgMsg, CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}


void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  new (impl_obj) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(void);
 */

void CProxy_Main::start(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_start_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_start_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_start_void(), impl_msg, &ckGetChareID(),0);
}

// Entry point registration function

int CkIndex_Main::reg_start_void() {
  int epidx = CkRegisterEp("start(void)",
      _call_start_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Main::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->start();
}
PUPable_def(SINGLE_ARG(Closure_Main::start_2_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finish(void);
 */

void CProxy_Main::finish(void)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_finish_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_finish_void(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_finish_void(), impl_msg, &ckGetChareID(),0);
}

void CkIndex_Main::_call_redn_wrapper_finish_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finish();
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_finish_void() {
  int epidx = CkRegisterEp("finish(void)",
      _call_finish_void, 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_finish_void() {
  return CkRegisterEp("redn_wrapper_finish(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_finish_void, CMessage_CkReductionMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_finish_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->finish();
}
PUPable_def(SINGLE_ARG(Closure_Main::finish_3_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduce_dt(double dt);
 */

void CProxy_Main::reduce_dt(double dt, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double dt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_reduce_dt_marshall4(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_reduce_dt_marshall4(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_reduce_dt_marshall4(), impl_msg, &ckGetChareID(),0);
}

void CkIndex_Main::_call_redn_wrapper_reduce_dt_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double dt*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  double dt; implP|dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_dt(dt);
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_reduce_dt_marshall4() {
  int epidx = CkRegisterEp("reduce_dt(double dt)",
      _call_reduce_dt_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reduce_dt_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reduce_dt_marshall4);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_reduce_dt_marshall4() {
  return CkRegisterEp("redn_wrapper_reduce_dt(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_reduce_dt_marshall4, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_reduce_dt_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dt*/
  PUP::fromMem implP(impl_buf);
  double dt; implP|dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_dt(dt);
}

int CkIndex_Main::_callmarshall_reduce_dt_marshall4(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: double dt*/
  PUP::fromMem implP(impl_buf);
  double dt; implP|dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_dt(dt);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_reduce_dt_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dt*/
  PUP::fromMem implP(impl_buf);
  double dt; implP|dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dt");
  implDestP|dt;
}
PUPable_def(SINGLE_ARG(Closure_Main::reduce_dt_4_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduce_ke(double ke);
 */

void CProxy_Main::reduce_ke(double ke, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: double ke
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ke;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ke;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_reduce_ke_marshall5(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_reduce_ke_marshall5(), impl_msg, &ckGetChareID(),destPE);
  }
  else CkSendMsg(CkIndex_Main::idx_reduce_ke_marshall5(), impl_msg, &ckGetChareID(),0);
}

void CkIndex_Main::_call_redn_wrapper_reduce_ke_marshall5(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: double ke*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  double ke; implP|ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_ke(ke);
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function

int CkIndex_Main::reg_reduce_ke_marshall5() {
  int epidx = CkRegisterEp("reduce_ke(double ke)",
      _call_reduce_ke_marshall5, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reduce_ke_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reduce_ke_marshall5);

  return epidx;
}


// Redn wrapper registration function

int CkIndex_Main::reg_redn_wrapper_reduce_ke_marshall5() {
  return CkRegisterEp("redn_wrapper_reduce_ke(CkReductionMsg *impl_msg)",
      _call_redn_wrapper_reduce_ke_marshall5, CkMarshallMsg::__idx, __idx, 0);
}


void CkIndex_Main::_call_reduce_ke_marshall5(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double ke*/
  PUP::fromMem implP(impl_buf);
  double ke; implP|ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_ke(ke);
}

int CkIndex_Main::_callmarshall_reduce_ke_marshall5(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast< Main *>(impl_obj_void);
  /*Unmarshall pup'd fields: double ke*/
  PUP::fromMem implP(impl_buf);
  double ke; implP|ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->reduce_ke(ke);
  return implP.size();
}

void CkIndex_Main::_marshallmessagepup_reduce_ke_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double ke*/
  PUP::fromMem implP(impl_buf);
  double ke; implP|ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ke");
  implDestP|ke;
}
PUPable_def(SINGLE_ARG(Closure_Main::reduce_ke_5_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void start(void);
  idx_start_void();

  // REG: void finish(void);
  idx_finish_void();
  idx_redn_wrapper_finish_void();

  // REG: void reduce_dt(double dt);
  idx_reduce_dt_marshall4();
  idx_redn_wrapper_reduce_dt_marshall4();

  // REG: void reduce_ke(double ke);
  idx_reduce_ke_marshall5();
  idx_redn_wrapper_reduce_ke_marshall5();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group Config: IrrGroup{
Config(void);
void start(ConfigMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Config::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Config(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(ConfigMessage* impl_msg);
 */

void CProxyElement_Config::start(ConfigMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else CkSendMsgBranch(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Config(void);
 */

CkGroupID CProxy_Config::ckNew(void)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  return CkCreateGroup(CkIndex_Config::__idx, CkIndex_Config::idx_Config_void(), impl_msg);
}

// Entry point registration function

int CkIndex_Config::reg_Config_void() {
  int epidx = CkRegisterEp("Config(void)",
      _call_Config_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Config::_call_Config_void(void* impl_msg, void* impl_obj_void)
{
  Config* impl_obj = static_cast<Config *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Config();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(ConfigMessage* impl_msg);
 */

void CProxy_Config::start(ConfigMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID(),0);
}

void CProxy_Config::start(ConfigMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}

void CProxy_Config::start(ConfigMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function

int CkIndex_Config::reg_start_ConfigMessage() {
  int epidx = CkRegisterEp("start(ConfigMessage* impl_msg)",
      _call_start_ConfigMessage, CMessage_ConfigMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)ConfigMessage::ckDebugPup);
  return epidx;
}


void CkIndex_Config::_call_start_ConfigMessage(void* impl_msg, void* impl_obj_void)
{
  Config* impl_obj = static_cast<Config *>(impl_obj_void);
  impl_obj->start((ConfigMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Config(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(ConfigMessage* impl_msg);
 */

void CProxySection_Config::start(ConfigMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_Config::idx_start_ConfigMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp = (ckGetNumSections()>1) ? CkCopyMsg((void **) &impl_msg) : impl_msg;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_Config::idx_start_ConfigMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Config::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,Config::isIrreducible());
  // REG: Config(void);
  idx_Config_void();
  CkRegisterDefaultCtor(__idx, idx_Config_void());

  // REG: void start(ConfigMessage* impl_msg);
  idx_start_ConfigMessage();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Block: ArrayElement{
Block(void);
void update_dt(double dt);
void update_ke(double ke);
void receive_particles(const std::vector<iplmcfd::Particle > &particles);
void ResumeFromSync(void);
void start(void);
Block(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Block::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(void);
 */

void CProxyElement_Block::insert(int onPE)
{ 
  void *impl_msg = CkAllocSysMsg();
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Block::idx_Block_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_dt(double dt);
 */

void CProxyElement_Block::update_dt(double dt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_update_dt_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_ke(double ke);
 */

void CProxyElement_Block::update_ke(double ke, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double ke
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ke;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ke;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_update_ke_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */

void CProxyElement_Block::receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<iplmcfd::Particle > &particles
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_receive_particles_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxyElement_Block::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(void);
 */

void CProxyElement_Block::start(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(void);
 */

CkArrayID CProxy_Block::ckNew(const CkArrayOptions &opts)
{
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_void(), opts);
}

CkArrayID CProxy_Block::ckNew(const int s1, const int s2, const int s3)
{
  void *impl_msg = CkAllocSysMsg();
  CkArrayOptions opts(s1, s2, s3);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  return ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Block::idx_Block_void(), opts);
}

// Entry point registration function

int CkIndex_Block::reg_Block_void() {
  int epidx = CkRegisterEp("Block(void)",
      _call_Block_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Block::_call_Block_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj) Block();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_dt(double dt);
 */

void CProxy_Block::update_dt(double dt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_update_dt_marshall2(),0);
}

// Entry point registration function

int CkIndex_Block::reg_update_dt_marshall2() {
  int epidx = CkRegisterEp("update_dt(double dt)",
      _call_update_dt_marshall2, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_update_dt_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_update_dt_marshall2);

  return epidx;
}


void CkIndex_Block::_call_update_dt_marshall2(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Block::update_dt_2_closure* genClosure = new Closure_Block::update_dt_2_closure();
  implP|genClosure->dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->update_dt(genClosure);
  genClosure->deref();
}

int CkIndex_Block::_callmarshall_update_dt_marshall2(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast< Block *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Block::update_dt_2_closure* genClosure = new Closure_Block::update_dt_2_closure();
  implP|genClosure->dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->update_dt(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Block::_marshallmessagepup_update_dt_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double dt*/
  PUP::fromMem implP(impl_buf);
  double dt; implP|dt;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("dt");
  implDestP|dt;
}
PUPable_def(SINGLE_ARG(Closure_Block::update_dt_2_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_ke(double ke);
 */

void CProxy_Block::update_ke(double ke, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double ke
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ke;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ke;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_update_ke_marshall3(),0);
}

// Entry point registration function

int CkIndex_Block::reg_update_ke_marshall3() {
  int epidx = CkRegisterEp("update_ke(double ke)",
      _call_update_ke_marshall3, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_update_ke_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_update_ke_marshall3);

  return epidx;
}


void CkIndex_Block::_call_update_ke_marshall3(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Block::update_ke_3_closure* genClosure = new Closure_Block::update_ke_3_closure();
  implP|genClosure->ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->update_ke(genClosure);
  genClosure->deref();
}

int CkIndex_Block::_callmarshall_update_ke_marshall3(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast< Block *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Block::update_ke_3_closure* genClosure = new Closure_Block::update_ke_3_closure();
  implP|genClosure->ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->update_ke(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Block::_marshallmessagepup_update_ke_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: double ke*/
  PUP::fromMem implP(impl_buf);
  double ke; implP|ke;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("ke");
  implDestP|ke;
}
PUPable_def(SINGLE_ARG(Closure_Block::update_ke_3_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */

void CProxy_Block::receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<iplmcfd::Particle > &particles
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_receive_particles_marshall4(),0);
}

// Entry point registration function

int CkIndex_Block::reg_receive_particles_marshall4() {
  int epidx = CkRegisterEp("receive_particles(const std::vector<iplmcfd::Particle > &particles)",
      _call_receive_particles_marshall4, CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_receive_particles_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_receive_particles_marshall4);

  return epidx;
}


void CkIndex_Block::_call_receive_particles_marshall4(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  PUP::fromMem implP(impl_buf);
  Closure_Block::receive_particles_4_closure* genClosure = new Closure_Block::receive_particles_4_closure();
  implP|genClosure->particles;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->receive_particles(genClosure);
  genClosure->deref();
}

int CkIndex_Block::_callmarshall_receive_particles_marshall4(char* impl_buf, void* impl_obj_void) {
  Block* impl_obj = static_cast< Block *>(impl_obj_void);
  PUP::fromMem implP(impl_buf);
  Closure_Block::receive_particles_4_closure* genClosure = new Closure_Block::receive_particles_4_closure();
  implP|genClosure->particles;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->receive_particles(genClosure);
  genClosure->deref();
  return implP.size();
}

void CkIndex_Block::_marshallmessagepup_receive_particles_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  /*Unmarshall pup'd fields: const std::vector<iplmcfd::Particle > &particles*/
  PUP::fromMem implP(impl_buf);
  std::vector<iplmcfd::Particle > particles; implP|particles;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("particles");
  implDestP|particles;
}
PUPable_def(SINGLE_ARG(Closure_Block::receive_particles_4_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxy_Block::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_ResumeFromSync_void(),0);
}

// Entry point registration function

int CkIndex_Block::reg_ResumeFromSync_void() {
  int epidx = CkRegisterEp("ResumeFromSync(void)",
      _call_ResumeFromSync_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Block::_call_ResumeFromSync_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->ResumeFromSync();
}
PUPable_def(SINGLE_ARG(Closure_Block::ResumeFromSync_5_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(void);
 */

void CProxy_Block::start(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Block::idx_start_void(),0);
}

// Entry point registration function

int CkIndex_Block::reg_start_void() {
  int epidx = CkRegisterEp("start(void)",
      _call_start_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Block::_call_start_void(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  impl_obj->start();
}
PUPable_def(SINGLE_ARG(Closure_Block::start_6_closure));
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */

// Entry point registration function

int CkIndex_Block::reg_Block_CkMigrateMessage() {
  int epidx = CkRegisterEp("Block(CkMigrateMessage* impl_msg)",
      _call_Block_CkMigrateMessage, 0, __idx, 0);
  return epidx;
}


void CkIndex_Block::_call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  Block* impl_obj = static_cast<Block *>(impl_obj_void);
  new (impl_obj) Block((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(void);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_dt(double dt);
 */

void CProxySection_Block::update_dt(double dt, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double dt
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|dt;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|dt;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_update_dt_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void update_ke(double ke);
 */

void CProxySection_Block::update_ke(double ke, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: double ke
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|ke;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|ke;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_update_ke_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */

void CProxySection_Block::receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const std::vector<iplmcfd::Particle > &particles
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(std::vector<iplmcfd::Particle > &)particles;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_receive_particles_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void ResumeFromSync(void);
 */

void CProxySection_Block::ResumeFromSync(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_ResumeFromSync_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start(void);
 */

void CProxySection_Block::start(void) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Block::idx_start_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Block(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Block::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Block(void);
  idx_Block_void();
  CkRegisterDefaultCtor(__idx, idx_Block_void());

  // REG: void update_dt(double dt);
  idx_update_dt_marshall2();

  // REG: void update_ke(double ke);
  idx_update_ke_marshall3();

  // REG: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
  idx_receive_particles_marshall4();

  // REG: void ResumeFromSync(void);
  idx_ResumeFromSync_void();

  // REG: void start(void);
  idx_start_void();

  // REG: Block(CkMigrateMessage* impl_msg);
  idx_Block_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Block_CkMigrateMessage());

  Block::__sdag_register(); 
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Block::start() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::start_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0() {
  _atomic_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_0_end() {
  start_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_prolog()), CkMyPe(), 0, NULL); 
  { // begin serial block

				initialize();
			
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_0() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_1(static_cast<Closure_Block::update_dt_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(0);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_0_end(Closure_Block::update_dt_2_closure* gen0) {
  _for_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_1(Closure_Block::update_dt_2_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_1(gen0, static_cast<Closure_Block::update_ke_3_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(1);
    c->addClosure(gen0);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_1_end(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1) {
  _when_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_1(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_atomic_1()), CkMyPe(), 0, NULL); 
  {
    double& dt = gen0->getP0();
    {
      double& ke = gen1->getP0();
      { // begin serial block

						initialize_end(dt,ke);
						output(0);
					
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_1_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_for_0() {
  iter_index=0;
  if ( iter_index<iter_end) {
    _slist_1();
  } else {
    _atomic_9();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_for_0_end() {
   iter_index++;
  if ( iter_index<iter_end) {
    _slist_1();
  } else {
    _atomic_9();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1() {
  _atomic_2();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_1_end() {
  _for_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_2() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_atomic_2()), CkMyPe(), 0, NULL); 
  { // begin serial block
 if(thisIndex.x == 0 && thisIndex.y == 0 && thisIndex.z == 0) CkPrintf("Iteration=%d %f\n",iter_index,CmiWallTimer()); 
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _atomic_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_3() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_step()), CkMyPe(), 0, NULL); 
  { // begin serial block
 step(iter_index); 
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _forall_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0() {
  int __first = (1), __last = (neighbors), __stride = (1);
  if (__first > __last) {
    int __tmp=__first; __first=__last; __last=__tmp;
    __stride = -__stride;
  }
  SDAG::CCounter *_cf0 = new SDAG::CCounter(__first, __last, __stride);
  for(int block=__first;block<=__last;block+=__stride) {
    SDAG::ForallClosure* block_cl = new SDAG::ForallClosure(block);
    _slist_2(block_cl, _cf0);
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_forall_0_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _cf0->decrement(); /* DECREMENT 1 */ 
  block_cl->deref();
  if (_cf0->isDone()) {
    _cf0->deref();
    _atomic_5();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _when_2(block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_2_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  _forall_0_end(block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_2(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(2, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_4(block_cl, _cf0, static_cast<Closure_Block::receive_particles_4_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(2);
    c->addClosure(block_cl);
    c->addClosure(_cf0);
    c->anyEntries.push_back(2);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_2_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::receive_particles_4_closure* gen2) {
  _slist_2_end(block_cl, _cf0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_4(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::receive_particles_4_closure* gen2) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_atomic_4()), CkMyPe(), 0, NULL); 
  {
    int& block = block_cl->getP0();
    {
      {
        std::vector<iplmcfd::Particle >& particles = gen2->getP0();
        { // begin serial block

						insert_particles(particles);
					
        } // end serial block
      }
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_2_end(block_cl, _cf0, gen2);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_5() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_step_middle()), CkMyPe(), 0, NULL); 
  { // begin serial block
 step_middle(iter_index); 
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_3();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_3() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(0, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_4(static_cast<Closure_Block::update_dt_2_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(3);
    c->anyEntries.push_back(0);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_3_end(Closure_Block::update_dt_2_closure* gen0) {
  _atomic_7();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_4(Closure_Block::update_dt_2_closure* gen0) {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(1, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _atomic_6(gen0, static_cast<Closure_Block::update_ke_3_closure*>(buf0->cl));
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(4);
    c->addClosure(gen0);
    c->anyEntries.push_back(1);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_4_end(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1) {
  _when_3_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_6(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_atomic_6()), CkMyPe(), 0, NULL); 
  {
    double& dt = gen0->getP0();
    {
      double& ke = gen1->getP0();
      { // begin serial block

							step_end(dt,ke);
						
      } // end serial block
    }
  }
  _TRACE_END_EXECUTE(); 
  _when_4_end(gen0, gen1);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_7() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_update_time()), CkMyPe(), 0, NULL); 
  { // begin serial block
 update_time(); 
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _if_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_0() {
  if (iter_index == balance_init || iter_index > balance_init && (iter_index - balance_init) % balance_freq == 0) {
    _slist_3();
  } else {
    _if_0_end();
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_if_0_end() {
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_3() {
  _atomic_8();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_slist_3_end() {
  _if_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_8() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_atomic_8()), CkMyPe(), 0, NULL); 
  { // begin serial block
 AtSync(); 
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _when_5();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
SDAG::Continuation* Block::_when_5() {
  SDAG::Buffer* buf0 = __dep->tryFindMessage(3, false, 0, 0);
  if (buf0) {
    __dep->removeMessage(buf0);
    _when_5_end();
    delete buf0;
    return 0;
  } else {
    SDAG::Continuation* c = new SDAG::Continuation(5);
    c->anyEntries.push_back(3);
    __dep->reg(c);
    return c;
  }
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_when_5_end() {
  _slist_3_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::_atomic_9() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Block_epilog()), CkMyPe(), 0, NULL); 
  { // begin serial block

				CkCallback cb(CkReductionTarget(Main, finish), mainProxy);
				contribute(0, NULL, CkReduction::nop, cb);
			
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::update_dt(double dt){
  Closure_Block::update_dt_2_closure* genClosure = new Closure_Block::update_dt_2_closure();
  genClosure->getP0() = dt;
  update_dt(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::update_dt(Closure_Block::update_dt_2_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(0, genClosure, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(0);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 0:
      _when_0(
      );
    break;
    case 3:
      _when_3(
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::update_ke(double ke){
  Closure_Block::update_ke_3_closure* genClosure = new Closure_Block::update_ke_3_closure();
  genClosure->getP0() = ke;
  update_ke(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::update_ke(Closure_Block::update_ke_3_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(1, genClosure, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(1);
  if (c) {
    _TRACE_END_EXECUTE(); 
    switch(c->whenID) {
    case 1:
      _when_1(
        static_cast<Closure_Block::update_dt_2_closure*>(c->closure[0])
      );
    break;
    case 4:
      _when_4(
        static_cast<Closure_Block::update_dt_2_closure*>(c->closure[0])
      );
    break;
    }
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::receive_particles(std::vector<iplmcfd::Particle > particles){
  Closure_Block::receive_particles_4_closure* genClosure = new Closure_Block::receive_particles_4_closure();
  genClosure->getP0() = particles;
  receive_particles(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::receive_particles(Closure_Block::receive_particles_4_closure* genClosure){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(2, genClosure, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(2);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_2(
      static_cast<SDAG::ForallClosure*>(c->closure[0]), 
      static_cast<SDAG::CCounter*>(c->closure[1])
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::ResumeFromSync(){
  if (!__dep.get()) _sdag_init();
  __dep->pushBuffer(3, 0, 0);
  SDAG::Continuation* c = __dep->tryFindContinuation(3);
  if (c) {
    _TRACE_END_EXECUTE(); 
    _when_5(
    );
    _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL); 
    delete c;
  }
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::_sdag_init() {
  __dep.reset(new SDAG::Dependency(4,6));
  __dep->addDepends(0,0);
  __dep->addDepends(3,0);
  __dep->addDepends(1,1);
  __dep->addDepends(4,1);
  __dep->addDepends(2,2);
  __dep->addDepends(5,3);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_init() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_pup(PUP::er &p) {
    bool hasSDAG = __dep.get();
    p|hasSDAG;
    if (p.isUnpacking() && hasSDAG) _sdag_init();
    if (hasSDAG) { __dep->pup(p); }
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Block::__sdag_register() {
  (void)_sdag_idx_Block_prolog();
  (void)_sdag_idx_Block_atomic_1();
  (void)_sdag_idx_Block_atomic_2();
  (void)_sdag_idx_Block_step();
  (void)_sdag_idx_Block_atomic_4();
  (void)_sdag_idx_Block_step_middle();
  (void)_sdag_idx_Block_atomic_6();
  (void)_sdag_idx_Block_update_time();
  (void)_sdag_idx_Block_atomic_8();
  (void)_sdag_idx_Block_epilog();
  PUPable_reg(SINGLE_ARG(Closure_Block::update_dt_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::update_ke_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::receive_particles_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::ResumeFromSync_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::start_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::update_dt_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::update_ke_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::receive_particles_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::ResumeFromSync_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Block::start_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_prolog() {
  static int epidx = _sdag_reg_Block_prolog();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_prolog() {
  return CkRegisterEp("Block_prolog", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_atomic_1() {
  static int epidx = _sdag_reg_Block_atomic_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_atomic_1() {
  return CkRegisterEp("Block_atomic_1", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_atomic_2() {
  static int epidx = _sdag_reg_Block_atomic_2();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_atomic_2() {
  return CkRegisterEp("Block_atomic_2", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_step() {
  static int epidx = _sdag_reg_Block_step();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_step() {
  return CkRegisterEp("Block_step", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_atomic_4() {
  static int epidx = _sdag_reg_Block_atomic_4();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_atomic_4() {
  return CkRegisterEp("Block_atomic_4", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_step_middle() {
  static int epidx = _sdag_reg_Block_step_middle();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_step_middle() {
  return CkRegisterEp("Block_step_middle", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_atomic_6() {
  static int epidx = _sdag_reg_Block_atomic_6();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_atomic_6() {
  return CkRegisterEp("Block_atomic_6", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_update_time() {
  static int epidx = _sdag_reg_Block_update_time();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_update_time() {
  return CkRegisterEp("Block_update_time", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_atomic_8() {
  static int epidx = _sdag_reg_Block_atomic_8();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_atomic_8() {
  return CkRegisterEp("Block_atomic_8", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_idx_Block_epilog() {
  static int epidx = _sdag_reg_Block_epilog();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Block::_sdag_reg_Block_epilog() {
  return CkRegisterEp("Block_epilog", NULL, 0, CkIndex_Block::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registercfd(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("groupProxy","CProxy_Config",sizeof(groupProxy),(void *) &groupProxy,__xlater_roPup_groupProxy);

  CkRegisterReadonly("chares_x","int",sizeof(chares_x),(void *) &chares_x,__xlater_roPup_chares_x);

  CkRegisterReadonly("chares_y","int",sizeof(chares_y),(void *) &chares_y,__xlater_roPup_chares_y);

  CkRegisterReadonly("chares_z","int",sizeof(chares_z),(void *) &chares_z,__xlater_roPup_chares_z);

/* REG: message ConfigMessage;
*/
CMessage_ConfigMessage::__register("ConfigMessage", sizeof(ConfigMessage),(CkPackFnPtr) ConfigMessage::pack,(CkUnpackFnPtr) ConfigMessage::unpack);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void start(void);
void finish(void);
void reduce_dt(double dt);
void reduce_ke(double ke);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: group Config: IrrGroup{
Config(void);
void start(ConfigMessage* impl_msg);
};
*/
  CkIndex_Config::__register("Config", sizeof(Config));

/* REG: array Block: ArrayElement{
Block(void);
void update_dt(double dt);
void update_ke(double ke);
void receive_particles(const std::vector<iplmcfd::Particle > &particles);
void ResumeFromSync(void);
void start(void);
Block(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Block::__register("Block", sizeof(Block));

}
extern "C" void CkRegisterMainModule(void) {
  _registercfd();
}
#endif /* CK_TEMPLATES_ONLY */
