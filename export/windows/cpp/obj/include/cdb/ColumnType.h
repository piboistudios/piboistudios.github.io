// Generated by Haxe 3.4.4
#ifndef INCLUDED_cdb_ColumnType
#define INCLUDED_cdb_ColumnType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cdb,ColumnType)
namespace cdb{


class ColumnType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ColumnType_obj OBJ_;

	public:
		ColumnType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("cdb.ColumnType","\x7d","\x15","\x15","\xeb"); }
		::String __ToString() const { return HX_HCSTRING("ColumnType.","\x5e","\xa1","\x44","\x9a") + _hx_tag; }

		static ::cdb::ColumnType TBool;
		static inline ::cdb::ColumnType TBool_dyn() { return TBool; }
		static ::cdb::ColumnType TColor;
		static inline ::cdb::ColumnType TColor_dyn() { return TColor; }
		static ::cdb::ColumnType TCustom(::String name);
		static ::Dynamic TCustom_dyn();
		static ::cdb::ColumnType TDynamic;
		static inline ::cdb::ColumnType TDynamic_dyn() { return TDynamic; }
		static ::cdb::ColumnType TEnum(::Array< ::String > values);
		static ::Dynamic TEnum_dyn();
		static ::cdb::ColumnType TFile;
		static inline ::cdb::ColumnType TFile_dyn() { return TFile; }
		static ::cdb::ColumnType TFlags(::Array< ::String > values);
		static ::Dynamic TFlags_dyn();
		static ::cdb::ColumnType TFloat;
		static inline ::cdb::ColumnType TFloat_dyn() { return TFloat; }
		static ::cdb::ColumnType TId;
		static inline ::cdb::ColumnType TId_dyn() { return TId; }
		static ::cdb::ColumnType TImage;
		static inline ::cdb::ColumnType TImage_dyn() { return TImage; }
		static ::cdb::ColumnType TInt;
		static inline ::cdb::ColumnType TInt_dyn() { return TInt; }
		static ::cdb::ColumnType TLayer(::String type);
		static ::Dynamic TLayer_dyn();
		static ::cdb::ColumnType TList;
		static inline ::cdb::ColumnType TList_dyn() { return TList; }
		static ::cdb::ColumnType TRef(::String sheet);
		static ::Dynamic TRef_dyn();
		static ::cdb::ColumnType TString;
		static inline ::cdb::ColumnType TString_dyn() { return TString; }
		static ::cdb::ColumnType TTileLayer;
		static inline ::cdb::ColumnType TTileLayer_dyn() { return TTileLayer; }
		static ::cdb::ColumnType TTilePos;
		static inline ::cdb::ColumnType TTilePos_dyn() { return TTilePos; }
};

} // end namespace cdb

#endif /* INCLUDED_cdb_ColumnType */ 
