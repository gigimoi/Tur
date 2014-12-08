#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxPropertySet
#include <com/haxepunk/tmx/TmxPropertySet.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxTileSet
#include <com/haxepunk/tmx/TmxTileSet.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_CompressionAlgorithm
#include <openfl/_v2/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxLayer_obj::__construct(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","new",0xc71d698c,"com.haxepunk.tmx.TmxLayer.new","com/haxepunk/tmx/TmxLayer.hx",27,0x21c7dd23)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(28)
	::com::haxepunk::tmx::TmxPropertySet _g = ::com::haxepunk::tmx::TmxPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->properties = _g;
	HX_STACK_LINE(29)
	this->map = parent;
	HX_STACK_LINE(30)
	::String _g1 = source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	this->name = _g1;
	HX_STACK_LINE(31)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(31)
	if ((source->has->resolve(HX_CSTRING("x")))){
		HX_STACK_LINE(31)
		::String _g2 = source->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		_g3 = ::Std_obj::parseInt(_g2);
	}
	else{
		HX_STACK_LINE(31)
		_g3 = (int)0;
	}
	HX_STACK_LINE(31)
	this->x = _g3;
	HX_STACK_LINE(32)
	int _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(32)
	if ((source->has->resolve(HX_CSTRING("y")))){
		HX_STACK_LINE(32)
		::String _g4 = source->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(32)
		_g5 = ::Std_obj::parseInt(_g4);
	}
	else{
		HX_STACK_LINE(32)
		_g5 = (int)0;
	}
	HX_STACK_LINE(32)
	this->y = _g5;
	HX_STACK_LINE(33)
	::String _g6 = source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(33)
	Dynamic _g7 = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(33)
	this->width = _g7;
	HX_STACK_LINE(34)
	::String _g8 = source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(34)
	Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(34)
	this->height = _g9;
	HX_STACK_LINE(35)
	bool _g11;		HX_STACK_VAR(_g11,"_g11");
	struct _Function_1_1{
		inline static bool Block( ::haxe::xml::Fast &source){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxLayer.hx",35,0x21c7dd23)
			{
				HX_STACK_LINE(35)
				::String _g10 = source->att->resolve(HX_CSTRING("visible"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(35)
				return (_g10 == HX_CSTRING("1"));
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	if (((  ((source->has->resolve(HX_CSTRING("visible")))) ? bool(_Function_1_1::Block(source)) : bool(false) ))){
		HX_STACK_LINE(35)
		_g11 = true;
	}
	else{
		HX_STACK_LINE(35)
		_g11 = false;
	}
	HX_STACK_LINE(35)
	this->visible = _g11;
	HX_STACK_LINE(36)
	Float _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(36)
	if ((source->has->resolve(HX_CSTRING("opacity")))){
		HX_STACK_LINE(36)
		::String _g12 = source->att->resolve(HX_CSTRING("opacity"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(36)
		_g13 = ::Std_obj::parseFloat(_g12);
	}
	else{
		HX_STACK_LINE(36)
		_g13 = (int)0;
	}
	HX_STACK_LINE(36)
	this->opacity = _g13;
	HX_STACK_LINE(39)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(40)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(44)
	this->tileGIDs = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(45)
	::haxe::xml::Fast data = source->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(46)
	if (((data != null()))){
		HX_STACK_LINE(48)
		::String chunk = HX_CSTRING("");		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(49)
		::String data_encoding = HX_CSTRING("default");		HX_STACK_VAR(data_encoding,"data_encoding");
		HX_STACK_LINE(50)
		if ((data->has->resolve(HX_CSTRING("encoding")))){
			HX_STACK_LINE(51)
			::String _g14 = data->att->resolve(HX_CSTRING("encoding"));		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(51)
			data_encoding = _g14;
		}
		HX_STACK_LINE(53)
		::String _switch_1 = (data_encoding);
		if (  ( _switch_1==HX_CSTRING("base64"))){
			HX_STACK_LINE(56)
			::String _g15 = data->get_innerData();		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(56)
			chunk = _g15;
			HX_STACK_LINE(57)
			bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
			HX_STACK_LINE(58)
			if ((data->has->resolve(HX_CSTRING("compression")))){
				HX_STACK_LINE(60)
				::String _g2 = data->att->resolve(HX_CSTRING("compression"));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(60)
				::String _switch_2 = (_g2);
				if (  ( _switch_2==HX_CSTRING("zlib"))){
					HX_STACK_LINE(63)
					compressed = true;
				}
				else  {
					HX_STACK_LINE(65)
					HX_STACK_DO_THROW(HX_CSTRING("TmxLayer - data compression type not supported!"));
				}
;
;
			}
			HX_STACK_LINE(68)
			Array< ::Dynamic > _g16 = ::com::haxepunk::tmx::TmxLayer_obj::base64ToArray(chunk,this->width,compressed);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(68)
			this->tileGIDs = _g16;
		}
		else if (  ( _switch_1==HX_CSTRING("csv"))){
			HX_STACK_LINE(70)
			::String _g17 = data->get_innerData();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(70)
			chunk = _g17;
			HX_STACK_LINE(71)
			Array< ::Dynamic > _g18 = ::com::haxepunk::tmx::TmxLayer_obj::csvToArray(chunk);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(71)
			this->tileGIDs = _g18;
		}
		else  {
			HX_STACK_LINE(74)
			int lineWidth = this->width;		HX_STACK_VAR(lineWidth,"lineWidth");
			HX_STACK_LINE(75)
			int rowIdx = (int)-1;		HX_STACK_VAR(rowIdx,"rowIdx");
			HX_STACK_LINE(76)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("tile"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast node1 = __it->next();
				{
					HX_STACK_LINE(79)
					int _g19 = ++(lineWidth);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(79)
					if (((_g19 >= this->width))){
						HX_STACK_LINE(81)
						int _g20 = ++(rowIdx);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(81)
						this->tileGIDs[_g20] = Array_obj< int >::__new();
						HX_STACK_LINE(82)
						lineWidth = (int)0;
					}
					HX_STACK_LINE(84)
					::String _g21 = node1->att->resolve(HX_CSTRING("gid"));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(84)
					int gid = ::Std_obj::parseInt(_g21);		HX_STACK_VAR(gid,"gid");
					HX_STACK_LINE(85)
					this->tileGIDs->__get(rowIdx).StaticCast< Array< int > >()->push(gid);
				}
;
			}
		}
;
;
	}
}
;
	return null();
}

//TmxLayer_obj::~TmxLayer_obj() { }

Dynamic TmxLayer_obj::__CreateEmpty() { return  new TmxLayer_obj; }
hx::ObjectPtr< TmxLayer_obj > TmxLayer_obj::__new(::haxe::xml::Fast source,::com::haxepunk::tmx::TmxMap parent)
{  hx::ObjectPtr< TmxLayer_obj > result = new TmxLayer_obj();
	result->__construct(source,parent);
	return result;}

Dynamic TmxLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxLayer_obj > result = new TmxLayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String TmxLayer_obj::toCsv( ::com::haxepunk::tmx::TmxTileSet tileSet){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","toCsv",0x53507137,"com.haxepunk.tmx.TmxLayer.toCsv","com/haxepunk/tmx/TmxLayer.hx",92,0x21c7dd23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSet,"tileSet")
	HX_STACK_LINE(93)
	int max = (int)16777215;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(94)
	int offset = (int)0;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(95)
	if (((tileSet != null()))){
		HX_STACK_LINE(97)
		offset = tileSet->firstGID;
		HX_STACK_LINE(98)
		max = (tileSet->numTiles - (int)1);
	}
	HX_STACK_LINE(100)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(101)
	Array< int > row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		Array< ::Dynamic > _g1 = this->tileGIDs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(102)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(102)
				break;
			}
			HX_STACK_LINE(102)
			Array< int > row1 = _g1->__get(_g).StaticCast< Array< int > >();		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(102)
			++(_g);
			HX_STACK_LINE(104)
			int id = (int)0;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(105)
				while((true)){
					HX_STACK_LINE(105)
					if ((!(((_g2 < row1->length))))){
						HX_STACK_LINE(105)
						break;
					}
					HX_STACK_LINE(105)
					int id1 = row1->__get(_g2);		HX_STACK_VAR(id1,"id1");
					HX_STACK_LINE(105)
					++(_g2);
					HX_STACK_LINE(107)
					hx::SubEq(id1,offset);
					HX_STACK_LINE(108)
					if (((bool((id1 < (int)0)) || bool((id1 > max))))){
						HX_STACK_LINE(109)
						id1 = (int)0;
					}
					HX_STACK_LINE(110)
					hx::AddEq(result,(id1 + HX_CSTRING(",")));
				}
			}
			HX_STACK_LINE(112)
			hx::AddEq(result,(id + HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(114)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,toCsv,return )

Array< ::Dynamic > TmxLayer_obj::csvToArray( ::String input){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","csvToArray",0xcb1b274c,"com.haxepunk.tmx.TmxLayer.csvToArray","com/haxepunk/tmx/TmxLayer.hx",136,0x21c7dd23)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(137)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(138)
	Array< ::String > rows = input.split(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(139)
	::String row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < rows->length))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::String row1 = rows->__get(_g);		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(142)
			if (((row1 == HX_CSTRING("")))){
				HX_STACK_LINE(142)
				continue;
			}
			HX_STACK_LINE(143)
			Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
			HX_STACK_LINE(144)
			Array< ::String > entries = row1.split(HX_CSTRING(","));		HX_STACK_VAR(entries,"entries");
			HX_STACK_LINE(145)
			::String entry;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(146)
				while((true)){
					HX_STACK_LINE(146)
					if ((!(((_g1 < entries->length))))){
						HX_STACK_LINE(146)
						break;
					}
					HX_STACK_LINE(146)
					::String entry1 = entries->__get(_g1);		HX_STACK_VAR(entry1,"entry1");
					HX_STACK_LINE(146)
					++(_g1);
					HX_STACK_LINE(147)
					Dynamic _g2 = ::Std_obj::parseInt(entry1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(147)
					resultRow->push(_g2);
				}
			}
			HX_STACK_LINE(148)
			result->push(resultRow);
		}
	}
	HX_STACK_LINE(150)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,csvToArray,return )

Array< ::Dynamic > TmxLayer_obj::base64ToArray( ::String chunk,int lineWidth,bool compressed){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","base64ToArray",0xcb718c7b,"com.haxepunk.tmx.TmxLayer.base64ToArray","com/haxepunk/tmx/TmxLayer.hx",154,0x21c7dd23)
	HX_STACK_ARG(chunk,"chunk")
	HX_STACK_ARG(lineWidth,"lineWidth")
	HX_STACK_ARG(compressed,"compressed")
	HX_STACK_LINE(155)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(156)
	::openfl::_v2::utils::ByteArray data = ::com::haxepunk::tmx::TmxLayer_obj::base64ToByteArray(chunk);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(157)
	if ((compressed)){
		HX_STACK_LINE(162)
		data->uncompress(null());
	}
	HX_STACK_LINE(166)
	data->set_endian(HX_CSTRING("littleEndian"));
	HX_STACK_LINE(167)
	while((true)){
		HX_STACK_LINE(167)
		if ((!(((data->position < data->length))))){
			HX_STACK_LINE(167)
			break;
		}
		HX_STACK_LINE(169)
		Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
		HX_STACK_LINE(170)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(171)
			while((true)){
				HX_STACK_LINE(171)
				if ((!(((_g < lineWidth))))){
					HX_STACK_LINE(171)
					break;
				}
				HX_STACK_LINE(171)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(172)
				int _g1 = data->readInt();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(172)
				resultRow->push(_g1);
			}
		}
		HX_STACK_LINE(173)
		result->push(resultRow);
	}
	HX_STACK_LINE(175)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TmxLayer_obj,base64ToArray,return )

::String TmxLayer_obj::BASE64_CHARS;

::openfl::_v2::utils::ByteArray TmxLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("com.haxepunk.tmx.TmxLayer","base64ToByteArray",0x209c7953,"com.haxepunk.tmx.TmxLayer.base64ToByteArray","com/haxepunk/tmx/TmxLayer.hx",181,0x21c7dd23)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(182)
	::openfl::_v2::utils::ByteArray output = ::openfl::_v2::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(184)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(185)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int _g = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(186)
			int c1 = (_g1)++;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(188)
			Dynamic _g2 = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").charCodeAt(c1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(188)
			lookup[_g2] = c1;
		}
	}
	HX_STACK_LINE(191)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(192)
	while((true)){
		HX_STACK_LINE(192)
		if ((!(((i < (data.length - (int)3)))))){
			HX_STACK_LINE(192)
			break;
		}
		HX_STACK_LINE(195)
		::String _g1 = data.charAt(i);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_2_1{
			inline static bool Block( int &i,::String &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxLayer.hx",195,0x21c7dd23)
				{
					HX_STACK_LINE(195)
					::String _g2 = data.charAt(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(195)
					return (_g2 == HX_CSTRING("\n"));
				}
				return null();
			}
		};
		HX_STACK_LINE(195)
		if (((  ((!(((_g1 == HX_CSTRING(" ")))))) ? bool(_Function_2_1::Block(i,data)) : bool(true) ))){
			HX_STACK_LINE(197)
			(i)++;
			HX_STACK_LINE(197)
			continue;
		}
		HX_STACK_LINE(201)
		Dynamic _g3 = data.charCodeAt(i);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(201)
		int a0 = lookup->__get(_g3);		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(202)
		Dynamic _g4 = data.charCodeAt((i + (int)1));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(202)
		int a1 = lookup->__get(_g4);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(203)
		Dynamic _g5 = data.charCodeAt((i + (int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(203)
		int a2 = lookup->__get(_g5);		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(204)
		Dynamic _g6 = data.charCodeAt((i + (int)3));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(204)
		int a3 = lookup->__get(_g6);		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(207)
		if (((a1 < (int)64))){
			HX_STACK_LINE(208)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(208)
			int _g7 = (output->position)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(208)
			output->b[_g7] = (((int(a0) << int((int)2))) + ((int(((int(a1) & int((int)48)))) >> int((int)4))));
		}
		HX_STACK_LINE(209)
		if (((a2 < (int)64))){
			HX_STACK_LINE(210)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(210)
			int _g8 = (output->position)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(210)
			output->b[_g8] = (((int(((int(a1) & int((int)15)))) << int((int)4))) + ((int(((int(a2) & int((int)60)))) >> int((int)2))));
		}
		HX_STACK_LINE(211)
		if (((a3 < (int)64))){
			HX_STACK_LINE(212)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(212)
			int _g9 = (output->position)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(212)
			output->b[_g9] = (((int(((int(a2) & int((int)3)))) << int((int)6))) + a3);
		}
		HX_STACK_LINE(214)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(218)
	output->position = (int)0;
	HX_STACK_LINE(219)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TmxLayer_obj,base64ToByteArray,return )


TmxLayer_obj::TmxLayer_obj()
{
}

void TmxLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxLayer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(tileGIDs,"tileGIDs");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TmxLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(tileGIDs,"tileGIDs");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TmxLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"toCsv") ) { return toCsv_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileGIDs") ) { return tileGIDs; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"csvToArray") ) { return csvToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"base64ToArray") ) { return base64ToArray_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return base64ToByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::com::haxepunk::tmx::TmxMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileGIDs") ) { tileGIDs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::com::haxepunk::tmx::TmxPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("tileGIDs"));
	outFields->push(HX_CSTRING("properties"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("csvToArray"),
	HX_CSTRING("base64ToArray"),
	HX_CSTRING("BASE64_CHARS"),
	HX_CSTRING("base64ToByteArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxLayer_obj,map),HX_CSTRING("map")},
	{hx::fsString,(int)offsetof(TmxLayer_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TmxLayer_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(TmxLayer_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(TmxLayer_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TmxLayer_obj,tileGIDs),HX_CSTRING("tileGIDs")},
	{hx::fsObject /*::com::haxepunk::tmx::TmxPropertySet*/ ,(int)offsetof(TmxLayer_obj,properties),HX_CSTRING("properties")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("tileGIDs"),
	HX_CSTRING("properties"),
	HX_CSTRING("toCsv"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TmxLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TmxLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

Class TmxLayer_obj::__mClass;

void TmxLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxLayer"), hx::TCanCast< TmxLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TmxLayer_obj::__boot()
{
	BASE64_CHARS= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=");
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
