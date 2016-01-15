#ifndef _DECL_cfd_H_
#define _DECL_cfd_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly CProxy_Config groupProxy;
 */

/* DECLS: readonly int chares_x;
 */

/* DECLS: readonly int chares_y;
 */

/* DECLS: readonly int chares_z;
 */

/* DECLS: message ConfigMessage;
 */
class ConfigMessage;
class CMessage_ConfigMessage:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int);
    static void dealloc(void *p);
    CMessage_ConfigMessage();
    static void *pack(ConfigMessage *p);
    static ConfigMessage* unpack(void* p);
    void *operator new(size_t, const int);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void start(void);
void finish(void);
void reduce_dt(double dt);
void reduce_ke(double ke);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void start(void);
     */
    // Entry point registration at startup
    
    static int reg_start_void();
    // Entry point index lookup
    
    inline static int idx_start_void() {
      static int epidx = reg_start_void();
      return epidx;
    }

    
    inline static int idx_start(void (Main::*)(void) ) {
      return idx_start_void();
    }


    
    static int start(void) { return idx_start_void(); }
    
    static void _call_start_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finish(void);
     */
    // Entry point registration at startup
    
    static int reg_finish_void();
    // Entry point index lookup
    
    inline static int idx_finish_void() {
      static int epidx = reg_finish_void();
      return epidx;
    }

    
    inline static int idx_finish(void (Main::*)(void) ) {
      return idx_finish_void();
    }


    
    static int finish(void) { return idx_finish_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finish_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finish_void() {
      static int epidx = reg_redn_wrapper_finish_void();
      return epidx;
    }
    
    static int redn_wrapper_finish(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finish_void(); }
    
    static void _call_redn_wrapper_finish_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finish_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finish_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reduce_dt(double dt);
     */
    // Entry point registration at startup
    
    static int reg_reduce_dt_marshall4();
    // Entry point index lookup
    
    inline static int idx_reduce_dt_marshall4() {
      static int epidx = reg_reduce_dt_marshall4();
      return epidx;
    }

    
    inline static int idx_reduce_dt(void (Main::*)(double dt) ) {
      return idx_reduce_dt_marshall4();
    }


    
    static int reduce_dt(double dt) { return idx_reduce_dt_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reduce_dt_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reduce_dt_marshall4() {
      static int epidx = reg_redn_wrapper_reduce_dt_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_reduce_dt(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reduce_dt_marshall4(); }
    
    static void _call_redn_wrapper_reduce_dt_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_reduce_dt_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reduce_dt_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reduce_dt_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reduce_dt_marshall4(PUP::er &p,void *msg);
    /* DECLS: void reduce_ke(double ke);
     */
    // Entry point registration at startup
    
    static int reg_reduce_ke_marshall5();
    // Entry point index lookup
    
    inline static int idx_reduce_ke_marshall5() {
      static int epidx = reg_reduce_ke_marshall5();
      return epidx;
    }

    
    inline static int idx_reduce_ke(void (Main::*)(double ke) ) {
      return idx_reduce_ke_marshall5();
    }


    
    static int reduce_ke(double ke) { return idx_reduce_ke_marshall5(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reduce_ke_marshall5();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reduce_ke_marshall5() {
      static int epidx = reg_redn_wrapper_reduce_ke_marshall5();
      return epidx;
    }
    
    static int redn_wrapper_reduce_ke(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reduce_ke_marshall5(); }
    
    static void _call_redn_wrapper_reduce_ke_marshall5(void* impl_msg, void* impl_obj_void);
    
    static void _call_reduce_ke_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reduce_ke_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reduce_ke_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reduce_ke_marshall5(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p); }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);
    CProxy_Main(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);

/* DECLS: void start(void);
 */
    
    void start(void);

/* DECLS: void finish(void);
 */
    
    void finish(void);

/* DECLS: void reduce_dt(double dt);
 */
    
    void reduce_dt(double dt, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduce_ke(double ke);
 */
    
    void reduce_ke(double ke, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Main)
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main> CBase_Main;

/* DECLS: group Config: IrrGroup{
Config(void);
void start(ConfigMessage* impl_msg);
};
 */
 class Config;
 class CkIndex_Config;
 class CProxy_Config;
 class CProxyElement_Config;
 class CProxySection_Config;
/* --------------- index object ------------------ */
class CkIndex_Config:public CkIndex_IrrGroup{
  public:
    typedef Config local_t;
    typedef CkIndex_Config index_t;
    typedef CProxy_Config proxy_t;
    typedef CProxyElement_Config element_t;
    typedef CProxySection_Config section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Config(void);
     */
    // Entry point registration at startup
    
    static int reg_Config_void();
    // Entry point index lookup
    
    inline static int idx_Config_void() {
      static int epidx = reg_Config_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Config_void(); }
    
    static void _call_Config_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Config_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start(ConfigMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_start_ConfigMessage();
    // Entry point index lookup
    
    inline static int idx_start_ConfigMessage() {
      static int epidx = reg_start_ConfigMessage();
      return epidx;
    }

    
    inline static int idx_start(void (Config::*)(ConfigMessage* impl_msg) ) {
      return idx_start_ConfigMessage();
    }


    
    static int start(ConfigMessage* impl_msg) { return idx_start_ConfigMessage(); }
    
    static void _call_start_ConfigMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_ConfigMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_Config: public CProxyElement_IrrGroup{
  public:
    typedef Config local_t;
    typedef CkIndex_Config index_t;
    typedef CProxy_Config proxy_t;
    typedef CProxyElement_Config element_t;
    typedef CProxySection_Config section_t;

    CProxyElement_Config(void) {}
    CProxyElement_Config(const IrrGroup *g) : CProxyElement_IrrGroup(g){  }
    CProxyElement_Config(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){  }
    CProxyElement_Config(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){  }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    Config* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Config* ckLocalBranch(CkGroupID gID) {
      return (Config*)CkLocalBranch(gID);
    }
/* DECLS: Config(void);
 */
    

/* DECLS: void start(ConfigMessage* impl_msg);
 */
    
    void start(ConfigMessage* impl_msg);

};
PUPmarshall(CProxyElement_Config)
/* ---------------- collective proxy -------------- */
class CProxy_Config: public CProxy_IrrGroup{
  public:
    typedef Config local_t;
    typedef CkIndex_Config index_t;
    typedef CProxy_Config proxy_t;
    typedef CProxyElement_Config element_t;
    typedef CProxySection_Config section_t;

    CProxy_Config(void) {}
    CProxy_Config(const IrrGroup *g) : CProxy_IrrGroup(g){  }
    CProxy_Config(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_Config(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_Config operator[](int onPE) const
      {return CProxyElement_Config(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    Config* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Config* ckLocalBranch(CkGroupID gID) {
      return (Config*)CkLocalBranch(gID);
    }
/* DECLS: Config(void);
 */
    
    static CkGroupID ckNew(void);

/* DECLS: void start(ConfigMessage* impl_msg);
 */
    
    void start(ConfigMessage* impl_msg);
    
    void start(ConfigMessage* impl_msg, int npes, int *pes);
    
    void start(ConfigMessage* impl_msg, CmiGroup &grp);

};
PUPmarshall(CProxy_Config)
/* ---------------- section proxy -------------- */
class CProxySection_Config: public CProxySection_IrrGroup{
  public:
    typedef Config local_t;
    typedef CkIndex_Config index_t;
    typedef CProxy_Config proxy_t;
    typedef CProxyElement_Config element_t;
    typedef CProxySection_Config section_t;

    CProxySection_Config(void) {}
    CProxySection_Config(const IrrGroup *g) : CProxySection_IrrGroup(g){  }
    CProxySection_Config(const CkGroupID &_gid,const int *_pelist,int _npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_Config(const CkGroupID &_gid,const int *_pelist,int _npes) : CProxySection_IrrGroup(_gid,_pelist,_npes){  }
    CProxySection_Config(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes) : CProxySection_IrrGroup(n,_gid,_pelist,_npes){  }
    CProxySection_Config(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes,CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p); }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    Config* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static Config* ckLocalBranch(CkGroupID gID) {
      return (Config*)CkLocalBranch(gID);
    }
/* DECLS: Config(void);
 */
    

/* DECLS: void start(ConfigMessage* impl_msg);
 */
    
    void start(ConfigMessage* impl_msg);

};
PUPmarshall(CProxySection_Config)
#define Config_SDAG_CODE 
typedef CBaseT1<Group, CProxy_Config> CBase_Config;

/* DECLS: array Block: ArrayElement{
Block(void);
void update_dt(double dt);
void update_ke(double ke);
void receive_particles(const std::vector<iplmcfd::Particle > &particles);
void ResumeFromSync(void);
void start(void);
Block(CkMigrateMessage* impl_msg);
};
 */
 class Block;
 class CkIndex_Block;
 class CProxy_Block;
 class CProxyElement_Block;
 class CProxySection_Block;
/* --------------- index object ------------------ */
class CkIndex_Block:public CkIndex_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Block(void);
     */
    // Entry point registration at startup
    
    static int reg_Block_void();
    // Entry point index lookup
    
    inline static int idx_Block_void() {
      static int epidx = reg_Block_void();
      return epidx;
    }

    
    static int ckNew(void) { return idx_Block_void(); }
    
    static void _call_Block_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_void(void* impl_msg, void* impl_obj);
    /* DECLS: void update_dt(double dt);
     */
    // Entry point registration at startup
    
    static int reg_update_dt_marshall2();
    // Entry point index lookup
    
    inline static int idx_update_dt_marshall2() {
      static int epidx = reg_update_dt_marshall2();
      return epidx;
    }

    
    inline static int idx_update_dt(void (Block::*)(double dt) ) {
      return idx_update_dt_marshall2();
    }


    
    static int update_dt(double dt) { return idx_update_dt_marshall2(); }
    
    static void _call_update_dt_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_update_dt_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_update_dt_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_update_dt_marshall2(PUP::er &p,void *msg);
    /* DECLS: void update_ke(double ke);
     */
    // Entry point registration at startup
    
    static int reg_update_ke_marshall3();
    // Entry point index lookup
    
    inline static int idx_update_ke_marshall3() {
      static int epidx = reg_update_ke_marshall3();
      return epidx;
    }

    
    inline static int idx_update_ke(void (Block::*)(double ke) ) {
      return idx_update_ke_marshall3();
    }


    
    static int update_ke(double ke) { return idx_update_ke_marshall3(); }
    
    static void _call_update_ke_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_update_ke_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_update_ke_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_update_ke_marshall3(PUP::er &p,void *msg);
    /* DECLS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
     */
    // Entry point registration at startup
    
    static int reg_receive_particles_marshall4();
    // Entry point index lookup
    
    inline static int idx_receive_particles_marshall4() {
      static int epidx = reg_receive_particles_marshall4();
      return epidx;
    }

    
    inline static int idx_receive_particles(void (Block::*)(const std::vector<iplmcfd::Particle > &particles) ) {
      return idx_receive_particles_marshall4();
    }


    
    static int receive_particles(const std::vector<iplmcfd::Particle > &particles) { return idx_receive_particles_marshall4(); }
    
    static void _call_receive_particles_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receive_particles_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_receive_particles_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_receive_particles_marshall4(PUP::er &p,void *msg);
    /* DECLS: void ResumeFromSync(void);
     */
    // Entry point registration at startup
    
    static int reg_ResumeFromSync_void();
    // Entry point index lookup
    
    inline static int idx_ResumeFromSync_void() {
      static int epidx = reg_ResumeFromSync_void();
      return epidx;
    }

    
    inline static int idx_ResumeFromSync(void (Block::*)(void) ) {
      return idx_ResumeFromSync_void();
    }


    
    static int ResumeFromSync(void) { return idx_ResumeFromSync_void(); }
    
    static void _call_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_ResumeFromSync_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start(void);
     */
    // Entry point registration at startup
    
    static int reg_start_void();
    // Entry point index lookup
    
    inline static int idx_start_void() {
      static int epidx = reg_start_void();
      return epidx;
    }

    
    inline static int idx_start(void (Block::*)(void) ) {
      return idx_start_void();
    }


    
    static int start(void) { return idx_start_void(); }
    
    static void _call_start_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_void(void* impl_msg, void* impl_obj);
    /* DECLS: Block(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Block_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Block_CkMigrateMessage() {
      static int epidx = reg_Block_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Block_CkMigrateMessage(); }
    
    static void _call_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Block_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Block : public CProxyElement_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    CProxyElement_Block(void) {}
    CProxyElement_Block(const ArrayElement *e) : CProxyElement_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Block *ckLocal(void) const
    { return (Block *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex3D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex3D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}

    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {}
    CProxyElement_Block(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {}
/* DECLS: Block(void);
 */
    
    void insert(int onPE=-1);
/* DECLS: void update_dt(double dt);
 */
    
    void update_dt(double dt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void update_ke(double ke);
 */
    
    void update_ke(double ke, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */
    
    void receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void start(void);
 */
    
    void start(void) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxyElement_Block)
/* ---------------- collective proxy -------------- */
 class CProxy_Block : public CProxy_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    CProxy_Block(void) {}
    CProxy_Block(const ArrayElement *e) : CProxy_ArrayElement(e){  }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxy_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    static CkArrayID ckNew(void) { return ckCreateEmptyArray(); }
    // Generalized array indexing:
    CProxyElement_Block operator [] (const CkArrayIndex3D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator() (const CkArrayIndex3D &idx) const
    { return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Block operator () (int i0,int i1,int i2) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex3D(i0,i1,i2), CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (CkIndex3D idx) const 
        {return CProxyElement_Block(ckGetArrayID(), CkArrayIndex3D(idx), CK_DELCTOR_CALL);}
    CProxy_Block(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Block(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Block(void);
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts);
    static CkArrayID ckNew(const int s1, const int s2, const int s3);

/* DECLS: void update_dt(double dt);
 */
    
    void update_dt(double dt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void update_ke(double ke);
 */
    
    void update_ke(double ke, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */
    
    void receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void start(void);
 */
    
    void start(void) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxy_Block)
/* ---------------- section proxy -------------- */
 class CProxySection_Block : public CProxySection_ArrayElement{
  public:
    typedef Block local_t;
    typedef CkIndex_Block index_t;
    typedef CProxy_Block proxy_t;
    typedef CProxyElement_Block element_t;
    typedef CProxySection_Block section_t;

    CProxySection_Block(void) {}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p); }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(void)
    { return CProxySection_ArrayElement::ckCreateEmptyArray(); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Block operator [] (const CkArrayIndex3D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator() (const CkArrayIndex3D &idx) const
        {return CProxyElement_Block(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Block operator () (int idx) const 
        {return CProxyElement_Block(ckGetArrayID(), *(CkArrayIndex3D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex3D *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l1, int u1, int s1, int l2, int u2, int s2, int l3, int u3, int s3) {
      CkVec<CkArrayIndex3D> al;
      for (int i=l1; i<=u1; i+=s1) 
        for (int j=l2; j<=u2; j+=s2) 
          for (int k=l3; k<=u3; k+=s3) 
          al.push_back(CkArrayIndex3D(i, j, k));
      return CkSectionID(aid, al.getVec(), al.size());
    } 
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(const CkArrayID &aid, CkArrayIndex *elems, int nElems) 
        :CProxySection_ArrayElement(aid,elems,nElems) {}
    CProxySection_Block(const CkSectionID &sid)       :CProxySection_ArrayElement(sid) {}
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Block(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) {}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
/* DECLS: Block(void);
 */
    

/* DECLS: void update_dt(double dt);
 */
    
    void update_dt(double dt, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void update_ke(double ke);
 */
    
    void update_ke(double ke, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void receive_particles(const std::vector<iplmcfd::Particle > &particles);
 */
    
    void receive_particles(const std::vector<iplmcfd::Particle > &particles, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void ResumeFromSync(void);
 */
    
    void ResumeFromSync(void) ;

/* DECLS: void start(void);
 */
    
    void start(void) ;

/* DECLS: Block(CkMigrateMessage* impl_msg);
 */

};
PUPmarshall(CProxySection_Block)
#define Block_SDAG_CODE                                                        \
public:                                                                        \
  void start();                                                                \
private:                                                                       \
  void start_end();                                                            \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _atomic_0();                                                            \
  SDAG::Continuation* _when_0();                                               \
  void _when_0_end(Closure_Block::update_dt_2_closure* gen0);                  \
  SDAG::Continuation* _when_1(Closure_Block::update_dt_2_closure* gen0);       \
  void _when_1_end(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1);\
  void _atomic_1(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1);\
  void _for_0();                                                               \
  void _for_0_end();                                                           \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _atomic_2();                                                            \
  void _atomic_3();                                                            \
  void _forall_0();                                                            \
  void _forall_0_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);     \
  void _slist_2(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);          \
  void _slist_2_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);      \
  SDAG::Continuation* _when_2(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0);\
  void _when_2_end(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::receive_particles_4_closure* gen2);\
  void _atomic_4(SDAG::ForallClosure* block_cl, SDAG::CCounter* _cf0, Closure_Block::receive_particles_4_closure* gen2);\
  void _atomic_5();                                                            \
  SDAG::Continuation* _when_3();                                               \
  void _when_3_end(Closure_Block::update_dt_2_closure* gen0);                  \
  SDAG::Continuation* _when_4(Closure_Block::update_dt_2_closure* gen0);       \
  void _when_4_end(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1);\
  void _atomic_6(Closure_Block::update_dt_2_closure* gen0, Closure_Block::update_ke_3_closure* gen1);\
  void _atomic_7();                                                            \
  void _if_0();                                                                \
  void _if_0_end();                                                            \
  void _slist_3();                                                             \
  void _slist_3_end();                                                         \
  void _atomic_8();                                                            \
  SDAG::Continuation* _when_5();                                               \
  void _when_5_end();                                                          \
  void _atomic_9();                                                            \
public:                                                                        \
  void update_dt(Closure_Block::update_dt_2_closure* genClosure);              \
  void update_dt(double dt);                                                   \
  void update_ke(Closure_Block::update_ke_3_closure* genClosure);              \
  void update_ke(double ke);                                                   \
  void receive_particles(Closure_Block::receive_particles_4_closure* genClosure);\
  void receive_particles(std::vector<iplmcfd::Particle > particles);           \
  void ResumeFromSync();                                                       \
public:                                                                        \
  std::auto_ptr<SDAG::Dependency> __dep;                                       \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void __sdag_pup(PUP::er &p);                                                 \
  static void __sdag_register();                                               \
  static int _sdag_idx_Block_prolog();                                         \
  static int _sdag_reg_Block_prolog();                                         \
  static int _sdag_idx_Block_atomic_1();                                       \
  static int _sdag_reg_Block_atomic_1();                                       \
  static int _sdag_idx_Block_atomic_2();                                       \
  static int _sdag_reg_Block_atomic_2();                                       \
  static int _sdag_idx_Block_step();                                           \
  static int _sdag_reg_Block_step();                                           \
  static int _sdag_idx_Block_atomic_4();                                       \
  static int _sdag_reg_Block_atomic_4();                                       \
  static int _sdag_idx_Block_step_middle();                                    \
  static int _sdag_reg_Block_step_middle();                                    \
  static int _sdag_idx_Block_atomic_6();                                       \
  static int _sdag_reg_Block_atomic_6();                                       \
  static int _sdag_idx_Block_update_time();                                    \
  static int _sdag_reg_Block_update_time();                                    \
  static int _sdag_idx_Block_atomic_8();                                       \
  static int _sdag_reg_Block_atomic_8();                                       \
  static int _sdag_idx_Block_epilog();                                         \
  static int _sdag_reg_Block_epilog();                                         \

typedef CBaseT1<ArrayElementT<CkIndex3D>, CProxy_Block> CBase_Block;







/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct start_2_closure;


    struct finish_3_closure;


    struct reduce_dt_4_closure;


    struct reduce_ke_5_closure;

};

/* ---------------- method closures -------------- */
class Closure_Config {
  public:


};

/* ---------------- method closures -------------- */
class Closure_Block {
  public:


    struct update_dt_2_closure;


    struct update_ke_3_closure;


    struct receive_particles_4_closure;


    struct ResumeFromSync_5_closure;


    struct start_6_closure;


};

extern void _registercfd(void);
extern "C" void CkRegisterMainModule(void);
#endif
