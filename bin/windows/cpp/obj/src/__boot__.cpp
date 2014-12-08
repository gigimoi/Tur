#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/FileSystem.h>
#include <openfl/utils/Endian.h>
#include <openfl/ui/MultitouchInputMode.h>
#include <openfl/text/TextFieldType.h>
#include <openfl/text/TextFieldAutoSize.h>
#include <openfl/text/GridFitType.h>
#include <openfl/text/AntiAliasType.h>
#include <openfl/system/SecurityDomain.h>
#include <openfl/system/LoaderContext.h>
#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/media/SoundLoaderContext.h>
#include <openfl/media/ID3Info.h>
#include <openfl/geom/Vector3D.h>
#include <openfl/geom/Orientation3D.h>
#include <openfl/geom/Matrix3D.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/RangeError.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/ArgumentError.h>
#include <openfl/errors/Error.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageDisplayState.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/InterpolationMethod.h>
#include <openfl/display/GraphicsPathWinding.h>
#include <openfl/display/GradientType.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/_v2/utils/WeakRef.h>
#include <openfl/_v2/utils/Float32Array.h>
#include <openfl/_v2/utils/CompressionAlgorithm.h>
#include <openfl/_v2/utils/ByteArray.h>
#include <openfl/_v2/utils/IDataInput.h>
#include <openfl/_v2/utils/IDataOutput.h>
#include <openfl/_v2/utils/ArrayBufferView.h>
#include <openfl/_v2/utils/IMemoryRange.h>
#include <openfl/_v2/ui/Multitouch.h>
#include <openfl/_v2/ui/Keyboard.h>
#include <openfl/_v2/text/TextLineMetrics.h>
#include <openfl/_v2/text/TextFormatAlign.h>
#include <openfl/_v2/text/TextFormat.h>
#include <openfl/_v2/text/TextField.h>
#include <openfl/_v2/text/FontType.h>
#include <openfl/_v2/text/FontStyle.h>
#include <openfl/_v2/system/System.h>
#include <openfl/_v2/system/ScreenMode.h>
#include <openfl/_v2/system/PixelFormat.h>
#include <openfl/_v2/net/URLRequestMethod.h>
#include <openfl/_v2/net/URLRequest.h>
#include <openfl/_v2/media/AudioThreadState.h>
#include <openfl/_v2/media/SoundChannel.h>
#include <openfl/_v2/media/InternalAudioType.h>
#include <openfl/_v2/media/Sound.h>
#include <openfl/_v2/gl/GLTexture.h>
#include <openfl/_v2/gl/GLShader.h>
#include <openfl/_v2/gl/GLRenderbuffer.h>
#include <openfl/_v2/gl/GLProgram.h>
#include <openfl/_v2/gl/GLFramebuffer.h>
#include <openfl/_v2/gl/GLBuffer.h>
#include <openfl/_v2/gl/GLObject.h>
#include <openfl/_v2/gl/_GL/Float32Data_Impl_.h>
#include <openfl/_v2/gl/GL.h>
#include <openfl/_v2/geom/Transform.h>
#include <openfl/_v2/geom/ColorTransform.h>
#include <openfl/_v2/filters/BitmapFilter.h>
#include <openfl/_v2/events/SystemEvent.h>
#include <openfl/_v2/events/KeyboardEvent.h>
#include <openfl/_v2/events/HTTPStatusEvent.h>
#include <openfl/_v2/events/Listener.h>
#include <openfl/_v2/display/TriangleCulling.h>
#include <openfl/_v2/display/Tilesheet.h>
#include <openfl/_v2/display/StageQuality.h>
#include <openfl/_v2/display/TouchInfo.h>
#include <openfl/_v2/display/SpreadMethod.h>
#include <openfl/_v2/display/Shape.h>
#include <openfl/_v2/display/OpenGLView.h>
#include <openfl/_v2/display/MovieClip.h>
#include <openfl/_v2/display/ManagedStage.h>
#include <openfl/_v2/display/Stage.h>
#include <openfl/_v2/events/TouchEvent.h>
#include <openfl/_v2/events/MouseEvent.h>
#include <openfl/_v2/display/LoaderInfo.h>
#include <openfl/_v2/net/URLLoader.h>
#include <openfl/_v2/display/Loader.h>
#include <openfl/_v2/display/LineScaleMode.h>
#include <openfl/_v2/display/JointStyle.h>
#include <openfl/_v2/display/IGraphicsData.h>
#include <openfl/_v2/display/Graphics.h>
#include <openfl/_v2/display/DirectRenderer.h>
#include <openfl/_v2/display/CapsStyle.h>
#include <openfl/_v2/display/BlendMode.h>
#include <openfl/_v2/display/OptimizedPerlin.h>
#include <openfl/_v2/display/Bitmap.h>
#include <openfl/_v2/Memory.h>
#include <openfl/_v2/AssetType.h>
#include <openfl/_v2/AssetData.h>
#include <openfl/_v2/Assets.h>
#include <openfl/_v2/AssetCache.h>
#include <openfl/_v2/IAssetCache.h>
#include <openfl/_Vector/Vector_Impl_.h>
#include <lime/math/Vector2.h>
#include <haxe/zip/Uncompress.h>
#include <haxe/zip/FlushMode.h>
#include <haxe/zip/Compress.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/format/JsonParser.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Resource.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/vm/Gc.h>
#include <com/haxepunk/utils/Touch.h>
#include <com/haxepunk/utils/Key.h>
#include <com/haxepunk/utils/PS3_GAMEPAD.h>
#include <com/haxepunk/utils/XBOX_GAMEPAD.h>
#include <com/haxepunk/utils/OUYA_GAMEPAD.h>
#include <com/haxepunk/utils/Joystick.h>
#include <com/haxepunk/utils/JoyButtonState.h>
#include <com/haxepunk/utils/Input.h>
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#include <com/haxepunk/utils/HaxelibInfo.h>
#include <com/haxepunk/utils/HaxelibInfoBuilder.h>
#include <com/haxepunk/utils/Gesture.h>
#include <com/haxepunk/utils/GestureMode.h>
#include <com/haxepunk/utils/GestureType.h>
#include <com/haxepunk/utils/Ease.h>
#include <com/haxepunk/utils/Draw.h>
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#include <com/haxepunk/tweens/misc/Alarm.h>
#include <com/haxepunk/tweens/TweenEvent.h>
#include <openfl/_v2/events/Event.h>
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#include <com/haxepunk/masks/SlopedGrid.h>
#include <com/haxepunk/masks/TileType.h>
#include <com/haxepunk/masks/Polygon.h>
#include <com/haxepunk/math/Projection.h>
#include <com/haxepunk/masks/Pixelmask.h>
#include <com/haxepunk/masks/Grid.h>
#include <com/haxepunk/masks/Circle.h>
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#include <com/haxepunk/graphics/atlas/TextureAtlas.h>
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#include <com/haxepunk/graphics/atlas/_AtlasData/AtlasDataType_Impl_.h>
#include <com/haxepunk/graphics/atlas/Atlas.h>
#include <com/haxepunk/graphics/Text.h>
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
#include <com/haxepunk/graphics/Spritemap.h>
#include <com/haxepunk/graphics/Image.h>
#include <com/haxepunk/graphics/Graphiclist.h>
#include <com/haxepunk/graphics/Animation.h>
#include <com/haxepunk/ds/Either.h>
#include <com/haxepunk/debug/LayerList.h>
#include <com/haxepunk/debug/LayerLabel.h>
#include <com/haxepunk/debug/MaskLabel.h>
#include <com/haxepunk/debug/VisibleLabel.h>
#include <com/haxepunk/debug/Console.h>
#include <com/haxepunk/debug/TraceCapture.h>
#include <com/haxepunk/Tween.h>
#include <com/haxepunk/TweenType.h>
#include <com/haxepunk/Screen.h>
#include <com/haxepunk/RenderMode.h>
#include <com/haxepunk/_HXP/Position_Impl_.h>
#include <com/haxepunk/Graphic.h>
#include <com/haxepunk/_Graphic/ImageType_Impl_.h>
#include <com/haxepunk/_Graphic/TileType_Impl_.h>
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#include <Xml.h>
#include <XmlType.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Player.h>
#include <IMap.h>
#include <MainScene.h>
#include <com/haxepunk/Scene.h>
#include <Magic.h>
#include <List.h>
#include <Lambda.h>
#include <EReg.h>
#include <__ASSET__font_5.h>
#include <__ASSET__font_04b_03___ttf_png.h>
#include <__ASSET__font_04b_03___ttf.h>
#include <openfl/_v2/text/Font.h>
#include <__ASSET__graphics_preloader_haxepunk_png.h>
#include <__ASSET__graphics_debug_console_visible_png.h>
#include <__ASSET__graphics_debug_console_step_png.h>
#include <__ASSET__graphics_debug_console_play_png.h>
#include <__ASSET__graphics_debug_console_pause_png.h>
#include <__ASSET__graphics_debug_console_output_png.h>
#include <__ASSET__graphics_debug_console_logo_png.h>
#include <__ASSET__graphics_debug_console_hidden_png.h>
#include <__ASSET__graphics_debug_console_debug_png.h>
#include <openfl/_v2/display/BitmapData.h>
#include <DefaultAssetLibrary.h>
#include <openfl/_v2/AssetLibrary.h>
#include <Date.h>
#include <BlockFlammable.h>
#include <Block.h>
#include <com/haxepunk/Entity.h>
#include <com/haxepunk/HXP.h>
#include <openfl/_v2/geom/Rectangle.h>
#include <openfl/_v2/geom/Matrix.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <openfl/_v2/geom/Point.h>
#include <openfl/media/SoundTransform.h>
#include <com/haxepunk/masks/Masklist.h>
#include <com/haxepunk/masks/Hitbox.h>
#include <Reflect.h>
#include <Type.h>
#include <com/haxepunk/Mask.h>
#include <com/haxepunk/Tweener.h>
#include <DocumentClass.h>
#include <Main.h>
#include <com/haxepunk/Engine.h>
#include <openfl/_v2/display/Sprite.h>
#include <openfl/_v2/display/DisplayObjectContainer.h>
#include <openfl/_v2/display/InteractiveObject.h>
#include <openfl/_v2/display/DisplayObject.h>
#include <openfl/_v2/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/_v2/display/IBitmapDrawable.h>
#include <openfl/_v2/events/EventDispatcher.h>
#include <openfl/_v2/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::FileSystem_obj::__register();
::openfl::utils::Endian_obj::__register();
::openfl::ui::MultitouchInputMode_obj::__register();
::openfl::text::TextFieldType_obj::__register();
::openfl::text::TextFieldAutoSize_obj::__register();
::openfl::text::GridFitType_obj::__register();
::openfl::text::AntiAliasType_obj::__register();
::openfl::system::SecurityDomain_obj::__register();
::openfl::system::LoaderContext_obj::__register();
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::media::SoundLoaderContext_obj::__register();
::openfl::media::ID3Info_obj::__register();
::openfl::geom::Vector3D_obj::__register();
::openfl::geom::Orientation3D_obj::__register();
::openfl::geom::Matrix3D_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::RangeError_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::ArgumentError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageDisplayState_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::InterpolationMethod_obj::__register();
::openfl::display::GraphicsPathWinding_obj::__register();
::openfl::display::GradientType_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::_v2::utils::WeakRef_obj::__register();
::openfl::_v2::utils::Float32Array_obj::__register();
::openfl::_v2::utils::CompressionAlgorithm_obj::__register();
::openfl::_v2::utils::ByteArray_obj::__register();
::openfl::_v2::utils::IDataInput_obj::__register();
::openfl::_v2::utils::IDataOutput_obj::__register();
::openfl::_v2::utils::ArrayBufferView_obj::__register();
::openfl::_v2::utils::IMemoryRange_obj::__register();
::openfl::_v2::ui::Multitouch_obj::__register();
::openfl::_v2::ui::Keyboard_obj::__register();
::openfl::_v2::text::TextLineMetrics_obj::__register();
::openfl::_v2::text::TextFormatAlign_obj::__register();
::openfl::_v2::text::TextFormat_obj::__register();
::openfl::_v2::text::TextField_obj::__register();
::openfl::_v2::text::FontType_obj::__register();
::openfl::_v2::text::FontStyle_obj::__register();
::openfl::_v2::system::System_obj::__register();
::openfl::_v2::system::ScreenMode_obj::__register();
::openfl::_v2::system::PixelFormat_obj::__register();
::openfl::_v2::net::URLRequestMethod_obj::__register();
::openfl::_v2::net::URLRequest_obj::__register();
::openfl::_v2::media::AudioThreadState_obj::__register();
::openfl::_v2::media::SoundChannel_obj::__register();
::openfl::_v2::media::InternalAudioType_obj::__register();
::openfl::_v2::media::Sound_obj::__register();
::openfl::_v2::gl::GLTexture_obj::__register();
::openfl::_v2::gl::GLShader_obj::__register();
::openfl::_v2::gl::GLRenderbuffer_obj::__register();
::openfl::_v2::gl::GLProgram_obj::__register();
::openfl::_v2::gl::GLFramebuffer_obj::__register();
::openfl::_v2::gl::GLBuffer_obj::__register();
::openfl::_v2::gl::GLObject_obj::__register();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__register();
::openfl::_v2::gl::GL_obj::__register();
::openfl::_v2::geom::Transform_obj::__register();
::openfl::_v2::geom::ColorTransform_obj::__register();
::openfl::_v2::filters::BitmapFilter_obj::__register();
::openfl::_v2::events::SystemEvent_obj::__register();
::openfl::_v2::events::KeyboardEvent_obj::__register();
::openfl::_v2::events::HTTPStatusEvent_obj::__register();
::openfl::_v2::events::Listener_obj::__register();
::openfl::_v2::display::TriangleCulling_obj::__register();
::openfl::_v2::display::Tilesheet_obj::__register();
::openfl::_v2::display::StageQuality_obj::__register();
::openfl::_v2::display::TouchInfo_obj::__register();
::openfl::_v2::display::SpreadMethod_obj::__register();
::openfl::_v2::display::Shape_obj::__register();
::openfl::_v2::display::OpenGLView_obj::__register();
::openfl::_v2::display::MovieClip_obj::__register();
::openfl::_v2::display::ManagedStage_obj::__register();
::openfl::_v2::display::Stage_obj::__register();
::openfl::_v2::events::TouchEvent_obj::__register();
::openfl::_v2::events::MouseEvent_obj::__register();
::openfl::_v2::display::LoaderInfo_obj::__register();
::openfl::_v2::net::URLLoader_obj::__register();
::openfl::_v2::display::Loader_obj::__register();
::openfl::_v2::display::LineScaleMode_obj::__register();
::openfl::_v2::display::JointStyle_obj::__register();
::openfl::_v2::display::IGraphicsData_obj::__register();
::openfl::_v2::display::Graphics_obj::__register();
::openfl::_v2::display::DirectRenderer_obj::__register();
::openfl::_v2::display::CapsStyle_obj::__register();
::openfl::_v2::display::BlendMode_obj::__register();
::openfl::_v2::display::OptimizedPerlin_obj::__register();
::openfl::_v2::display::Bitmap_obj::__register();
::openfl::_v2::Memory_obj::__register();
::openfl::_v2::AssetType_obj::__register();
::openfl::_v2::AssetData_obj::__register();
::openfl::_v2::Assets_obj::__register();
::openfl::_v2::AssetCache_obj::__register();
::openfl::_v2::IAssetCache_obj::__register();
::openfl::_Vector::Vector_Impl__obj::__register();
::lime::math::Vector2_obj::__register();
::haxe::zip::Uncompress_obj::__register();
::haxe::zip::FlushMode_obj::__register();
::haxe::zip::Compress_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Resource_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::vm::Gc_obj::__register();
::com::haxepunk::utils::Touch_obj::__register();
::com::haxepunk::utils::Key_obj::__register();
::com::haxepunk::utils::PS3_GAMEPAD_obj::__register();
::com::haxepunk::utils::XBOX_GAMEPAD_obj::__register();
::com::haxepunk::utils::OUYA_GAMEPAD_obj::__register();
::com::haxepunk::utils::Joystick_obj::__register();
::com::haxepunk::utils::JoyButtonState_obj::__register();
::com::haxepunk::utils::Input_obj::__register();
::com::haxepunk::utils::_Input::InputType_Impl__obj::__register();
::com::haxepunk::utils::HaxelibInfo_obj::__register();
::com::haxepunk::utils::HaxelibInfoBuilder_obj::__register();
::com::haxepunk::utils::Gesture_obj::__register();
::com::haxepunk::utils::GestureMode_obj::__register();
::com::haxepunk::utils::GestureType_obj::__register();
::com::haxepunk::utils::Ease_obj::__register();
::com::haxepunk::utils::Draw_obj::__register();
::com::haxepunk::tweens::misc::MultiVarTween_obj::__register();
::com::haxepunk::tweens::misc::Alarm_obj::__register();
::com::haxepunk::tweens::TweenEvent_obj::__register();
::openfl::_v2::events::Event_obj::__register();
::com::haxepunk::math::_Vector::Vector_Impl__obj::__register();
::com::haxepunk::masks::SlopedGrid_obj::__register();
::com::haxepunk::masks::TileType_obj::__register();
::com::haxepunk::masks::Polygon_obj::__register();
::com::haxepunk::math::Projection_obj::__register();
::com::haxepunk::masks::Pixelmask_obj::__register();
::com::haxepunk::masks::Grid_obj::__register();
::com::haxepunk::masks::Circle_obj::__register();
::com::haxepunk::graphics::atlas::TileAtlas_obj::__register();
::com::haxepunk::graphics::atlas::TextureAtlas_obj::__register();
::com::haxepunk::graphics::atlas::AtlasRegion_obj::__register();
::com::haxepunk::graphics::atlas::AtlasData_obj::__register();
::com::haxepunk::graphics::atlas::_AtlasData::AtlasDataType_Impl__obj::__register();
::com::haxepunk::graphics::atlas::Atlas_obj::__register();
::com::haxepunk::graphics::Text_obj::__register();
::com::haxepunk::graphics::_Text::StyleType_Impl__obj::__register();
::com::haxepunk::graphics::Spritemap_obj::__register();
::com::haxepunk::graphics::Image_obj::__register();
::com::haxepunk::graphics::Graphiclist_obj::__register();
::com::haxepunk::graphics::Animation_obj::__register();
::com::haxepunk::ds::Either_obj::__register();
::com::haxepunk::debug::LayerList_obj::__register();
::com::haxepunk::debug::LayerLabel_obj::__register();
::com::haxepunk::debug::MaskLabel_obj::__register();
::com::haxepunk::debug::VisibleLabel_obj::__register();
::com::haxepunk::debug::Console_obj::__register();
::com::haxepunk::debug::TraceCapture_obj::__register();
::com::haxepunk::Tween_obj::__register();
::com::haxepunk::TweenType_obj::__register();
::com::haxepunk::Screen_obj::__register();
::com::haxepunk::RenderMode_obj::__register();
::com::haxepunk::_HXP::Position_Impl__obj::__register();
::com::haxepunk::Graphic_obj::__register();
::com::haxepunk::_Graphic::ImageType_Impl__obj::__register();
::com::haxepunk::_Graphic::TileType_Impl__obj::__register();
::com::haxepunk::_Entity::SolidType_Impl__obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Player_obj::__register();
::IMap_obj::__register();
::MainScene_obj::__register();
::com::haxepunk::Scene_obj::__register();
::Magic_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::EReg_obj::__register();
::__ASSET__font_5_obj::__register();
::__ASSET__font_04b_03___ttf_png_obj::__register();
::__ASSET__font_04b_03___ttf_obj::__register();
::openfl::_v2::text::Font_obj::__register();
::__ASSET__graphics_preloader_haxepunk_png_obj::__register();
::__ASSET__graphics_debug_console_visible_png_obj::__register();
::__ASSET__graphics_debug_console_step_png_obj::__register();
::__ASSET__graphics_debug_console_play_png_obj::__register();
::__ASSET__graphics_debug_console_pause_png_obj::__register();
::__ASSET__graphics_debug_console_output_png_obj::__register();
::__ASSET__graphics_debug_console_logo_png_obj::__register();
::__ASSET__graphics_debug_console_hidden_png_obj::__register();
::__ASSET__graphics_debug_console_debug_png_obj::__register();
::openfl::_v2::display::BitmapData_obj::__register();
::DefaultAssetLibrary_obj::__register();
::openfl::_v2::AssetLibrary_obj::__register();
::Date_obj::__register();
::BlockFlammable_obj::__register();
::Block_obj::__register();
::com::haxepunk::Entity_obj::__register();
::com::haxepunk::HXP_obj::__register();
::openfl::_v2::geom::Rectangle_obj::__register();
::openfl::_v2::geom::Matrix_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::openfl::_v2::geom::Point_obj::__register();
::openfl::media::SoundTransform_obj::__register();
::com::haxepunk::masks::Masklist_obj::__register();
::com::haxepunk::masks::Hitbox_obj::__register();
::Reflect_obj::__register();
::Type_obj::__register();
::com::haxepunk::Mask_obj::__register();
::com::haxepunk::Tweener_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::com::haxepunk::Engine_obj::__register();
::openfl::_v2::display::Sprite_obj::__register();
::openfl::_v2::display::DisplayObjectContainer_obj::__register();
::openfl::_v2::display::InteractiveObject_obj::__register();
::openfl::_v2::display::DisplayObject_obj::__register();
::openfl::_v2::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::_v2::display::IBitmapDrawable_obj::__register();
::openfl::_v2::events::EventDispatcher_obj::__register();
::openfl::_v2::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::openfl::_v2::ui::Multitouch_obj::__init__();
::openfl::_v2::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::EReg_obj::__boot();
::Xml_obj::__boot();
::cpp::vm::Gc_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::_v2::events::IEventDispatcher_obj::__boot();
::openfl::_v2::events::EventDispatcher_obj::__boot();
::openfl::_v2::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::_v2::Lib_obj::__boot();
::openfl::_v2::display::DisplayObject_obj::__boot();
::openfl::_v2::display::InteractiveObject_obj::__boot();
::openfl::_v2::display::DisplayObjectContainer_obj::__boot();
::openfl::_v2::display::Sprite_obj::__boot();
::com::haxepunk::Engine_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::com::haxepunk::Tweener_obj::__boot();
::com::haxepunk::Mask_obj::__boot();
::Type_obj::__boot();
::Reflect_obj::__boot();
::com::haxepunk::masks::Hitbox_obj::__boot();
::com::haxepunk::masks::Masklist_obj::__boot();
::openfl::media::SoundTransform_obj::__boot();
::openfl::_v2::geom::Point_obj::__boot();
::openfl::_v2::geom::Matrix_obj::__boot();
::openfl::_v2::geom::Rectangle_obj::__boot();
::com::haxepunk::HXP_obj::__boot();
::com::haxepunk::Entity_obj::__boot();
::Block_obj::__boot();
::BlockFlammable_obj::__boot();
::Date_obj::__boot();
::openfl::_v2::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::openfl::_v2::display::BitmapData_obj::__boot();
::__ASSET__graphics_debug_console_debug_png_obj::__boot();
::__ASSET__graphics_debug_console_hidden_png_obj::__boot();
::__ASSET__graphics_debug_console_logo_png_obj::__boot();
::__ASSET__graphics_debug_console_output_png_obj::__boot();
::__ASSET__graphics_debug_console_pause_png_obj::__boot();
::__ASSET__graphics_debug_console_play_png_obj::__boot();
::__ASSET__graphics_debug_console_step_png_obj::__boot();
::__ASSET__graphics_debug_console_visible_png_obj::__boot();
::__ASSET__graphics_preloader_haxepunk_png_obj::__boot();
::openfl::_v2::text::Font_obj::__boot();
::__ASSET__font_04b_03___ttf_obj::__boot();
::__ASSET__font_04b_03___ttf_png_obj::__boot();
::__ASSET__font_5_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::Magic_obj::__boot();
::com::haxepunk::Scene_obj::__boot();
::MainScene_obj::__boot();
::IMap_obj::__boot();
::Player_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::XmlType_obj::__boot();
::com::haxepunk::_Entity::SolidType_Impl__obj::__boot();
::com::haxepunk::_Graphic::TileType_Impl__obj::__boot();
::com::haxepunk::_Graphic::ImageType_Impl__obj::__boot();
::com::haxepunk::Graphic_obj::__boot();
::com::haxepunk::_HXP::Position_Impl__obj::__boot();
::com::haxepunk::RenderMode_obj::__boot();
::com::haxepunk::Screen_obj::__boot();
::com::haxepunk::TweenType_obj::__boot();
::com::haxepunk::Tween_obj::__boot();
::com::haxepunk::debug::TraceCapture_obj::__boot();
::com::haxepunk::debug::Console_obj::__boot();
::com::haxepunk::debug::VisibleLabel_obj::__boot();
::com::haxepunk::debug::MaskLabel_obj::__boot();
::com::haxepunk::debug::LayerLabel_obj::__boot();
::com::haxepunk::debug::LayerList_obj::__boot();
::com::haxepunk::ds::Either_obj::__boot();
::com::haxepunk::graphics::Animation_obj::__boot();
::com::haxepunk::graphics::Graphiclist_obj::__boot();
::com::haxepunk::graphics::Image_obj::__boot();
::com::haxepunk::graphics::Spritemap_obj::__boot();
::com::haxepunk::graphics::_Text::StyleType_Impl__obj::__boot();
::com::haxepunk::graphics::Text_obj::__boot();
::com::haxepunk::graphics::atlas::Atlas_obj::__boot();
::com::haxepunk::graphics::atlas::_AtlasData::AtlasDataType_Impl__obj::__boot();
::com::haxepunk::graphics::atlas::AtlasData_obj::__boot();
::com::haxepunk::graphics::atlas::AtlasRegion_obj::__boot();
::com::haxepunk::graphics::atlas::TextureAtlas_obj::__boot();
::com::haxepunk::graphics::atlas::TileAtlas_obj::__boot();
::com::haxepunk::masks::Circle_obj::__boot();
::com::haxepunk::masks::Grid_obj::__boot();
::com::haxepunk::masks::Pixelmask_obj::__boot();
::com::haxepunk::math::Projection_obj::__boot();
::com::haxepunk::masks::Polygon_obj::__boot();
::com::haxepunk::masks::TileType_obj::__boot();
::com::haxepunk::masks::SlopedGrid_obj::__boot();
::com::haxepunk::math::_Vector::Vector_Impl__obj::__boot();
::openfl::_v2::events::Event_obj::__boot();
::com::haxepunk::tweens::TweenEvent_obj::__boot();
::com::haxepunk::tweens::misc::Alarm_obj::__boot();
::com::haxepunk::tweens::misc::MultiVarTween_obj::__boot();
::com::haxepunk::utils::Draw_obj::__boot();
::com::haxepunk::utils::Ease_obj::__boot();
::com::haxepunk::utils::GestureType_obj::__boot();
::com::haxepunk::utils::GestureMode_obj::__boot();
::com::haxepunk::utils::Gesture_obj::__boot();
::com::haxepunk::utils::HaxelibInfoBuilder_obj::__boot();
::com::haxepunk::utils::HaxelibInfo_obj::__boot();
::com::haxepunk::utils::_Input::InputType_Impl__obj::__boot();
::com::haxepunk::utils::Input_obj::__boot();
::com::haxepunk::utils::JoyButtonState_obj::__boot();
::com::haxepunk::utils::Joystick_obj::__boot();
::com::haxepunk::utils::OUYA_GAMEPAD_obj::__boot();
::com::haxepunk::utils::XBOX_GAMEPAD_obj::__boot();
::com::haxepunk::utils::PS3_GAMEPAD_obj::__boot();
::com::haxepunk::utils::Key_obj::__boot();
::com::haxepunk::utils::Touch_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Resource_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::format::JsonParser_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::haxe::zip::Compress_obj::__boot();
::haxe::zip::FlushMode_obj::__boot();
::haxe::zip::Uncompress_obj::__boot();
::lime::math::Vector2_obj::__boot();
::openfl::_Vector::Vector_Impl__obj::__boot();
::openfl::_v2::IAssetCache_obj::__boot();
::openfl::_v2::AssetCache_obj::__boot();
::openfl::_v2::Assets_obj::__boot();
::openfl::_v2::AssetData_obj::__boot();
::openfl::_v2::AssetType_obj::__boot();
::openfl::_v2::Memory_obj::__boot();
::openfl::_v2::display::Bitmap_obj::__boot();
::openfl::_v2::display::OptimizedPerlin_obj::__boot();
::openfl::_v2::display::BlendMode_obj::__boot();
::openfl::_v2::display::CapsStyle_obj::__boot();
::openfl::_v2::display::DirectRenderer_obj::__boot();
::openfl::_v2::display::Graphics_obj::__boot();
::openfl::_v2::display::IGraphicsData_obj::__boot();
::openfl::_v2::display::JointStyle_obj::__boot();
::openfl::_v2::display::LineScaleMode_obj::__boot();
::openfl::_v2::display::Loader_obj::__boot();
::openfl::_v2::net::URLLoader_obj::__boot();
::openfl::_v2::display::LoaderInfo_obj::__boot();
::openfl::_v2::events::MouseEvent_obj::__boot();
::openfl::_v2::events::TouchEvent_obj::__boot();
::openfl::_v2::display::Stage_obj::__boot();
::openfl::_v2::display::ManagedStage_obj::__boot();
::openfl::_v2::display::MovieClip_obj::__boot();
::openfl::_v2::display::OpenGLView_obj::__boot();
::openfl::_v2::display::Shape_obj::__boot();
::openfl::_v2::display::SpreadMethod_obj::__boot();
::openfl::_v2::display::TouchInfo_obj::__boot();
::openfl::_v2::display::StageQuality_obj::__boot();
::openfl::_v2::display::Tilesheet_obj::__boot();
::openfl::_v2::display::TriangleCulling_obj::__boot();
::openfl::_v2::events::Listener_obj::__boot();
::openfl::_v2::events::HTTPStatusEvent_obj::__boot();
::openfl::_v2::events::KeyboardEvent_obj::__boot();
::openfl::_v2::events::SystemEvent_obj::__boot();
::openfl::_v2::filters::BitmapFilter_obj::__boot();
::openfl::_v2::geom::ColorTransform_obj::__boot();
::openfl::_v2::geom::Transform_obj::__boot();
::openfl::_v2::gl::GL_obj::__boot();
::openfl::_v2::gl::_GL::Float32Data_Impl__obj::__boot();
::openfl::_v2::gl::GLObject_obj::__boot();
::openfl::_v2::gl::GLBuffer_obj::__boot();
::openfl::_v2::gl::GLFramebuffer_obj::__boot();
::openfl::_v2::gl::GLProgram_obj::__boot();
::openfl::_v2::gl::GLRenderbuffer_obj::__boot();
::openfl::_v2::gl::GLShader_obj::__boot();
::openfl::_v2::gl::GLTexture_obj::__boot();
::openfl::_v2::media::Sound_obj::__boot();
::openfl::_v2::media::InternalAudioType_obj::__boot();
::openfl::_v2::media::SoundChannel_obj::__boot();
::openfl::_v2::media::AudioThreadState_obj::__boot();
::openfl::_v2::net::URLRequest_obj::__boot();
::openfl::_v2::net::URLRequestMethod_obj::__boot();
::openfl::_v2::system::PixelFormat_obj::__boot();
::openfl::_v2::system::ScreenMode_obj::__boot();
::openfl::_v2::system::System_obj::__boot();
::openfl::_v2::text::FontStyle_obj::__boot();
::openfl::_v2::text::FontType_obj::__boot();
::openfl::_v2::text::TextField_obj::__boot();
::openfl::_v2::text::TextFormat_obj::__boot();
::openfl::_v2::text::TextFormatAlign_obj::__boot();
::openfl::_v2::text::TextLineMetrics_obj::__boot();
::openfl::_v2::ui::Keyboard_obj::__boot();
::openfl::_v2::ui::Multitouch_obj::__boot();
::openfl::_v2::utils::IMemoryRange_obj::__boot();
::openfl::_v2::utils::ArrayBufferView_obj::__boot();
::openfl::_v2::utils::IDataOutput_obj::__boot();
::openfl::_v2::utils::IDataInput_obj::__boot();
::openfl::_v2::utils::ByteArray_obj::__boot();
::openfl::_v2::utils::CompressionAlgorithm_obj::__boot();
::openfl::_v2::utils::Float32Array_obj::__boot();
::openfl::_v2::utils::WeakRef_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::GradientType_obj::__boot();
::openfl::display::GraphicsPathWinding_obj::__boot();
::openfl::display::InterpolationMethod_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageDisplayState_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::ArgumentError_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::errors::RangeError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::geom::Matrix3D_obj::__boot();
::openfl::geom::Orientation3D_obj::__boot();
::openfl::geom::Vector3D_obj::__boot();
::openfl::media::ID3Info_obj::__boot();
::openfl::media::SoundLoaderContext_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
::openfl::system::LoaderContext_obj::__boot();
::openfl::system::SecurityDomain_obj::__boot();
::openfl::text::AntiAliasType_obj::__boot();
::openfl::text::GridFitType_obj::__boot();
::openfl::text::TextFieldAutoSize_obj::__boot();
::openfl::text::TextFieldType_obj::__boot();
::openfl::ui::MultitouchInputMode_obj::__boot();
::openfl::utils::Endian_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

