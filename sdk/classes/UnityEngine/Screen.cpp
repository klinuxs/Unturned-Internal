#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Screen::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Screen");
return _class;
}
uintptr_t Screen::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Screen* Screen::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Screen>();
}
Runtime::MonoVTable* Screen::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Screen::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Screen);
// --------------- START CLASS MEMBERS --------------- //
Int32 Screen::get_width()
{
static auto _method = MonoClass()->GetMethod(0x06000832)->GetCallable<Int32(*)()>();
return _method();
}
Int32 Screen::get_height()
{
static auto _method = MonoClass()->GetMethod(0x06000833)->GetCallable<Int32(*)()>();
return _method();
}
Single Screen::get_dpi()
{
static auto _method = MonoClass()->GetMethod(0x06000834)->GetCallable<Single(*)()>();
return _method();
}
void Screen::RequestOrientation(unknown_type orient)
{
static auto _method = MonoClass()->GetMethod(0x06000835)->GetCallable<void(*)(unknown_type)>();
return _method(orient);
}
unknown_type Screen::GetScreenOrientation()
{
static auto _method = MonoClass()->GetMethod(0x06000836)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Screen::get_orientation()
{
static auto _method = MonoClass()->GetMethod(0x06000837)->GetCallable<unknown_type(*)()>();
return _method();
}
void Screen::set_orientation(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06000838)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
Int32 Screen::get_sleepTimeout()
{
static auto _method = MonoClass()->GetMethod(0x06000839)->GetCallable<Int32(*)()>();
return _method();
}
void Screen::set_sleepTimeout(Int32 value)
{
static auto _method = MonoClass()->GetMethod(0x0600083A)->GetCallable<void(*)(Int32)>();
return _method(value);
}
Boolean Screen::IsOrientationEnabled(unknown_type orient)
{
static auto _method = MonoClass()->GetMethod(0x0600083B)->GetCallable<Boolean(*)(unknown_type)>();
return _method(orient);
}
void Screen::SetOrientationEnabled(unknown_type orient, Boolean enabled)
{
static auto _method = MonoClass()->GetMethod(0x0600083C)->GetCallable<void(*)(unknown_type, Boolean)>();
return _method(orient, enabled);
}
Boolean Screen::get_autorotateToPortrait()
{
static auto _method = MonoClass()->GetMethod(0x0600083D)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_autorotateToPortrait(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x0600083E)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Screen::get_autorotateToPortraitUpsideDown()
{
static auto _method = MonoClass()->GetMethod(0x0600083F)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_autorotateToPortraitUpsideDown(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000840)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Screen::get_autorotateToLandscapeLeft()
{
static auto _method = MonoClass()->GetMethod(0x06000841)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_autorotateToLandscapeLeft(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000842)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
Boolean Screen::get_autorotateToLandscapeRight()
{
static auto _method = MonoClass()->GetMethod(0x06000843)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_autorotateToLandscapeRight(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000844)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
UnityEngine::Resolution Screen::get_currentResolution()
{
static auto _method = MonoClass()->GetMethod(0x06000845)->GetCallable<UnityEngine::Resolution(*)()>();
return _method();
}
Boolean Screen::get_fullScreen()
{
static auto _method = MonoClass()->GetMethod(0x06000846)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_fullScreen(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x06000847)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
unknown_type Screen::get_fullScreenMode()
{
static auto _method = MonoClass()->GetMethod(0x06000848)->GetCallable<unknown_type(*)()>();
return _method();
}
void Screen::set_fullScreenMode(unknown_type value)
{
static auto _method = MonoClass()->GetMethod(0x06000849)->GetCallable<void(*)(unknown_type)>();
return _method(value);
}
unknown_type Screen::get_safeArea()
{
static auto _method = MonoClass()->GetMethod(0x0600084A)->GetCallable<unknown_type(*)()>();
return _method();
}
Array<unknown_type>* Screen::get_cutouts()
{
static auto _method = MonoClass()->GetMethod(0x0600084B)->GetCallable<Array<unknown_type>*(*)()>();
return _method();
}
void Screen::SetResolution(Int32 width, Int32 height, unknown_type fullscreenMode, Int32 preferredRefreshRate)
{
static auto _method = MonoClass()->GetMethod(0x0600084C)->GetCallable<void(*)(Int32, Int32, unknown_type, Int32)>();
return _method(width, height, fullscreenMode, preferredRefreshRate);
}
void Screen::SetResolution1(Int32 width, Int32 height, unknown_type fullscreenMode)
{
static auto _method = MonoClass()->GetMethod(0x0600084D)->GetCallable<void(*)(Int32, Int32, unknown_type)>();
return _method(width, height, fullscreenMode);
}
void Screen::SetResolution2(Int32 width, Int32 height, Boolean fullscreen, Int32 preferredRefreshRate)
{
static auto _method = MonoClass()->GetMethod(0x0600084E)->GetCallable<void(*)(Int32, Int32, Boolean, Int32)>();
return _method(width, height, fullscreen, preferredRefreshRate);
}
void Screen::SetResolution3(Int32 width, Int32 height, Boolean fullscreen)
{
static auto _method = MonoClass()->GetMethod(0x0600084F)->GetCallable<void(*)(Int32, Int32, Boolean)>();
return _method(width, height, fullscreen);
}
unknown_type Screen::get_mainWindowPosition()
{
static auto _method = MonoClass()->GetMethod(0x06000850)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Screen::get_mainWindowDisplayInfo()
{
static auto _method = MonoClass()->GetMethod(0x06000851)->GetCallable<unknown_type(*)()>();
return _method();
}
void Screen::GetDisplayLayout(List<unknown_type>* displayLayout)
{
static auto _method = MonoClass()->GetMethod(0x06000852)->GetCallable<void(*)(List<unknown_type>*)>();
return _method(displayLayout);
}
unknown_type Screen::MoveMainWindowTo(unknown_type display, unknown_type position)
{
static auto _method = MonoClass()->GetMethod(0x06000853)->GetCallable<unknown_type(*)(unknown_type, unknown_type)>();
return _method(display, position);
}
unknown_type Screen::GetMainWindowPosition()
{
static auto _method = MonoClass()->GetMethod(0x06000854)->GetCallable<unknown_type(*)()>();
return _method();
}
unknown_type Screen::GetMainWindowDisplayInfo()
{
static auto _method = MonoClass()->GetMethod(0x06000855)->GetCallable<unknown_type(*)()>();
return _method();
}
void Screen::GetDisplayLayoutImpl(List<unknown_type>* displayLayout)
{
static auto _method = MonoClass()->GetMethod(0x06000856)->GetCallable<void(*)(List<unknown_type>*)>();
return _method(displayLayout);
}
unknown_type Screen::MoveMainWindowImpl(unknown_type display, unknown_type position)
{
static auto _method = MonoClass()->GetMethod(0x06000857)->GetCallable<unknown_type(*)(unknown_type, unknown_type)>();
return _method(display, position);
}
Array<UnityEngine::Resolution>* Screen::get_resolutions()
{
static auto _method = MonoClass()->GetMethod(0x06000858)->GetCallable<Array<UnityEngine::Resolution>*(*)()>();
return _method();
}
Single Screen::get_brightness()
{
static auto _method = MonoClass()->GetMethod(0x06000859)->GetCallable<Single(*)()>();
return _method();
}
void Screen::set_brightness(Single value)
{
static auto _method = MonoClass()->GetMethod(0x0600085A)->GetCallable<void(*)(Single)>();
return _method(value);
}
Boolean Screen::get_lockCursor()
{
static auto _method = MonoClass()->GetMethod(0x0600085B)->GetCallable<Boolean(*)()>();
return _method();
}
void Screen::set_lockCursor(Boolean value)
{
static auto _method = MonoClass()->GetMethod(0x0600085C)->GetCallable<void(*)(Boolean)>();
return _method(value);
}
void Screen::get_currentResolution_Injected(UnityEngine::Resolution& ret)
{
static auto _method = MonoClass()->GetMethod(0x0600085E)->GetCallable<void(*)(UnityEngine::Resolution&)>();
return _method(ret);
}
void Screen::get_safeArea_Injected(unknown_type ret)
{
static auto _method = MonoClass()->GetMethod(0x0600085F)->GetCallable<void(*)(unknown_type)>();
return _method(ret);
}
void Screen::GetMainWindowPosition_Injected(unknown_type ret)
{
static auto _method = MonoClass()->GetMethod(0x06000860)->GetCallable<void(*)(unknown_type)>();
return _method(ret);
}
void Screen::GetMainWindowDisplayInfo_Injected(unknown_type ret)
{
static auto _method = MonoClass()->GetMethod(0x06000861)->GetCallable<void(*)(unknown_type)>();
return _method(ret);
}
unknown_type Screen::MoveMainWindowImpl_Injected(unknown_type display, unknown_type position)
{
static auto _method = MonoClass()->GetMethod(0x06000862)->GetCallable<unknown_type(*)(unknown_type, unknown_type)>();
return _method(display, position);
}
};
}
