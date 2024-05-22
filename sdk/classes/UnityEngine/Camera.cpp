#include "../../../sdk.h"
namespace SDK
{
namespace UnityEngine {
Runtime::MonoClass* Camera::MonoClass()
{
static Runtime::MonoClass* _class = Runtime::MonoDomain::GetRootDomain()->GetAssemblyByName("UnityEngine.CoreModule")->GetClass("UnityEngine", "Camera");
return _class;
}
uintptr_t Camera::StaticInstance()
{
static uintptr_t _instance = MonoClass()->GetVTable()->GetStaticFieldData();
return _instance;
}
UnityEngine::Camera* Camera::CreateObjectInstance()
{
return MonoClass()->CreateObject<UnityEngine::Camera>();
}
Runtime::MonoVTable* Camera::GetInstanceVTable()
{
return Memory::read<Runtime::MonoVTable*>(THIS_PTR + 0x0);
}
bool Camera::IsOfType(Runtime::MonoClass* klass)
{
if (auto vtable = GetInstanceVTable(); vtable != nullptr)
return vtable->GetClass() == klass;
return false;
}
MONO_OBJECT_ISNULL_DEF(Camera);
// --------------- START CLASS MEMBERS --------------- //
unknown_type Camera::onPreCull()
{
static uintptr_t _offset = MonoClass()->GetField("onPreCull")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Camera::onPreCull_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPreCull")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Camera::onPreRender()
{
static uintptr_t _offset = MonoClass()->GetField("onPreRender")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Camera::onPreRender_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPreRender")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
unknown_type Camera::onPostRender()
{
static uintptr_t _offset = MonoClass()->GetField("onPostRender")->GetOffset();
return Memory::read<unknown_type>(StaticInstance() + _offset);
}
void Camera::onPostRender_Set(unknown_type value)
{
static uintptr_t _offset = MonoClass()->GetField("onPostRender")->GetOffset();
Memory::write<unknown_type>(value, StaticInstance() + _offset);
}
Single Camera::get_nearClipPlane()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004A7)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_nearClipPlane(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004A8)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Single Camera::get_farClipPlane()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004A9)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_farClipPlane(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AA)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Single Camera::get_fieldOfView()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AB)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_fieldOfView(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AC)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
unknown_type Camera::get_renderingPath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AD)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_renderingPath(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AE)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_actualRenderingPath()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004AF)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::Reset()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B0)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
Boolean Camera::get_allowHDR()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B1)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_allowHDR(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B2)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
Boolean Camera::get_allowMSAA()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B3)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_allowMSAA(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B4)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
Boolean Camera::get_allowDynamicResolution()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B5)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_allowDynamicResolution(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B6)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
Boolean Camera::get_forceIntoRenderTexture()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B7)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_forceIntoRenderTexture(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B8)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
Single Camera::get_orthographicSize()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004B9)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_orthographicSize(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BA)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Boolean Camera::get_orthographic()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BB)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_orthographic(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BC)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
unknown_type Camera::get_opaqueSortMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BD)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_opaqueSortMode(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BE)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_transparencySortMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004BF)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_transparencySortMode(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C0)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
UnityEngine::Vector3 Camera::get_transparencySortAxis()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C1)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_transparencySortAxis(UnityEngine::Vector3 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C2)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, value);
}
void Camera::ResetTransparencySortSettings()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C3)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
Single Camera::get_depth()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C4)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_depth(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C5)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Single Camera::get_aspect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C6)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_aspect(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C7)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
void Camera::ResetAspect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C8)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
UnityEngine::Vector3 Camera::get_velocity()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004C9)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::get_cullingMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CA)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_cullingMask(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CB)->GetCallable<void(*)(UnityEngine::Camera*, Int32)>();
return _method(this, value);
}
Int32 Camera::get_eventMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CC)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_eventMask(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CD)->GetCallable<void(*)(UnityEngine::Camera*, Int32)>();
return _method(this, value);
}
Boolean Camera::get_layerCullSpherical()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CE)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_layerCullSpherical(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004CF)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
unknown_type Camera::get_cameraType()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D0)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_cameraType(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D1)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_skyboxMaterial()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D2)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
UInt64 Camera::get_overrideSceneCullingMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D3)->GetCallable<UInt64(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_overrideSceneCullingMask(UInt64 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D4)->GetCallable<void(*)(UnityEngine::Camera*, UInt64)>();
return _method(this, value);
}
UInt64 Camera::get_sceneCullingMask()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D5)->GetCallable<UInt64(*)(UnityEngine::Camera*)>();
return _method(this);
}
Array<Single>* Camera::GetLayerCullDistances()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D6)->GetCallable<Array<Single>*(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::SetLayerCullDistances(Array<Single>* d)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D7)->GetCallable<void(*)(UnityEngine::Camera*, Array<Single>*)>();
return _method(this, d);
}
Array<Single>* Camera::get_layerCullDistances()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D8)->GetCallable<Array<Single>*(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_layerCullDistances(Array<Single>* value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004D9)->GetCallable<void(*)(UnityEngine::Camera*, Array<Single>*)>();
return _method(this, value);
}
Int32 Camera::get_PreviewCullingLayer()
{
static auto _method = MonoClass()->GetMethod(0x060004DA)->GetCallable<Int32(*)()>();
return _method();
}
Boolean Camera::get_useOcclusionCulling()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004DB)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_useOcclusionCulling(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004DC)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
unknown_type Camera::get_cullingMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004DD)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_cullingMatrix(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004DE)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::ResetCullingMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004DF)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_backgroundColor()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E0)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_backgroundColor(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E1)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_clearFlags()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E2)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_clearFlags(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E3)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_depthTextureMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E4)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_depthTextureMode(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E5)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
Boolean Camera::get_clearStencilAfterLightingPass()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E6)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_clearStencilAfterLightingPass(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E7)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
void Camera::SetReplacementShader(unknown_type shader, String* replacementTag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E8)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, String*)>();
return _method(this, shader, replacementTag);
}
void Camera::ResetReplacementShader()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004E9)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_projectionMatrixMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004EA)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
Boolean Camera::get_usePhysicalProperties()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004EB)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_usePhysicalProperties(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004EC)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
UnityEngine::Vector2 Camera::get_sensorSize()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004ED)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_sensorSize(UnityEngine::Vector2 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004EE)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2)>();
return _method(this, value);
}
UnityEngine::Vector2 Camera::get_lensShift()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004EF)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_lensShift(UnityEngine::Vector2 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F0)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2)>();
return _method(this, value);
}
Single Camera::get_focalLength()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F1)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_focalLength(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F2)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
unknown_type Camera::get_gateFit()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F3)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_gateFit(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F4)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
Single Camera::GetGateFittedFieldOfView()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F5)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
UnityEngine::Vector2 Camera::GetGateFittedLensShift()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F6)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Camera*)>();
return _method(this);
}
UnityEngine::Vector3 Camera::GetLocalSpaceAim()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F7)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_rect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F8)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_rect(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004F9)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_pixelRect()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FA)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_pixelRect(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FB)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
Int32 Camera::get_pixelWidth()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FC)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::get_pixelHeight()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FD)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::get_scaledPixelWidth()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FE)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::get_scaledPixelHeight()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x060004FF)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_targetTexture()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000500)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_targetTexture(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000501)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_activeTexture()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000502)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::get_targetDisplay()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000503)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_targetDisplay(Int32 value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000504)->GetCallable<void(*)(UnityEngine::Camera*, Int32)>();
return _method(this, value);
}
void Camera::SetTargetBuffersImpl(unknown_type color, unknown_type depth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000505)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, color, depth);
}
void Camera::SetTargetBuffers(unknown_type colorBuffer, unknown_type depthBuffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000506)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, colorBuffer, depthBuffer);
}
void Camera::SetTargetBuffersMRTImpl(Array<unknown_type>* color, unknown_type depth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000507)->GetCallable<void(*)(UnityEngine::Camera*, Array<unknown_type>*, unknown_type)>();
return _method(this, color, depth);
}
void Camera::SetTargetBuffers1(Array<unknown_type>* colorBuffer, unknown_type depthBuffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000508)->GetCallable<void(*)(UnityEngine::Camera*, Array<unknown_type>*, unknown_type)>();
return _method(this, colorBuffer, depthBuffer);
}
Array<String*>* Camera::GetCameraBufferWarnings()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000509)->GetCallable<Array<String*>*(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_cameraToWorldMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050A)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_worldToCameraMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050B)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_worldToCameraMatrix(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050C)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_projectionMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050D)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_projectionMatrix(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050E)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_nonJitteredProjectionMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600050F)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_nonJitteredProjectionMatrix(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000510)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
Boolean Camera::get_useJitteredProjectionMatrixForTransparentRendering()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000511)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_useJitteredProjectionMatrixForTransparentRendering(Boolean value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000512)->GetCallable<void(*)(UnityEngine::Camera*, Boolean)>();
return _method(this, value);
}
unknown_type Camera::get_previousViewProjectionMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000513)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::ResetWorldToCameraMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000514)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::ResetProjectionMatrix()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000515)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::CalculateObliqueMatrix(unknown_type clipPlane)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000516)->GetCallable<unknown_type(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, clipPlane);
}
UnityEngine::Vector3 Camera::WorldToScreenPoint(UnityEngine::Vector3 position, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000517)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, position, eye);
}
UnityEngine::Vector3 Camera::WorldToViewportPoint(UnityEngine::Vector3 position, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000518)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, position, eye);
}
UnityEngine::Vector3 Camera::ViewportToWorldPoint(UnityEngine::Vector3 position, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000519)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, position, eye);
}
UnityEngine::Vector3 Camera::ScreenToWorldPoint(UnityEngine::Vector3 position, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051A)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, position, eye);
}
UnityEngine::Vector3 Camera::WorldToScreenPoint1(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051B)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Camera::WorldToViewportPoint1(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051C)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Camera::ViewportToWorldPoint1(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051D)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Camera::ScreenToWorldPoint1(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051E)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Camera::ScreenToViewportPoint(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600051F)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector3 Camera::ViewportToScreenPoint(UnityEngine::Vector3 position)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000520)->GetCallable<UnityEngine::Vector3(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, position);
}
UnityEngine::Vector2 Camera::GetFrustumPlaneSizeAt(Single distance)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000521)->GetCallable<UnityEngine::Vector2(*)(UnityEngine::Camera*, Single)>();
return _method(this, distance);
}
unknown_type Camera::ViewportPointToRay(UnityEngine::Vector2 pos, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000522)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector2, unknown_type)>();
return _method(this, pos, eye);
}
unknown_type Camera::ViewportPointToRay1(UnityEngine::Vector3 pos, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000523)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, pos, eye);
}
unknown_type Camera::ViewportPointToRay2(UnityEngine::Vector3 pos)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000524)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, pos);
}
unknown_type Camera::ScreenPointToRay(UnityEngine::Vector2 pos, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000525)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector2, unknown_type)>();
return _method(this, pos, eye);
}
unknown_type Camera::ScreenPointToRay1(UnityEngine::Vector3 pos, unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000526)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector3, unknown_type)>();
return _method(this, pos, eye);
}
unknown_type Camera::ScreenPointToRay2(UnityEngine::Vector3 pos)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000527)->GetCallable<unknown_type(*)(UnityEngine::Camera*, UnityEngine::Vector3)>();
return _method(this, pos);
}
void Camera::CalculateFrustumCornersInternal(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000528)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, Single, unknown_type, Array<UnityEngine::Vector3>*)>();
return _method(this, viewport, z, eye, outCorners);
}
void Camera::CalculateFrustumCorners(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000529)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, Single, unknown_type, Array<UnityEngine::Vector3>*)>();
return _method(this, viewport, z, eye, outCorners);
}
void Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal(unknown_type output, Single focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, Single nearClip, Single farClip, Single gateAspect, unknown_type gateFitMode)
{
static auto _method = MonoClass()->GetMethod(0x0600052A)->GetCallable<void(*)(unknown_type, Single, UnityEngine::Vector2, UnityEngine::Vector2, Single, Single, Single, unknown_type)>();
return _method(output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode);
}
void Camera::CalculateProjectionMatrixFromPhysicalProperties(unknown_type output, Single focalLength, UnityEngine::Vector2 sensorSize, UnityEngine::Vector2 lensShift, Single nearClip, Single farClip, unknown_type gateFitParameters)
{
static auto _method = MonoClass()->GetMethod(0x0600052B)->GetCallable<void(*)(unknown_type, Single, UnityEngine::Vector2, UnityEngine::Vector2, Single, Single, unknown_type)>();
return _method(output, focalLength, sensorSize, lensShift, nearClip, farClip, gateFitParameters);
}
Single Camera::FocalLengthToFieldOfView(Single focalLength, Single sensorSize)
{
static auto _method = MonoClass()->GetMethod(0x0600052C)->GetCallable<Single(*)(Single, Single)>();
return _method(focalLength, sensorSize);
}
Single Camera::FieldOfViewToFocalLength(Single fieldOfView, Single sensorSize)
{
static auto _method = MonoClass()->GetMethod(0x0600052D)->GetCallable<Single(*)(Single, Single)>();
return _method(fieldOfView, sensorSize);
}
Single Camera::HorizontalToVerticalFieldOfView(Single horizontalFieldOfView, Single aspectRatio)
{
static auto _method = MonoClass()->GetMethod(0x0600052E)->GetCallable<Single(*)(Single, Single)>();
return _method(horizontalFieldOfView, aspectRatio);
}
Single Camera::VerticalToHorizontalFieldOfView(Single verticalFieldOfView, Single aspectRatio)
{
static auto _method = MonoClass()->GetMethod(0x0600052F)->GetCallable<Single(*)(Single, Single)>();
return _method(verticalFieldOfView, aspectRatio);
}
UnityEngine::Camera* Camera::get_main()
{
static auto _method = MonoClass()->GetMethod(0x06000530)->GetCallable<UnityEngine::Camera*(*)()>();
return _method();
}
UnityEngine::Camera* Camera::get_current()
{
static auto _method = MonoClass()->GetMethod(0x06000531)->GetCallable<UnityEngine::Camera*(*)()>();
return _method();
}
unknown_type Camera::get_scene()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000532)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_scene(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000533)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
Boolean Camera::get_stereoEnabled()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000534)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
Single Camera::get_stereoSeparation()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000535)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_stereoSeparation(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000536)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Single Camera::get_stereoConvergence()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000537)->GetCallable<Single(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_stereoConvergence(Single value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000538)->GetCallable<void(*)(UnityEngine::Camera*, Single)>();
return _method(this, value);
}
Boolean Camera::get_areVRStereoViewMatricesWithinSingleCullTolerance()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000539)->GetCallable<Boolean(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_stereoTargetEye()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053A)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::set_stereoTargetEye(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053B)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
unknown_type Camera::get_stereoActiveEye()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053C)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::GetStereoNonJitteredProjectionMatrix(unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053D)->GetCallable<unknown_type(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, eye);
}
unknown_type Camera::GetStereoViewMatrix(unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053E)->GetCallable<unknown_type(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, eye);
}
void Camera::CopyStereoDeviceProjectionMatrixToNonJittered(unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600053F)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, eye);
}
unknown_type Camera::GetStereoProjectionMatrix(unknown_type eye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000540)->GetCallable<unknown_type(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, eye);
}
void Camera::SetStereoProjectionMatrix(unknown_type eye, unknown_type matrix)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000541)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, matrix);
}
void Camera::ResetStereoProjectionMatrices()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000542)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::SetStereoViewMatrix(unknown_type eye, unknown_type matrix)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000543)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, matrix);
}
void Camera::ResetStereoViewMatrices()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000544)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
Int32 Camera::GetAllCamerasCount()
{
static auto _method = MonoClass()->GetMethod(0x06000545)->GetCallable<Int32(*)()>();
return _method();
}
Int32 Camera::GetAllCamerasImpl(Array<UnityEngine::Camera*>* cam)
{
static auto _method = MonoClass()->GetMethod(0x06000546)->GetCallable<Int32(*)(Array<UnityEngine::Camera*>*)>();
return _method(cam);
}
Int32 Camera::get_allCamerasCount()
{
static auto _method = MonoClass()->GetMethod(0x06000547)->GetCallable<Int32(*)()>();
return _method();
}
Array<UnityEngine::Camera*>* Camera::get_allCameras()
{
static auto _method = MonoClass()->GetMethod(0x06000548)->GetCallable<Array<UnityEngine::Camera*>*(*)()>();
return _method();
}
Int32 Camera::GetAllCameras(Array<UnityEngine::Camera*>* cameras)
{
static auto _method = MonoClass()->GetMethod(0x06000549)->GetCallable<Int32(*)(Array<UnityEngine::Camera*>*)>();
return _method(cameras);
}
Boolean Camera::RenderToCubemapImpl(unknown_type tex, Int32 faceMask)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054A)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type, Int32)>();
return _method(this, tex, faceMask);
}
Boolean Camera::RenderToCubemap(unknown_type cubemap, Int32 faceMask)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054B)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type, Int32)>();
return _method(this, cubemap, faceMask);
}
Boolean Camera::RenderToCubemap1(unknown_type cubemap)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054C)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, cubemap);
}
Boolean Camera::RenderToCubemap2(unknown_type cubemap, Int32 faceMask)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054D)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type, Int32)>();
return _method(this, cubemap, faceMask);
}
Boolean Camera::RenderToCubemap3(unknown_type cubemap)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054E)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, cubemap);
}
Int32 Camera::GetFilterMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600054F)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
unknown_type Camera::get_sceneViewFilterMode()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000550)->GetCallable<unknown_type(*)(UnityEngine::Camera*)>();
return _method(this);
}
Boolean Camera::RenderToCubemapEyeImpl(unknown_type cubemap, Int32 faceMask, unknown_type stereoEye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000551)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type, Int32, unknown_type)>();
return _method(this, cubemap, faceMask, stereoEye);
}
Boolean Camera::RenderToCubemap4(unknown_type cubemap, Int32 faceMask, unknown_type stereoEye)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000552)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type, Int32, unknown_type)>();
return _method(this, cubemap, faceMask, stereoEye);
}
void Camera::Render()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000553)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::RenderWithShader(unknown_type shader, String* replacementTag)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000554)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, String*)>();
return _method(this, shader, replacementTag);
}
void Camera::RenderDontRestore()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000555)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::SubmitRenderRequests(List<unknown_type>* renderRequests)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000556)->GetCallable<void(*)(UnityEngine::Camera*, List<unknown_type>*)>();
return _method(this, renderRequests);
}
void Camera::SubmitRenderRequestsInternal(unknown_type requests)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000557)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, requests);
}
void Camera::SetupCurrent(UnityEngine::Camera* cur)
{
static auto _method = MonoClass()->GetMethod(0x06000558)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(cur);
}
void Camera::CopyFrom(UnityEngine::Camera* other)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000559)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Camera*)>();
return _method(this, other);
}
Int32 Camera::get_commandBufferCount()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055A)->GetCallable<Int32(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::RemoveCommandBuffers(unknown_type evt)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055B)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, evt);
}
void Camera::RemoveAllCommandBuffers()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055C)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::AddCommandBufferImpl(unknown_type evt, unknown_type buffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055D)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, evt, buffer);
}
void Camera::AddCommandBufferAsyncImpl(unknown_type evt, unknown_type buffer, unknown_type queueType)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055E)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type, unknown_type)>();
return _method(this, evt, buffer, queueType);
}
void Camera::RemoveCommandBufferImpl(unknown_type evt, unknown_type buffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600055F)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, evt, buffer);
}
void Camera::AddCommandBuffer(unknown_type evt, unknown_type buffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000560)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, evt, buffer);
}
void Camera::AddCommandBufferAsync(unknown_type evt, unknown_type buffer, unknown_type queueType)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000561)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type, unknown_type)>();
return _method(this, evt, buffer, queueType);
}
void Camera::RemoveCommandBuffer(unknown_type evt, unknown_type buffer)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000562)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, evt, buffer);
}
Array<unknown_type>* Camera::GetCommandBuffers(unknown_type evt)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000563)->GetCallable<Array<unknown_type>*(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, evt);
}
void Camera::FireOnPreCull(UnityEngine::Camera* cam)
{
static auto _method = MonoClass()->GetMethod(0x06000564)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(cam);
}
void Camera::FireOnPreRender(UnityEngine::Camera* cam)
{
static auto _method = MonoClass()->GetMethod(0x06000565)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(cam);
}
void Camera::FireOnPostRender(UnityEngine::Camera* cam)
{
static auto _method = MonoClass()->GetMethod(0x06000566)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(cam);
}
void Camera::OnlyUsedForTesting1()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000567)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
void Camera::OnlyUsedForTesting2()
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000568)->GetCallable<void(*)(UnityEngine::Camera*)>();
return _method(this);
}
Boolean Camera::TryGetCullingParameters(unknown_type cullingParameters)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000569)->GetCallable<Boolean(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, cullingParameters);
}
Boolean Camera::TryGetCullingParameters1(Boolean stereoAware, unknown_type cullingParameters)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600056A)->GetCallable<Boolean(*)(UnityEngine::Camera*, Boolean, unknown_type)>();
return _method(this, stereoAware, cullingParameters);
}
Boolean Camera::GetCullingParameters_Internal(UnityEngine::Camera* camera, Boolean stereoAware, unknown_type cullingParameters, Int32 managedCullingParametersSize)
{
static auto _method = MonoClass()->GetMethod(0x0600056B)->GetCallable<Boolean(*)(UnityEngine::Camera*, Boolean, unknown_type, Int32)>();
return _method(camera, stereoAware, cullingParameters, managedCullingParametersSize);
}
void Camera::get_transparencySortAxis_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600056C)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Camera::set_transparencySortAxis_Injected(UnityEngine::Vector3& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600056D)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&)>();
return _method(this, value);
}
void Camera::get_velocity_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600056E)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Camera::get_cullingMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600056F)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_cullingMatrix_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000570)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_backgroundColor_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000571)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_backgroundColor_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000572)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_sensorSize_Injected(UnityEngine::Vector2& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000573)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&)>();
return _method(this, ret);
}
void Camera::set_sensorSize_Injected(UnityEngine::Vector2& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000574)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&)>();
return _method(this, value);
}
void Camera::get_lensShift_Injected(UnityEngine::Vector2& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000575)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&)>();
return _method(this, ret);
}
void Camera::set_lensShift_Injected(UnityEngine::Vector2& value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000576)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&)>();
return _method(this, value);
}
void Camera::GetGateFittedLensShift_Injected(UnityEngine::Vector2& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000577)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&)>();
return _method(this, ret);
}
void Camera::GetLocalSpaceAim_Injected(UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000578)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&)>();
return _method(this, ret);
}
void Camera::get_rect_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000579)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_rect_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057A)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_pixelRect_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057B)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_pixelRect_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057C)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::SetTargetBuffersImpl_Injected(unknown_type color, unknown_type depth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057D)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, color, depth);
}
void Camera::SetTargetBuffersMRTImpl_Injected(Array<unknown_type>* color, unknown_type depth)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057E)->GetCallable<void(*)(UnityEngine::Camera*, Array<unknown_type>*, unknown_type)>();
return _method(this, color, depth);
}
void Camera::get_cameraToWorldMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600057F)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::get_worldToCameraMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000580)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_worldToCameraMatrix_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000581)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_projectionMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000582)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_projectionMatrix_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000583)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_nonJitteredProjectionMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000584)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_nonJitteredProjectionMatrix_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000585)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::get_previousViewProjectionMatrix_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000586)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::CalculateObliqueMatrix_Injected(unknown_type clipPlane, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000587)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, clipPlane, ret);
}
void Camera::WorldToScreenPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000588)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, unknown_type, UnityEngine::Vector3&)>();
return _method(this, position, eye, ret);
}
void Camera::WorldToViewportPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000589)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, unknown_type, UnityEngine::Vector3&)>();
return _method(this, position, eye, ret);
}
void Camera::ViewportToWorldPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058A)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, unknown_type, UnityEngine::Vector3&)>();
return _method(this, position, eye, ret);
}
void Camera::ScreenToWorldPoint_Injected(UnityEngine::Vector3& position, unknown_type eye, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058B)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, unknown_type, UnityEngine::Vector3&)>();
return _method(this, position, eye, ret);
}
void Camera::ScreenToViewportPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058C)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, position, ret);
}
void Camera::ViewportToScreenPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058D)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector3&, UnityEngine::Vector3&)>();
return _method(this, position, ret);
}
void Camera::GetFrustumPlaneSizeAt_Injected(Single distance, UnityEngine::Vector2& ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058E)->GetCallable<void(*)(UnityEngine::Camera*, Single, UnityEngine::Vector2&)>();
return _method(this, distance, ret);
}
void Camera::ViewportPointToRay_Injected(UnityEngine::Vector2& pos, unknown_type eye, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x0600058F)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&, unknown_type, unknown_type)>();
return _method(this, pos, eye, ret);
}
void Camera::ScreenPointToRay_Injected(UnityEngine::Vector2& pos, unknown_type eye, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000590)->GetCallable<void(*)(UnityEngine::Camera*, UnityEngine::Vector2&, unknown_type, unknown_type)>();
return _method(this, pos, eye, ret);
}
void Camera::CalculateFrustumCornersInternal_Injected(unknown_type viewport, Single z, unknown_type eye, Array<UnityEngine::Vector3>* outCorners)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000591)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, Single, unknown_type, Array<UnityEngine::Vector3>*)>();
return _method(this, viewport, z, eye, outCorners);
}
void Camera::CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(unknown_type output, Single focalLength, UnityEngine::Vector2& sensorSize, UnityEngine::Vector2& lensShift, Single nearClip, Single farClip, Single gateAspect, unknown_type gateFitMode)
{
static auto _method = MonoClass()->GetMethod(0x06000592)->GetCallable<void(*)(unknown_type, Single, UnityEngine::Vector2&, UnityEngine::Vector2&, Single, Single, Single, unknown_type)>();
return _method(output, focalLength, sensorSize, lensShift, nearClip, farClip, gateAspect, gateFitMode);
}
void Camera::get_scene_Injected(unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000593)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, ret);
}
void Camera::set_scene_Injected(unknown_type value)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000594)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type)>();
return _method(this, value);
}
void Camera::GetStereoNonJitteredProjectionMatrix_Injected(unknown_type eye, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000595)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, ret);
}
void Camera::GetStereoViewMatrix_Injected(unknown_type eye, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000596)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, ret);
}
void Camera::GetStereoProjectionMatrix_Injected(unknown_type eye, unknown_type ret)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000597)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, ret);
}
void Camera::SetStereoProjectionMatrix_Injected(unknown_type eye, unknown_type matrix)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000598)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, matrix);
}
void Camera::SetStereoViewMatrix_Injected(unknown_type eye, unknown_type matrix)
{
MONO_CHECK_NULLREF();
static auto _method = MonoClass()->GetMethod(0x06000599)->GetCallable<void(*)(UnityEngine::Camera*, unknown_type, unknown_type)>();
return _method(this, eye, matrix);
}
};
}
