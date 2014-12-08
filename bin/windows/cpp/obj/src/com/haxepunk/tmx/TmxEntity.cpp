#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Canvas
#include <com/haxepunk/graphics/Canvas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Tilemap
#include <com/haxepunk/graphics/Tilemap.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxEntity
#include <com/haxepunk/tmx/TmxEntity.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxLayer
#include <com/haxepunk/tmx/TmxLayer.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxMap
#include <com/haxepunk/tmx/TmxMap.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObject
#include <com/haxepunk/tmx/TmxObject.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxObjectGroup
#include <com/haxepunk/tmx/TmxObjectGroup.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxOrderedHash
#include <com/haxepunk/tmx/TmxOrderedHash.h>
#endif
#ifndef INCLUDED_com_haxepunk_tmx_TmxVec4
#include <com/haxepunk/tmx/TmxVec4.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace tmx{

Void TmxEntity_obj::__construct(::com::haxepunk::tmx::TmxMap mapData)
{
HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","new",0x40aef72c,"com.haxepunk.tmx.TmxEntity.new","com/haxepunk/tmx/TmxEntity.hx",35,0xb1c5c725)
HX_STACK_THIS(this)
HX_STACK_ARG(mapData,"mapData")
{
	HX_STACK_LINE(36)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(38)
	::com::haxepunk::tmx::TmxMap _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	_g = hx::TCast< com::haxepunk::tmx::TmxMap >::cast(mapData);
	HX_STACK_LINE(38)
	this->map = _g;
	HX_STACK_LINE(40)
	this->debugObjectMask = true;
}
;
	return null();
}

//TmxEntity_obj::~TmxEntity_obj() { }

Dynamic TmxEntity_obj::__CreateEmpty() { return  new TmxEntity_obj; }
hx::ObjectPtr< TmxEntity_obj > TmxEntity_obj::__new(::com::haxepunk::tmx::TmxMap mapData)
{  hx::ObjectPtr< TmxEntity_obj > result = new TmxEntity_obj();
	result->__construct(mapData);
	return result;}

Dynamic TmxEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TmxEntity_obj > result = new TmxEntity_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TmxEntity_obj::loadImageLayer( ::String name){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadImageLayer",0x989546f0,"com.haxepunk.tmx.TmxEntity.loadImageLayer","com/haxepunk/tmx/TmxEntity.hx",45,0xb1c5c725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(46)
		bool _g = this->map->imageLayers->exists(name);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		if (((_g == false))){
			HX_STACK_LINE(49)
			::haxe::Log_obj::trace(((HX_CSTRING("Image layer '") + name) + HX_CSTRING("' doesn't exist")),hx::SourceInfo(HX_CSTRING("TmxEntity.hx"),49,HX_CSTRING("com.haxepunk.tmx.TmxEntity"),HX_CSTRING("loadImageLayer")));
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(54)
		::com::haxepunk::ds::Either _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			::String s = this->map->imageLayers->get(name);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(54)
			if (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))){
				HX_STACK_LINE(54)
				::com::haxepunk::graphics::atlas::AtlasData _g3;		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::String &s){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",54,0xb1c5c725)
						{
							HX_STACK_LINE(54)
							::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(54)
							{
								HX_STACK_LINE(54)
								::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
								HX_STACK_LINE(54)
								if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(s))){
									HX_STACK_LINE(54)
									::com::haxepunk::graphics::atlas::AtlasData _g1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(s);		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(54)
									data1 = _g1;
								}
								else{
									HX_STACK_LINE(54)
									::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(bitmap,"bitmap");
									HX_STACK_LINE(54)
									if (((bitmap != null()))){
										HX_STACK_LINE(54)
										::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(54)
										data1 = _g2;
									}
								}
								HX_STACK_LINE(54)
								data = data1;
							}
							HX_STACK_LINE(54)
							return data;
						}
						return null();
					}
				};
				HX_STACK_LINE(54)
				_g3 = _Function_3_1::Block(s);
				HX_STACK_LINE(54)
				::com::haxepunk::graphics::atlas::AtlasRegion _g4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g4);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(54)
				_g6 = e;
			}
			else{
				HX_STACK_LINE(54)
				::openfl::_v2::display::BitmapData _g5 = ::com::haxepunk::HXP_obj::getBitmap(s);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(54)
				::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g5);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(54)
				_g6 = e;
			}
		}
		HX_STACK_LINE(54)
		::com::haxepunk::graphics::Image _g7 = ::com::haxepunk::graphics::Image_obj::__new(_g6,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(54)
		this->addGraphic(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TmxEntity_obj,loadImageLayer,(void))

Void TmxEntity_obj::loadGraphic( ::String tileset,Array< ::String > layerNames,Array< int > skip){
{
		HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadGraphic",0xc5f5ebee,"com.haxepunk.tmx.TmxEntity.loadGraphic","com/haxepunk/tmx/TmxEntity.hx",58,0xb1c5c725)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileset,"tileset")
		HX_STACK_ARG(layerNames,"layerNames")
		HX_STACK_ARG(skip,"skip")
		HX_STACK_LINE(59)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(59)
		::com::haxepunk::tmx::TmxLayer layer;		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				if ((!(((_g < layerNames->length))))){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(60)
				::String name = layerNames->__get(_g);		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(60)
				++(_g);
				HX_STACK_LINE(62)
				bool _g1 = this->map->layers->_map->exists(name);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				if (((_g1 == false))){
					HX_STACK_LINE(65)
					::haxe::Log_obj::trace(((HX_CSTRING("Layer '") + name) + HX_CSTRING("' doesn't exist")),hx::SourceInfo(HX_CSTRING("TmxEntity.hx"),65,HX_CSTRING("com.haxepunk.tmx.TmxEntity"),HX_CSTRING("loadGraphic")));
					HX_STACK_LINE(67)
					continue;
				}
				HX_STACK_LINE(69)
				::com::haxepunk::tmx::TmxLayer _g11 = this->map->layers->_map->get(name);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(69)
				layer = _g11;
				HX_STACK_LINE(70)
				int spacing = this->map->getTileMapSpacing(name);		HX_STACK_VAR(spacing,"spacing");
				HX_STACK_LINE(72)
				::com::haxepunk::ds::Either _g7;		HX_STACK_VAR(_g7,"_g7");
				struct _Function_3_1{
					inline static ::com::haxepunk::ds::Either Block( ::String &tileset){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",72,0xb1c5c725)
						{
							HX_STACK_LINE(72)
							::com::haxepunk::graphics::atlas::AtlasData _g4;		HX_STACK_VAR(_g4,"_g4");
							struct _Function_4_1{
								inline static ::com::haxepunk::graphics::atlas::AtlasData Block( ::String &tileset){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",72,0xb1c5c725)
									{
										HX_STACK_LINE(72)
										::com::haxepunk::graphics::atlas::AtlasData data;		HX_STACK_VAR(data,"data");
										HX_STACK_LINE(72)
										{
											HX_STACK_LINE(72)
											::com::haxepunk::graphics::atlas::AtlasData data1 = null();		HX_STACK_VAR(data1,"data1");
											HX_STACK_LINE(72)
											if ((::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->exists(tileset))){
												HX_STACK_LINE(72)
												::com::haxepunk::graphics::atlas::AtlasData _g2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool->get(tileset);		HX_STACK_VAR(_g2,"_g2");
												HX_STACK_LINE(72)
												data1 = _g2;
											}
											else{
												HX_STACK_LINE(72)
												::openfl::_v2::display::BitmapData bitmap = ::com::haxepunk::HXP_obj::getBitmap(tileset);		HX_STACK_VAR(bitmap,"bitmap");
												HX_STACK_LINE(72)
												if (((bitmap != null()))){
													HX_STACK_LINE(72)
													::com::haxepunk::graphics::atlas::AtlasData _g3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,tileset,null());		HX_STACK_VAR(_g3,"_g3");
													HX_STACK_LINE(72)
													data1 = _g3;
												}
											}
											HX_STACK_LINE(72)
											data = data1;
										}
										HX_STACK_LINE(72)
										return data;
									}
									return null();
								}
							};
							HX_STACK_LINE(72)
							_g4 = _Function_4_1::Block(tileset);
							HX_STACK_LINE(72)
							::com::haxepunk::graphics::atlas::TileAtlas _g5 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(_g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(72)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Right(_g5);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(72)
							return e;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static ::com::haxepunk::ds::Either Block( ::String &tileset){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",72,0xb1c5c725)
						{
							HX_STACK_LINE(72)
							::openfl::_v2::display::BitmapData _g6 = ::com::haxepunk::HXP_obj::getBitmap(tileset);		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(72)
							::com::haxepunk::ds::Either e = ::com::haxepunk::ds::Either_obj::Left(_g6);		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(72)
							return e;
						}
						return null();
					}
				};
				HX_STACK_LINE(72)
				_g7 = (  (((::com::haxepunk::HXP_obj::renderMode == ::com::haxepunk::RenderMode_obj::HARDWARE))) ? ::com::haxepunk::ds::Either(_Function_3_1::Block(tileset)) : ::com::haxepunk::ds::Either(_Function_3_2::Block(tileset)) );
				HX_STACK_LINE(72)
				::com::haxepunk::graphics::Tilemap tilemap = ::com::haxepunk::graphics::Tilemap_obj::__new(_g7,this->map->fullWidth,this->map->fullHeight,this->map->tileWidth,this->map->tileHeight,spacing,spacing);		HX_STACK_VAR(tilemap,"tilemap");
				HX_STACK_LINE(75)
				{
					HX_STACK_LINE(75)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(75)
					int _g12 = layer->height;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(75)
					while((true)){
						HX_STACK_LINE(75)
						if ((!(((_g2 < _g12))))){
							HX_STACK_LINE(75)
							break;
						}
						HX_STACK_LINE(75)
						int row = (_g2)++;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(77)
							int _g3 = layer->width;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(77)
							while((true)){
								HX_STACK_LINE(77)
								if ((!(((_g4 < _g3))))){
									HX_STACK_LINE(77)
									break;
								}
								HX_STACK_LINE(77)
								int col = (_g4)++;		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(79)
								gid = (layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col) - (int)1);
								HX_STACK_LINE(80)
								if (((gid < (int)0))){
									HX_STACK_LINE(80)
									continue;
								}
								struct _Function_7_1{
									inline static bool Block( Array< int > &skip,int &gid){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",81,0xb1c5c725)
										{
											HX_STACK_LINE(81)
											bool _g8 = ::Lambda_obj::has(skip,gid);		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(81)
											return (_g8 == false);
										}
										return null();
									}
								};
								HX_STACK_LINE(81)
								if (((  ((!(((skip == null()))))) ? bool(_Function_7_1::Block(skip,gid)) : bool(true) ))){
									HX_STACK_LINE(83)
									tilemap->setTile(col,row,gid);
								}
							}
						}
					}
				}
				HX_STACK_LINE(87)
				this->addGraphic(tilemap);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadGraphic,(void))

Array< ::Dynamic > TmxEntity_obj::loadMask( ::String __o_collideLayer,::String __o_typeName,Array< int > skip){
::String collideLayer = __o_collideLayer.Default(HX_CSTRING("collide"));
::String typeName = __o_typeName.Default(HX_CSTRING("solid"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadMask",0x6f3ec7e6,"com.haxepunk.tmx.TmxEntity.loadMask","com/haxepunk/tmx/TmxEntity.hx",92,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(93)
		Array< ::Dynamic > tileCoords = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tileCoords,"tileCoords");
		HX_STACK_LINE(94)
		if ((!(this->map->layers->_map->exists(collideLayer)))){
			HX_STACK_LINE(97)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer '") + collideLayer) + HX_CSTRING("' doesn't exist")),hx::SourceInfo(HX_CSTRING("TmxEntity.hx"),97,HX_CSTRING("com.haxepunk.tmx.TmxEntity"),HX_CSTRING("loadMask")));
			HX_STACK_LINE(99)
			return tileCoords;
		}
		HX_STACK_LINE(102)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(103)
		::com::haxepunk::tmx::TmxLayer layer = this->map->layers->_map->get(collideLayer);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(104)
		::com::haxepunk::masks::Grid grid = ::com::haxepunk::masks::Grid_obj::__new(this->map->fullWidth,this->map->fullHeight,this->map->tileWidth,this->map->tileHeight,null(),null());		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			int _g = layer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(109)
					int _g2 = layer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(109)
					while((true)){
						HX_STACK_LINE(109)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(109)
							break;
						}
						HX_STACK_LINE(109)
						int col = (_g3)++;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(111)
						gid = (layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col) - (int)1);
						HX_STACK_LINE(112)
						if (((gid < (int)0))){
							HX_STACK_LINE(112)
							continue;
						}
						struct _Function_5_1{
							inline static bool Block( Array< int > &skip,int &gid){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",113,0xb1c5c725)
								{
									HX_STACK_LINE(113)
									bool _g4 = ::Lambda_obj::has(skip,gid);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(113)
									return (_g4 == false);
								}
								return null();
							}
						};
						HX_STACK_LINE(113)
						if (((  ((!(((skip == null()))))) ? bool(_Function_5_1::Block(skip,gid)) : bool(true) ))){
							HX_STACK_LINE(115)
							grid->setTile(col,row,true);
							HX_STACK_LINE(116)
							::com::haxepunk::tmx::TmxVec4 _g11 = ::com::haxepunk::tmx::TmxVec4_obj::__new((col * this->map->tileWidth),(row * this->map->tileHeight),this->map->tileWidth,this->map->tileHeight);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(116)
							tileCoords->push(_g11);
						}
					}
				}
			}
		}
		HX_STACK_LINE(121)
		this->set_mask(grid);
		HX_STACK_LINE(122)
		this->set_type(typeName);
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int width = grid->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(123)
			int height = grid->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(123)
			int originX = (int)0;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(123)
			int originY = (int)0;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(123)
			this->width = width;
			HX_STACK_LINE(123)
			this->height = height;
			HX_STACK_LINE(123)
			this->originX = originX;
			HX_STACK_LINE(123)
			this->originY = originY;
		}
		HX_STACK_LINE(124)
		return tileCoords;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadMask,return )

Void TmxEntity_obj::loadSlopedMask( ::String __o_collideLayer,::String __o_typeName,Array< int > skip){
::String collideLayer = __o_collideLayer.Default(HX_CSTRING("collide"));
::String typeName = __o_typeName.Default(HX_CSTRING("solid"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadSlopedMask",0xa3e374df,"com.haxepunk.tmx.TmxEntity.loadSlopedMask","com/haxepunk/tmx/TmxEntity.hx",128,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(129)
		if ((!(this->map->layers->_map->exists(collideLayer)))){
			HX_STACK_LINE(132)
			::haxe::Log_obj::trace(((HX_CSTRING("Layer '") + collideLayer) + HX_CSTRING("' doesn't exist")),hx::SourceInfo(HX_CSTRING("TmxEntity.hx"),132,HX_CSTRING("com.haxepunk.tmx.TmxEntity"),HX_CSTRING("loadSlopedMask")));
			HX_STACK_LINE(134)
			return null();
		}
		HX_STACK_LINE(137)
		int gid;		HX_STACK_VAR(gid,"gid");
		HX_STACK_LINE(138)
		::com::haxepunk::tmx::TmxLayer layer = this->map->layers->_map->get(collideLayer);		HX_STACK_VAR(layer,"layer");
		HX_STACK_LINE(139)
		::com::haxepunk::masks::SlopedGrid grid = ::com::haxepunk::masks::SlopedGrid_obj::__new(this->map->fullWidth,this->map->fullHeight,this->map->tileWidth,this->map->tileHeight,null(),null());		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(140)
		Array< ::String > types = ::Type_obj::getEnumConstructs(hx::ClassOf< ::com::haxepunk::masks::TileType >());		HX_STACK_VAR(types,"types");
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			int _g = layer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(142)
			while((true)){
				HX_STACK_LINE(142)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(142)
					break;
				}
				HX_STACK_LINE(142)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(144)
					int _g2 = layer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(144)
					while((true)){
						HX_STACK_LINE(144)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(144)
							break;
						}
						HX_STACK_LINE(144)
						int col = (_g3)++;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(146)
						gid = (layer->tileGIDs->__get(row).StaticCast< Array< int > >()->__get(col) - (int)1);
						HX_STACK_LINE(147)
						if (((gid < (int)0))){
							HX_STACK_LINE(147)
							continue;
						}
						struct _Function_5_1{
							inline static bool Block( Array< int > &skip,int &gid){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/tmx/TmxEntity.hx",148,0xb1c5c725)
								{
									HX_STACK_LINE(148)
									bool _g4 = ::Lambda_obj::has(skip,gid);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(148)
									return (_g4 == false);
								}
								return null();
							}
						};
						HX_STACK_LINE(148)
						if (((  ((!(((skip == null()))))) ? bool(_Function_5_1::Block(skip,gid)) : bool(true) ))){
							HX_STACK_LINE(150)
							::String type = this->map->getGidProperty((gid + (int)1),HX_CSTRING("tileType"));		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(152)
							if (((type == null()))){
								HX_STACK_LINE(153)
								grid->setTile(col,row,::com::haxepunk::masks::TileType_obj::Solid,null(),null());
							}
							else{
								HX_STACK_LINE(157)
								int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(157)
								int _g4 = types->length;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(157)
								while((true)){
									HX_STACK_LINE(157)
									if ((!(((_g5 < _g4))))){
										HX_STACK_LINE(157)
										break;
									}
									HX_STACK_LINE(157)
									int i = (_g5)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(159)
									if (((type == types->__get(i)))){
										HX_STACK_LINE(162)
										::com::haxepunk::masks::TileType _g11 = ::Type_obj::createEnum(hx::ClassOf< ::com::haxepunk::masks::TileType >(),type,null());		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(163)
										::String _g21 = this->map->getGidProperty((gid + (int)1),HX_CSTRING("slope"));		HX_STACK_VAR(_g21,"_g21");
										HX_STACK_LINE(163)
										Float _g31 = ::Std_obj::parseFloat(_g21);		HX_STACK_VAR(_g31,"_g31");
										HX_STACK_LINE(164)
										::String _g41 = this->map->getGidProperty((gid + (int)1),HX_CSTRING("yOffset"));		HX_STACK_VAR(_g41,"_g41");
										HX_STACK_LINE(164)
										Float _g51 = ::Std_obj::parseFloat(_g41);		HX_STACK_VAR(_g51,"_g51");
										HX_STACK_LINE(161)
										grid->setTile(col,row,_g11,_g31,_g51);
										HX_STACK_LINE(166)
										break;
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(174)
		this->set_mask(grid);
		HX_STACK_LINE(175)
		this->set_type(typeName);
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int width = grid->get_width();		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(176)
			int height = grid->get_height();		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(176)
			int originX = (int)0;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(176)
			int originY = (int)0;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(176)
			this->width = width;
			HX_STACK_LINE(176)
			this->height = height;
			HX_STACK_LINE(176)
			this->originX = originX;
			HX_STACK_LINE(176)
			this->originY = originY;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TmxEntity_obj,loadSlopedMask,(void))

Void TmxEntity_obj::loadObjectMask( ::String __o_collideLayer,::String __o_typeName){
::String collideLayer = __o_collideLayer.Default(HX_CSTRING("objects"));
::String typeName = __o_typeName.Default(HX_CSTRING("solidObject"));
	HX_STACK_FRAME("com.haxepunk.tmx.TmxEntity","loadObjectMask",0xe795b5c5,"com.haxepunk.tmx.TmxEntity.loadObjectMask","com/haxepunk/tmx/TmxEntity.hx",185,0xb1c5c725)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collideLayer,"collideLayer")
	HX_STACK_ARG(typeName,"typeName")
{
		HX_STACK_LINE(186)
		::com::haxepunk::tmx::TmxObjectGroup _g = this->map->getObjectGroup(collideLayer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		if (((_g == null()))){
			HX_STACK_LINE(189)
			::haxe::Log_obj::trace(((HX_CSTRING("ObjectGroup '") + collideLayer) + HX_CSTRING("' doesn't exist")),hx::SourceInfo(HX_CSTRING("TmxEntity.hx"),189,HX_CSTRING("com.haxepunk.tmx.TmxEntity"),HX_CSTRING("loadObjectMask")));
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(194)
		::com::haxepunk::tmx::TmxObjectGroup objectGroup = this->map->getObjectGroup(collideLayer);		HX_STACK_VAR(objectGroup,"objectGroup");
		HX_STACK_LINE(196)
		Dynamic masks_ar = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(masks_ar,"masks_ar");
		HX_STACK_LINE(198)
		Array< ::Dynamic > debug_graphics_ar = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(debug_graphics_ar,"debug_graphics_ar");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(202)
			Array< ::Dynamic > _g11 = objectGroup->objects;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(202)
			while((true)){
				HX_STACK_LINE(202)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(202)
				::com::haxepunk::tmx::TmxObject object = _g11->__get(_g1).StaticCast< ::com::haxepunk::tmx::TmxObject >();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(202)
				++(_g1);
				HX_STACK_LINE(203)
				masks_ar->__Field(HX_CSTRING("push"),true)(object->shapeMask);
				HX_STACK_LINE(205)
				debug_graphics_ar->push(object->debug_graphic);
			}
		}
		HX_STACK_LINE(210)
		if ((this->debugObjectMask)){
			HX_STACK_LINE(211)
			::com::haxepunk::graphics::Graphiclist debug_graphicList = ::com::haxepunk::graphics::Graphiclist_obj::__new(debug_graphics_ar);		HX_STACK_VAR(debug_graphicList,"debug_graphicList");
			HX_STACK_LINE(212)
			this->addGraphic(debug_graphicList);
		}
		HX_STACK_LINE(216)
		::com::haxepunk::masks::Masklist maskList = ::com::haxepunk::masks::Masklist_obj::__new(masks_ar);		HX_STACK_VAR(maskList,"maskList");
		HX_STACK_LINE(217)
		this->set_mask(maskList);
		HX_STACK_LINE(218)
		this->set_type(typeName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TmxEntity_obj,loadObjectMask,(void))


TmxEntity_obj::TmxEntity_obj()
{
}

void TmxEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TmxEntity);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(debugObjectMask,"debugObjectMask");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TmxEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(debugObjectMask,"debugObjectMask");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TmxEntity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadMask") ) { return loadMask_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return loadGraphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadImageLayer") ) { return loadImageLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSlopedMask") ) { return loadSlopedMask_dyn(); }
		if (HX_FIELD_EQ(inName,"loadObjectMask") ) { return loadObjectMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debugObjectMask") ) { return debugObjectMask; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TmxEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::com::haxepunk::tmx::TmxMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debugObjectMask") ) { debugObjectMask=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TmxEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("debugObjectMask"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::tmx::TmxMap*/ ,(int)offsetof(TmxEntity_obj,map),HX_CSTRING("map")},
	{hx::fsBool,(int)offsetof(TmxEntity_obj,debugObjectMask),HX_CSTRING("debugObjectMask")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("debugObjectMask"),
	HX_CSTRING("loadImageLayer"),
	HX_CSTRING("loadGraphic"),
	HX_CSTRING("loadMask"),
	HX_CSTRING("loadSlopedMask"),
	HX_CSTRING("loadObjectMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TmxEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TmxEntity_obj::__mClass,"__mClass");
};

#endif

Class TmxEntity_obj::__mClass;

void TmxEntity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tmx.TmxEntity"), hx::TCanCast< TmxEntity_obj> ,sStaticFields,sMemberFields,
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

void TmxEntity_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tmx
