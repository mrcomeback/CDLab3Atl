// dllmain.h : Declaration of module class.

class CCDLab3AtlModule : public ATL::CAtlDllModuleT< CCDLab3AtlModule >
{
public :
	DECLARE_LIBID(LIBID_CDLab3AtlLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CDLAB3ATL, "{7c0e13a2-8e17-4f32-95db-e395c7974484}")
};

extern class CCDLab3AtlModule _AtlModule;
