// UnityEngine.CoreModule.dll
// Class VA: 0x7A70D801B0
private sealed class <PrivateImplementationDetails> : [Object]
{
	// Fields
	public readonly static [<PrivateImplementationDetails>]->[__StaticArrayInitTypeSize=6] 0EBBFED81071BF15F38AA1387D6D74E5788591B4AA6E85C7B739CF903789D438; // 0x0
	public readonly static [<PrivateImplementationDetails>]->[__StaticArrayInitTypeSize=20] 39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83; // 0x6
	public readonly static [<PrivateImplementationDetails>]->[__StaticArrayInitTypeSize=20] C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF; // 0x1A

	// Methods

	// Nested types
	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D80030
	public struct __StaticArrayInitTypeSize=6 : [ValueType]
	{
		// Fields

		// Methods
	}

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D80330
	public struct __StaticArrayInitTypeSize=20 : [ValueType]
	{
		// Fields

		// Methods
	}

}

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A9F0
	private class BuiltinRuntimeReflectionSystem : [Object]
	{
		// Fields

		// Methods
		public sealed new [Boolean] TickRealtimeProbes();
		// VA: 0x7B46D8F394 RVA: 0x3389394 Offset: 0x3388394
		public sealed new [Void] Dispose();
		// VA: 0x7B46D8F3E4 RVA: 0x33893E4 Offset: 0x33883E4
		private new [Void] Dispose([Boolean] disposing);
		// VA: 0x7B46D8F3E8 RVA: 0x33893E8 Offset: 0x33883E8
		private static new [Boolean] BuiltinUpdate();
		// VA: 0x7B46D8F3BC RVA: 0x33893BC Offset: 0x33883BC
		private static new [BuiltinRuntimeReflectionSystem] Internal_BuiltinRuntimeReflectionSystem_New();
		// VA: 0x7B46D8F3EC RVA: 0x33893EC Offset: 0x33883EC
		public new [Void] .ctor();
		// VA: 0x7B46D8F440 RVA: 0x3389440 Offset: 0x3388440
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7AB90
	public abstract interface IScriptableRuntimeReflectionSystem
	{
		// Fields

		// Methods
		public abstract new [Boolean] TickRealtimeProbes();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7ACD0
	public static class ScriptableRuntimeReflectionSystemSettings : [Object]
	{
		// Fields
		private static [ScriptableRuntimeReflectionSystemWrapper] s_Instance; // 0x0

		// Methods
		private static new [Void] set_Internal_ScriptableRuntimeReflectionSystemSettings_system([IScriptableRuntimeReflectionSystem] value);
		// VA: 0x7B46D8F448 RVA: 0x3389448 Offset: 0x3388448
		private static new [ScriptableRuntimeReflectionSystemWrapper] get_Internal_ScriptableRuntimeReflectionSystemSettings_instance();
		// VA: 0x7B46D8F590 RVA: 0x3389590 Offset: 0x3388590
		private static new [Void] ScriptingDirtyReflectionSystemInstance();
		// VA: 0x7B46D8F5E8 RVA: 0x33895E8 Offset: 0x33885E8
		private static new [Void] .cctor();
		// VA: 0x7B46D8F610 RVA: 0x3389610 Offset: 0x3388610
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7AE50
	private class ScriptableRuntimeReflectionSystemWrapper : [Object]
	{
		// Fields
		// private [IScriptableRuntimeReflectionSystem] implementation { get; set; }
		private [IScriptableRuntimeReflectionSystem] <implementation>k__BackingField; // 0x10

		// Methods
		internal new [IScriptableRuntimeReflectionSystem] get_implementation();
		// VA: 0x7B46D8F688 RVA: 0x3389688 Offset: 0x3388688
		internal new [Void] set_implementation([IScriptableRuntimeReflectionSystem] value);
		// VA: 0x7B46D8F690 RVA: 0x3389690 Offset: 0x3388690
		private new [Void] Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(out [Boolean] result);
		// VA: 0x7B46D8F698 RVA: 0x3389698 Offset: 0x3388698
		public new [Void] .ctor();
		// VA: 0x7B46D8F680 RVA: 0x3389680 Offset: 0x3388680
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7AFD0
	public enum TextureCreationFlags : [Int32]
	{
		None = 0,
		MipChain = 1,
		DontInitializePixels = 4,
		Crunch = 64,
		DontUploadUponCreate = 1024,
		IgnoreMipmapLimit = 2048
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7B280
	public enum FormatUsage : [Int32]
	{
		Sample = 0,
		Linear = 1,
		Sparse = 2,
		Render = 4,
		Blend = 5,
		GetPixels = 6,
		SetPixels = 7,
		SetPixels32 = 8,
		ReadPixels = 9,
		LoadStore = 10,
		MSAA2x = 11,
		MSAA4x = 12,
		MSAA8x = 13,
		StencilSampling = 16
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7B530
	public enum DefaultFormat : [Int32]
	{
		LDR = 0,
		HDR = 1,
		DepthStencil = 2,
		Shadow = 3,
		Video = 4
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7B7E0
	public enum GraphicsFormat : [Int32]
	{
		None = 0,
		R8_SRGB = 1,
		R8G8_SRGB = 2,
		R8G8B8_SRGB = 3,
		R8G8B8A8_SRGB = 4,
		R8_UNorm = 5,
		R8G8_UNorm = 6,
		R8G8B8_UNorm = 7,
		R8G8B8A8_UNorm = 8,
		R8_SNorm = 9,
		R8G8_SNorm = 10,
		R8G8B8_SNorm = 11,
		R8G8B8A8_SNorm = 12,
		R8_UInt = 13,
		R8G8_UInt = 14,
		R8G8B8_UInt = 15,
		R8G8B8A8_UInt = 16,
		R8_SInt = 17,
		R8G8_SInt = 18,
		R8G8B8_SInt = 19,
		R8G8B8A8_SInt = 20,
		R16_UNorm = 21,
		R16G16_UNorm = 22,
		R16G16B16_UNorm = 23,
		R16G16B16A16_UNorm = 24,
		R16_SNorm = 25,
		R16G16_SNorm = 26,
		R16G16B16_SNorm = 27,
		R16G16B16A16_SNorm = 28,
		R16_UInt = 29,
		R16G16_UInt = 30,
		R16G16B16_UInt = 31,
		R16G16B16A16_UInt = 32,
		R16_SInt = 33,
		R16G16_SInt = 34,
		R16G16B16_SInt = 35,
		R16G16B16A16_SInt = 36,
		R32_UInt = 37,
		R32G32_UInt = 38,
		R32G32B32_UInt = 39,
		R32G32B32A32_UInt = 40,
		R32_SInt = 41,
		R32G32_SInt = 42,
		R32G32B32_SInt = 43,
		R32G32B32A32_SInt = 44,
		R16_SFloat = 45,
		R16G16_SFloat = 46,
		R16G16B16_SFloat = 47,
		R16G16B16A16_SFloat = 48,
		R32_SFloat = 49,
		R32G32_SFloat = 50,
		R32G32B32_SFloat = 51,
		R32G32B32A32_SFloat = 52,
		B8G8R8_SRGB = 56,
		B8G8R8A8_SRGB = 57,
		B8G8R8_UNorm = 58,
		B8G8R8A8_UNorm = 59,
		B8G8R8_SNorm = 60,
		B8G8R8A8_SNorm = 61,
		B8G8R8_UInt = 62,
		B8G8R8A8_UInt = 63,
		B8G8R8_SInt = 64,
		B8G8R8A8_SInt = 65,
		R4G4B4A4_UNormPack16 = 66,
		B4G4R4A4_UNormPack16 = 67,
		R5G6B5_UNormPack16 = 68,
		B5G6R5_UNormPack16 = 69,
		R5G5B5A1_UNormPack16 = 70,
		B5G5R5A1_UNormPack16 = 71,
		A1R5G5B5_UNormPack16 = 72,
		E5B9G9R9_UFloatPack32 = 73,
		B10G11R11_UFloatPack32 = 74,
		A2B10G10R10_UNormPack32 = 75,
		A2B10G10R10_UIntPack32 = 76,
		A2B10G10R10_SIntPack32 = 77,
		A2R10G10B10_UNormPack32 = 78,
		A2R10G10B10_UIntPack32 = 79,
		A2R10G10B10_SIntPack32 = 80,
		A2R10G10B10_XRSRGBPack32 = 81,
		A2R10G10B10_XRUNormPack32 = 82,
		R10G10B10_XRSRGBPack32 = 83,
		R10G10B10_XRUNormPack32 = 84,
		A10R10G10B10_XRSRGBPack32 = 85,
		A10R10G10B10_XRUNormPack32 = 86,
		D16_UNorm = 90,
		D24_UNorm = 91,
		D24_UNorm_S8_UInt = 92,
		D32_SFloat = 93,
		D32_SFloat_S8_UInt = 94,
		S8_UInt = 95,
		RGB_DXT1_SRGB = 96,
		RGBA_DXT1_SRGB = 96,
		RGB_DXT1_UNorm = 97,
		RGBA_DXT1_UNorm = 97,
		RGBA_DXT3_SRGB = 98,
		RGBA_DXT3_UNorm = 99,
		RGBA_DXT5_SRGB = 100,
		RGBA_DXT5_UNorm = 101,
		R_BC4_UNorm = 102,
		R_BC4_SNorm = 103,
		RG_BC5_UNorm = 104,
		RG_BC5_SNorm = 105,
		RGB_BC6H_UFloat = 106,
		RGB_BC6H_SFloat = 107,
		RGBA_BC7_SRGB = 108,
		RGBA_BC7_UNorm = 109,
		RGB_PVRTC_2Bpp_SRGB = 110,
		RGB_PVRTC_2Bpp_UNorm = 111,
		RGB_PVRTC_4Bpp_SRGB = 112,
		RGB_PVRTC_4Bpp_UNorm = 113,
		RGBA_PVRTC_2Bpp_SRGB = 114,
		RGBA_PVRTC_2Bpp_UNorm = 115,
		RGBA_PVRTC_4Bpp_SRGB = 116,
		RGBA_PVRTC_4Bpp_UNorm = 117,
		RGB_ETC_UNorm = 118,
		RGB_ETC2_SRGB = 119,
		RGB_ETC2_UNorm = 120,
		RGB_A1_ETC2_SRGB = 121,
		RGB_A1_ETC2_UNorm = 122,
		RGBA_ETC2_SRGB = 123,
		RGBA_ETC2_UNorm = 124,
		R_EAC_UNorm = 125,
		R_EAC_SNorm = 126,
		RG_EAC_UNorm = 127,
		RG_EAC_SNorm = 128,
		RGBA_ASTC4X4_SRGB = 129,
		RGBA_ASTC4X4_UNorm = 130,
		RGBA_ASTC5X5_SRGB = 131,
		RGBA_ASTC5X5_UNorm = 132,
		RGBA_ASTC6X6_SRGB = 133,
		RGBA_ASTC6X6_UNorm = 134,
		RGBA_ASTC8X8_SRGB = 135,
		RGBA_ASTC8X8_UNorm = 136,
		RGBA_ASTC10X10_SRGB = 137,
		RGBA_ASTC10X10_UNorm = 138,
		RGBA_ASTC12X12_SRGB = 139,
		RGBA_ASTC12X12_UNorm = 140,
		YUV2 = 141,
		DepthAuto = 142,
		ShadowAuto = 143,
		VideoAuto = 144,
		RGBA_ASTC4X4_UFloat = 145,
		RGBA_ASTC5X5_UFloat = 146,
		RGBA_ASTC6X6_UFloat = 147,
		RGBA_ASTC8X8_UFloat = 148,
		RGBA_ASTC10X10_UFloat = 149,
		RGBA_ASTC12X12_UFloat = 150,
		D16_UNorm_S8_UInt = 151
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7BA90
	public class GraphicsFormatUtility : [Object]
	{
		// Fields
		private readonly static [GraphicsFormat[]] tableNoStencil; // 0x0
		private readonly static [GraphicsFormat[]] tableStencil; // 0x8

		// Methods
		public static new [GraphicsFormat] GetGraphicsFormat([TextureFormat] format, [Boolean] isSRGB);
		// VA: 0x7B46D8F758 RVA: 0x3389758 Offset: 0x3388758
		private static new [GraphicsFormat] GetGraphicsFormat_Native_TextureFormat([TextureFormat] format, [Boolean] isSRGB);
		// VA: 0x7B46D8F7DC RVA: 0x33897DC Offset: 0x33887DC
		public static new [GraphicsFormat] GetGraphicsFormat([RenderTextureFormat] format, [Boolean] isSRGB);
		// VA: 0x7B46D8F820 RVA: 0x3389820 Offset: 0x3388820
		private static new [GraphicsFormat] GetGraphicsFormat_Native_RenderTextureFormat([RenderTextureFormat] format, [Boolean] isSRGB);
		// VA: 0x7B46D8F8A4 RVA: 0x33898A4 Offset: 0x33888A4
		public static new [GraphicsFormat] GetGraphicsFormat([RenderTextureFormat] format, [RenderTextureReadWrite] readWrite);
		// VA: 0x7B46D8F8E8 RVA: 0x33898E8 Offset: 0x33888E8
		private static new [GraphicsFormat] GetDepthStencilFormatFromBitsLegacy_Native([Int32] minimumDepthBits);
		// VA: 0x7B46D8F970 RVA: 0x3389970 Offset: 0x3388970
		internal static new [GraphicsFormat] GetDepthStencilFormat([Int32] minimumDepthBits);
		// VA: 0x7B46D8F9AC RVA: 0x33899AC Offset: 0x33889AC
		public static new [Int32] GetDepthBits([GraphicsFormat] format);
		// VA: 0x7B46D8FA20 RVA: 0x3389A20 Offset: 0x3388A20
		public static new [GraphicsFormat] GetDepthStencilFormat([Int32] minimumDepthBits, [Int32] minimumStencilBits);
		// VA: 0x7B46D8FA5C RVA: 0x3389A5C Offset: 0x3388A5C
		public static new [Boolean] IsSRGBFormat([GraphicsFormat] format);
		// VA: 0x7B46D8FC54 RVA: 0x3389C54 Offset: 0x3388C54
		public static new [RenderTextureFormat] GetRenderTextureFormat([GraphicsFormat] format);
		// VA: 0x7B46D8FC90 RVA: 0x3389C90 Offset: 0x3388C90
		private static new [Boolean] IsCompressedFormat_Native_TextureFormat([TextureFormat] format);
		// VA: 0x7B46D8FCCC RVA: 0x3389CCC Offset: 0x3388CCC
		public static new [Boolean] IsCompressedFormat([TextureFormat] format);
		// VA: 0x7B46D8FD08 RVA: 0x3389D08 Offset: 0x3388D08
		private static new [Boolean] CanDecompressFormat([GraphicsFormat] format, [Boolean] wholeImage);
		// VA: 0x7B46D8FD7C RVA: 0x3389D7C Offset: 0x3388D7C
		internal static new [Boolean] CanDecompressFormat([GraphicsFormat] format);
		// VA: 0x7B46D8FDC0 RVA: 0x3389DC0 Offset: 0x3388DC0
		public static new [Boolean] IsDepthStencilFormat([GraphicsFormat] format);
		// VA: 0x7B46D8FE38 RVA: 0x3389E38 Offset: 0x3388E38
		public static new [Boolean] IsPVRTCFormat([GraphicsFormat] format);
		// VA: 0x7B46D8FE74 RVA: 0x3389E74 Offset: 0x3388E74
		public static new [Boolean] IsCrunchFormat([TextureFormat] format);
		// VA: 0x7B46D8FEB0 RVA: 0x3389EB0 Offset: 0x3388EB0
		private static new [Void] .cctor();
		// VA: 0x7B46D8FEEC RVA: 0x3389EEC Offset: 0x3388EEC
	}
} // namespace UnityEngine.Experimental.Rendering

namespace UnityEngine.Experimental.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A390
	public struct CameraPlayable : [ValueType]
	{
		// Fields
		private [PlayableHandle] m_Handle; // 0x0

		// Methods
		public sealed new [PlayableHandle] GetHandle();
		// VA: 0x7B46D8F214 RVA: 0x3389214 Offset: 0x3388214
		public sealed new [Boolean] Equals([CameraPlayable] other);
		// VA: 0x7B46D8F220 RVA: 0x3389220 Offset: 0x3388220
	}
} // namespace UnityEngine.Experimental.Playables

namespace UnityEngine.Experimental.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A530
	public struct MaterialEffectPlayable : [ValueType]
	{
		// Fields
		private [PlayableHandle] m_Handle; // 0x0

		// Methods
		public sealed new [PlayableHandle] GetHandle();
		// VA: 0x7B46D8F294 RVA: 0x3389294 Offset: 0x3388294
		public sealed new [Boolean] Equals([MaterialEffectPlayable] other);
		// VA: 0x7B46D8F2A0 RVA: 0x33892A0 Offset: 0x33882A0
	}
} // namespace UnityEngine.Experimental.Playables

namespace UnityEngine.Experimental.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A6D0
	public struct TextureMixerPlayable : [ValueType]
	{
		// Fields
		private [PlayableHandle] m_Handle; // 0x0

		// Methods
		public sealed new [PlayableHandle] GetHandle();
		// VA: 0x7B46D8F314 RVA: 0x3389314 Offset: 0x3388314
		public sealed new [Boolean] Equals([TextureMixerPlayable] other);
		// VA: 0x7B46D8F320 RVA: 0x3389320 Offset: 0x3388320
	}
} // namespace UnityEngine.Experimental.Playables

namespace UnityEngine.Experimental.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A870
	public struct TexturePlayableOutput : [ValueType]
	{
		// Fields
		private [PlayableOutputHandle] m_Handle; // 0x0

		// Methods
	}
} // namespace UnityEngine.Experimental.Playables

namespace UnityEngine.Experimental.U2D {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D78330
	private struct SpriteIntermediateRendererInfo : [ValueType]
	{
		// Fields
		public [Int32] SpriteID; // 0x0
		public [Int32] TextureID; // 0x4
		public [Int32] MaterialID; // 0x8
		public [Color] Color; // 0xC
		public [Matrix4x4] Transform; // 0x1C
		public [Bounds] Bounds; // 0x5C
		public [Int32] Layer; // 0x74
		public [Int32] SortingLayer; // 0x78
		public [Int32] SortingOrder; // 0x7C
		public [UInt64] SceneCullingMask; // 0x80
		public [IntPtr] IndexData; // 0x88
		public [IntPtr] VertexData; // 0x90
		public [Int32] IndexCount; // 0x98
		public [Int32] VertexCount; // 0x9C
		public [Int32] ShaderChannelMask; // 0xA0

		// Methods
	}
} // namespace UnityEngine.Experimental.U2D

namespace UnityEngine.Experimental.U2D {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D784B0
	private class SpriteRendererGroup : [Object]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine.Experimental.U2D

namespace UnityEngine.Device {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D781B0
	public static class Application : [Object]
	{
		// Fields

		// Methods
		public static new [Boolean] get_isEditor();
		// VA: 0x7B46D8D61C RVA: 0x338761C Offset: 0x338661C
	}
} // namespace UnityEngine.Device

namespace UnityEngine.Internal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D617C0
	public class DefaultValueAttribute : [Attribute]
	{
		// Fields
		private [Object] DefaultValue; // 0x10

		// Methods
		public new [Void] .ctor([String] value);
		// VA: 0x7B46D87084 RVA: 0x3381084 Offset: 0x3380084
		public new [Object] get_Value();
		// VA: 0x7B46D870AC RVA: 0x33810AC Offset: 0x33800AC
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D870B4 RVA: 0x33810B4 Offset: 0x33800B4
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8716C RVA: 0x338116C Offset: 0x338016C
	}
} // namespace UnityEngine.Internal

namespace UnityEngine.Internal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D61970
	public class ExcludeFromDocsAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D87190 RVA: 0x3381190 Offset: 0x3380190
	}
} // namespace UnityEngine.Internal

namespace UnityEngine.Internal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D43E80
	private abstract interface ISubAssetNotDuplicatable
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine.Internal

namespace UnityEngine.Networking.PlayerConnection {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D604B0
	public class MessageEventArgs : [Object]
	{
		// Fields
		public [Int32] playerId; // 0x10
		public [Byte[]] data; // 0x18

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D852C0 RVA: 0x337F2C0 Offset: 0x337E2C0
	}
} // namespace UnityEngine.Networking.PlayerConnection

namespace UnityEngine.Networking.PlayerConnection {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D607B0
	public class PlayerConnection : [ScriptableObject]
	{
		// Fields
		public static [IPlayerEditorConnectionNative] connectionNative; // 0x0
		private [PlayerEditorConnectionEvents] m_PlayerEditorConnectionEvents; // 0x18
		private [List`1] m_connectedPlayers; // 0x20
		private [Boolean] m_IsInitilized; // 0x28
		private static [PlayerConnection] s_Instance; // 0x8

		// Methods
		public static new [PlayerConnection] get_instance();
		// VA: 0x7B46D852C8 RVA: 0x337F2C8 Offset: 0x337E2C8
		public new [Boolean] get_isConnected();
		// VA: 0x7B46D853E4 RVA: 0x337F3E4 Offset: 0x337E3E4
		private static new [PlayerConnection] CreateInstance();
		// VA: 0x7B46D85360 RVA: 0x337F360 Offset: 0x337E360
		public new [Void] OnEnable();
		// VA: 0x7B46D854F8 RVA: 0x337F4F8 Offset: 0x337E4F8
		private new [IPlayerEditorConnectionNative] GetConnectionNativeApi();
		// VA: 0x7B46D85480 RVA: 0x337F480 Offset: 0x337E480
		public sealed new [Void] Register([Guid] messageId, [UnityAction`1] callback);
		// VA: 0x7B46D855B8 RVA: 0x337F5B8 Offset: 0x337E5B8
		public sealed new [Void] Unregister([Guid] messageId, [UnityAction`1] callback);
		// VA: 0x7B46D859D0 RVA: 0x337F9D0 Offset: 0x337E9D0
		public sealed new [Void] RegisterConnection([UnityAction`1] callback);
		// VA: 0x7B46D85CE4 RVA: 0x337FCE4 Offset: 0x337ECE4
		public sealed new [Void] RegisterDisconnection([UnityAction`1] callback);
		// VA: 0x7B46D85E84 RVA: 0x337FE84 Offset: 0x337EE84
		public sealed new [Void] UnregisterConnection([UnityAction`1] callback);
		// VA: 0x7B46D85EE4 RVA: 0x337FEE4 Offset: 0x337EEE4
		public sealed new [Void] UnregisterDisconnection([UnityAction`1] callback);
		// VA: 0x7B46D85F44 RVA: 0x337FF44 Offset: 0x337EF44
		public sealed new [Void] Send([Guid] messageId, [Byte[]] data);
		// VA: 0x7B46D85FA4 RVA: 0x337FFA4 Offset: 0x337EFA4
		public sealed new [Boolean] TrySend([Guid] messageId, [Byte[]] data);
		// VA: 0x7B46D860FC RVA: 0x33800FC Offset: 0x337F0FC
		public new [Boolean] BlockUntilRecvMsg([Guid] messageId, [Int32] timeout);
		// VA: 0x7B46D86254 RVA: 0x3380254 Offset: 0x337F254
		public sealed new [Void] DisconnectAll();
		// VA: 0x7B46D86490 RVA: 0x3380490 Offset: 0x337F490
		private static new [Void] MessageCallbackInternal([IntPtr] data, [UInt64] size, [UInt64] guid, [String] messageId);
		// VA: 0x7B46D8652C RVA: 0x338052C Offset: 0x337F52C
		private static new [Void] ConnectedCallbackInternal([Int32] playerId);
		// VA: 0x7B46D86AE8 RVA: 0x3380AE8 Offset: 0x337FAE8
		private static new [Void] DisconnectedCallback([Int32] playerId);
		// VA: 0x7B46D86BC0 RVA: 0x3380BC0 Offset: 0x337FBC0
		public new [Void] .ctor();
		// VA: 0x7B46D86C54 RVA: 0x3380C54 Offset: 0x337FC54

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D60630
		public sealed class <>c__DisplayClass12_0 : [Object]
		{
			// Fields
			public [Guid] messageId; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D857F4 RVA: 0x337F7F4 Offset: 0x337E7F4
			internal new [Boolean] <Register>b__0([PlayerEditorConnectionEvents]->[MessageTypeSubscribers] x);
			// VA: 0x7B46D86DB0 RVA: 0x3380DB0 Offset: 0x337FDB0
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D609C0
		public sealed class <>c__DisplayClass13_0 : [Object]
		{
			// Fields
			public [Guid] messageId; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D85B74 RVA: 0x337FB74 Offset: 0x337EB74
			internal new [Boolean] <Unregister>b__0([PlayerEditorConnectionEvents]->[MessageTypeSubscribers] x);
			// VA: 0x7B46D86E24 RVA: 0x3380E24 Offset: 0x337FE24
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D60B40
		public sealed class <>c__DisplayClass20_0 : [Object]
		{
			// Fields
			public [Boolean] msgReceived; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86488 RVA: 0x3380488 Offset: 0x337F488
			internal new [Void] <BlockUntilRecvMsg>b__0([MessageEventArgs] args);
			// VA: 0x7B46D86E6C RVA: 0x3380E6C Offset: 0x337FE6C
		}

	}
} // namespace UnityEngine.Networking.PlayerConnection

namespace UnityEngine.Networking.PlayerConnection {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D60E80
	private class PlayerEditorConnectionEvents : [Object]
	{
		// Fields
		public [List`1] messageTypeSubscribers; // 0x10
		public [PlayerEditorConnectionEvents]->[ConnectionChangeEvent] connectionEvent; // 0x18
		public [PlayerEditorConnectionEvents]->[ConnectionChangeEvent] disconnectionEvent; // 0x20

		// Methods
		public new [Void] InvokeMessageIdSubscribers([Guid] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x7B46D86644 RVA: 0x3380644 Offset: 0x337F644
		public new [UnityEvent`1] AddAndCreate([Guid] messageId);
		// VA: 0x7B46D857FC RVA: 0x337F7FC Offset: 0x337E7FC
		public new [Void] UnregisterManagedCallback([Guid] messageId, [UnityAction`1] callback);
		// VA: 0x7B46D85B7C RVA: 0x337FB7C Offset: 0x337EB7C
		public new [Void] .ctor();
		// VA: 0x7B46D86CF8 RVA: 0x3380CF8 Offset: 0x337FCF8

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D60CC0
		public class MessageEvent : [UnityEvent`1]
		{
			// Fields

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86F14 RVA: 0x3380F14 Offset: 0x337FF14
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D61000
		public class ConnectionChangeEvent : [UnityEvent`1]
		{
			// Fields

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86F64 RVA: 0x3380F64 Offset: 0x337FF64
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D611C0
		public class MessageTypeSubscribers : [Object]
		{
			// Fields
			private [String] m_messageTypeId; // 0x10
			public [Int32] subscriberCount; // 0x18
			public [PlayerEditorConnectionEvents]->[MessageEvent] messageCallback; // 0x20

			// Methods
			public new [Guid] get_MessageTypeId();
			// VA: 0x7B46D86DF8 RVA: 0x3380DF8 Offset: 0x337FDF8
			public new [Void] set_MessageTypeId([Guid] value);
			// VA: 0x7B46D86EE8 RVA: 0x3380EE8 Offset: 0x337FEE8
			public new [Void] .ctor();
			// VA: 0x7B46D86E88 RVA: 0x3380E88 Offset: 0x337FE88
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D61340
		public sealed class <>c__DisplayClass6_0 : [Object]
		{
			// Fields
			public [Guid] messageId; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86E78 RVA: 0x3380E78 Offset: 0x337FE78
			internal new [Boolean] <InvokeMessageIdSubscribers>b__0([PlayerEditorConnectionEvents]->[MessageTypeSubscribers] x);
			// VA: 0x7B46D86FAC RVA: 0x3380FAC Offset: 0x337FFAC
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D614C0
		public sealed class <>c__DisplayClass7_0 : [Object]
		{
			// Fields
			public [Guid] messageId; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86E80 RVA: 0x3380E80 Offset: 0x337FE80
			internal new [Boolean] <AddAndCreate>b__0([PlayerEditorConnectionEvents]->[MessageTypeSubscribers] x);
			// VA: 0x7B46D86FF4 RVA: 0x3380FF4 Offset: 0x337FFF4
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D61640
		public sealed class <>c__DisplayClass8_0 : [Object]
		{
			// Fields
			public [Guid] messageId; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D86F5C RVA: 0x3380F5C Offset: 0x337FF5C
			internal new [Boolean] <UnregisterManagedCallback>b__0([PlayerEditorConnectionEvents]->[MessageTypeSubscribers] x);
			// VA: 0x7B46D8703C RVA: 0x338103C Offset: 0x338003C
		}

	}
} // namespace UnityEngine.Networking.PlayerConnection

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D43100
	public struct TimeUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D42F80
		public struct WaitForLastPresentationAndUpdateTime : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D43400
	public struct Initialization : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43280
		public struct ProfilerStartFrame : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43580
		public struct UpdateCameraMotionVectors : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43700
		public struct DirectorSampleTime : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43880
		public struct AsyncUploadTimeSlicedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43A00
		public struct SynchronizeState : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43B80
		public struct SynchronizeInputs : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D43D00
		public struct XREarlyUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D481B0
	public struct EarlyUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48030
		public struct PollPlayerConnection : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48330
		public struct PollHtcsPlayerConnection : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D484B0
		public struct GpuTimestamp : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48630
		public struct AnalyticsCoreStatsUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D487B0
		public struct UnityWebRequestUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48930
		public struct UpdateStreamingManager : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48AB0
		public struct ExecuteMainThreadJobs : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48C30
		public struct ProcessMouseInWindow : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48DB0
		public struct ClearIntermediateRenderers : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D48F30
		public struct ClearLines : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D490B0
		public struct PresentBeforeUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49230
		public struct ResetFrameStatsAfterPresent : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D493B0
		public struct UpdateAsyncReadbackManager : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49530
		public struct UpdateTextureStreamingManager : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D496B0
		public struct UpdatePreloading : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49830
		public struct UpdateContentLoading : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D499B0
		public struct UpdateAsyncInstantiate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49B30
		public struct RendererNotifyInvisible : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49CB0
		public struct PlayerCleanupCachedData : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49E30
		public struct UpdateMainGameViewRect : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D49FB0
		public struct UpdateCanvasRectTransform : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A130
		public struct UpdateInputManager : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A2B0
		public struct ProcessRemoteInput : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A430
		public struct XRUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A5B0
		public struct ScriptRunDelayedStartupFrame : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A730
		public struct UpdateKinect : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4A8B0
		public struct DeliverIosPlatformEvents : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4AA30
		public struct DispatchEventQueueEvents : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4ABB0
		public struct Physics2DEarlyUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4AD30
		public struct PhysicsResetInterpolatedTransformPosition : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4AEB0
		public struct SpriteAtlasManagerUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B030
		public struct TangoUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B1B0
		public struct ARCoreUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B330
		public struct PerformanceAnalyticsUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D4B630
	public struct FixedUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B4B0
		public struct ClearLines : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B7B0
		public struct DirectorFixedSampleTime : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4B930
		public struct AudioFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4BAB0
		public struct ScriptRunBehaviourFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4BC30
		public struct DirectorFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D4BDB0
		public struct LegacyFixedAnimationUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50030
		public struct XRFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D501B0
		public struct PhysicsFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50330
		public struct Physics2DFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D504B0
		public struct PhysicsClothFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50630
		public struct DirectorFixedUpdatePostPhysics : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D507B0
		public struct ScriptRunDelayedFixedFrameRate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50930
		public struct NewInputFixedUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D50C30
	public struct PreUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50AB0
		public struct PhysicsUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50DB0
		public struct Physics2DUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D50F30
		public struct PhysicsClothUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D510B0
		public struct CheckTexFieldInput : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51230
		public struct IMGUISendQueuedEvents : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D513B0
		public struct SendMouseEvents : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51530
		public struct AIUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D516B0
		public struct WindUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51830
		public struct UpdateVideo : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D519B0
		public struct NewInputUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D51CB0
	public struct Update : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51B30
		public struct ScriptRunBehaviourUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51E30
		public struct DirectorUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D51FB0
		public struct ScriptRunDelayedDynamicFrameRate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52130
		public struct ScriptRunDelayedTasks : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D52430
	public struct PreLateUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D522B0
		public struct Physics2DLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D525B0
		public struct PhysicsLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52730
		public struct AIUpdatePostScript : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D528B0
		public struct DirectorUpdateAnimationBegin : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52A30
		public struct LegacyAnimationUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52BB0
		public struct DirectorUpdateAnimationEnd : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52D30
		public struct DirectorDeferredEvaluate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D52EB0
		public struct UIElementsUpdatePanels : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53030
		public struct UpdateNetworkManager : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D531B0
		public struct UpdateMasterServerInterface : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53330
		public struct EndGraphicsJobsAfterScriptUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D534B0
		public struct ParticleSystemBeginUpdateAll : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53630
		public struct ScriptRunBehaviourLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D537B0
		public struct ConstraintManagerUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.PlayerLoop {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D53AB0
	public struct PostLateUpdate : [ValueType]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53930
		public struct PlayerSendFrameStarted : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53C30
		public struct UpdateRectTransform : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D53DB0
		public struct UpdateCanvasRectTransform : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58030
		public struct PlayerUpdateCanvases : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D581B0
		public struct UpdateAudio : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58330
		public struct UpdateVideo : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D584B0
		public struct DirectorLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58630
		public struct ScriptRunDelayedDynamicFrameRate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D587B0
		public struct VFXUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58930
		public struct ParticleSystemEndUpdateAll : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58AB0
		public struct EndGraphicsJobsAfterScriptLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58C30
		public struct UpdateSubstance : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58DB0
		public struct UpdateCustomRenderTextures : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D58F30
		public struct XRPostLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D590B0
		public struct UpdateAllRenderers : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59230
		public struct UpdateLightProbeProxyVolumes : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D593B0
		public struct EnlightenRuntimeUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59530
		public struct UpdateAllSkinnedMeshes : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D596B0
		public struct ProcessWebSendMessages : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59830
		public struct SortingGroupsUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D599B0
		public struct UpdateVideoTextures : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59B30
		public struct DirectorRenderImage : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59CB0
		public struct PlayerEmitCanvasGeometry : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59E30
		public struct PlayerRenderUIEBatchModeOffscreen : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D59FB0
		public struct FinishFrameRendering : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A130
		public struct BatchModeUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A2B0
		public struct PlayerSendFrameComplete : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A430
		public struct UpdateCaptureScreenshot : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A5B0
		public struct PresentAfterDraw : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A730
		public struct ClearImmediateRenderers : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5A8B0
		public struct XRPostPresent : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5AA30
		public struct UpdateResolution : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5ABB0
		public struct InputEndFrame : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5AD30
		public struct GUIClearEvents : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5AEB0
		public struct ShaderHandleErrors : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B030
		public struct ResetInputAxis : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B1B0
		public struct ThreadedLoadingDebug : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B330
		public struct ProfilerSynchronizeStats : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B4B0
		public struct MemoryFrameMaintenance : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B630
		public struct ExecuteGameCenterCallbacks : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B7B0
		public struct XRPreEndFrame : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5B930
		public struct ProfilerEndFrame : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5BAB0
		public struct GraphicsWarmupPreloadedShaders : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5BC30
		public struct PlayerSendFramePostPresent : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D5BDB0
		public struct PhysicsSkinnedClothBeginUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D60030
		public struct PhysicsSkinnedClothFinishUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D601B0
		public struct TriggerEndOfFrameCallbacks : [ValueType]
		{
			// Fields

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D60330
		public struct ObjectDispatcherPostLateUpdate : [ValueType]
		{
			// Fields

			// Methods
		}

	}
} // namespace UnityEngine.PlayerLoop

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41930
	public struct Scene : [ValueType]
	{
		// Fields
		private [Int32] m_Handle; // 0x0

		// Methods
		private static new [Boolean] IsValidInternal([Int32] sceneHandle);
		// VA: 0x7B46D83700 RVA: 0x337D700 Offset: 0x337C700
		private static new [String] GetNameInternal([Int32] sceneHandle);
		// VA: 0x7B46D8373C RVA: 0x337D73C Offset: 0x337C73C
		private static new [Boolean] GetIsLoadedInternal([Int32] sceneHandle);
		// VA: 0x7B46D83778 RVA: 0x337D778 Offset: 0x337C778
		public new [Int32] get_handle();
		// VA: 0x7B46D837B4 RVA: 0x337D7B4 Offset: 0x337C7B4
		public new [Boolean] IsValid();
		// VA: 0x7B46D837BC RVA: 0x337D7BC Offset: 0x337C7BC
		public new [String] get_name();
		// VA: 0x7B46D837F8 RVA: 0x337D7F8 Offset: 0x337C7F8
		public new [Boolean] get_isLoaded();
		// VA: 0x7B46D83834 RVA: 0x337D834 Offset: 0x337C834
		public static new [Boolean] op_Equality([Scene] lhs, [Scene] rhs);
		// VA: 0x7B46D83870 RVA: 0x337D870 Offset: 0x337C870
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8387C RVA: 0x337D87C Offset: 0x337C87C
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D83884 RVA: 0x337D884 Offset: 0x337C884
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41AB0
	private static class SceneManagerAPIInternal : [Object]
	{
		// Fields

		// Methods
		public static new [AsyncOperation] LoadSceneAsyncNameIndexInternal([String] sceneName, [Int32] sceneBuildIndex, [LoadSceneParameters] parameters, [Boolean] mustCompleteNextFrame);
		// VA: 0x7B46D838FC RVA: 0x337D8FC Offset: 0x337C8FC
		private static new [AsyncOperation] LoadSceneAsyncNameIndexInternal_Injected([String] sceneName, [Int32] sceneBuildIndex, ref [LoadSceneParameters] parameters, [Boolean] mustCompleteNextFrame);
		// VA: 0x7B46D8395C RVA: 0x337D95C Offset: 0x337C95C
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41C30
	public class SceneManagerAPI : [Object]
	{
		// Fields
		private static [SceneManagerAPI] s_DefaultAPI; // 0x0
		// private static [SceneManagerAPI] overrideAPI { get; set; }
		private static [SceneManagerAPI] <overrideAPI>k__BackingField; // 0x8

		// Methods
		internal static new [SceneManagerAPI] get_ActiveAPI();
		// VA: 0x7B46D839B8 RVA: 0x337D9B8 Offset: 0x337C9B8
		public static new [SceneManagerAPI] get_overrideAPI();
		// VA: 0x7B46D83A60 RVA: 0x337DA60 Offset: 0x337CA60
		protected internal new [Void] .ctor();
		// VA: 0x7B46D83AB8 RVA: 0x337DAB8 Offset: 0x337CAB8
		protected internal virtual new [AsyncOperation] LoadSceneAsyncByNameOrIndex([String] sceneName, [Int32] sceneBuildIndex, [LoadSceneParameters] parameters, [Boolean] mustCompleteNextFrame);
		// VA: 0x7B46D83AC0 RVA: 0x337DAC0 Offset: 0x337CAC0
		protected internal virtual new [AsyncOperation] LoadFirstScene([Boolean] mustLoadAsync);
		// VA: 0x7B46D83B20 RVA: 0x337DB20 Offset: 0x337CB20
		private static new [Void] .cctor();
		// VA: 0x7B46D83B28 RVA: 0x337DB28 Offset: 0x337CB28
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41DD0
	public class SceneManager : [Object]
	{
		// Fields
		public static [Boolean] s_AllowLoadScene; // 0x0
		private static [UnityAction`2] sceneLoaded; // 0x8
		private static [UnityAction`1] sceneUnloaded; // 0x10
		private static [UnityAction`2] activeSceneChanged; // 0x18

		// Methods
		public static new [Int32] get_sceneCount();
		// VA: 0x7B46D83B84 RVA: 0x337DB84 Offset: 0x337CB84
		public static new [Scene] GetActiveScene();
		// VA: 0x7B46D83BAC RVA: 0x337DBAC Offset: 0x337CBAC
		public static new [Boolean] SetActiveScene([Scene] scene);
		// VA: 0x7B46D83C64 RVA: 0x337DC64 Offset: 0x337CC64
		public static new [Scene] GetSceneByName([String] name);
		// VA: 0x7B46D83D1C RVA: 0x337DD1C Offset: 0x337CD1C
		public static new [Scene] GetSceneAt([Int32] index);
		// VA: 0x7B46D83DEC RVA: 0x337DDEC Offset: 0x337CDEC
		private static new [AsyncOperation] UnloadSceneAsyncInternal([Scene] scene, [UnloadSceneOptions] options);
		// VA: 0x7B46D83EBC RVA: 0x337DEBC Offset: 0x337CEBC
		private static new [AsyncOperation] LoadSceneAsyncNameIndexInternal([String] sceneName, [Int32] sceneBuildIndex, [LoadSceneParameters] parameters, [Boolean] mustCompleteNextFrame);
		// VA: 0x7B46D83F88 RVA: 0x337DF88 Offset: 0x337CF88
		internal static new [AsyncOperation] LoadFirstScene_Internal([Boolean] async);
		// VA: 0x7B46D84064 RVA: 0x337E064 Offset: 0x337D064
		public static new [Void] add_sceneLoaded([UnityAction`2] value);
		// VA: 0x7B46D840CC RVA: 0x337E0CC Offset: 0x337D0CC
		public static new [Void] remove_sceneLoaded([UnityAction`2] value);
		// VA: 0x7B46D841C0 RVA: 0x337E1C0 Offset: 0x337D1C0
		public static new [Void] add_sceneUnloaded([UnityAction`1] value);
		// VA: 0x7B46D842B4 RVA: 0x337E2B4 Offset: 0x337D2B4
		public static new [Void] remove_sceneUnloaded([UnityAction`1] value);
		// VA: 0x7B46D843A8 RVA: 0x337E3A8 Offset: 0x337D3A8
		public static new [Void] add_activeSceneChanged([UnityAction`2] value);
		// VA: 0x7B46D8449C RVA: 0x337E49C Offset: 0x337D49C
		public static new [Void] remove_activeSceneChanged([UnityAction`2] value);
		// VA: 0x7B46D84590 RVA: 0x337E590 Offset: 0x337D590
		public static new [Void] LoadScene([String] sceneName, [LoadSceneMode] mode);
		// VA: 0x7B46D84684 RVA: 0x337E684 Offset: 0x337D684
		public static new [Void] LoadScene([String] sceneName);
		// VA: 0x7B46D84790 RVA: 0x337E790 Offset: 0x337D790
		public static new [Scene] LoadScene([String] sceneName, [LoadSceneParameters] parameters);
		// VA: 0x7B46D846F0 RVA: 0x337E6F0 Offset: 0x337D6F0
		public static new [Void] LoadScene([Int32] sceneBuildIndex);
		// VA: 0x7B46D847E8 RVA: 0x337E7E8 Offset: 0x337D7E8
		public static new [Scene] LoadScene([Int32] sceneBuildIndex, [LoadSceneParameters] parameters);
		// VA: 0x7B46D84840 RVA: 0x337E840 Offset: 0x337D840
		public static new [AsyncOperation] LoadSceneAsync([String] sceneName, [LoadSceneMode] mode);
		// VA: 0x7B46D848E0 RVA: 0x337E8E0 Offset: 0x337D8E0
		public static new [AsyncOperation] LoadSceneAsync([String] sceneName);
		// VA: 0x7B46D849B0 RVA: 0x337E9B0 Offset: 0x337D9B0
		public static new [AsyncOperation] LoadSceneAsync([String] sceneName, [LoadSceneParameters] parameters);
		// VA: 0x7B46D84944 RVA: 0x337E944 Offset: 0x337D944
		public static new [AsyncOperation] UnloadSceneAsync([Scene] scene, [UnloadSceneOptions] options);
		// VA: 0x7B46D84A08 RVA: 0x337EA08 Offset: 0x337DA08
		private static new [Void] Internal_SceneLoaded([Scene] scene, [LoadSceneMode] mode);
		// VA: 0x7B46D84A6C RVA: 0x337EA6C Offset: 0x337DA6C
		private static new [Void] Internal_SceneUnloaded([Scene] scene);
		// VA: 0x7B46D84B1C RVA: 0x337EB1C Offset: 0x337DB1C
		private static new [Void] Internal_ActiveSceneChanged([Scene] previousActiveScene, [Scene] newActiveScene);
		// VA: 0x7B46D84BB8 RVA: 0x337EBB8 Offset: 0x337DBB8
		private static new [Void] .cctor();
		// VA: 0x7B46D84C68 RVA: 0x337EC68 Offset: 0x337DC68
		private static new [Void] GetActiveScene_Injected(out [Scene] ret);
		// VA: 0x7B46D83C28 RVA: 0x337DC28 Offset: 0x337CC28
		private static new [Boolean] SetActiveScene_Injected(ref [Scene] scene);
		// VA: 0x7B46D83CE0 RVA: 0x337DCE0 Offset: 0x337CCE0
		private static new [Void] GetSceneByName_Injected([String] name, out [Scene] ret);
		// VA: 0x7B46D83DA8 RVA: 0x337DDA8 Offset: 0x337CDA8
		private static new [Void] GetSceneAt_Injected([Int32] index, out [Scene] ret);
		// VA: 0x7B46D83E78 RVA: 0x337DE78 Offset: 0x337CE78
		private static new [AsyncOperation] UnloadSceneAsyncInternal_Injected(ref [Scene] scene, [UnloadSceneOptions] options);
		// VA: 0x7B46D83F44 RVA: 0x337DF44 Offset: 0x337CF44
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41F50
	public enum LoadSceneMode : [Int32]
	{
		Single = 0,
		Additive = 1
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D42200
	public enum LocalPhysicsMode : [Int32]
	{
		None = 0,
		Physics2D = 1,
		Physics3D = 2
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D424B0
	public struct LoadSceneParameters : [ValueType]
	{
		// Fields
		private [Int32] m_LoadSceneMode; // enum: [LoadSceneMode], 0x0
		private [Int32] m_LocalPhysicsMode; // enum: [LocalPhysicsMode], 0x4

		// Methods
		public new [Void] .ctor([LoadSceneMode] mode);
		// VA: 0x7B46D846E8 RVA: 0x337E6E8 Offset: 0x337D6E8
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.SceneManagement {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D42630
	public enum UnloadSceneOptions : [Int32]
	{
		None = 0,
		UnloadAllEmbeddedSceneObjects = 1
	}
} // namespace UnityEngine.SceneManagement

namespace UnityEngine.Scripting.APIUpdating {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41600
	private struct MovedFromAttributeData : [ValueType]
	{
		// Fields
		public [String] className; // 0x0
		public [String] nameSpace; // 0x8
		public [String] assembly; // 0x10
		public [Boolean] classHasChanged; // 0x18
		public [Boolean] nameSpaceHasChanged; // 0x19
		public [Boolean] assemblyHasChanged; // 0x1A
		public [Boolean] autoUdpateAPI; // 0x1B

		// Methods
		public new [Void] Set([Boolean] autoUpdateAPI, [String] sourceNamespace, [String] sourceAssembly, [String] sourceClassName);
		// VA: 0x7B46D83618 RVA: 0x337D618 Offset: 0x337C618
	}
} // namespace UnityEngine.Scripting.APIUpdating

namespace UnityEngine.Scripting.APIUpdating {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41780
	public class MovedFromAttribute : [Attribute]
	{
		// Fields
		public [MovedFromAttributeData] data; // 0x10

		// Methods
		public new [Void] .ctor([Boolean] autoUpdateAPI, [String] sourceNamespace, [String] sourceAssembly, [String] sourceClassName);
		// VA: 0x7B46D83650 RVA: 0x337D650 Offset: 0x337C650
		public new [Void] .ctor([String] sourceNamespace);
		// VA: 0x7B46D836BC RVA: 0x337D6BC Offset: 0x337C6BC
	}
} // namespace UnityEngine.Scripting.APIUpdating

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D401B0
	public enum PersistentListenerMode : [Int32]
	{
		EventDefined = 0,
		Void = 1,
		Object = 2,
		Int = 3,
		Float = 4,
		String = 5,
		Bool = 6
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40460
	private class UnityEventTools : [Object]
	{
		// Fields

		// Methods
		internal static new [String] TidyAssemblyTypeName([String] assemblyTypeName);
		// VA: 0x7B46D80D7C RVA: 0x337AD7C Offset: 0x3379D7C
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D405E0
	private class ArgumentCache : [Object]
	{
		// Fields
		private [Object] m_ObjectArgument; // 0x10
		private [String] m_ObjectArgumentAssemblyTypeName; // 0x18
		private [Int32] m_IntArgument; // 0x20
		private [Single] m_FloatArgument; // 0x24
		private [String] m_StringArgument; // 0x28
		private [Boolean] m_BoolArgument; // 0x30

		// Methods
		public new [Object] get_unityObjectArgument();
		// VA: 0x7B46D80FA8 RVA: 0x337AFA8 Offset: 0x3379FA8
		public new [String] get_unityObjectArgumentAssemblyTypeName();
		// VA: 0x7B46D80FB0 RVA: 0x337AFB0 Offset: 0x3379FB0
		public new [Int32] get_intArgument();
		// VA: 0x7B46D80FB8 RVA: 0x337AFB8 Offset: 0x3379FB8
		public new [Single] get_floatArgument();
		// VA: 0x7B46D80FC0 RVA: 0x337AFC0 Offset: 0x3379FC0
		public new [String] get_stringArgument();
		// VA: 0x7B46D80FC8 RVA: 0x337AFC8 Offset: 0x3379FC8
		public new [Boolean] get_boolArgument();
		// VA: 0x7B46D80FD0 RVA: 0x337AFD0 Offset: 0x3379FD0
		public sealed new [Void] OnBeforeSerialize();
		// VA: 0x7B46D80FD8 RVA: 0x337AFD8 Offset: 0x3379FD8
		public sealed new [Void] OnAfterDeserialize();
		// VA: 0x7B46D80FF4 RVA: 0x337AFF4 Offset: 0x3379FF4
		public new [Void] .ctor();
		// VA: 0x7B46D81010 RVA: 0x337B010 Offset: 0x337A010
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70645E10
	private abstract class BaseInvokableCall : [Object]
	{
		// Fields

		// Methods
		protected new [Void] .ctor();
		// VA: 0x7B46D81018 RVA: 0x337B018 Offset: 0x337A018
		protected new [Void] .ctor([Object] target, [MethodInfo] function);
		// VA: 0x7B46D81020 RVA: 0x337B020 Offset: 0x337A020
		public abstract new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected static new [Void] ThrowOnInvalidArg([Object] arg);
		// VA: 0x7B4503A248 RVA: 0x1634248 Offset: 0x1633248
		protected static new [Boolean] AllowInvoke([Delegate] delegate);
		// VA: 0x7B46D81114 RVA: 0x337B114 Offset: 0x337A114
		public abstract new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40780
	private class InvokableCall : [BaseInvokableCall]
	{
		// Fields
		private [UnityAction] Delegate; // 0x10

		// Methods
		private new [Void] add_Delegate([UnityAction] value);
		// VA: 0x7B46D811B8 RVA: 0x337B1B8 Offset: 0x337A1B8
		private new [Void] remove_Delegate([UnityAction] value);
		// VA: 0x7B46D81254 RVA: 0x337B254 Offset: 0x337A254
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B46D812F0 RVA: 0x337B2F0 Offset: 0x337A2F0
		public new [Void] .ctor([UnityAction] action);
		// VA: 0x7B46D813D8 RVA: 0x337B3D8 Offset: 0x337A3D8
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B46D81404 RVA: 0x337B404 Offset: 0x337A404
		public new [Void] Invoke();
		// VA: 0x7B46D81440 RVA: 0x337B440 Offset: 0x337A440
		public override new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x7B46D8147C RVA: 0x337B47C Offset: 0x337A47C
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70645C60
	private class InvokableCall`1 : [BaseInvokableCall]
	{
		// Fields
		private [UnityAction`1] Delegate; // 0x0

		// Methods
		protected new [Void] add_Delegate([UnityAction`1] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected new [Void] remove_Delegate([UnityAction`1] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public new [Void] .ctor([UnityAction`1] action);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public virtual new [Void] Invoke([T1] args0);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EE920
	private class InvokableCall`2 : [BaseInvokableCall]
	{
		// Fields
		private [UnityAction`2] Delegate; // 0x0

		// Methods
		protected new [Void] add_Delegate([UnityAction`2] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected new [Void] remove_Delegate([UnityAction`2] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public new [Void] .ctor([UnityAction`2] action);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] Invoke([T1] args0, [T2] args1);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EECE0
	private class InvokableCall`3 : [BaseInvokableCall]
	{
		// Fields
		private [UnityAction`3] Delegate; // 0x0

		// Methods
		protected new [Void] add_Delegate([UnityAction`3] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected new [Void] remove_Delegate([UnityAction`3] value);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public new [Void] .ctor([UnityAction`3] action);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] Invoke([T1] args0, [T2] args1, [T3] args2);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EF0A0
	private class InvokableCall`4 : [BaseInvokableCall]
	{
		// Fields
		private [UnityAction`4] Delegate; // 0x0

		// Methods
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Boolean] Find([Object] targetObj, [MethodInfo] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70645AB0
	private class CachedInvokableCall`1 : [InvokableCall`1]
	{
		// Fields
		private readonly [T] m_Arg1; // 0x0

		// Methods
		public new [Void] .ctor([Object] target, [MethodInfo] theFunction, [T] argument);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Void] Invoke([Object[]] args);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Void] Invoke([T] arg0);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40920
	public enum UnityEventCallState : [Int32]
	{
		Off = 0,
		EditorAndRuntime = 1,
		RuntimeOnly = 2
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40BD0
	private class PersistentCall : [Object]
	{
		// Fields
		private [Object] m_Target; // 0x10
		private [String] m_TargetAssemblyTypeName; // 0x18
		private [String] m_MethodName; // 0x20
		private [Int32] m_Mode; // enum: [PersistentListenerMode], 0x28
		private [ArgumentCache] m_Arguments; // 0x30
		private [Int32] m_CallState; // enum: [UnityEventCallState], 0x38

		// Methods
		public new [Object] get_target();
		// VA: 0x7B46D814C8 RVA: 0x337B4C8 Offset: 0x337A4C8
		public new [String] get_targetAssemblyTypeName();
		// VA: 0x7B46D814D0 RVA: 0x337B4D0 Offset: 0x337A4D0
		public new [String] get_methodName();
		// VA: 0x7B46D81578 RVA: 0x337B578 Offset: 0x337A578
		public new [PersistentListenerMode] get_mode();
		// VA: 0x7B46D81580 RVA: 0x337B580 Offset: 0x337A580
		public new [ArgumentCache] get_arguments();
		// VA: 0x7B46D81588 RVA: 0x337B588 Offset: 0x337A588
		public new [Boolean] IsValid();
		// VA: 0x7B46D81590 RVA: 0x337B590 Offset: 0x337A590
		public new [BaseInvokableCall] GetRuntimeCall([UnityEventBase] theEvent);
		// VA: 0x7B46D815CC RVA: 0x337B5CC Offset: 0x337A5CC
		private static new [BaseInvokableCall] GetObjectCall([Object] target, [MethodInfo] method, [ArgumentCache] arguments);
		// VA: 0x7B46D81A80 RVA: 0x337BA80 Offset: 0x337AA80
		public sealed new [Void] OnBeforeSerialize();
		// VA: 0x7B46D81EAC RVA: 0x337BEAC Offset: 0x337AEAC
		public sealed new [Void] OnAfterDeserialize();
		// VA: 0x7B46D81EC8 RVA: 0x337BEC8 Offset: 0x337AEC8
		public new [Void] .ctor();
		// VA: 0x7B46D81EE4 RVA: 0x337BEE4 Offset: 0x337AEE4
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40D70
	private class PersistentCallGroup : [Object]
	{
		// Fields
		private [List`1] m_Calls; // 0x10

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D81F50 RVA: 0x337BF50 Offset: 0x337AF50
		public new [Void] Initialize([InvokableCallList] invokableList, [UnityEventBase] unityEventBase);
		// VA: 0x7B46D81FD0 RVA: 0x337BFD0 Offset: 0x337AFD0
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40EF0
	private class InvokableCallList : [Object]
	{
		// Fields
		private readonly [List`1] m_PersistentCalls; // 0x10
		private readonly [List`1] m_RuntimeCalls; // 0x18
		private [List`1] m_ExecutingCalls; // 0x20
		private [Boolean] m_NeedsUpdate; // 0x28

		// Methods
		public new [Void] AddPersistentInvokableCall([BaseInvokableCall] call);
		// VA: 0x7B46D82160 RVA: 0x337C160 Offset: 0x337B160
		public new [Void] AddListener([BaseInvokableCall] call);
		// VA: 0x7B46D82208 RVA: 0x337C208 Offset: 0x337B208
		public new [Void] RemoveListener([Object] targetObj, [MethodInfo] method);
		// VA: 0x7B46D822B0 RVA: 0x337C2B0 Offset: 0x337B2B0
		public new [Void] Clear();
		// VA: 0x7B46D82520 RVA: 0x337C520 Offset: 0x337B520
		public new [Void] ClearPersistent();
		// VA: 0x7B46D825DC RVA: 0x337C5DC Offset: 0x337B5DC
		public new [List`1] PrepareInvoke();
		// VA: 0x7B46D82698 RVA: 0x337C698 Offset: 0x337B698
		public new [Void] .ctor();
		// VA: 0x7B46D8274C RVA: 0x337C74C Offset: 0x337B74C
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70805680
	public abstract class UnityEventBase : [Object]
	{
		// Fields
		private [InvokableCallList] m_Calls; // 0x10
		private [PersistentCallGroup] m_PersistentCalls; // 0x18
		private [Boolean] m_CallsDirty; // 0x20

		// Methods
		protected new [Void] .ctor();
		// VA: 0x7B46D82800 RVA: 0x337C800 Offset: 0x337B800
		private sealed new [Void] UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize();
		// VA: 0x7B46D82898 RVA: 0x337C898 Offset: 0x337B898
		private sealed new [Void] UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize();
		// VA: 0x7B46D828C4 RVA: 0x337C8C4 Offset: 0x337B8C4
		protected abstract new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal abstract new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal new [MethodInfo] FindMethod([PersistentCall] call);
		// VA: 0x7B46D818B4 RVA: 0x337B8B4 Offset: 0x337A8B4
		internal new [MethodInfo] FindMethod([String] name, [Type] listenerType, [PersistentListenerMode] mode, [Type] argumentType);
		// VA: 0x7B46D828C8 RVA: 0x337C8C8 Offset: 0x337B8C8
		private new [Void] DirtyPersistentCalls();
		// VA: 0x7B46D8289C RVA: 0x337C89C Offset: 0x337B89C
		private new [Void] RebuildPersistentCallsIfNeeded();
		// VA: 0x7B46D82D7C RVA: 0x337CD7C Offset: 0x337BD7C
		internal new [Void] AddCall([BaseInvokableCall] call);
		// VA: 0x7B46D82DB0 RVA: 0x337CDB0 Offset: 0x337BDB0
		protected new [Void] RemoveListener([Object] targetObj, [MethodInfo] method);
		// VA: 0x7B46D82DC8 RVA: 0x337CDC8 Offset: 0x337BDC8
		public new [Void] RemoveAllListeners();
		// VA: 0x7B46D82DE0 RVA: 0x337CDE0 Offset: 0x337BDE0
		internal new [List`1] PrepareInvoke();
		// VA: 0x7B46D82DF8 RVA: 0x337CDF8 Offset: 0x337BDF8
		public override new [String] ToString();
		// VA: 0x7B46D82E18 RVA: 0x337CE18 Offset: 0x337BE18
		public static new [MethodInfo] GetValidMethodInfo([Type] objectType, [String] functionName, [Type[]] argumentTypes);
		// VA: 0x7B46D82B94 RVA: 0x337CB94 Offset: 0x337BB94
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41070
	public sealed class UnityAction : [MulticastDelegate]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Object] object, [IntPtr] method);
		// VA: 0x7B46D83224 RVA: 0x337D224 Offset: 0x337C224
		public virtual new [Void] Invoke();
		// VA: 0x7B46D832AC RVA: 0x337D2AC Offset: 0x337C2AC
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41290
	public class UnityEvent : [UnityEventBase]
	{
		// Fields
		private [Object[]] m_InvokeArray; // 0x28

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D832C0 RVA: 0x337D2C0 Offset: 0x337C2C0
		public new [Void] AddListener([UnityAction] call);
		// VA: 0x7B46D832CC RVA: 0x337D2CC Offset: 0x337C2CC
		public new [Void] RemoveListener([UnityAction] call);
		// VA: 0x7B46D8334C RVA: 0x337D34C Offset: 0x337C34C
		protected override new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B46D8338C RVA: 0x337D38C Offset: 0x337C38C
		internal override new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B46D833F4 RVA: 0x337D3F4 Offset: 0x337C3F4
		private static new [BaseInvokableCall] GetDelegate([UnityAction] action);
		// VA: 0x7B46D832F0 RVA: 0x337D2F0 Offset: 0x337C2F0
		public new [Void] Invoke();
		// VA: 0x7B46D83460 RVA: 0x337D460 Offset: 0x337C460
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EE700
	public sealed class UnityAction`1 : [MulticastDelegate]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Object] object, [IntPtr] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public virtual new [Void] Invoke([T0] arg0);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708054C0
	public class UnityEvent`1 : [UnityEventBase]
	{
		// Fields
		private [Object[]] m_InvokeArray; // 0x0

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public new [Void] AddListener([UnityAction`1] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] RemoveListener([UnityAction`1] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected override new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal override new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		private static new [BaseInvokableCall] GetDelegate([UnityAction`1] action);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public new [Void] Invoke([T0] arg0);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EEAC0
	public sealed class UnityAction`2 : [MulticastDelegate]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Object] object, [IntPtr] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public virtual new [Void] Invoke([T0] arg0, [T1] arg1);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70805840
	public class UnityEvent`2 : [UnityEventBase]
	{
		// Fields
		private [Object[]] m_InvokeArray; // 0x0

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public new [Void] AddListener([UnityAction`2] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] RemoveListener([UnityAction`2] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected override new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal override new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		private static new [BaseInvokableCall] GetDelegate([UnityAction`2] action);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public new [Void] Invoke([T0] arg0, [T1] arg1);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706EEE80
	public sealed class UnityAction`3 : [MulticastDelegate]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Object] object, [IntPtr] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public virtual new [Void] Invoke([T0] arg0, [T1] arg1, [T2] arg2);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70805A00
	public class UnityEvent`3 : [UnityEventBase]
	{
		// Fields
		private [Object[]] m_InvokeArray; // 0x0

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public new [Void] AddListener([UnityAction`3] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Void] RemoveListener([UnityAction`3] call);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		protected override new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal override new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		private static new [BaseInvokableCall] GetDelegate([UnityAction`3] action);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public new [Void] Invoke([T0] arg0, [T1] arg1, [T2] arg2);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708052A0
	public sealed class UnityAction`4 : [MulticastDelegate]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Object] object, [IntPtr] method);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public virtual new [Void] Invoke([T0] arg0, [T1] arg1, [T2] arg2, [T3] arg3);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Events

namespace UnityEngine.Events {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70805BC0
	public class UnityEvent`4 : [UnityEventBase]
	{
		// Fields
		private [Object[]] m_InvokeArray; // 0x0

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		protected override new [MethodInfo] FindMethod_Impl([String] name, [Type] targetObjType);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
		internal override new [BaseInvokableCall] GetDelegate([Object] target, [MethodInfo] theFunction);
		// VA: 0x7B45028154 RVA: 0x1622154 Offset: 0x1621154
	}
} // namespace UnityEngine.Events

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B22870
	public struct SortingLayer : [ValueType]
	{
		// Fields
		private [Int32] m_Id; // 0x0

		// Methods
		public static new [Int32] GetLayerValueFromID([Int32] id);
		// VA: 0x7B46D2B6B4 RVA: 0x33256B4 Offset: 0x33246B4
		public static new [Int32] NameToID([String] name);
		// VA: 0x7B46D2B6F0 RVA: 0x33256F0 Offset: 0x33246F0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B229F0
	public struct Keyframe : [ValueType]
	{
		// Fields
		private [Single] m_Time; // 0x0
		private [Single] m_Value; // 0x4
		private [Single] m_InTangent; // 0x8
		private [Single] m_OutTangent; // 0xC
		private [Int32] m_WeightedMode; // 0x10
		private [Single] m_InWeight; // 0x14
		private [Single] m_OutWeight; // 0x18

		// Methods
		public new [Void] .ctor([Single] time, [Single] value);
		// VA: 0x7B46D2B72C RVA: 0x332572C Offset: 0x332472C
		public new [Void] .ctor([Single] time, [Single] value, [Single] inTangent, [Single] outTangent);
		// VA: 0x7B46D2B73C RVA: 0x332573C Offset: 0x332473C
		public new [Single] get_time();
		// VA: 0x7B46D2B750 RVA: 0x3325750 Offset: 0x3324750
		public new [Single] get_value();
		// VA: 0x7B46D2B758 RVA: 0x3325758 Offset: 0x3324758
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B22B70
	public enum WrapMode : [Int32]
	{
		Once = 1,
		Loop = 2,
		PingPong = 4,
		Default = 0,
		ClampForever = 8,
		Clamp = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B22E20
	public class AnimationCurve : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
		private static new [Void] Internal_Destroy([IntPtr] ptr);
		// VA: 0x7B46D2B760 RVA: 0x3325760 Offset: 0x3324760
		private static new [IntPtr] Internal_Create([Keyframe[]] keys);
		// VA: 0x7B46D2B79C RVA: 0x332579C Offset: 0x332479C
		private new [Boolean] Internal_Equals([IntPtr] other);
		// VA: 0x7B46D2B7D8 RVA: 0x33257D8 Offset: 0x33247D8
		protected override new [Void] Finalize();
		// VA: 0x7B46D2B81C RVA: 0x332581C Offset: 0x332481C
		public new [Single] Evaluate([Single] time);
		// VA: 0x7B46D2B8D8 RVA: 0x33258D8 Offset: 0x33248D8
		public new [Keyframe[]] get_keys();
		// VA: 0x7B46D2B924 RVA: 0x3325924 Offset: 0x3324924
		public new [Void] set_keys([Keyframe[]] value);
		// VA: 0x7B46D2B99C RVA: 0x332599C Offset: 0x332499C
		public new [Int32] AddKey([Single] time, [Single] value);
		// VA: 0x7B46D2BA24 RVA: 0x3325A24 Offset: 0x3324A24
		public new [Keyframe] get_Item([Int32] index);
		// VA: 0x7B46D2BA78 RVA: 0x3325A78 Offset: 0x3324A78
		public new [Int32] get_length();
		// VA: 0x7B46D2BB80 RVA: 0x3325B80 Offset: 0x3324B80
		private new [Void] SetKeys([Keyframe[]] keys);
		// VA: 0x7B46D2B9E0 RVA: 0x33259E0 Offset: 0x33249E0
		private new [Keyframe] GetKey([Int32] index);
		// VA: 0x7B46D2BB04 RVA: 0x3325B04 Offset: 0x3324B04
		private new [Keyframe[]] GetKeys();
		// VA: 0x7B46D2B960 RVA: 0x3325960 Offset: 0x3324960
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D2BC10 RVA: 0x3325C10 Offset: 0x3324C10
		public static new [AnimationCurve] Linear([Single] timeStart, [Single] valueStart, [Single] timeEnd, [Single] valueEnd);
		// VA: 0x7B46D2BC4C RVA: 0x3325C4C Offset: 0x3324C4C
		public new [WrapMode] get_preWrapMode();
		// VA: 0x7B46D2BDD8 RVA: 0x3325DD8 Offset: 0x3324DD8
		public new [Void] set_preWrapMode([WrapMode] value);
		// VA: 0x7B46D2BE14 RVA: 0x3325E14 Offset: 0x3324E14
		public new [WrapMode] get_postWrapMode();
		// VA: 0x7B46D2BE58 RVA: 0x3325E58 Offset: 0x3324E58
		public new [Void] set_postWrapMode([WrapMode] value);
		// VA: 0x7B46D2BE94 RVA: 0x3325E94 Offset: 0x3324E94
		public new [Void] .ctor([Keyframe[]] keys);
		// VA: 0x7B46D2BD88 RVA: 0x3325D88 Offset: 0x3324D88
		public new [Void] .ctor();
		// VA: 0x7B46D2BED8 RVA: 0x3325ED8 Offset: 0x3324ED8
		public override new [Boolean] Equals([Object] o);
		// VA: 0x7B46D2BF24 RVA: 0x3325F24 Offset: 0x3324F24
		public sealed new [Boolean] Equals([AnimationCurve] other);
		// VA: 0x7B46D2C030 RVA: 0x3326030 Offset: 0x3325030
		private new [Void] GetKey_Injected([Int32] index, out [Keyframe] ret);
		// VA: 0x7B46D2BBBC RVA: 0x3325BBC Offset: 0x3324BBC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B231D0
	public class Application : [Object]
	{
		// Fields
		private static [Application]->[LowMemoryCallback] lowMemory; // 0x0
		private static [Application]->[MemoryUsageChangedCallback] memoryUsageChanged; // 0x8
		private static [Application]->[LogCallback] s_LogCallbackHandler; // 0x10
		private static [Application]->[LogCallback] s_LogCallbackHandlerThreaded; // 0x18
		private static [Action`1] focusChanged; // 0x20
		private static [Action`1] deepLinkActivated; // 0x28
		private static [Func`1] wantsToQuit; // 0x30
		private static [Action] quitting; // 0x38
		private static [Action] unloading; // 0x40
		private static [CancellationTokenSource] s_currentCancellationTokenSource; // 0x48

		// Methods
		public static new [Void] Quit([Int32] exitCode);
		// VA: 0x7B46D2C0F8 RVA: 0x33260F8 Offset: 0x33250F8
		public static new [Void] Quit();
		// VA: 0x7B46D2C134 RVA: 0x3326134 Offset: 0x3325134
		public static new [Boolean] get_isPlaying();
		// VA: 0x7B46D2C1A4 RVA: 0x33261A4 Offset: 0x33251A4
		public static new [Boolean] get_isFocused();
		// VA: 0x7B46D2C1CC RVA: 0x33261CC Offset: 0x33251CC
		public static new [Boolean] get_runInBackground();
		// VA: 0x7B46D2C1F4 RVA: 0x33261F4 Offset: 0x33251F4
		public static new [Void] set_runInBackground([Boolean] value);
		// VA: 0x7B46D2C21C RVA: 0x332621C Offset: 0x332521C
		public static new [Boolean] get_isBatchMode();
		// VA: 0x7B46D2C258 RVA: 0x3326258 Offset: 0x3325258
		public static new [String] get_dataPath();
		// VA: 0x7B46D2C280 RVA: 0x3326280 Offset: 0x3325280
		public static new [String] get_streamingAssetsPath();
		// VA: 0x7B46D2C2A8 RVA: 0x33262A8 Offset: 0x33252A8
		public static new [String] get_persistentDataPath();
		// VA: 0x7B46D2C2D0 RVA: 0x33262D0 Offset: 0x33252D0
		public static new [String] get_absoluteURL();
		// VA: 0x7B46D2C2F8 RVA: 0x33262F8 Offset: 0x33252F8
		public static new [Void] ExternalEval([String] script);
		// VA: 0x7B46D2C320 RVA: 0x3326320 Offset: 0x3325320
		private static new [Void] Internal_ExternalCall([String] script);
		// VA: 0x7B46D2C3E8 RVA: 0x33263E8 Offset: 0x33253E8
		public static new [String] get_unityVersion();
		// VA: 0x7B46D2C424 RVA: 0x3326424 Offset: 0x3325424
		public static new [String] get_version();
		// VA: 0x7B46D2C44C RVA: 0x332644C Offset: 0x332544C
		public static new [String] get_identifier();
		// VA: 0x7B46D2C474 RVA: 0x3326474 Offset: 0x3325474
		public static new [String] get_cloudProjectId();
		// VA: 0x7B46D2C49C RVA: 0x332649C Offset: 0x332549C
		public static new [Void] OpenURL([String] url);
		// VA: 0x7B46D2C4C4 RVA: 0x33264C4 Offset: 0x33254C4
		public static new [Int32] get_targetFrameRate();
		// VA: 0x7B46D2C500 RVA: 0x3326500 Offset: 0x3325500
		public static new [Void] set_targetFrameRate([Int32] value);
		// VA: 0x7B46D2C528 RVA: 0x3326528 Offset: 0x3325528
		private static new [Void] SetLogCallbackDefined([Boolean] defined);
		// VA: 0x7B46D2C564 RVA: 0x3326564 Offset: 0x3325564
		public static new [RuntimePlatform] get_platform();
		// VA: 0x7B46D2C5A0 RVA: 0x33265A0 Offset: 0x33255A0
		public static new [SystemLanguage] get_systemLanguage();
		// VA: 0x7B46D2C5C8 RVA: 0x33265C8 Offset: 0x33255C8
		internal static new [Void] CallLowMemory([ApplicationMemoryUsage] usage);
		// VA: 0x7B46D2C5F0 RVA: 0x33265F0 Offset: 0x33255F0
		internal static new [Boolean] HasLogCallback();
		// VA: 0x7B46D2C728 RVA: 0x3326728 Offset: 0x3325728
		public static new [Void] add_logMessageReceived([Application]->[LogCallback] value);
		// VA: 0x7B46D2C7AC RVA: 0x33267AC Offset: 0x33257AC
		public static new [Void] remove_logMessageReceived([Application]->[LogCallback] value);
		// VA: 0x7B46D2C888 RVA: 0x3326888 Offset: 0x3325888
		private static new [Void] CallLogCallback([String] logString, [String] stackTrace, [LogType] type, [Boolean] invokedOnMainThread);
		// VA: 0x7B46D2C940 RVA: 0x3326940 Offset: 0x3325940
		private static new [String] ObjectToJSString([Object] o);
		// VA: 0x7B46D2CA1C RVA: 0x3326A1C Offset: 0x3325A1C
		public static new [Void] ExternalCall([String] functionName, [Object[]] args);
		// VA: 0x7B46D2D0FC RVA: 0x33270FC Offset: 0x33260FC
		private static new [String] BuildInvocationForArguments([String] functionName, [Object[]] args);
		// VA: 0x7B46D2D18C RVA: 0x332718C Offset: 0x332618C
		public static new [Void] add_wantsToQuit([Func`1] value);
		// VA: 0x7B46D2D2F0 RVA: 0x33272F0 Offset: 0x33262F0
		public static new [Void] remove_wantsToQuit([Func`1] value);
		// VA: 0x7B46D2D3E4 RVA: 0x33273E4 Offset: 0x33263E4
		private static new [Boolean] Internal_ApplicationWantsToQuit();
		// VA: 0x7B46D2D4D8 RVA: 0x33274D8 Offset: 0x33264D8
		private static new [Void] Internal_ApplicationInit();
		// VA: 0x7B46D2D7DC RVA: 0x33277DC Offset: 0x33267DC
		private static new [Void] Internal_ApplicationQuit();
		// VA: 0x7B46D2D85C RVA: 0x332785C Offset: 0x332685C
		private static new [Void] Internal_ApplicationUnload();
		// VA: 0x7B46D2D908 RVA: 0x3327908 Offset: 0x3326908
		internal static new [Void] InvokeOnBeforeRender();
		// VA: 0x7B46D2D99C RVA: 0x332799C Offset: 0x332699C
		internal static new [Void] InvokeFocusChanged([Boolean] focus);
		// VA: 0x7B46D2DB90 RVA: 0x3327B90 Offset: 0x3326B90
		internal static new [Void] InvokeDeepLinkActivated([String] url);
		// VA: 0x7B46D2DC2C RVA: 0x3327C2C Offset: 0x3326C2C
		public static new [Boolean] get_isEditor();
		// VA: 0x7B46D2DCC8 RVA: 0x3327CC8 Offset: 0x3326CC8
		private static new [Void] .cctor();
		// VA: 0x7B46D2DCD0 RVA: 0x3327CD0 Offset: 0x3326CD0

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B22FB0
		public sealed class LowMemoryCallback : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D2DD40 RVA: 0x3327D40 Offset: 0x3326D40
			public virtual new [Void] Invoke();
			// VA: 0x7B46D2DDC8 RVA: 0x3327DC8 Offset: 0x3326DC8
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B23350
		public sealed class MemoryUsageChangedCallback : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D2DDDC RVA: 0x3327DDC Offset: 0x3326DDC
			public virtual new [Void] Invoke(in [ApplicationMemoryUsageChange] usage);
			// VA: 0x7B46D2DE78 RVA: 0x3327E78 Offset: 0x3326E78
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B23570
		public sealed class LogCallback : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D2DE8C RVA: 0x3327E8C Offset: 0x3326E8C
			public virtual new [Void] Invoke([String] condition, [String] stackTrace, [LogType] type);
			// VA: 0x7B46D2DF2C RVA: 0x3327F2C Offset: 0x3326F2C
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B23790
	public enum ApplicationMemoryUsage : [Int32]
	{
		Unknown = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		Critical = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B23A40
	public struct ApplicationMemoryUsageChange : [ValueType]
	{
		// Fields
		// private [ApplicationMemoryUsage] memoryUsage { get; set; }
		private [ApplicationMemoryUsage] <memoryUsage>k__BackingField; // 0x0

		// Methods
		private new [Void] set_memoryUsage([ApplicationMemoryUsage] value);
		// VA: 0x7B46D2DF40 RVA: 0x3327F40 Offset: 0x3326F40
		public new [Void] .ctor([ApplicationMemoryUsage] usage);
		// VA: 0x7B46D2C720 RVA: 0x3326720 Offset: 0x3325720
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B23BC0
	public enum AudioType : [Int32]
	{
		UNKNOWN = 0,
		ACC = 1,
		AIFF = 2,
		IT = 10,
		MOD = 12,
		MPEG = 13,
		OGGVORBIS = 14,
		S3M = 17,
		WAV = 20,
		XM = 21,
		XMA = 22,
		VAG = 23,
		AUDIOQUEUE = 24
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B28030
	public enum SendMessageOptions : [Int32]
	{
		RequireReceiver = 0,
		DontRequireReceiver = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B282E0
	public enum PrimitiveType : [Int32]
	{
		Sphere = 0,
		Capsule = 1,
		Cylinder = 2,
		Cube = 3,
		Plane = 4,
		Quad = 5
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B28590
	public enum Space : [Int32]
	{
		World = 0,
		Self = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B28840
	public enum RuntimePlatform : [Int32]
	{
		OSXEditor = 0,
		OSXPlayer = 1,
		WindowsPlayer = 2,
		OSXWebPlayer = 3,
		OSXDashboardPlayer = 4,
		WindowsWebPlayer = 5,
		WindowsEditor = 7,
		IPhonePlayer = 8,
		XBOX360 = 10,
		PS3 = 9,
		Android = 11,
		NaCl = 12,
		FlashPlayer = 15,
		LinuxPlayer = 13,
		LinuxEditor = 16,
		WebGLPlayer = 17,
		MetroPlayerX86 = 18,
		WSAPlayerX86 = 18,
		MetroPlayerX64 = 19,
		WSAPlayerX64 = 19,
		MetroPlayerARM = 20,
		WSAPlayerARM = 20,
		WP8Player = 21,
		BlackBerryPlayer = 22,
		TizenPlayer = 23,
		PSP2 = 24,
		PS4 = 25,
		PSM = 26,
		XboxOne = 27,
		SamsungTVPlayer = 28,
		WiiU = 30,
		tvOS = 31,
		Switch = 32,
		Lumin = 33,
		Stadia = 34,
		CloudRendering = 35,
		GameCoreScarlett = 4294967295,
		GameCoreXboxSeries = 36,
		GameCoreXboxOne = 37,
		PS5 = 38,
		EmbeddedLinuxArm64 = 39,
		EmbeddedLinuxArm32 = 40,
		EmbeddedLinuxX64 = 41,
		EmbeddedLinuxX86 = 42,
		LinuxServer = 43,
		WindowsServer = 44,
		OSXServer = 45,
		QNXArm32 = 46,
		QNXArm64 = 47,
		QNXX64 = 48,
		QNXX86 = 49,
		VisionOS = 50
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B28AF0
	public enum SystemLanguage : [Int32]
	{
		Afrikaans = 0,
		Arabic = 1,
		Basque = 2,
		Belarusian = 3,
		Bulgarian = 4,
		Catalan = 5,
		Chinese = 6,
		Czech = 7,
		Danish = 8,
		Dutch = 9,
		English = 10,
		Estonian = 11,
		Faroese = 12,
		Finnish = 13,
		French = 14,
		German = 15,
		Greek = 16,
		Hebrew = 17,
		Icelandic = 19,
		Indonesian = 20,
		Italian = 21,
		Japanese = 22,
		Korean = 23,
		Latvian = 24,
		Lithuanian = 25,
		Norwegian = 26,
		Polish = 27,
		Portuguese = 28,
		Romanian = 29,
		Russian = 30,
		SerboCroatian = 31,
		Slovak = 32,
		Slovenian = 33,
		Spanish = 34,
		Swedish = 35,
		Thai = 36,
		Turkish = 37,
		Ukrainian = 38,
		Vietnamese = 39,
		ChineseSimplified = 40,
		ChineseTraditional = 41,
		Hindi = 42,
		Unknown = 43,
		Hungarian = 18
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B28DA0
	public enum LogType : [Int32]
	{
		Error = 0,
		Assert = 1,
		Warning = 2,
		Log = 3,
		Exception = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B29050
	public enum LogOption : [Int32]
	{
		None = 0,
		NoStacktrace = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B29300
	private class BootConfigData : [Object]
	{
		// Fields
		private [IntPtr] m_Ptr; // 0x10

		// Methods
		private static new [BootConfigData] WrapBootConfigData([IntPtr] nativeHandle);
		// VA: 0x7B46D2DF48 RVA: 0x3327F48 Offset: 0x3326F48
		private new [Void] .ctor([IntPtr] nativeHandle);
		// VA: 0x7B46D2DFA0 RVA: 0x3327FA0 Offset: 0x3326FA0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B29480
	public struct CachedAssetBundle : [ValueType]
	{
		// Fields
		private [String] m_Name; // 0x0
		private [Hash128] m_Hash; // 0x8

		// Methods
		public new [Void] .ctor([String] name, [Hash128] hash);
		// VA: 0x7B46D2E024 RVA: 0x3328024 Offset: 0x3327024
		public new [String] get_name();
		// VA: 0x7B46D2E030 RVA: 0x3328030 Offset: 0x3327030
		public new [Hash128] get_hash();
		// VA: 0x7B46D2E038 RVA: 0x3328038 Offset: 0x3327038
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B29600
	public struct Cache : [ValueType]
	{
		// Fields
		private [Int32] m_Handle; // 0x0

		// Methods
		internal new [Int32] get_handle();
		// VA: 0x7B46D2E044 RVA: 0x3328044 Offset: 0x3327044
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D2E04C RVA: 0x332804C Offset: 0x332704C
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D2E054 RVA: 0x3328054 Offset: 0x3327054
		public sealed new [Boolean] Equals([Cache] other);
		// VA: 0x7B46D2E0CC RVA: 0x33280CC Offset: 0x33270CC
		public new [Boolean] get_valid();
		// VA: 0x7B46D2E0DC RVA: 0x33280DC Offset: 0x33270DC
		internal static new [Boolean] Cache_IsValid([Int32] handle);
		// VA: 0x7B46D2E118 RVA: 0x3328118 Offset: 0x3327118
		public new [String] get_path();
		// VA: 0x7B46D2E154 RVA: 0x3328154 Offset: 0x3327154
		internal static new [String] Cache_GetPath([Int32] handle);
		// VA: 0x7B46D2E190 RVA: 0x3328190 Offset: 0x3327190
		public new [Void] set_maximumAvailableStorageSpace([Int64] value);
		// VA: 0x7B46D2E1CC RVA: 0x33281CC Offset: 0x33271CC
		internal static new [Void] Cache_SetMaximumDiskSpaceAvailable([Int32] handle, [Int64] value);
		// VA: 0x7B46D2E210 RVA: 0x3328210 Offset: 0x3327210
		public new [Void] set_expirationDelay([Int32] value);
		// VA: 0x7B46D2E254 RVA: 0x3328254 Offset: 0x3327254
		internal static new [Void] Cache_SetExpirationDelay([Int32] handle, [Int32] value);
		// VA: 0x7B46D2E298 RVA: 0x3328298 Offset: 0x3327298
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B29790
	public sealed class Caching : [Object]
	{
		// Fields

		// Methods
		public static new [Void] set_compressionEnabled([Boolean] value);
		// VA: 0x7B46D2E2DC RVA: 0x33282DC Offset: 0x33272DC
		public static new [Boolean] get_ready();
		// VA: 0x7B46D2E318 RVA: 0x3328318 Offset: 0x3327318
		public static new [Boolean] ClearCachedVersion([String] assetBundleName, [Hash128] hash);
		// VA: 0x7B46D2E340 RVA: 0x3328340 Offset: 0x3327340
		internal static new [Boolean] ClearCachedVersionInternal([String] assetBundleName, [Hash128] hash);
		// VA: 0x7B46D2E3C0 RVA: 0x33283C0 Offset: 0x33273C0
		public static new [Boolean] ClearOtherCachedVersions([String] assetBundleName, [Hash128] hash);
		// VA: 0x7B46D2E458 RVA: 0x3328458 Offset: 0x3327458
		public static new [Boolean] ClearAllCachedVersions([String] assetBundleName);
		// VA: 0x7B46D2E538 RVA: 0x3328538 Offset: 0x3327538
		internal static new [Boolean] ClearCachedVersions([String] assetBundleName, [Hash128] hash, [Boolean] keepInputVersion);
		// VA: 0x7B46D2E4DC RVA: 0x33284DC Offset: 0x33274DC
		public static new [Boolean] IsVersionCached([CachedAssetBundle] cachedBundle);
		// VA: 0x7B46D2E600 RVA: 0x3328600 Offset: 0x3327600
		internal static new [Boolean] IsVersionCached([String] url, [String] assetBundleName, [Hash128] hash);
		// VA: 0x7B46D2E6A4 RVA: 0x33286A4 Offset: 0x33276A4
		public static new [Cache] AddCache([String] cachePath);
		// VA: 0x7B46D2E754 RVA: 0x3328754 Offset: 0x3327754
		internal static new [Cache] AddCache([String] cachePath, [Boolean] isReadonly);
		// VA: 0x7B46D2EA3C RVA: 0x3328A3C Offset: 0x3327A3C
		public static new [Cache] GetCacheByPath([String] cachePath);
		// VA: 0x7B46D2E9F0 RVA: 0x33289F0 Offset: 0x33279F0
		public static new [Cache] get_defaultCache();
		// VA: 0x7B46D2EB30 RVA: 0x3328B30 Offset: 0x3327B30
		public static new [Cache] get_currentCacheForWriting();
		// VA: 0x7B46D2EBB0 RVA: 0x3328BB0 Offset: 0x3327BB0
		public static new [Void] set_currentCacheForWriting([Cache] value);
		// VA: 0x7B46D2EC30 RVA: 0x3328C30 Offset: 0x3327C30
		private static new [Boolean] ClearCachedVersionInternal_Injected([String] assetBundleName, ref [Hash128] hash);
		// VA: 0x7B46D2E414 RVA: 0x3328414 Offset: 0x3327414
		private static new [Boolean] ClearCachedVersions_Injected([String] assetBundleName, ref [Hash128] hash, [Boolean] keepInputVersion);
		// VA: 0x7B46D2E5AC RVA: 0x33285AC Offset: 0x33275AC
		private static new [Boolean] IsVersionCached_Injected([String] url, [String] assetBundleName, ref [Hash128] hash);
		// VA: 0x7B46D2E700 RVA: 0x3328700 Offset: 0x3327700
		private static new [Void] AddCache_Injected([String] cachePath, [Boolean] isReadonly, out [Cache] ret);
		// VA: 0x7B46D2EA98 RVA: 0x3328A98 Offset: 0x3327A98
		private static new [Void] GetCacheByPath_Injected([String] cachePath, out [Cache] ret);
		// VA: 0x7B46D2EAEC RVA: 0x3328AEC Offset: 0x3327AEC
		private static new [Void] get_defaultCache_Injected(out [Cache] ret);
		// VA: 0x7B46D2EB74 RVA: 0x3328B74 Offset: 0x3327B74
		private static new [Void] get_currentCacheForWriting_Injected(out [Cache] ret);
		// VA: 0x7B46D2EBF4 RVA: 0x3328BF4 Offset: 0x3327BF4
		private static new [Void] set_currentCacheForWriting_Injected(ref [Cache] value);
		// VA: 0x7B46D2EC70 RVA: 0x3328C70 Offset: 0x3327C70
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70895CD0
	public sealed class Camera : [Behaviour]
	{
		// Fields
		public const static [Single] kMinAperture; // 0x0
		public const static [Single] kMaxAperture; // 0x0
		public const static [Int32] kMinBladeCount; // 0x0
		public const static [Int32] kMaxBladeCount; // 0x0
		public static [Camera]->[CameraCallback] onPreCull; // 0x0
		public static [Camera]->[CameraCallback] onPreRender; // 0x8
		public static [Camera]->[CameraCallback] onPostRender; // 0x10

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2ECAC RVA: 0x3328CAC Offset: 0x3327CAC
		public new [Single] get_nearClipPlane();
		// VA: 0x7B46D2ECB4 RVA: 0x3328CB4 Offset: 0x3327CB4
		public new [Void] set_nearClipPlane([Single] value);
		// VA: 0x7B46D2ECF0 RVA: 0x3328CF0 Offset: 0x3327CF0
		public new [Single] get_farClipPlane();
		// VA: 0x7B46D2ED3C RVA: 0x3328D3C Offset: 0x3327D3C
		public new [Void] set_farClipPlane([Single] value);
		// VA: 0x7B46D2ED78 RVA: 0x3328D78 Offset: 0x3327D78
		public new [Single] get_fieldOfView();
		// VA: 0x7B46D2EDC4 RVA: 0x3328DC4 Offset: 0x3327DC4
		public new [Void] set_fieldOfView([Single] value);
		// VA: 0x7B46D2EE00 RVA: 0x3328E00 Offset: 0x3327E00
		public new [RenderingPath] get_renderingPath();
		// VA: 0x7B46D2EE4C RVA: 0x3328E4C Offset: 0x3327E4C
		public new [Void] set_renderingPath([RenderingPath] value);
		// VA: 0x7B46D2EE88 RVA: 0x3328E88 Offset: 0x3327E88
		public new [RenderingPath] get_actualRenderingPath();
		// VA: 0x7B46D2EECC RVA: 0x3328ECC Offset: 0x3327ECC
		public new [Void] Reset();
		// VA: 0x7B46D2EF08 RVA: 0x3328F08 Offset: 0x3327F08
		public new [Boolean] get_allowHDR();
		// VA: 0x7B46D2EF44 RVA: 0x3328F44 Offset: 0x3327F44
		public new [Void] set_allowHDR([Boolean] value);
		// VA: 0x7B46D2EF80 RVA: 0x3328F80 Offset: 0x3327F80
		public new [Boolean] get_allowMSAA();
		// VA: 0x7B46D2EFC4 RVA: 0x3328FC4 Offset: 0x3327FC4
		public new [Void] set_allowMSAA([Boolean] value);
		// VA: 0x7B46D2F000 RVA: 0x3329000 Offset: 0x3328000
		public new [Boolean] get_allowDynamicResolution();
		// VA: 0x7B46D2F044 RVA: 0x3329044 Offset: 0x3328044
		public new [Void] set_allowDynamicResolution([Boolean] value);
		// VA: 0x7B46D2F080 RVA: 0x3329080 Offset: 0x3328080
		public new [Boolean] get_forceIntoRenderTexture();
		// VA: 0x7B46D2F0C4 RVA: 0x33290C4 Offset: 0x33280C4
		public new [Void] set_forceIntoRenderTexture([Boolean] value);
		// VA: 0x7B46D2F100 RVA: 0x3329100 Offset: 0x3328100
		public new [Single] get_orthographicSize();
		// VA: 0x7B46D2F144 RVA: 0x3329144 Offset: 0x3328144
		public new [Void] set_orthographicSize([Single] value);
		// VA: 0x7B46D2F180 RVA: 0x3329180 Offset: 0x3328180
		public new [Boolean] get_orthographic();
		// VA: 0x7B46D2F1CC RVA: 0x33291CC Offset: 0x33281CC
		public new [Void] set_orthographic([Boolean] value);
		// VA: 0x7B46D2F208 RVA: 0x3329208 Offset: 0x3328208
		public new [OpaqueSortMode] get_opaqueSortMode();
		// VA: 0x7B46D2F24C RVA: 0x332924C Offset: 0x332824C
		public new [Void] set_opaqueSortMode([OpaqueSortMode] value);
		// VA: 0x7B46D2F288 RVA: 0x3329288 Offset: 0x3328288
		public new [TransparencySortMode] get_transparencySortMode();
		// VA: 0x7B46D2F2CC RVA: 0x33292CC Offset: 0x33282CC
		public new [Void] set_transparencySortMode([TransparencySortMode] value);
		// VA: 0x7B46D2F308 RVA: 0x3329308 Offset: 0x3328308
		public new [Vector3] get_transparencySortAxis();
		// VA: 0x7B46D2F34C RVA: 0x332934C Offset: 0x332834C
		public new [Void] set_transparencySortAxis([Vector3] value);
		// VA: 0x7B46D2F3EC RVA: 0x33293EC Offset: 0x33283EC
		public new [Void] ResetTransparencySortSettings();
		// VA: 0x7B46D2F484 RVA: 0x3329484 Offset: 0x3328484
		public new [Single] get_depth();
		// VA: 0x7B46D2F4C0 RVA: 0x33294C0 Offset: 0x33284C0
		public new [Void] set_depth([Single] value);
		// VA: 0x7B46D2F4FC RVA: 0x33294FC Offset: 0x33284FC
		public new [Single] get_aspect();
		// VA: 0x7B46D2F548 RVA: 0x3329548 Offset: 0x3328548
		public new [Void] set_aspect([Single] value);
		// VA: 0x7B46D2F584 RVA: 0x3329584 Offset: 0x3328584
		public new [Void] ResetAspect();
		// VA: 0x7B46D2F5D0 RVA: 0x33295D0 Offset: 0x33285D0
		public new [Vector3] get_velocity();
		// VA: 0x7B46D2F60C RVA: 0x332960C Offset: 0x332860C
		public new [Int32] get_cullingMask();
		// VA: 0x7B46D2F6AC RVA: 0x33296AC Offset: 0x33286AC
		public new [Void] set_cullingMask([Int32] value);
		// VA: 0x7B46D2F6E8 RVA: 0x33296E8 Offset: 0x33286E8
		public new [Int32] get_eventMask();
		// VA: 0x7B46D2F72C RVA: 0x332972C Offset: 0x332872C
		public new [Void] set_eventMask([Int32] value);
		// VA: 0x7B46D2F768 RVA: 0x3329768 Offset: 0x3328768
		public new [Boolean] get_layerCullSpherical();
		// VA: 0x7B46D2F7AC RVA: 0x33297AC Offset: 0x33287AC
		public new [Void] set_layerCullSpherical([Boolean] value);
		// VA: 0x7B46D2F7E8 RVA: 0x33297E8 Offset: 0x33287E8
		public new [CameraType] get_cameraType();
		// VA: 0x7B46D2F82C RVA: 0x332982C Offset: 0x332882C
		public new [Void] set_cameraType([CameraType] value);
		// VA: 0x7B46D2F868 RVA: 0x3329868 Offset: 0x3328868
		internal new [Material] get_skyboxMaterial();
		// VA: 0x7B46D2F8AC RVA: 0x33298AC Offset: 0x33288AC
		public new [UInt64] get_overrideSceneCullingMask();
		// VA: 0x7B46D2F8E8 RVA: 0x33298E8 Offset: 0x33288E8
		public new [Void] set_overrideSceneCullingMask([UInt64] value);
		// VA: 0x7B46D2F924 RVA: 0x3329924 Offset: 0x3328924
		internal new [UInt64] get_sceneCullingMask();
		// VA: 0x7B46D2F968 RVA: 0x3329968 Offset: 0x3328968
		private new [Single[]] GetLayerCullDistances();
		// VA: 0x7B46D2F9A4 RVA: 0x33299A4 Offset: 0x33289A4
		private new [Void] SetLayerCullDistances([Single[]] d);
		// VA: 0x7B46D2F9E0 RVA: 0x33299E0 Offset: 0x33289E0
		public new [Single[]] get_layerCullDistances();
		// VA: 0x7B46D2FA24 RVA: 0x3329A24 Offset: 0x3328A24
		public new [Void] set_layerCullDistances([Single[]] value);
		// VA: 0x7B46D2FA60 RVA: 0x3329A60 Offset: 0x3328A60
		internal static new [Int32] get_PreviewCullingLayer();
		// VA: 0x7B46D2FB00 RVA: 0x3329B00 Offset: 0x3328B00
		public new [Boolean] get_useOcclusionCulling();
		// VA: 0x7B46D2FB08 RVA: 0x3329B08 Offset: 0x3328B08
		public new [Void] set_useOcclusionCulling([Boolean] value);
		// VA: 0x7B46D2FB44 RVA: 0x3329B44 Offset: 0x3328B44
		public new [Matrix4x4] get_cullingMatrix();
		// VA: 0x7B46D2FB88 RVA: 0x3329B88 Offset: 0x3328B88
		public new [Void] set_cullingMatrix([Matrix4x4] value);
		// VA: 0x7B46D2FC38 RVA: 0x3329C38 Offset: 0x3328C38
		public new [Void] ResetCullingMatrix();
		// VA: 0x7B46D2FCC0 RVA: 0x3329CC0 Offset: 0x3328CC0
		public new [Color] get_backgroundColor();
		// VA: 0x7B46D2FCFC RVA: 0x3329CFC Offset: 0x3328CFC
		public new [Void] set_backgroundColor([Color] value);
		// VA: 0x7B46D2FD98 RVA: 0x3329D98 Offset: 0x3328D98
		public new [CameraClearFlags] get_clearFlags();
		// VA: 0x7B46D2FE30 RVA: 0x3329E30 Offset: 0x3328E30
		public new [Void] set_clearFlags([CameraClearFlags] value);
		// VA: 0x7B46D2FE6C RVA: 0x3329E6C Offset: 0x3328E6C
		public new [DepthTextureMode] get_depthTextureMode();
		// VA: 0x7B46D2FEB0 RVA: 0x3329EB0 Offset: 0x3328EB0
		public new [Void] set_depthTextureMode([DepthTextureMode] value);
		// VA: 0x7B46D2FEEC RVA: 0x3329EEC Offset: 0x3328EEC
		public new [Boolean] get_clearStencilAfterLightingPass();
		// VA: 0x7B46D2FF30 RVA: 0x3329F30 Offset: 0x3328F30
		public new [Void] set_clearStencilAfterLightingPass([Boolean] value);
		// VA: 0x7B46D2FF6C RVA: 0x3329F6C Offset: 0x3328F6C
		public new [Void] SetReplacementShader([Shader] shader, [String] replacementTag);
		// VA: 0x7B46D2FFB0 RVA: 0x3329FB0 Offset: 0x3328FB0
		public new [Void] ResetReplacementShader();
		// VA: 0x7B46D30004 RVA: 0x332A004 Offset: 0x3329004
		internal new [Camera]->[ProjectionMatrixMode] get_projectionMatrixMode();
		// VA: 0x7B46D30040 RVA: 0x332A040 Offset: 0x3329040
		public new [Boolean] get_usePhysicalProperties();
		// VA: 0x7B46D3007C RVA: 0x332A07C Offset: 0x332907C
		public new [Void] set_usePhysicalProperties([Boolean] value);
		// VA: 0x7B46D300B8 RVA: 0x332A0B8 Offset: 0x33290B8
		public new [Int32] get_iso();
		// VA: 0x7B46D300FC RVA: 0x332A0FC Offset: 0x33290FC
		public new [Void] set_iso([Int32] value);
		// VA: 0x7B46D30138 RVA: 0x332A138 Offset: 0x3329138
		public new [Single] get_shutterSpeed();
		// VA: 0x7B46D3017C RVA: 0x332A17C Offset: 0x332917C
		public new [Void] set_shutterSpeed([Single] value);
		// VA: 0x7B46D301B8 RVA: 0x332A1B8 Offset: 0x33291B8
		public new [Single] get_aperture();
		// VA: 0x7B46D30204 RVA: 0x332A204 Offset: 0x3329204
		public new [Void] set_aperture([Single] value);
		// VA: 0x7B46D30240 RVA: 0x332A240 Offset: 0x3329240
		public new [Single] get_focusDistance();
		// VA: 0x7B46D3028C RVA: 0x332A28C Offset: 0x332928C
		public new [Void] set_focusDistance([Single] value);
		// VA: 0x7B46D302C8 RVA: 0x332A2C8 Offset: 0x33292C8
		public new [Single] get_focalLength();
		// VA: 0x7B46D30314 RVA: 0x332A314 Offset: 0x3329314
		public new [Void] set_focalLength([Single] value);
		// VA: 0x7B46D30350 RVA: 0x332A350 Offset: 0x3329350
		public new [Int32] get_bladeCount();
		// VA: 0x7B46D3039C RVA: 0x332A39C Offset: 0x332939C
		public new [Void] set_bladeCount([Int32] value);
		// VA: 0x7B46D303D8 RVA: 0x332A3D8 Offset: 0x33293D8
		public new [Vector2] get_curvature();
		// VA: 0x7B46D3041C RVA: 0x332A41C Offset: 0x332941C
		public new [Void] set_curvature([Vector2] value);
		// VA: 0x7B46D304AC RVA: 0x332A4AC Offset: 0x33294AC
		public new [Single] get_barrelClipping();
		// VA: 0x7B46D30538 RVA: 0x332A538 Offset: 0x3329538
		public new [Void] set_barrelClipping([Single] value);
		// VA: 0x7B46D30574 RVA: 0x332A574 Offset: 0x3329574
		public new [Single] get_anamorphism();
		// VA: 0x7B46D305C0 RVA: 0x332A5C0 Offset: 0x33295C0
		public new [Void] set_anamorphism([Single] value);
		// VA: 0x7B46D305FC RVA: 0x332A5FC Offset: 0x33295FC
		public new [Vector2] get_sensorSize();
		// VA: 0x7B46D30648 RVA: 0x332A648 Offset: 0x3329648
		public new [Void] set_sensorSize([Vector2] value);
		// VA: 0x7B46D306D8 RVA: 0x332A6D8 Offset: 0x33296D8
		public new [Vector2] get_lensShift();
		// VA: 0x7B46D30764 RVA: 0x332A764 Offset: 0x3329764
		public new [Void] set_lensShift([Vector2] value);
		// VA: 0x7B46D307F4 RVA: 0x332A7F4 Offset: 0x33297F4
		public new [Camera]->[GateFitMode] get_gateFit();
		// VA: 0x7B46D30880 RVA: 0x332A880 Offset: 0x3329880
		public new [Void] set_gateFit([Camera]->[GateFitMode] value);
		// VA: 0x7B46D308BC RVA: 0x332A8BC Offset: 0x33298BC
		public new [Single] GetGateFittedFieldOfView();
		// VA: 0x7B46D30900 RVA: 0x332A900 Offset: 0x3329900
		public new [Vector2] GetGateFittedLensShift();
		// VA: 0x7B46D3093C RVA: 0x332A93C Offset: 0x332993C
		internal new [Vector3] GetLocalSpaceAim();
		// VA: 0x7B46D309CC RVA: 0x332A9CC Offset: 0x33299CC
		public new [Rect] get_rect();
		// VA: 0x7B46D30A6C RVA: 0x332AA6C Offset: 0x3329A6C
		public new [Void] set_rect([Rect] value);
		// VA: 0x7B46D30B08 RVA: 0x332AB08 Offset: 0x3329B08
		public new [Rect] get_pixelRect();
		// VA: 0x7B46D30BA0 RVA: 0x332ABA0 Offset: 0x3329BA0
		public new [Void] set_pixelRect([Rect] value);
		// VA: 0x7B46D30C3C RVA: 0x332AC3C Offset: 0x3329C3C
		public new [Int32] get_pixelWidth();
		// VA: 0x7B46D30CD4 RVA: 0x332ACD4 Offset: 0x3329CD4
		public new [Int32] get_pixelHeight();
		// VA: 0x7B46D30D10 RVA: 0x332AD10 Offset: 0x3329D10
		public new [Int32] get_scaledPixelWidth();
		// VA: 0x7B46D30D4C RVA: 0x332AD4C Offset: 0x3329D4C
		public new [Int32] get_scaledPixelHeight();
		// VA: 0x7B46D30D88 RVA: 0x332AD88 Offset: 0x3329D88
		public new [RenderTexture] get_targetTexture();
		// VA: 0x7B46D30DC4 RVA: 0x332ADC4 Offset: 0x3329DC4
		public new [Void] set_targetTexture([RenderTexture] value);
		// VA: 0x7B46D30E00 RVA: 0x332AE00 Offset: 0x3329E00
		public new [RenderTexture] get_activeTexture();
		// VA: 0x7B46D30E44 RVA: 0x332AE44 Offset: 0x3329E44
		public new [Int32] get_targetDisplay();
		// VA: 0x7B46D30E80 RVA: 0x332AE80 Offset: 0x3329E80
		public new [Void] set_targetDisplay([Int32] value);
		// VA: 0x7B46D30EBC RVA: 0x332AEBC Offset: 0x3329EBC
		private new [Void] SetTargetBuffersImpl([RenderBuffer] color, [RenderBuffer] depth);
		// VA: 0x7B46D30F00 RVA: 0x332AF00 Offset: 0x3329F00
		public new [Void] SetTargetBuffers([RenderBuffer] colorBuffer, [RenderBuffer] depthBuffer);
		// VA: 0x7B46D30FAC RVA: 0x332AFAC Offset: 0x3329FAC
		private new [Void] SetTargetBuffersMRTImpl([RenderBuffer[]] color, [RenderBuffer] depth);
		// VA: 0x7B46D30FB0 RVA: 0x332AFB0 Offset: 0x3329FB0
		public new [Void] SetTargetBuffers([RenderBuffer[]] colorBuffer, [RenderBuffer] depthBuffer);
		// VA: 0x7B46D3105C RVA: 0x332B05C Offset: 0x332A05C
		internal new [String[]] GetCameraBufferWarnings();
		// VA: 0x7B46D31060 RVA: 0x332B060 Offset: 0x332A060
		public new [Matrix4x4] get_cameraToWorldMatrix();
		// VA: 0x7B46D3109C RVA: 0x332B09C Offset: 0x332A09C
		public new [Matrix4x4] get_worldToCameraMatrix();
		// VA: 0x7B46D3114C RVA: 0x332B14C Offset: 0x332A14C
		public new [Void] set_worldToCameraMatrix([Matrix4x4] value);
		// VA: 0x7B46D311FC RVA: 0x332B1FC Offset: 0x332A1FC
		public new [Matrix4x4] get_projectionMatrix();
		// VA: 0x7B46D31284 RVA: 0x332B284 Offset: 0x332A284
		public new [Void] set_projectionMatrix([Matrix4x4] value);
		// VA: 0x7B46D31334 RVA: 0x332B334 Offset: 0x332A334
		public new [Matrix4x4] get_nonJitteredProjectionMatrix();
		// VA: 0x7B46D313BC RVA: 0x332B3BC Offset: 0x332A3BC
		public new [Void] set_nonJitteredProjectionMatrix([Matrix4x4] value);
		// VA: 0x7B46D3146C RVA: 0x332B46C Offset: 0x332A46C
		public new [Boolean] get_useJitteredProjectionMatrixForTransparentRendering();
		// VA: 0x7B46D314F4 RVA: 0x332B4F4 Offset: 0x332A4F4
		public new [Void] set_useJitteredProjectionMatrixForTransparentRendering([Boolean] value);
		// VA: 0x7B46D31530 RVA: 0x332B530 Offset: 0x332A530
		public new [Matrix4x4] get_previousViewProjectionMatrix();
		// VA: 0x7B46D31574 RVA: 0x332B574 Offset: 0x332A574
		public new [Void] ResetWorldToCameraMatrix();
		// VA: 0x7B46D31624 RVA: 0x332B624 Offset: 0x332A624
		public new [Void] ResetProjectionMatrix();
		// VA: 0x7B46D31660 RVA: 0x332B660 Offset: 0x332A660
		public new [Matrix4x4] CalculateObliqueMatrix([Vector4] clipPlane);
		// VA: 0x7B46D3169C RVA: 0x332B69C Offset: 0x332A69C
		public new [Vector3] WorldToScreenPoint([Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31768 RVA: 0x332B768 Offset: 0x332A768
		public new [Vector3] WorldToViewportPoint([Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31834 RVA: 0x332B834 Offset: 0x332A834
		public new [Vector3] ViewportToWorldPoint([Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31900 RVA: 0x332B900 Offset: 0x332A900
		public new [Vector3] ScreenToWorldPoint([Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D319CC RVA: 0x332B9CC Offset: 0x332A9CC
		public new [Vector3] WorldToScreenPoint([Vector3] position);
		// VA: 0x7B46D31A98 RVA: 0x332BA98 Offset: 0x332AA98
		public new [Vector3] WorldToViewportPoint([Vector3] position);
		// VA: 0x7B46D31AA0 RVA: 0x332BAA0 Offset: 0x332AAA0
		public new [Vector3] ViewportToWorldPoint([Vector3] position);
		// VA: 0x7B46D31AA8 RVA: 0x332BAA8 Offset: 0x332AAA8
		public new [Vector3] ScreenToWorldPoint([Vector3] position);
		// VA: 0x7B46D31AB0 RVA: 0x332BAB0 Offset: 0x332AAB0
		public new [Vector3] ScreenToViewportPoint([Vector3] position);
		// VA: 0x7B46D31AB8 RVA: 0x332BAB8 Offset: 0x332AAB8
		public new [Vector3] ViewportToScreenPoint([Vector3] position);
		// VA: 0x7B46D31B74 RVA: 0x332BB74 Offset: 0x332AB74
		internal new [Vector2] GetFrustumPlaneSizeAt([Single] distance);
		// VA: 0x7B46D31C30 RVA: 0x332BC30 Offset: 0x332AC30
		private new [Ray] ViewportPointToRay([Vector2] pos, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31CE8 RVA: 0x332BCE8 Offset: 0x332ACE8
		public new [Ray] ViewportPointToRay([Vector3] pos, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31DBC RVA: 0x332BDBC Offset: 0x332ADBC
		public new [Ray] ViewportPointToRay([Vector3] pos);
		// VA: 0x7B46D31DF4 RVA: 0x332BDF4 Offset: 0x332ADF4
		private new [Ray] ScreenPointToRay([Vector2] pos, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31E38 RVA: 0x332BE38 Offset: 0x332AE38
		public new [Ray] ScreenPointToRay([Vector3] pos, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D31F0C RVA: 0x332BF0C Offset: 0x332AF0C
		public new [Ray] ScreenPointToRay([Vector3] pos);
		// VA: 0x7B46D31F44 RVA: 0x332BF44 Offset: 0x332AF44
		private new [Void] CalculateFrustumCornersInternal([Rect] viewport, [Single] z, [Camera]->[MonoOrStereoscopicEye] eye, [Out] [Vector3[]] outCorners);
		// VA: 0x7B46D31F88 RVA: 0x332BF88 Offset: 0x332AF88
		public new [Void] CalculateFrustumCorners([Rect] viewport, [Single] z, [Camera]->[MonoOrStereoscopicEye] eye, [Vector3[]] outCorners);
		// VA: 0x7B46D32070 RVA: 0x332C070 Offset: 0x332B070
		private static new [Void] CalculateProjectionMatrixFromPhysicalPropertiesInternal(out [Matrix4x4] output, [Single] focalLength, [Vector2] sensorSize, [Vector2] lensShift, [Single] nearClip, [Single] farClip, [Single] gateAspect, [Camera]->[GateFitMode] gateFitMode);
		// VA: 0x7B46D32124 RVA: 0x332C124 Offset: 0x332B124
		public static new [Void] CalculateProjectionMatrixFromPhysicalProperties(out [Matrix4x4] output, [Single] focalLength, [Vector2] sensorSize, [Vector2] lensShift, [Single] nearClip, [Single] farClip, [Camera]->[GateFitParameters] gateFitParameters);
		// VA: 0x7B46D32240 RVA: 0x332C240 Offset: 0x332B240
		public static new [Single] FocalLengthToFieldOfView([Single] focalLength, [Single] sensorSize);
		// VA: 0x7B46D3224C RVA: 0x332C24C Offset: 0x332B24C
		public static new [Single] FieldOfViewToFocalLength([Single] fieldOfView, [Single] sensorSize);
		// VA: 0x7B46D3228C RVA: 0x332C28C Offset: 0x332B28C
		public static new [Single] HorizontalToVerticalFieldOfView([Single] horizontalFieldOfView, [Single] aspectRatio);
		// VA: 0x7B46D322CC RVA: 0x332C2CC Offset: 0x332B2CC
		public static new [Single] VerticalToHorizontalFieldOfView([Single] verticalFieldOfView, [Single] aspectRatio);
		// VA: 0x7B46D3230C RVA: 0x332C30C Offset: 0x332B30C
		public static new [Camera] get_main();
		// VA: 0x7B46D3234C RVA: 0x332C34C Offset: 0x332B34C
		public static new [Camera] get_current();
		// VA: 0x7B46D32374 RVA: 0x332C374 Offset: 0x332B374
		public new [Scene] get_scene();
		// VA: 0x7B46D3239C RVA: 0x332C39C Offset: 0x332B39C
		public new [Void] set_scene([Scene] value);
		// VA: 0x7B46D3242C RVA: 0x332C42C Offset: 0x332B42C
		public new [Boolean] get_stereoEnabled();
		// VA: 0x7B46D324B8 RVA: 0x332C4B8 Offset: 0x332B4B8
		public new [Single] get_stereoSeparation();
		// VA: 0x7B46D324F4 RVA: 0x332C4F4 Offset: 0x332B4F4
		public new [Void] set_stereoSeparation([Single] value);
		// VA: 0x7B46D32530 RVA: 0x332C530 Offset: 0x332B530
		public new [Single] get_stereoConvergence();
		// VA: 0x7B46D3257C RVA: 0x332C57C Offset: 0x332B57C
		public new [Void] set_stereoConvergence([Single] value);
		// VA: 0x7B46D325B8 RVA: 0x332C5B8 Offset: 0x332B5B8
		public new [Boolean] get_areVRStereoViewMatricesWithinSingleCullTolerance();
		// VA: 0x7B46D32604 RVA: 0x332C604 Offset: 0x332B604
		public new [StereoTargetEyeMask] get_stereoTargetEye();
		// VA: 0x7B46D32640 RVA: 0x332C640 Offset: 0x332B640
		public new [Void] set_stereoTargetEye([StereoTargetEyeMask] value);
		// VA: 0x7B46D3267C RVA: 0x332C67C Offset: 0x332B67C
		public new [Camera]->[MonoOrStereoscopicEye] get_stereoActiveEye();
		// VA: 0x7B46D326C0 RVA: 0x332C6C0 Offset: 0x332B6C0
		public new [Matrix4x4] GetStereoNonJitteredProjectionMatrix([Camera]->[StereoscopicEye] eye);
		// VA: 0x7B46D326FC RVA: 0x332C6FC Offset: 0x332B6FC
		public new [Matrix4x4] GetStereoViewMatrix([Camera]->[StereoscopicEye] eye);
		// VA: 0x7B46D327CC RVA: 0x332C7CC Offset: 0x332B7CC
		public new [Void] CopyStereoDeviceProjectionMatrixToNonJittered([Camera]->[StereoscopicEye] eye);
		// VA: 0x7B46D3289C RVA: 0x332C89C Offset: 0x332B89C
		public new [Matrix4x4] GetStereoProjectionMatrix([Camera]->[StereoscopicEye] eye);
		// VA: 0x7B46D328E0 RVA: 0x332C8E0 Offset: 0x332B8E0
		public new [Void] SetStereoProjectionMatrix([Camera]->[StereoscopicEye] eye, [Matrix4x4] matrix);
		// VA: 0x7B46D329B0 RVA: 0x332C9B0 Offset: 0x332B9B0
		public new [Void] ResetStereoProjectionMatrices();
		// VA: 0x7B46D32A58 RVA: 0x332CA58 Offset: 0x332BA58
		public new [Void] SetStereoViewMatrix([Camera]->[StereoscopicEye] eye, [Matrix4x4] matrix);
		// VA: 0x7B46D32A94 RVA: 0x332CA94 Offset: 0x332BA94
		public new [Void] ResetStereoViewMatrices();
		// VA: 0x7B46D32B3C RVA: 0x332CB3C Offset: 0x332BB3C
		private static new [Int32] GetAllCamerasCount();
		// VA: 0x7B46D32B78 RVA: 0x332CB78 Offset: 0x332BB78
		private static new [Int32] GetAllCamerasImpl([Out] [Camera[]] cam);
		// VA: 0x7B46D32BA0 RVA: 0x332CBA0 Offset: 0x332BBA0
		public static new [Int32] get_allCamerasCount();
		// VA: 0x7B46D32BDC RVA: 0x332CBDC Offset: 0x332BBDC
		public static new [Camera[]] get_allCameras();
		// VA: 0x7B46D32C04 RVA: 0x332CC04 Offset: 0x332BC04
		public static new [Int32] GetAllCameras([Camera[]] cameras);
		// VA: 0x7B46D32CA4 RVA: 0x332CCA4 Offset: 0x332BCA4
		private new [Boolean] RenderToCubemapImpl([Texture] tex, [Int32] faceMask);
		// VA: 0x7B46D32D7C RVA: 0x332CD7C Offset: 0x332BD7C
		public new [Boolean] RenderToCubemap([Cubemap] cubemap, [Int32] faceMask);
		// VA: 0x7B46D32DD0 RVA: 0x332CDD0 Offset: 0x332BDD0
		public new [Boolean] RenderToCubemap([Cubemap] cubemap);
		// VA: 0x7B46D32E24 RVA: 0x332CE24 Offset: 0x332BE24
		public new [Boolean] RenderToCubemap([RenderTexture] cubemap, [Int32] faceMask);
		// VA: 0x7B46D32E6C RVA: 0x332CE6C Offset: 0x332BE6C
		public new [Boolean] RenderToCubemap([RenderTexture] cubemap);
		// VA: 0x7B46D32EC0 RVA: 0x332CEC0 Offset: 0x332BEC0
		private new [Int32] GetFilterMode();
		// VA: 0x7B46D32F08 RVA: 0x332CF08 Offset: 0x332BF08
		public new [Camera]->[SceneViewFilterMode] get_sceneViewFilterMode();
		// VA: 0x7B46D32F44 RVA: 0x332CF44 Offset: 0x332BF44
		private new [Boolean] RenderToCubemapEyeImpl([RenderTexture] cubemap, [Int32] faceMask, [Camera]->[MonoOrStereoscopicEye] stereoEye);
		// VA: 0x7B46D32F80 RVA: 0x332CF80 Offset: 0x332BF80
		public new [Boolean] RenderToCubemap([RenderTexture] cubemap, [Int32] faceMask, [Camera]->[MonoOrStereoscopicEye] stereoEye);
		// VA: 0x7B46D32FDC RVA: 0x332CFDC Offset: 0x332BFDC
		public new [Void] Render();
		// VA: 0x7B46D33038 RVA: 0x332D038 Offset: 0x332C038
		public new [Void] RenderWithShader([Shader] shader, [String] replacementTag);
		// VA: 0x7B46D33074 RVA: 0x332D074 Offset: 0x332C074
		public new [Void] RenderDontRestore();
		// VA: 0x7B46D330C8 RVA: 0x332D0C8 Offset: 0x332C0C8
		public new [Void] SubmitRenderRequests([List`1] renderRequests);
		// VA: 0x7B46D33104 RVA: 0x332D104 Offset: 0x332C104
		public new [Void] SubmitRenderRequest([RequestData] renderRequest);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] SubmitRenderRequestsInternal([Object] requests);
		// VA: 0x7B46D33354 RVA: 0x332D354 Offset: 0x332C354
		private new [Object[]] SubmitBuiltInObjectIDRenderRequest([RenderTexture] target, [Int32] mipLevel, [CubemapFace] cubemapFace, [Int32] depthSlice);
		// VA: 0x7B46D33398 RVA: 0x332D398 Offset: 0x332C398
		public static new [Void] SetupCurrent([Camera] cur);
		// VA: 0x7B46D33404 RVA: 0x332D404 Offset: 0x332C404
		public new [Void] CopyFrom([Camera] other);
		// VA: 0x7B46D33440 RVA: 0x332D440 Offset: 0x332C440
		public new [Int32] get_commandBufferCount();
		// VA: 0x7B46D33484 RVA: 0x332D484 Offset: 0x332C484
		public new [Void] RemoveCommandBuffers([CameraEvent] evt);
		// VA: 0x7B46D334C0 RVA: 0x332D4C0 Offset: 0x332C4C0
		public new [Void] RemoveAllCommandBuffers();
		// VA: 0x7B46D33504 RVA: 0x332D504 Offset: 0x332C504
		private new [Void] AddCommandBufferImpl([CameraEvent] evt, [CommandBuffer] buffer);
		// VA: 0x7B46D33540 RVA: 0x332D540 Offset: 0x332C540
		private new [Void] AddCommandBufferAsyncImpl([CameraEvent] evt, [CommandBuffer] buffer, [ComputeQueueType] queueType);
		// VA: 0x7B46D33594 RVA: 0x332D594 Offset: 0x332C594
		private new [Void] RemoveCommandBufferImpl([CameraEvent] evt, [CommandBuffer] buffer);
		// VA: 0x7B46D335F0 RVA: 0x332D5F0 Offset: 0x332C5F0
		public new [Void] AddCommandBuffer([CameraEvent] evt, [CommandBuffer] buffer);
		// VA: 0x7B46D33644 RVA: 0x332D644 Offset: 0x332C644
		public new [Void] AddCommandBufferAsync([CameraEvent] evt, [CommandBuffer] buffer, [ComputeQueueType] queueType);
		// VA: 0x7B46D33778 RVA: 0x332D778 Offset: 0x332C778
		public new [Void] RemoveCommandBuffer([CameraEvent] evt, [CommandBuffer] buffer);
		// VA: 0x7B46D338BC RVA: 0x332D8BC Offset: 0x332C8BC
		public new [CommandBuffer[]] GetCommandBuffers([CameraEvent] evt);
		// VA: 0x7B46D339F0 RVA: 0x332D9F0 Offset: 0x332C9F0
		private static new [Void] FireOnPreCull([Camera] cam);
		// VA: 0x7B46D33A34 RVA: 0x332DA34 Offset: 0x332CA34
		private static new [Void] FireOnPreRender([Camera] cam);
		// VA: 0x7B46D33AA0 RVA: 0x332DAA0 Offset: 0x332CAA0
		private static new [Void] FireOnPostRender([Camera] cam);
		// VA: 0x7B46D33B0C RVA: 0x332DB0C Offset: 0x332CB0C
		internal new [Void] OnlyUsedForTesting1();
		// VA: 0x7B46D33B78 RVA: 0x332DB78 Offset: 0x332CB78
		internal new [Void] OnlyUsedForTesting2();
		// VA: 0x7B46D33B7C RVA: 0x332DB7C Offset: 0x332CB7C
		public new [Boolean] TryGetCullingParameters(out [ScriptableCullingParameters] cullingParameters);
		// VA: 0x7B46D33B80 RVA: 0x332DB80 Offset: 0x332CB80
		public new [Boolean] TryGetCullingParameters([Boolean] stereoAware, out [ScriptableCullingParameters] cullingParameters);
		// VA: 0x7B46D33C28 RVA: 0x332DC28 Offset: 0x332CC28
		private static new [Boolean] GetCullingParameters_Internal([Camera] camera, [Boolean] stereoAware, out [ScriptableCullingParameters] cullingParameters, [Int32] managedCullingParametersSize);
		// VA: 0x7B46D33BCC RVA: 0x332DBCC Offset: 0x332CBCC
		private new [Void] get_transparencySortAxis_Injected(out [Vector3] ret);
		// VA: 0x7B46D2F3A8 RVA: 0x33293A8 Offset: 0x33283A8
		private new [Void] set_transparencySortAxis_Injected(ref [Vector3] value);
		// VA: 0x7B46D2F440 RVA: 0x3329440 Offset: 0x3328440
		private new [Void] get_velocity_Injected(out [Vector3] ret);
		// VA: 0x7B46D2F668 RVA: 0x3329668 Offset: 0x3328668
		private new [Void] get_cullingMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D2FBF4 RVA: 0x3329BF4 Offset: 0x3328BF4
		private new [Void] set_cullingMatrix_Injected(ref [Matrix4x4] value);
		// VA: 0x7B46D2FC7C RVA: 0x3329C7C Offset: 0x3328C7C
		private new [Void] get_backgroundColor_Injected(out [Color] ret);
		// VA: 0x7B46D2FD54 RVA: 0x3329D54 Offset: 0x3328D54
		private new [Void] set_backgroundColor_Injected(ref [Color] value);
		// VA: 0x7B46D2FDEC RVA: 0x3329DEC Offset: 0x3328DEC
		private new [Void] get_curvature_Injected(out [Vector2] ret);
		// VA: 0x7B46D30468 RVA: 0x332A468 Offset: 0x3329468
		private new [Void] set_curvature_Injected(ref [Vector2] value);
		// VA: 0x7B46D304F4 RVA: 0x332A4F4 Offset: 0x33294F4
		private new [Void] get_sensorSize_Injected(out [Vector2] ret);
		// VA: 0x7B46D30694 RVA: 0x332A694 Offset: 0x3329694
		private new [Void] set_sensorSize_Injected(ref [Vector2] value);
		// VA: 0x7B46D30720 RVA: 0x332A720 Offset: 0x3329720
		private new [Void] get_lensShift_Injected(out [Vector2] ret);
		// VA: 0x7B46D307B0 RVA: 0x332A7B0 Offset: 0x33297B0
		private new [Void] set_lensShift_Injected(ref [Vector2] value);
		// VA: 0x7B46D3083C RVA: 0x332A83C Offset: 0x332983C
		private new [Void] GetGateFittedLensShift_Injected(out [Vector2] ret);
		// VA: 0x7B46D30988 RVA: 0x332A988 Offset: 0x3329988
		private new [Void] GetLocalSpaceAim_Injected(out [Vector3] ret);
		// VA: 0x7B46D30A28 RVA: 0x332AA28 Offset: 0x3329A28
		private new [Void] get_rect_Injected(out [Rect] ret);
		// VA: 0x7B46D30AC4 RVA: 0x332AAC4 Offset: 0x3329AC4
		private new [Void] set_rect_Injected(ref [Rect] value);
		// VA: 0x7B46D30B5C RVA: 0x332AB5C Offset: 0x3329B5C
		private new [Void] get_pixelRect_Injected(out [Rect] ret);
		// VA: 0x7B46D30BF8 RVA: 0x332ABF8 Offset: 0x3329BF8
		private new [Void] set_pixelRect_Injected(ref [Rect] value);
		// VA: 0x7B46D30C90 RVA: 0x332AC90 Offset: 0x3329C90
		private new [Void] SetTargetBuffersImpl_Injected(ref [RenderBuffer] color, ref [RenderBuffer] depth);
		// VA: 0x7B46D30F58 RVA: 0x332AF58 Offset: 0x3329F58
		private new [Void] SetTargetBuffersMRTImpl_Injected([RenderBuffer[]] color, ref [RenderBuffer] depth);
		// VA: 0x7B46D31008 RVA: 0x332B008 Offset: 0x332A008
		private new [Void] get_cameraToWorldMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D31108 RVA: 0x332B108 Offset: 0x332A108
		private new [Void] get_worldToCameraMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D311B8 RVA: 0x332B1B8 Offset: 0x332A1B8
		private new [Void] set_worldToCameraMatrix_Injected(ref [Matrix4x4] value);
		// VA: 0x7B46D31240 RVA: 0x332B240 Offset: 0x332A240
		private new [Void] get_projectionMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D312F0 RVA: 0x332B2F0 Offset: 0x332A2F0
		private new [Void] set_projectionMatrix_Injected(ref [Matrix4x4] value);
		// VA: 0x7B46D31378 RVA: 0x332B378 Offset: 0x332A378
		private new [Void] get_nonJitteredProjectionMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D31428 RVA: 0x332B428 Offset: 0x332A428
		private new [Void] set_nonJitteredProjectionMatrix_Injected(ref [Matrix4x4] value);
		// VA: 0x7B46D314B0 RVA: 0x332B4B0 Offset: 0x332A4B0
		private new [Void] get_previousViewProjectionMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D315E0 RVA: 0x332B5E0 Offset: 0x332A5E0
		private new [Void] CalculateObliqueMatrix_Injected(ref [Vector4] clipPlane, out [Matrix4x4] ret);
		// VA: 0x7B46D31714 RVA: 0x332B714 Offset: 0x332A714
		private new [Void] WorldToScreenPoint_Injected(ref [Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye, out [Vector3] ret);
		// VA: 0x7B46D317D8 RVA: 0x332B7D8 Offset: 0x332A7D8
		private new [Void] WorldToViewportPoint_Injected(ref [Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye, out [Vector3] ret);
		// VA: 0x7B46D318A4 RVA: 0x332B8A4 Offset: 0x332A8A4
		private new [Void] ViewportToWorldPoint_Injected(ref [Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye, out [Vector3] ret);
		// VA: 0x7B46D31970 RVA: 0x332B970 Offset: 0x332A970
		private new [Void] ScreenToWorldPoint_Injected(ref [Vector3] position, [Camera]->[MonoOrStereoscopicEye] eye, out [Vector3] ret);
		// VA: 0x7B46D31A3C RVA: 0x332BA3C Offset: 0x332AA3C
		private new [Void] ScreenToViewportPoint_Injected(ref [Vector3] position, out [Vector3] ret);
		// VA: 0x7B46D31B20 RVA: 0x332BB20 Offset: 0x332AB20
		private new [Void] ViewportToScreenPoint_Injected(ref [Vector3] position, out [Vector3] ret);
		// VA: 0x7B46D31BDC RVA: 0x332BBDC Offset: 0x332ABDC
		private new [Void] GetFrustumPlaneSizeAt_Injected([Single] distance, out [Vector2] ret);
		// VA: 0x7B46D31C94 RVA: 0x332BC94 Offset: 0x332AC94
		private new [Void] ViewportPointToRay_Injected(ref [Vector2] pos, [Camera]->[MonoOrStereoscopicEye] eye, out [Ray] ret);
		// VA: 0x7B46D31D60 RVA: 0x332BD60 Offset: 0x332AD60
		private new [Void] ScreenPointToRay_Injected(ref [Vector2] pos, [Camera]->[MonoOrStereoscopicEye] eye, out [Ray] ret);
		// VA: 0x7B46D31EB0 RVA: 0x332BEB0 Offset: 0x332AEB0
		private new [Void] CalculateFrustumCornersInternal_Injected(ref [Rect] viewport, [Single] z, [Camera]->[MonoOrStereoscopicEye] eye, [Out] [Vector3[]] outCorners);
		// VA: 0x7B46D32004 RVA: 0x332C004 Offset: 0x332B004
		private static new [Void] CalculateProjectionMatrixFromPhysicalPropertiesInternal_Injected(out [Matrix4x4] output, [Single] focalLength, ref [Vector2] sensorSize, ref [Vector2] lensShift, [Single] nearClip, [Single] farClip, [Single] gateAspect, [Camera]->[GateFitMode] gateFitMode);
		// VA: 0x7B46D321B4 RVA: 0x332C1B4 Offset: 0x332B1B4
		private new [Void] get_scene_Injected(out [Scene] ret);
		// VA: 0x7B46D323E8 RVA: 0x332C3E8 Offset: 0x332B3E8
		private new [Void] set_scene_Injected(ref [Scene] value);
		// VA: 0x7B46D32474 RVA: 0x332C474 Offset: 0x332B474
		private new [Void] GetStereoNonJitteredProjectionMatrix_Injected([Camera]->[StereoscopicEye] eye, out [Matrix4x4] ret);
		// VA: 0x7B46D32778 RVA: 0x332C778 Offset: 0x332B778
		private new [Void] GetStereoViewMatrix_Injected([Camera]->[StereoscopicEye] eye, out [Matrix4x4] ret);
		// VA: 0x7B46D32848 RVA: 0x332C848 Offset: 0x332B848
		private new [Void] GetStereoProjectionMatrix_Injected([Camera]->[StereoscopicEye] eye, out [Matrix4x4] ret);
		// VA: 0x7B46D3295C RVA: 0x332C95C Offset: 0x332B95C
		private new [Void] SetStereoProjectionMatrix_Injected([Camera]->[StereoscopicEye] eye, ref [Matrix4x4] matrix);
		// VA: 0x7B46D32A04 RVA: 0x332CA04 Offset: 0x332BA04
		private new [Void] SetStereoViewMatrix_Injected([Camera]->[StereoscopicEye] eye, ref [Matrix4x4] matrix);
		// VA: 0x7B46D32AE8 RVA: 0x332CAE8 Offset: 0x332BAE8

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B29910
		private enum ProjectionMatrixMode : [Int32]
		{
			Explicit = 0,
			Implicit = 1,
			PhysicalPropertiesBased = 2
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B29BC0
		public enum GateFitMode : [Int32]
		{
			Vertical = 1,
			Horizontal = 2,
			Fill = 3,
			Overscan = 4,
			None = 0
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B29E70
		public struct GateFitParameters : [ValueType]
		{
			// Fields
			// private [Camera]->[GateFitMode] mode { get; set; }
			private [Camera]->[GateFitMode] <mode>k__BackingField; // 0x0
			// private [Single] aspect { get; set; }
			private [Single] <aspect>k__BackingField; // 0x4

			// Methods
			public new [Camera]->[GateFitMode] get_mode();
			// VA: 0x7B46D33C80 RVA: 0x332DC80 Offset: 0x332CC80
			public new [Single] get_aspect();
			// VA: 0x7B46D33C88 RVA: 0x332DC88 Offset: 0x332CC88
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B29FF0
		public enum StereoscopicEye : [Int32]
		{
			Left = 0,
			Right = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2A2A0
		public enum MonoOrStereoscopicEye : [Int32]
		{
			Left = 0,
			Right = 1,
			Mono = 2
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2A550
		public enum SceneViewFilterMode : [Int32]
		{
			Off = 0,
			ShowFiltered = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2A800
		public enum RenderRequestMode : [Int32]
		{
			None = 0,
			ObjectId = 1,
			Depth = 2,
			VertexNormal = 3,
			WorldPosition = 4,
			EntityId = 5,
			BaseColor = 6,
			SpecularColor = 7,
			Metallic = 8,
			Emission = 9,
			Normal = 10,
			Smoothness = 11,
			Occlusion = 12,
			DiffuseColor = 13
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2AAB0
		public enum RenderRequestOutputSpace : [Int32]
		{
			ScreenSpace = 4294967295,
			UV0 = 0,
			UV1 = 1,
			UV2 = 2,
			UV3 = 3,
			UV4 = 4,
			UV5 = 5,
			UV6 = 6,
			UV7 = 7,
			UV8 = 8
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2AD60
		public struct RenderRequest : [ValueType]
		{
			// Fields
			private readonly [Int32] m_CameraRenderMode; // enum: [Camera]->[RenderRequestMode], 0x0
			private readonly [RenderTexture] m_ResultRT; // 0x8
			private readonly [Int32] m_OutputSpace; // enum: [Camera]->[RenderRequestOutputSpace], 0x10

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2AEE0
		public sealed class CameraCallback : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D33C90 RVA: 0x332DC90 Offset: 0x332CC90
			public virtual new [Void] Invoke([Camera] cam);
			// VA: 0x7B46D33D2C RVA: 0x332DD2C Offset: 0x332CD2C
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2B100
	public struct CullingGroupEvent : [ValueType]
	{
		// Fields
		private [Int32] m_Index; // 0x0
		private [Byte] m_PrevState; // 0x4
		private [Byte] m_ThisState; // 0x5

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2B4A0
	public class CullingGroup : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10
		private [CullingGroup]->[StateChanged] m_OnStateChanged; // 0x18

		// Methods
		private static new [Void] SendEvents([CullingGroup] cullingGroup, [IntPtr] eventsPtr, [Int32] count);
		// VA: 0x7B46D33D40 RVA: 0x332DD40 Offset: 0x332CD40

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2B280
		public sealed class StateChanged : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D33D9C RVA: 0x332DD9C Offset: 0x332CD9C
			public virtual new [Void] Invoke([CullingGroupEvent] sphere);
			// VA: 0x7B46D33E28 RVA: 0x332DE28 Offset: 0x332CE28
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2B620
	public class FlareLayer : [Behaviour]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2BA50
	public sealed class ReflectionProbe : [Behaviour]
	{
		// Fields
		private static [Action`2] reflectionProbeChanged; // 0x0
		private static [Dictionary`2] registeredDefaultReflectionSetActions; // 0x8
		private static [List`1] registeredDefaultReflectionTextureActions; // 0x10

		// Methods
		private static new [Void] CallReflectionProbeEvent([ReflectionProbe] probe, [ReflectionProbe]->[ReflectionProbeEvent] probeEvent);
		// VA: 0x7B46D33E3C RVA: 0x332DE3C Offset: 0x332CE3C
		private static new [Void] CallSetDefaultReflection([Texture] defaultReflectionCubemap);
		// VA: 0x7B46D33ECC RVA: 0x332DECC Offset: 0x332CECC
		private static new [Void] .cctor();
		// VA: 0x7B46D34050 RVA: 0x332E050 Offset: 0x332D050

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B2B7A0
		public enum ReflectionProbeEvent : [Int32]
		{
			ReflectionProbeAdded = 0,
			ReflectionProbeRemoved = 1
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2BBD0
	private sealed class DebugLogHandler : [Object]
	{
		// Fields

		// Methods
		internal static new [Void] Internal_Log([LogType] level, [LogOption] options, [String] msg, [Object] obj);
		// VA: 0x7B46D3412C RVA: 0x332E12C Offset: 0x332D12C
		internal static new [Void] Internal_LogException([Exception] ex, [Object] obj);
		// VA: 0x7B46D34188 RVA: 0x332E188 Offset: 0x332D188
		public sealed new [Void] LogFormat([LogType] logType, [Object] context, [String] format, [Object[]] args);
		// VA: 0x7B46D341CC RVA: 0x332E1CC Offset: 0x332D1CC
		public sealed new [Void] LogException([Exception] exception, [Object] context);
		// VA: 0x7B46D34234 RVA: 0x332E234 Offset: 0x332D234
		public new [Void] .ctor();
		// VA: 0x7B46D342C4 RVA: 0x332E2C4 Offset: 0x332D2C4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B2BD70
	public class Debug : [Object]
	{
		// Fields
		public readonly static [ILogger] s_DefaultLogger; // 0x0
		public static [ILogger] s_Logger; // 0x8

		// Methods
		public static new [ILogger] get_unityLogger();
		// VA: 0x7B46D342CC RVA: 0x332E2CC Offset: 0x332D2CC
		public static new [Void] DrawLine([Vector3] start, [Vector3] end, [Color] color, [Single] duration);
		// VA: 0x7B46D34324 RVA: 0x332E324 Offset: 0x332D324
		public static new [Void] DrawLine([Vector3] start, [Vector3] end, [Color] color);
		// VA: 0x7B46D344E8 RVA: 0x332E4E8 Offset: 0x332D4E8
		public static new [Void] DrawLine([Vector3] start, [Vector3] end, [Color] color, [Single] duration, [Boolean] depthTest);
		// VA: 0x7B46D34434 RVA: 0x332E434 Offset: 0x332D434
		public static new [Int32] ExtractStackTraceNoAlloc([Byte*] buffer, [Int32] bufferMax, [String] projectFolder);
		// VA: 0x7B46D3463C RVA: 0x332E63C Offset: 0x332D63C
		public static new [Void] Log([Object] message);
		// VA: 0x7B46D34690 RVA: 0x332E690 Offset: 0x332D690
		public static new [Void] Log([Object] message, [Object] context);
		// VA: 0x7B46D34798 RVA: 0x332E798 Offset: 0x332D798
		public static new [Void] LogFormat([String] format, [Object[]] args);
		// VA: 0x7B46D348B0 RVA: 0x332E8B0 Offset: 0x332D8B0
		public static new [Void] LogError([Object] message);
		// VA: 0x7B46D349C8 RVA: 0x332E9C8 Offset: 0x332D9C8
		public static new [Void] LogError([Object] message, [Object] context);
		// VA: 0x7B46D34AD0 RVA: 0x332EAD0 Offset: 0x332DAD0
		public static new [Void] LogErrorFormat([String] format, [Object[]] args);
		// VA: 0x7B46D34BE8 RVA: 0x332EBE8 Offset: 0x332DBE8
		public static new [Void] LogErrorFormat([Object] context, [String] format, [Object[]] args);
		// VA: 0x7B46D34D00 RVA: 0x332ED00 Offset: 0x332DD00
		public static new [Void] LogException([Exception] exception);
		// VA: 0x7B46D2D6D4 RVA: 0x33276D4 Offset: 0x33266D4
		public static new [Void] LogException([Exception] exception, [Object] context);
		// VA: 0x7B46D34E1C RVA: 0x332EE1C Offset: 0x332DE1C
		public static new [Void] LogWarning([Object] message);
		// VA: 0x7B46D3324C RVA: 0x332D24C Offset: 0x332C24C
		public static new [Void] LogWarning([Object] message, [Object] context);
		// VA: 0x7B46D34F30 RVA: 0x332EF30 Offset: 0x332DF30
		public static new [Void] LogWarningFormat([String] format, [Object[]] args);
		// VA: 0x7B46D35048 RVA: 0x332F048 Offset: 0x332E048
		public static new [Void] LogWarningFormat([Object] context, [String] format, [Object[]] args);
		// VA: 0x7B46D35160 RVA: 0x332F160 Offset: 0x332E160
		public static new [Void] Assert([Boolean] condition);
		// VA: 0x7B46D3527C RVA: 0x332F27C Offset: 0x332E27C
		public static new [Void] Assert([Boolean] condition, [String] message);
		// VA: 0x7B46D353AC RVA: 0x332F3AC Offset: 0x332E3AC
		public static new [Void] LogAssertion([Object] message);
		// VA: 0x7B46D354C8 RVA: 0x332F4C8 Offset: 0x332E4C8
		public static new [Void] LogAssertionFormat([String] format, [Object[]] args);
		// VA: 0x7B46D355D0 RVA: 0x332F5D0 Offset: 0x332E5D0
		public static new [Boolean] get_isDebugBuild();
		// VA: 0x7B46D356E8 RVA: 0x332F6E8 Offset: 0x332E6E8
		internal static new [Boolean] CallOverridenDebugHandler([Exception] exception, [Object] obj);
		// VA: 0x7B46D35710 RVA: 0x332F710 Offset: 0x332E710
		internal static new [Boolean] IsLoggingEnabled();
		// VA: 0x7B46D35B08 RVA: 0x332FB08 Offset: 0x332EB08
		private static new [Void] .cctor();
		// VA: 0x7B46D35D2C RVA: 0x332FD2C Offset: 0x332ED2C
		private static new [Void] DrawLine_Injected(ref [Vector3] start, ref [Vector3] end, ref [Color] color, [Single] duration, [Boolean] depthTest);
		// VA: 0x7B46D345D0 RVA: 0x332E5D0 Offset: 0x332D5D0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708D2C20
	public class ExpressionEvaluator : [Object]
	{
		// Fields
		private static [ExpressionEvaluator]->[PcgRandom] s_Random; // 0x0
		private static [Dictionary`2] s_Operators; // 0x10

		// Methods
		internal static new [Boolean] Evaluate([String] expression, out [T] value, out [ExpressionEvaluator]->[Expression] delayed);
		// VA: 0x7B4502BC14 RVA: 0x1625C14 Offset: 0x1624C14
		private static new [Boolean] EvaluateTokens([String[]] tokens, ref [T] value, [Int32] index, [Int32] count);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Boolean] EvaluateDouble([String[]] tokens, ref [Double] value, [Int32] index, [Int32] count);
		// VA: 0x7B46D35E08 RVA: 0x332FE08 Offset: 0x332EE08
		private static new [String[]] InfixToRPN([String[]] tokens);
		// VA: 0x7B46D36860 RVA: 0x3330860 Offset: 0x332F860
		private static new [Boolean] NeedToPop([Stack`1] operatorStack, [ExpressionEvaluator]->[Operator] newOperator);
		// VA: 0x7B46D36CCC RVA: 0x3330CCC Offset: 0x332FCCC
		private static new [String[]] ExpressionToTokens([String] expression, out [Boolean] hasVariables);
		// VA: 0x7B46D36DB4 RVA: 0x3330DB4 Offset: 0x332FDB4
		private static new [Boolean] IsCommand([String] token);
		// VA: 0x7B46D363F8 RVA: 0x33303F8 Offset: 0x332F3F8
		private static new [Boolean] IsVariable([String] token);
		// VA: 0x7B46D367F8 RVA: 0x33307F8 Offset: 0x332F7F8
		private static new [Boolean] IsDelayedFunction([String] token);
		// VA: 0x7B46D36C60 RVA: 0x3330C60 Offset: 0x332FC60
		private static new [Boolean] IsOperator([String] token);
		// VA: 0x7B46D362D8 RVA: 0x33302D8 Offset: 0x332F2D8
		private static new [ExpressionEvaluator]->[Operator] TokenToOperator([String] token);
		// VA: 0x7B46D36358 RVA: 0x3330358 Offset: 0x332F358
		private static new [String] PreFormatExpression([String] expression);
		// VA: 0x7B46D371F0 RVA: 0x33311F0 Offset: 0x33301F0
		private static new [String[]] FixUnaryOperators([String[]] tokens);
		// VA: 0x7B46D373E0 RVA: 0x33313E0 Offset: 0x33303E0
		private static new [Double] EvaluateOp([Double[]] values, [ExpressionEvaluator]->[Op] op, [Int32] index, [Int32] count);
		// VA: 0x7B46D364A4 RVA: 0x33304A4 Offset: 0x332F4A4
		private static new [Boolean] TryParse([String] expression, out [T] result);
		// VA: 0x7B4502BB50 RVA: 0x1625B50 Offset: 0x1624B50
		private static new [Void] .cctor();
		// VA: 0x7B46D37594 RVA: 0x3331594 Offset: 0x3330594

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A7099B940
		public class Expression : [Object]
		{
			// Fields
			public readonly [String[]] rpnTokens; // 0x10
			public readonly [Boolean] hasVariables; // 0x18

			// Methods
			internal new [Void] .ctor([String] expression);
			// VA: 0x7B46D37B6C RVA: 0x3331B6C Offset: 0x3330B6C
			public new [Boolean] Evaluate(ref [T] value, [Int32] index, [Int32] count);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B30030
		public struct PcgRandom : [ValueType]
		{
			// Fields
			private readonly [UInt64] increment; // 0x0
			private [UInt64] state; // 0x8

			// Methods
			public new [Void] .ctor([UInt64] state, [UInt64] sequence);
			// VA: 0x7B46D37B04 RVA: 0x3331B04 Offset: 0x3330B04
			public new [UInt32] GetUInt();
			// VA: 0x7B46D3755C RVA: 0x333155C Offset: 0x333055C
			private static new [UInt32] RotateRight([UInt32] v, [Int32] rot);
			// VA: 0x7B46D37C28 RVA: 0x3331C28 Offset: 0x3330C28
			private static new [UInt32] XshRr([UInt64] s);
			// VA: 0x7B46D37C10 RVA: 0x3331C10 Offset: 0x3330C10
			private new [Void] Step();
			// VA: 0x7B46D37BF0 RVA: 0x3331BF0 Offset: 0x3330BF0
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B301B0
		public enum Op : [Int32]
		{
			Add = 0,
			Sub = 1,
			Mul = 2,
			Div = 3,
			Mod = 4,
			Neg = 5,
			Pow = 6,
			Sqrt = 7,
			Sin = 8,
			Cos = 9,
			Tan = 10,
			Floor = 11,
			Ceil = 12,
			Round = 13,
			Rand = 14,
			Linear = 15
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B30460
		public enum Associativity : [Int32]
		{
			Left = 0,
			Right = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B30710
		public class Operator : [Object]
		{
			// Fields
			public readonly [Int32] op; // enum: [ExpressionEvaluator]->[Op], 0x10
			public readonly [Int32] precedence; // 0x14
			public readonly [Int32] associativity; // enum: [ExpressionEvaluator]->[Associativity], 0x18
			public readonly [Int32] inputs; // 0x1C

			// Methods
			public new [Void] .ctor([ExpressionEvaluator]->[Op] op, [Int32] precedence, [Int32] inputs, [ExpressionEvaluator]->[Associativity] associativity);
			// VA: 0x7B46D37B2C RVA: 0x3331B2C Offset: 0x3330B2C
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B30890
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [ExpressionEvaluator]->[<>c] <>9 { get; set; }
			public readonly static [ExpressionEvaluator]->[<>c] <>9; // 0x0
			// public static [Func`2] <>9__14_0 { get; set; }
			public static [Func`2] <>9__14_0; // 0x8

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D37C30 RVA: 0x3331C30 Offset: 0x3330C30
			public new [Void] .ctor();
			// VA: 0x7B46D37C8C RVA: 0x3331C8C Offset: 0x3330C8C
			internal new [Boolean] <ExpressionToTokens>b__14_0([String] f);
			// VA: 0x7B46D37C94 RVA: 0x3331C94 Offset: 0x3330C94
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B30A10
	public sealed class LightingSettings : [Object]
	{
		// Fields

		// Methods
		internal new [Void] LightingSettingsDontStripMe();
		// VA: 0x7B46D37D14 RVA: 0x3331D14 Offset: 0x3330D14
		public new [Void] .ctor();
		// VA: 0x7B46D37D18 RVA: 0x3331D18 Offset: 0x3330D18
		private static new [Void] Internal_Create([LightingSettings] self);
		// VA: 0x7B46D37D98 RVA: 0x3331D98 Offset: 0x3330D98
		public new [Boolean] get_bakedGI();
		// VA: 0x7B46D37DD4 RVA: 0x3331DD4 Offset: 0x3330DD4
		public new [Void] set_bakedGI([Boolean] value);
		// VA: 0x7B46D37E10 RVA: 0x3331E10 Offset: 0x3330E10
		public new [Boolean] get_realtimeGI();
		// VA: 0x7B46D37E54 RVA: 0x3331E54 Offset: 0x3330E54
		public new [Void] set_realtimeGI([Boolean] value);
		// VA: 0x7B46D37E90 RVA: 0x3331E90 Offset: 0x3330E90
		public new [Boolean] get_realtimeEnvironmentLighting();
		// VA: 0x7B46D37ED4 RVA: 0x3331ED4 Offset: 0x3330ED4
		public new [Void] set_realtimeEnvironmentLighting([Boolean] value);
		// VA: 0x7B46D37F10 RVA: 0x3331F10 Offset: 0x3330F10
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B30B90
	public struct Bounds : [ValueType]
	{
		// Fields
		private [Vector3] m_Center; // 0x0
		private [Vector3] m_Extents; // 0xC

		// Methods
		public new [Void] .ctor([Vector3] center, [Vector3] size);
		// VA: 0x7B46D37F54 RVA: 0x3331F54 Offset: 0x3330F54
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D37F74 RVA: 0x3331F74 Offset: 0x3330F74
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D38044 RVA: 0x3332044 Offset: 0x3331044
		public sealed new [Boolean] Equals([Bounds] other);
		// VA: 0x7B46D38114 RVA: 0x3332114 Offset: 0x3331114
		public new [Vector3] get_center();
		// VA: 0x7B46D38180 RVA: 0x3332180 Offset: 0x3331180
		public new [Void] set_center([Vector3] value);
		// VA: 0x7B46D3818C RVA: 0x333218C Offset: 0x333118C
		public new [Vector3] get_size();
		// VA: 0x7B46D38198 RVA: 0x3332198 Offset: 0x3331198
		public new [Void] set_size([Vector3] value);
		// VA: 0x7B46D381B0 RVA: 0x33321B0 Offset: 0x33311B0
		public new [Vector3] get_extents();
		// VA: 0x7B46D381CC RVA: 0x33321CC Offset: 0x33311CC
		public new [Void] set_extents([Vector3] value);
		// VA: 0x7B46D381D8 RVA: 0x33321D8 Offset: 0x33311D8
		public new [Vector3] get_min();
		// VA: 0x7B46D381E4 RVA: 0x33321E4 Offset: 0x33311E4
		public new [Vector3] get_max();
		// VA: 0x7B46D38204 RVA: 0x3332204 Offset: 0x3331204
		public static new [Boolean] op_Equality([Bounds] lhs, [Bounds] rhs);
		// VA: 0x7B46D38224 RVA: 0x3332224 Offset: 0x3331224
		public static new [Boolean] op_Inequality([Bounds] lhs, [Bounds] rhs);
		// VA: 0x7B46D382A0 RVA: 0x33322A0 Offset: 0x33312A0
		public new [Void] SetMinMax([Vector3] min, [Vector3] max);
		// VA: 0x7B46D3831C RVA: 0x333231C Offset: 0x333131C
		public new [Void] Encapsulate([Vector3] point);
		// VA: 0x7B46D38354 RVA: 0x3332354 Offset: 0x3331354
		public override new [String] ToString();
		// VA: 0x7B46D383CC RVA: 0x33323CC Offset: 0x33313CC
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D383DC RVA: 0x33323DC Offset: 0x33313DC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B30D30
	public struct BoundsInt : [ValueType]
	{
		// Fields
		private [Vector3Int] m_Position; // 0x0
		private [Vector3Int] m_Size; // 0xC

		// Methods
		public new [Vector3Int] get_position();
		// VA: 0x7B46D38564 RVA: 0x3332564 Offset: 0x3331564
		public new [Void] set_position([Vector3Int] value);
		// VA: 0x7B46D38574 RVA: 0x3332574 Offset: 0x3331574
		public new [Vector3Int] get_size();
		// VA: 0x7B46D38580 RVA: 0x3332580 Offset: 0x3331580
		public new [Void] set_size([Vector3Int] value);
		// VA: 0x7B46D38590 RVA: 0x3332590 Offset: 0x3331590
		public new [Void] .ctor([Vector3Int] position, [Vector3Int] size);
		// VA: 0x7B46D3859C RVA: 0x333259C Offset: 0x333159C
		public override new [String] ToString();
		// VA: 0x7B46D385B0 RVA: 0x33325B0 Offset: 0x33315B0
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D385C0 RVA: 0x33325C0 Offset: 0x33315C0
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D3871C RVA: 0x333271C Offset: 0x333171C
		public sealed new [Boolean] Equals([BoundsInt] other);
		// VA: 0x7B46D387F0 RVA: 0x33327F0 Offset: 0x33317F0
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D38868 RVA: 0x3332868 Offset: 0x3331868
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B30ED0
	public struct Plane : [ValueType]
	{
		// Fields
		private [Vector3] m_Normal; // 0x0
		private [Single] m_Distance; // 0xC

		// Methods
		public new [Vector3] get_normal();
		// VA: 0x7B46D3893C RVA: 0x333293C Offset: 0x333193C
		public new [Void] .ctor([Vector3] inNormal, [Vector3] inPoint);
		// VA: 0x7B46D38948 RVA: 0x3332948 Offset: 0x3331948
		public new [Boolean] Raycast([Ray] ray, out [Single] enter);
		// VA: 0x7B46D38A58 RVA: 0x3332A58 Offset: 0x3331A58
		public override new [String] ToString();
		// VA: 0x7B46D38B58 RVA: 0x3332B58 Offset: 0x3331B58
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D38B68 RVA: 0x3332B68 Offset: 0x3331B68
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31060
	public struct Ray : [ValueType]
	{
		// Fields
		private [Vector3] m_Origin; // 0x0
		private [Vector3] m_Direction; // 0xC

		// Methods
		public new [Void] .ctor([Vector3] origin, [Vector3] direction);
		// VA: 0x7B46D38CF0 RVA: 0x3332CF0 Offset: 0x3331CF0
		public new [Vector3] get_origin();
		// VA: 0x7B46D38DDC RVA: 0x3332DDC Offset: 0x3331DDC
		public new [Vector3] get_direction();
		// VA: 0x7B46D38DE8 RVA: 0x3332DE8 Offset: 0x3331DE8
		public new [Vector3] GetPoint([Single] distance);
		// VA: 0x7B46D38DF4 RVA: 0x3332DF4 Offset: 0x3331DF4
		public override new [String] ToString();
		// VA: 0x7B46D38E1C RVA: 0x3332E1C Offset: 0x3331E1C
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D38E2C RVA: 0x3332E2C Offset: 0x3331E2C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7063DCB0
	public struct Rect : [ValueType]
	{
		// Fields
		private [Single] m_XMin; // 0x0
		private [Single] m_YMin; // 0x4
		private [Single] m_Width; // 0x8
		private [Single] m_Height; // 0xC

		// Methods
		public new [Void] .ctor([Single] x, [Single] y, [Single] width, [Single] height);
		// VA: 0x7B46D38FB4 RVA: 0x3332FB4 Offset: 0x3331FB4
		public new [Void] .ctor([Vector2] position, [Vector2] size);
		// VA: 0x7B46D38FC0 RVA: 0x3332FC0 Offset: 0x3331FC0
		public new [Void] .ctor([Rect] source);
		// VA: 0x7B46D38FCC RVA: 0x3332FCC Offset: 0x3331FCC
		public static new [Rect] get_zero();
		// VA: 0x7B46D38FD8 RVA: 0x3332FD8 Offset: 0x3331FD8
		public static new [Rect] MinMaxRect([Single] xmin, [Single] ymin, [Single] xmax, [Single] ymax);
		// VA: 0x7B46D38FEC RVA: 0x3332FEC Offset: 0x3331FEC
		public new [Void] Set([Single] x, [Single] y, [Single] width, [Single] height);
		// VA: 0x7B46D38FF8 RVA: 0x3332FF8 Offset: 0x3331FF8
		public new [Single] get_x();
		// VA: 0x7B46D39004 RVA: 0x3333004 Offset: 0x3332004
		public new [Void] set_x([Single] value);
		// VA: 0x7B46D3900C RVA: 0x333300C Offset: 0x333200C
		public new [Single] get_y();
		// VA: 0x7B46D39014 RVA: 0x3333014 Offset: 0x3332014
		public new [Void] set_y([Single] value);
		// VA: 0x7B46D3901C RVA: 0x333301C Offset: 0x333201C
		public new [Vector2] get_position();
		// VA: 0x7B46D39024 RVA: 0x3333024 Offset: 0x3332024
		public new [Void] set_position([Vector2] value);
		// VA: 0x7B46D3902C RVA: 0x333302C Offset: 0x333202C
		public new [Vector2] get_center();
		// VA: 0x7B46D39034 RVA: 0x3333034 Offset: 0x3332034
		public new [Void] set_center([Vector2] value);
		// VA: 0x7B46D3904C RVA: 0x333304C Offset: 0x333204C
		public new [Vector2] get_min();
		// VA: 0x7B46D39068 RVA: 0x3333068 Offset: 0x3332068
		public new [Void] set_min([Vector2] value);
		// VA: 0x7B46D39070 RVA: 0x3333070 Offset: 0x3332070
		public new [Vector2] get_max();
		// VA: 0x7B46D3908C RVA: 0x333308C Offset: 0x333208C
		public new [Void] set_max([Vector2] value);
		// VA: 0x7B46D3909C RVA: 0x333309C Offset: 0x333209C
		public new [Single] get_width();
		// VA: 0x7B46D390B0 RVA: 0x33330B0 Offset: 0x33320B0
		public new [Void] set_width([Single] value);
		// VA: 0x7B46D390B8 RVA: 0x33330B8 Offset: 0x33320B8
		public new [Single] get_height();
		// VA: 0x7B46D390C0 RVA: 0x33330C0 Offset: 0x33320C0
		public new [Void] set_height([Single] value);
		// VA: 0x7B46D390C8 RVA: 0x33330C8 Offset: 0x33320C8
		public new [Vector2] get_size();
		// VA: 0x7B46D390D0 RVA: 0x33330D0 Offset: 0x33320D0
		public new [Void] set_size([Vector2] value);
		// VA: 0x7B46D390D8 RVA: 0x33330D8 Offset: 0x33320D8
		public new [Single] get_xMin();
		// VA: 0x7B46D390E0 RVA: 0x33330E0 Offset: 0x33320E0
		public new [Void] set_xMin([Single] value);
		// VA: 0x7B46D390E8 RVA: 0x33330E8 Offset: 0x33320E8
		public new [Single] get_yMin();
		// VA: 0x7B46D39104 RVA: 0x3333104 Offset: 0x3332104
		public new [Void] set_yMin([Single] value);
		// VA: 0x7B46D3910C RVA: 0x333310C Offset: 0x333210C
		public new [Single] get_xMax();
		// VA: 0x7B46D39128 RVA: 0x3333128 Offset: 0x3332128
		public new [Void] set_xMax([Single] value);
		// VA: 0x7B46D39138 RVA: 0x3333138 Offset: 0x3332138
		public new [Single] get_yMax();
		// VA: 0x7B46D39148 RVA: 0x3333148 Offset: 0x3332148
		public new [Void] set_yMax([Single] value);
		// VA: 0x7B46D39158 RVA: 0x3333158 Offset: 0x3332158
		public new [Boolean] Contains([Vector2] point);
		// VA: 0x7B46D39168 RVA: 0x3333168 Offset: 0x3332168
		public new [Boolean] Contains([Vector3] point);
		// VA: 0x7B46D391AC RVA: 0x33331AC Offset: 0x33321AC
		private static new [Rect] OrderMinMax([Rect] rect);
		// VA: 0x7B46D391F0 RVA: 0x33331F0 Offset: 0x33321F0
		public new [Boolean] Overlaps([Rect] other);
		// VA: 0x7B46D3921C RVA: 0x333321C Offset: 0x333221C
		public new [Boolean] Overlaps([Rect] other, [Boolean] allowInverse);
		// VA: 0x7B46D39268 RVA: 0x3333268 Offset: 0x3332268
		public static new [Boolean] op_Inequality([Rect] lhs, [Rect] rhs);
		// VA: 0x7B46D392FC RVA: 0x33332FC Offset: 0x33322FC
		public static new [Boolean] op_Equality([Rect] lhs, [Rect] rhs);
		// VA: 0x7B46D39330 RVA: 0x3333330 Offset: 0x3332330
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D39364 RVA: 0x3333364 Offset: 0x3332364
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D393EC RVA: 0x33333EC Offset: 0x33323EC
		public sealed new [Boolean] Equals([Rect] other);
		// VA: 0x7B46D394D8 RVA: 0x33334D8 Offset: 0x33324D8
		public override new [String] ToString();
		// VA: 0x7B46D39578 RVA: 0x3333578 Offset: 0x3332578
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D39584 RVA: 0x3333584 Offset: 0x3332584
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B311F0
	public struct RectInt : [ValueType]
	{
		// Fields
		private [Int32] m_XMin; // 0x0
		private [Int32] m_YMin; // 0x4
		private [Int32] m_Width; // 0x8
		private [Int32] m_Height; // 0xC

		// Methods
		public new [Int32] get_x();
		// VA: 0x7B46D397B8 RVA: 0x33337B8 Offset: 0x33327B8
		public new [Void] set_x([Int32] value);
		// VA: 0x7B46D397C0 RVA: 0x33337C0 Offset: 0x33327C0
		public new [Int32] get_y();
		// VA: 0x7B46D397C8 RVA: 0x33337C8 Offset: 0x33327C8
		public new [Void] set_y([Int32] value);
		// VA: 0x7B46D397D0 RVA: 0x33337D0 Offset: 0x33327D0
		public new [Int32] get_width();
		// VA: 0x7B46D397D8 RVA: 0x33337D8 Offset: 0x33327D8
		public new [Void] set_width([Int32] value);
		// VA: 0x7B46D397E0 RVA: 0x33337E0 Offset: 0x33327E0
		public new [Int32] get_height();
		// VA: 0x7B46D397E8 RVA: 0x33337E8 Offset: 0x33327E8
		public new [Void] set_height([Int32] value);
		// VA: 0x7B46D397F0 RVA: 0x33337F0 Offset: 0x33327F0
		public new [Int32] get_xMin();
		// VA: 0x7B46D397F8 RVA: 0x33337F8 Offset: 0x33327F8
		public new [Int32] get_yMin();
		// VA: 0x7B46D3985C RVA: 0x333385C Offset: 0x333285C
		public new [Int32] get_xMax();
		// VA: 0x7B46D398C0 RVA: 0x33338C0 Offset: 0x33328C0
		public new [Int32] get_yMax();
		// VA: 0x7B46D39924 RVA: 0x3333924 Offset: 0x3332924
		public new [Void] .ctor([Int32] xMin, [Int32] yMin, [Int32] width, [Int32] height);
		// VA: 0x7B46D39988 RVA: 0x3333988 Offset: 0x3332988
		public new [Boolean] Overlaps([RectInt] other);
		// VA: 0x7B46D39994 RVA: 0x3333994 Offset: 0x3332994
		public override new [String] ToString();
		// VA: 0x7B46D39C34 RVA: 0x3333C34 Offset: 0x3332C34
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D39C44 RVA: 0x3333C44 Offset: 0x3332C44
		public sealed new [Boolean] Equals([RectInt] other);
		// VA: 0x7B46D39E4C RVA: 0x3333E4C Offset: 0x3332E4C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31390
	public class RectOffset : [Object]
	{
		// Fields
		public [NonSerialized] [IntPtr] m_Ptr; // 0x10
		private readonly [Object] m_SourceStyle; // 0x18

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D39E90 RVA: 0x3333E90 Offset: 0x3332E90
		internal new [Void] .ctor([Object] sourceStyle, [IntPtr] source);
		// VA: 0x7B46D39F00 RVA: 0x3333F00 Offset: 0x3332F00
		protected override new [Void] Finalize();
		// VA: 0x7B46D39F2C RVA: 0x3333F2C Offset: 0x3332F2C
		public new [Void] .ctor([Int32] left, [Int32] right, [Int32] top, [Int32] bottom);
		// VA: 0x7B46D3A028 RVA: 0x3334028 Offset: 0x3333028
		public override new [String] ToString();
		// VA: 0x7B46D3A24C RVA: 0x333424C Offset: 0x333324C
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D3A25C RVA: 0x333425C Offset: 0x333325C
		private new [Void] Destroy();
		// VA: 0x7B46D39FCC RVA: 0x3333FCC Offset: 0x3332FCC
		private static new [IntPtr] InternalCreate();
		// VA: 0x7B46D39ED8 RVA: 0x3333ED8 Offset: 0x3332ED8
		private static new [Void] InternalDestroy([IntPtr] ptr);
		// VA: 0x7B46D3A5E4 RVA: 0x33345E4 Offset: 0x33335E4
		public new [Int32] get_left();
		// VA: 0x7B46D3A4F4 RVA: 0x33344F4 Offset: 0x33334F4
		public new [Void] set_left([Int32] value);
		// VA: 0x7B46D3A13C RVA: 0x333413C Offset: 0x333313C
		public new [Int32] get_right();
		// VA: 0x7B46D3A530 RVA: 0x3334530 Offset: 0x3333530
		public new [Void] set_right([Int32] value);
		// VA: 0x7B46D3A180 RVA: 0x3334180 Offset: 0x3333180
		public new [Int32] get_top();
		// VA: 0x7B46D3A56C RVA: 0x333456C Offset: 0x333356C
		public new [Void] set_top([Int32] value);
		// VA: 0x7B46D3A1C4 RVA: 0x33341C4 Offset: 0x33331C4
		public new [Int32] get_bottom();
		// VA: 0x7B46D3A5A8 RVA: 0x33345A8 Offset: 0x33335A8
		public new [Void] set_bottom([Int32] value);
		// VA: 0x7B46D3A208 RVA: 0x3334208 Offset: 0x3333208
		public new [Int32] get_horizontal();
		// VA: 0x7B46D3A620 RVA: 0x3334620 Offset: 0x3333620
		public new [Int32] get_vertical();
		// VA: 0x7B46D3A65C RVA: 0x333465C Offset: 0x333365C
		public new [Rect] Remove([Rect] rect);
		// VA: 0x7B46D3A698 RVA: 0x3334698 Offset: 0x3333698
		private new [Void] Remove_Injected(ref [Rect] rect, out [Rect] ret);
		// VA: 0x7B46D3A6FC RVA: 0x33346FC Offset: 0x33336FC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31520
	public sealed class Gizmos : [Object]
	{
		// Fields

		// Methods
		public static new [Void] DrawLine([Vector3] from, [Vector3] to);
		// VA: 0x7B46D3A750 RVA: 0x3334750 Offset: 0x3333750
		public static new [Void] DrawWireSphere([Vector3] center, [Single] radius);
		// VA: 0x7B46D3A7E4 RVA: 0x33347E4 Offset: 0x33337E4
		public static new [Void] DrawSphere([Vector3] center, [Single] radius);
		// VA: 0x7B46D3A884 RVA: 0x3334884 Offset: 0x3333884
		public static new [Void] DrawIcon([Vector3] center, [String] name, [Boolean] allowScaling);
		// VA: 0x7B46D3A924 RVA: 0x3334924 Offset: 0x3333924
		public static new [Void] DrawIcon([Vector3] center, [String] name, [Boolean] allowScaling, [Color] tint);
		// VA: 0x7B46D3A93C RVA: 0x333493C Offset: 0x333393C
		public static new [Void] set_color([Color] value);
		// VA: 0x7B46D3AA00 RVA: 0x3334A00 Offset: 0x3333A00
		private static new [Void] DrawLine_Injected(ref [Vector3] from, ref [Vector3] to);
		// VA: 0x7B46D3A7A0 RVA: 0x33347A0 Offset: 0x33337A0
		private static new [Void] DrawWireSphere_Injected(ref [Vector3] center, [Single] radius);
		// VA: 0x7B46D3A838 RVA: 0x3334838 Offset: 0x3333838
		private static new [Void] DrawSphere_Injected(ref [Vector3] center, [Single] radius);
		// VA: 0x7B46D3A8D8 RVA: 0x33348D8 Offset: 0x33338D8
		private static new [Void] DrawIcon_Injected(ref [Vector3] center, [String] name, [Boolean] allowScaling, ref [Color] tint);
		// VA: 0x7B46D3A9A4 RVA: 0x33349A4 Offset: 0x33339A4
		private static new [Void] set_color_Injected(ref [Color] value);
		// VA: 0x7B46D3AA44 RVA: 0x3334A44 Offset: 0x3333A44
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31820
	private static class BeforeRenderHelper : [Object]
	{
		// Fields
		private static [List`1] s_OrderBlocks; // 0x0

		// Methods
		public static new [Void] Invoke();
		// VA: 0x7B46D2D9E8 RVA: 0x33279E8 Offset: 0x33269E8
		private static new [Void] .cctor();
		// VA: 0x7B46D3AA80 RVA: 0x3334A80 Offset: 0x3333A80

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B316A0
		public struct OrderBlock : [ValueType]
		{
			// Fields
			public [Int32] order; // 0x0
			public [UnityAction] callback; // 0x8

			// Methods
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B319A0
	public static class CustomRenderTextureManager : [Object]
	{
		// Fields
		private static [Action`1] textureLoaded; // 0x0
		private static [Action`1] textureUnloaded; // 0x8

		// Methods
		private static new [Void] InvokeOnTextureLoaded_Internal([CustomRenderTexture] source);
		// VA: 0x7B46D3AB0C RVA: 0x3334B0C Offset: 0x3333B0C
		private static new [Void] InvokeOnTextureUnloaded_Internal([CustomRenderTexture] source);
		// VA: 0x7B46D3AB78 RVA: 0x3334B78 Offset: 0x3333B78
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31D40
	public class Display : [Object]
	{
		// Fields
		public [IntPtr] nativeDisplay; // 0x10
		public static [Display[]] displays; // 0x0
		private static [Display] _mainDisplay; // 0x8
		private static [Int32] m_ActiveEditorGameViewTarget; // 0x10
		private static [Display]->[DisplaysUpdatedDelegate] onDisplaysUpdated; // 0x18

		// Methods
		internal new [Void] .ctor();
		// VA: 0x7B46D3ABE4 RVA: 0x3334BE4 Offset: 0x3333BE4
		internal new [Void] .ctor([IntPtr] nativeDisplay);
		// VA: 0x7B46D3AC20 RVA: 0x3334C20 Offset: 0x3333C20
		public new [Int32] get_renderingWidth();
		// VA: 0x7B46D3AC48 RVA: 0x3334C48 Offset: 0x3333C48
		public new [Int32] get_renderingHeight();
		// VA: 0x7B46D3AD30 RVA: 0x3334D30 Offset: 0x3333D30
		public new [Int32] get_systemWidth();
		// VA: 0x7B46D3ADC4 RVA: 0x3334DC4 Offset: 0x3333DC4
		public new [Int32] get_systemHeight();
		// VA: 0x7B46D3AEAC RVA: 0x3334EAC Offset: 0x3333EAC
		public static new [Vector3] RelativeMouseAt([Vector3] inputMouseCoordinates);
		// VA: 0x7B46D3AF40 RVA: 0x3334F40 Offset: 0x3333F40
		public static new [Display] get_main();
		// VA: 0x7B46D3B05C RVA: 0x333505C Offset: 0x333405C
		internal static new [Void] RecreateDisplayList([IntPtr[]] nativeDisplay);
		// VA: 0x7B46D3B0B4 RVA: 0x33350B4 Offset: 0x33340B4
		internal static new [Void] FireDisplaysUpdated();
		// VA: 0x7B46D3B1FC RVA: 0x33351FC Offset: 0x33341FC
		private static new [Void] GetSystemExtImpl([IntPtr] nativeDisplay, out [Int32] w, out [Int32] h);
		// VA: 0x7B46D3AE58 RVA: 0x3334E58 Offset: 0x3333E58
		private static new [Void] GetRenderingExtImpl([IntPtr] nativeDisplay, out [Int32] w, out [Int32] h);
		// VA: 0x7B46D3ACDC RVA: 0x3334CDC Offset: 0x3333CDC
		private static new [Int32] RelativeMouseAtImpl([Int32] x, [Int32] y, out [Int32] rx, out [Int32] ry);
		// VA: 0x7B46D3B000 RVA: 0x3335000 Offset: 0x3334000
		private static new [Void] .cctor();
		// VA: 0x7B46D3B290 RVA: 0x3335290 Offset: 0x3334290

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B31B20
		public sealed class DisplaysUpdatedDelegate : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D3B39C RVA: 0x333539C Offset: 0x333439C
			public virtual new [Void] Invoke();
			// VA: 0x7B46D3B424 RVA: 0x3335424 Offset: 0x3334424
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B31EC0
	public enum FullScreenMode : [Int32]
	{
		ExclusiveFullScreen = 0,
		FullScreenWindow = 1,
		MaximizedWindow = 2,
		Windowed = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32170
	public struct RefreshRate : [ValueType]
	{
		// Fields
		public [UInt32] numerator; // 0x0
		public [UInt32] denominator; // 0x4

		// Methods
		public new [Double] get_value();
		// VA: 0x7B46D3B438 RVA: 0x3335438 Offset: 0x3334438
		public sealed new [Boolean] Equals([RefreshRate] other);
		// VA: 0x7B46D3B44C RVA: 0x333544C Offset: 0x333444C
		public sealed new [Int32] CompareTo([RefreshRate] other);
		// VA: 0x7B46D3B488 RVA: 0x3335488 Offset: 0x3334488
		public override new [String] ToString();
		// VA: 0x7B46D3B4D8 RVA: 0x33354D8 Offset: 0x33344D8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32310
	public sealed class Screen : [Object]
	{
		// Fields

		// Methods
		public static new [Int32] get_width();
		// VA: 0x7B46D3B574 RVA: 0x3335574 Offset: 0x3334574
		public static new [Int32] get_height();
		// VA: 0x7B46D3B59C RVA: 0x333559C Offset: 0x333459C
		public static new [Single] get_dpi();
		// VA: 0x7B46D3B5C4 RVA: 0x33355C4 Offset: 0x33345C4
		private static new [Void] RequestOrientation([ScreenOrientation] orient);
		// VA: 0x7B46D3B5EC RVA: 0x33355EC Offset: 0x33345EC
		private static new [ScreenOrientation] GetScreenOrientation();
		// VA: 0x7B46D3B628 RVA: 0x3335628 Offset: 0x3334628
		public static new [ScreenOrientation] get_orientation();
		// VA: 0x7B46D3B650 RVA: 0x3335650 Offset: 0x3334650
		public static new [Void] set_orientation([ScreenOrientation] value);
		// VA: 0x7B46D3B678 RVA: 0x3335678 Offset: 0x3334678
		public static new [Resolution] get_currentResolution();
		// VA: 0x7B46D3B710 RVA: 0x3335710 Offset: 0x3334710
		public static new [Boolean] get_fullScreen();
		// VA: 0x7B46D3B790 RVA: 0x3335790 Offset: 0x3334790
		public static new [Void] set_fullScreen([Boolean] value);
		// VA: 0x7B46D3B7B8 RVA: 0x33357B8 Offset: 0x33347B8
		public static new [FullScreenMode] get_fullScreenMode();
		// VA: 0x7B46D3B7F4 RVA: 0x33357F4 Offset: 0x33347F4
		public static new [Void] set_fullScreenMode([FullScreenMode] value);
		// VA: 0x7B46D3B81C RVA: 0x333581C Offset: 0x333481C
		public static new [Void] SetResolution([Int32] width, [Int32] height, [FullScreenMode] fullscreenMode, [RefreshRate] preferredRefreshRate);
		// VA: 0x7B46D3B858 RVA: 0x3335858 Offset: 0x3334858
		public static new [Void] SetResolution([Int32] width, [Int32] height, [FullScreenMode] fullscreenMode);
		// VA: 0x7B46D3B914 RVA: 0x3335914 Offset: 0x3334914
		public static new [Void] SetResolution([Int32] width, [Int32] height, [Boolean] fullscreen, [Int32] preferredRefreshRate);
		// VA: 0x7B46D3B978 RVA: 0x3335978 Offset: 0x3334978
		public static new [Void] SetResolution([Int32] width, [Int32] height, [Boolean] fullscreen);
		// VA: 0x7B46D3B9E8 RVA: 0x33359E8 Offset: 0x33349E8
		public static new [Resolution[]] get_resolutions();
		// VA: 0x7B46D3BA54 RVA: 0x3335A54 Offset: 0x3334A54
		private static new [Void] get_currentResolution_Injected(out [Resolution] ret);
		// VA: 0x7B46D3B754 RVA: 0x3335754 Offset: 0x3334754
		private static new [Void] SetResolution_Injected([Int32] width, [Int32] height, [FullScreenMode] fullscreenMode, ref [RefreshRate] preferredRefreshRate);
		// VA: 0x7B46D3B8B8 RVA: 0x33358B8 Offset: 0x33348B8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32490
	public struct RenderBuffer : [ValueType]
	{
		// Fields
		public [Int32] m_RenderTextureInstanceID; // 0x0
		public [IntPtr] m_BufferPtr; // 0x8

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32610
	public class Graphics : [Object]
	{
		// Fields
		public readonly static [Int32] kMaxDrawMeshInstanceCount; // 0x0
		public static [Dictionary`2] s_RenderInstancedDataLayouts; // 0x8

		// Methods
		private static new [Int32] Internal_GetMaxDrawMeshInstanceCount();
		// VA: 0x7B46D3BA7C RVA: 0x3335A7C Offset: 0x3334A7C
		public static new [GraphicsTier] get_activeTier();
		// VA: 0x7B46D3BAA4 RVA: 0x3335AA4 Offset: 0x3334AA4
		public static new [Void] set_activeTier([GraphicsTier] value);
		// VA: 0x7B46D3BACC RVA: 0x3335ACC Offset: 0x3334ACC
		private static new [Void] Internal_SetNullRT();
		// VA: 0x7B46D3BB08 RVA: 0x3335B08 Offset: 0x3334B08
		private static new [Void] Internal_SetRTSimple([RenderBuffer] color, [RenderBuffer] depth, [Int32] mip, [CubemapFace] face, [Int32] depthSlice);
		// VA: 0x7B46D3BB30 RVA: 0x3335B30 Offset: 0x3334B30
		private static new [Void] Internal_DrawMeshNow2([Mesh] mesh, [Int32] subsetIndex, [Matrix4x4] matrix);
		// VA: 0x7B46D3BC44 RVA: 0x3335C44 Offset: 0x3334C44
		private static new [Void] Internal_BlitMaterial5([Texture] source, [RenderTexture] dest, [Material] mat, [Int32] pass, [Boolean] setRT);
		// VA: 0x7B46D3BD24 RVA: 0x3335D24 Offset: 0x3334D24
		private static new [Void] Internal_BlitMultiTap4([Texture] source, [RenderTexture] dest, [Material] mat, [Vector2[]] offsets);
		// VA: 0x7B46D3BD90 RVA: 0x3335D90 Offset: 0x3334D90
		private static new [Void] Blit2([Texture] source, [RenderTexture] dest);
		// VA: 0x7B46D3BDEC RVA: 0x3335DEC Offset: 0x3334DEC
		internal static new [Void] SetRenderTargetImpl([RenderBuffer] colorBuffer, [RenderBuffer] depthBuffer, [Int32] mipLevel, [CubemapFace] face, [Int32] depthSlice);
		// VA: 0x7B46D3BE30 RVA: 0x3335E30 Offset: 0x3334E30
		internal static new [Void] SetRenderTargetImpl([RenderTexture] rt, [Int32] mipLevel, [CubemapFace] face, [Int32] depthSlice);
		// VA: 0x7B46D3BECC RVA: 0x3335ECC Offset: 0x3334ECC
		public static new [Void] SetRenderTarget([RenderTexture] rt, [Int32] mipLevel, [CubemapFace] face, [Int32] depthSlice);
		// VA: 0x7B46D3C000 RVA: 0x3336000 Offset: 0x3335000
		public static new [Void] DrawMeshNow([Mesh] mesh, [Matrix4x4] matrix, [Int32] materialIndex);
		// VA: 0x7B46D3C07C RVA: 0x333607C Offset: 0x333507C
		public static new [Void] DrawMeshNow([Mesh] mesh, [Matrix4x4] matrix);
		// VA: 0x7B46D3C194 RVA: 0x3336194 Offset: 0x3335194
		public static new [Void] Blit([Texture] source, [RenderTexture] dest);
		// VA: 0x7B46D3C228 RVA: 0x3336228 Offset: 0x3335228
		public static new [Void] Blit([Texture] source, [RenderTexture] dest, [Material] mat, [Int32] pass);
		// VA: 0x7B46D3C2AC RVA: 0x33362AC Offset: 0x33352AC
		public static new [Void] Blit([Texture] source, [RenderTexture] dest, [Material] mat);
		// VA: 0x7B46D3C34C RVA: 0x333634C Offset: 0x333534C
		public static new [Void] BlitMultiTap([Texture] source, [RenderTexture] dest, [Material] mat, [Vector2[]] offsets);
		// VA: 0x7B46D3C3BC RVA: 0x33363BC Offset: 0x33353BC
		public static new [Void] SetRenderTarget([RenderTexture] rt);
		// VA: 0x7B46D3C4BC RVA: 0x33364BC Offset: 0x33354BC
		private static new [Void] .cctor();
		// VA: 0x7B46D3C51C RVA: 0x333651C Offset: 0x333551C
		private static new [Void] Internal_SetRTSimple_Injected(ref [RenderBuffer] color, ref [RenderBuffer] depth, [Int32] mip, [CubemapFace] face, [Int32] depthSlice);
		// VA: 0x7B46D3BBD8 RVA: 0x3335BD8 Offset: 0x3334BD8
		private static new [Void] Internal_DrawMeshNow2_Injected([Mesh] mesh, [Int32] subsetIndex, ref [Matrix4x4] matrix);
		// VA: 0x7B46D3BCD0 RVA: 0x3335CD0 Offset: 0x3334CD0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32790
	public sealed class GL : [Object]
	{
		// Fields

		// Methods
		public static new [Void] Vertex3([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D3C5D8 RVA: 0x33365D8 Offset: 0x33355D8
		public static new [Void] TexCoord3([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D3C628 RVA: 0x3336628 Offset: 0x3335628
		public static new [Void] TexCoord2([Single] x, [Single] y);
		// VA: 0x7B46D3C678 RVA: 0x3336678 Offset: 0x3335678
		public static new [Void] MultiTexCoord3([Int32] unit, [Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D3C6BC RVA: 0x33366BC Offset: 0x33356BC
		public static new [Void] MultiTexCoord2([Int32] unit, [Single] x, [Single] y);
		// VA: 0x7B46D3C720 RVA: 0x3336720 Offset: 0x3335720
		private static new [Void] ImmediateColor([Single] r, [Single] g, [Single] b, [Single] a);
		// VA: 0x7B46D3C778 RVA: 0x3336778 Offset: 0x3335778
		public static new [Void] Color([Color] c);
		// VA: 0x7B46D3C7D0 RVA: 0x33367D0 Offset: 0x33357D0
		private static new [Void] SetViewMatrix([Matrix4x4] m);
		// VA: 0x7B46D3C828 RVA: 0x3336828 Offset: 0x3335828
		public static new [Void] set_modelview([Matrix4x4] value);
		// VA: 0x7B46D3C8A0 RVA: 0x33368A0 Offset: 0x33358A0
		public static new [Void] PushMatrix();
		// VA: 0x7B46D3C8EC RVA: 0x33368EC Offset: 0x33358EC
		public static new [Void] PopMatrix();
		// VA: 0x7B46D3C914 RVA: 0x3336914 Offset: 0x3335914
		public static new [Void] LoadIdentity();
		// VA: 0x7B46D3C93C RVA: 0x333693C Offset: 0x333593C
		public static new [Void] LoadOrtho();
		// VA: 0x7B46D3C964 RVA: 0x3336964 Offset: 0x3335964
		public static new [Void] LoadProjectionMatrix([Matrix4x4] mat);
		// VA: 0x7B46D3C98C RVA: 0x333698C Offset: 0x333598C
		public static new [Matrix4x4] GetGPUProjectionMatrix([Matrix4x4] proj, [Boolean] renderIntoTexture);
		// VA: 0x7B46D3CA04 RVA: 0x3336A04 Offset: 0x3335A04
		private static new [Void] GLLoadPixelMatrixScript([Single] left, [Single] right, [Single] bottom, [Single] top);
		// VA: 0x7B46D3CAD4 RVA: 0x3336AD4 Offset: 0x3335AD4
		public static new [Void] LoadPixelMatrix([Single] left, [Single] right, [Single] bottom, [Single] top);
		// VA: 0x7B46D3CB2C RVA: 0x3336B2C Offset: 0x3335B2C
		public static new [Void] Begin([Int32] mode);
		// VA: 0x7B46D3CB84 RVA: 0x3336B84 Offset: 0x3335B84
		public static new [Void] End();
		// VA: 0x7B46D3CBC0 RVA: 0x3336BC0 Offset: 0x3335BC0
		private static new [Void] GLClear([Boolean] clearDepth, [Boolean] clearColor, [Color] backgroundColor, [Single] depth);
		// VA: 0x7B46D3CBE8 RVA: 0x3336BE8 Offset: 0x3335BE8
		public static new [Void] Clear([Boolean] clearDepth, [Boolean] clearColor, [Color] backgroundColor, [Single] depth);
		// VA: 0x7B46D3CCB8 RVA: 0x3336CB8 Offset: 0x3335CB8
		public static new [Void] Clear([Boolean] clearDepth, [Boolean] clearColor, [Color] backgroundColor);
		// VA: 0x7B46D3CCC4 RVA: 0x3336CC4 Offset: 0x3335CC4
		public static new [Void] Viewport([Rect] pixelRect);
		// VA: 0x7B46D3CCD4 RVA: 0x3336CD4 Offset: 0x3335CD4
		public static new [Void] ClearWithSkybox([Boolean] clearDepth, [Camera] camera);
		// VA: 0x7B46D3CD54 RVA: 0x3336D54 Offset: 0x3335D54
		private static new [Void] SetViewMatrix_Injected(ref [Matrix4x4] m);
		// VA: 0x7B46D3C864 RVA: 0x3336864 Offset: 0x3335864
		private static new [Void] LoadProjectionMatrix_Injected(ref [Matrix4x4] mat);
		// VA: 0x7B46D3C9C8 RVA: 0x33369C8 Offset: 0x33359C8
		private static new [Void] GetGPUProjectionMatrix_Injected(ref [Matrix4x4] proj, [Boolean] renderIntoTexture, out [Matrix4x4] ret);
		// VA: 0x7B46D3CA80 RVA: 0x3336A80 Offset: 0x3335A80
		private static new [Void] GLClear_Injected([Boolean] clearDepth, [Boolean] clearColor, ref [Color] backgroundColor, [Single] depth);
		// VA: 0x7B46D3CC54 RVA: 0x3336C54 Offset: 0x3335C54
		private static new [Void] Viewport_Injected(ref [Rect] pixelRect);
		// VA: 0x7B46D3CD18 RVA: 0x3336D18 Offset: 0x3335D18
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32910
	public sealed class LightmapData : [Object]
	{
		// Fields
		public [Texture2D] m_Light; // 0x10
		public [Texture2D] m_Dir; // 0x18
		public [Texture2D] m_ShadowMask; // 0x20

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D3CD98 RVA: 0x3336D98 Offset: 0x3335D98
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32A90
	public sealed class LightmapSettings : [Object]
	{
		// Fields

		// Methods
		private new [Void] .ctor();
		// VA: 0x7B46D3CDA0 RVA: 0x3336DA0 Offset: 0x3335DA0
		public static new [LightmapData[]] get_lightmaps();
		// VA: 0x7B46D3CDF8 RVA: 0x3336DF8 Offset: 0x3335DF8
		public static new [Void] set_lightmaps([LightmapData[]] value);
		// VA: 0x7B46D3CE20 RVA: 0x3336E20 Offset: 0x3335E20
		public static new [LightmapsMode] get_lightmapsMode();
		// VA: 0x7B46D3CE5C RVA: 0x3336E5C Offset: 0x3335E5C
		public static new [Void] set_lightmapsMode([LightmapsMode] value);
		// VA: 0x7B46D3CE84 RVA: 0x3336E84 Offset: 0x3335E84
		public static new [LightProbes] get_lightProbes();
		// VA: 0x7B46D3CEC0 RVA: 0x3336EC0 Offset: 0x3335EC0
		public static new [Void] set_lightProbes([LightProbes] value);
		// VA: 0x7B46D3CEE8 RVA: 0x3336EE8 Offset: 0x3335EE8
		internal static new [Void] Reset();
		// VA: 0x7B46D3CF24 RVA: 0x3336F24 Offset: 0x3335F24
		public static new [LightmapsModeLegacy] get_lightmapsModeLegacy();
		// VA: 0x7B46D3CF4C RVA: 0x3336F4C Offset: 0x3335F4C
		public static new [Void] set_lightmapsModeLegacy([LightmapsModeLegacy] value);
		// VA: 0x7B46D3CF54 RVA: 0x3336F54 Offset: 0x3335F54
		public static new [ColorSpace] get_bakedColorSpace();
		// VA: 0x7B46D3CF58 RVA: 0x3336F58 Offset: 0x3335F58
		public static new [Void] set_bakedColorSpace([ColorSpace] value);
		// VA: 0x7B46D3CFA8 RVA: 0x3336FA8 Offset: 0x3335FA8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32C10
	public sealed class LightProbes : [Object]
	{
		// Fields
		private static [Action] lightProbesUpdated; // 0x0
		private static [Action] tetrahedralizationCompleted; // 0x8
		private static [Action] needsRetetrahedralization; // 0x10

		// Methods
		private new [Void] .ctor();
		// VA: 0x7B46D3CFAC RVA: 0x3336FAC Offset: 0x3335FAC
		private static new [Void] Internal_CallLightProbesUpdatedFunction();
		// VA: 0x7B46D3D004 RVA: 0x3337004 Offset: 0x3336004
		private static new [Void] Internal_CallTetrahedralizationCompletedFunction();
		// VA: 0x7B46D3D068 RVA: 0x3337068 Offset: 0x3336068
		private static new [Void] Internal_CallNeedsRetetrahedralizationFunction();
		// VA: 0x7B46D3D0CC RVA: 0x33370CC Offset: 0x33360CC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32D90
	public struct Resolution : [ValueType]
	{
		// Fields
		private [Int32] m_Width; // 0x0
		private [Int32] m_Height; // 0x4
		private [RefreshRate] m_RefreshRate; // 0x8

		// Methods
		public new [Int32] get_width();
		// VA: 0x7B46D3D130 RVA: 0x3337130 Offset: 0x3336130
		public new [Int32] get_height();
		// VA: 0x7B46D3D138 RVA: 0x3337138 Offset: 0x3336138
		public new [RefreshRate] get_refreshRateRatio();
		// VA: 0x7B46D3D140 RVA: 0x3337140 Offset: 0x3336140
		public override new [String] ToString();
		// VA: 0x7B46D3D148 RVA: 0x3337148 Offset: 0x3336148
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B32F10
	private struct RenderInstancedDataLayout : [ValueType]
	{
		// Fields
		// private readonly [Int32] size { get; set; }
		private readonly [Int32] <size>k__BackingField; // 0x0
		// private readonly [Int32] offsetObjectToWorld { get; set; }
		private readonly [Int32] <offsetObjectToWorld>k__BackingField; // 0x4
		// private readonly [Int32] offsetPrevObjectToWorld { get; set; }
		private readonly [Int32] <offsetPrevObjectToWorld>k__BackingField; // 0x8
		// private readonly [Int32] offsetRenderingLayerMask { get; set; }
		private readonly [Int32] <offsetRenderingLayerMask>k__BackingField; // 0xC

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33090
	public sealed class QualitySettings : [Object]
	{
		// Fields
		private static [Action`2] activeQualityLevelChanged; // 0x0

		// Methods
		internal static new [Void] OnActiveQualityLevelChanged([Int32] previousQualityLevel, [Int32] currentQualityLevel);
		// VA: 0x7B46D3D2C8 RVA: 0x33372C8 Offset: 0x33362C8
		public static new [Int32] get_vSyncCount();
		// VA: 0x7B46D3D348 RVA: 0x3337348 Offset: 0x3336348
		public static new [Void] set_vSyncCount([Int32] value);
		// VA: 0x7B46D3D370 RVA: 0x3337370 Offset: 0x3336370
		public static new [Int32] get_antiAliasing();
		// VA: 0x7B46D3D3AC RVA: 0x33373AC Offset: 0x33363AC
		public static new [Void] set_antiAliasing([Int32] value);
		// VA: 0x7B46D3D3D4 RVA: 0x33373D4 Offset: 0x33363D4
		public static new [ColorSpace] get_desiredColorSpace();
		// VA: 0x7B46D3CF80 RVA: 0x3336F80 Offset: 0x3335F80
		public static new [ColorSpace] get_activeColorSpace();
		// VA: 0x7B46D3D410 RVA: 0x3337410 Offset: 0x3336410
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33210
	public sealed class ImageEffectTransformsToLDR : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D3D438 RVA: 0x3337438 Offset: 0x3336438
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B333C0
	public sealed class ImageEffectOpaque : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D3D440 RVA: 0x3337440 Offset: 0x3336440
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33570
	public enum LightmapsModeLegacy : [Int32]
	{
		Single = 0,
		Dual = 1,
		Directional = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33820
	public sealed class TrailRenderer : [Renderer]
	{
		// Fields

		// Methods
		public new [Int32] get_numPositions();
		// VA: 0x7B46D3D448 RVA: 0x3337448 Offset: 0x3336448
		public new [Single] get_time();
		// VA: 0x7B46D3D4C0 RVA: 0x33374C0 Offset: 0x33364C0
		public new [Void] set_time([Single] value);
		// VA: 0x7B46D3D4FC RVA: 0x33374FC Offset: 0x33364FC
		public new [Single] get_startWidth();
		// VA: 0x7B46D3D548 RVA: 0x3337548 Offset: 0x3336548
		public new [Void] set_startWidth([Single] value);
		// VA: 0x7B46D3D584 RVA: 0x3337584 Offset: 0x3336584
		public new [Single] get_endWidth();
		// VA: 0x7B46D3D5D0 RVA: 0x33375D0 Offset: 0x33365D0
		public new [Void] set_endWidth([Single] value);
		// VA: 0x7B46D3D60C RVA: 0x333760C Offset: 0x333660C
		public new [Single] get_widthMultiplier();
		// VA: 0x7B46D3D658 RVA: 0x3337658 Offset: 0x3336658
		public new [Void] set_widthMultiplier([Single] value);
		// VA: 0x7B46D3D694 RVA: 0x3337694 Offset: 0x3336694
		public new [Boolean] get_autodestruct();
		// VA: 0x7B46D3D6E0 RVA: 0x33376E0 Offset: 0x33366E0
		public new [Void] set_autodestruct([Boolean] value);
		// VA: 0x7B46D3D71C RVA: 0x333771C Offset: 0x333671C
		public new [Boolean] get_emitting();
		// VA: 0x7B46D3D760 RVA: 0x3337760 Offset: 0x3336760
		public new [Void] set_emitting([Boolean] value);
		// VA: 0x7B46D3D79C RVA: 0x333779C Offset: 0x333679C
		public new [Int32] get_numCornerVertices();
		// VA: 0x7B46D3D7E0 RVA: 0x33377E0 Offset: 0x33367E0
		public new [Void] set_numCornerVertices([Int32] value);
		// VA: 0x7B46D3D81C RVA: 0x333781C Offset: 0x333681C
		public new [Int32] get_numCapVertices();
		// VA: 0x7B46D3D860 RVA: 0x3337860 Offset: 0x3336860
		public new [Void] set_numCapVertices([Int32] value);
		// VA: 0x7B46D3D89C RVA: 0x333789C Offset: 0x333689C
		public new [Single] get_minVertexDistance();
		// VA: 0x7B46D3D8E0 RVA: 0x33378E0 Offset: 0x33368E0
		public new [Void] set_minVertexDistance([Single] value);
		// VA: 0x7B46D3D91C RVA: 0x333791C Offset: 0x333691C
		public new [Color] get_startColor();
		// VA: 0x7B46D3D968 RVA: 0x3337968 Offset: 0x3336968
		public new [Void] set_startColor([Color] value);
		// VA: 0x7B46D3DA04 RVA: 0x3337A04 Offset: 0x3336A04
		public new [Color] get_endColor();
		// VA: 0x7B46D3DA9C RVA: 0x3337A9C Offset: 0x3336A9C
		public new [Void] set_endColor([Color] value);
		// VA: 0x7B46D3DB38 RVA: 0x3337B38 Offset: 0x3336B38
		public new [Int32] get_positionCount();
		// VA: 0x7B46D3D484 RVA: 0x3337484 Offset: 0x3336484
		public new [Void] SetPosition([Int32] index, [Vector3] position);
		// VA: 0x7B46D3DBD0 RVA: 0x3337BD0 Offset: 0x3336BD0
		public new [Vector3] GetPosition([Int32] index);
		// VA: 0x7B46D3DC80 RVA: 0x3337C80 Offset: 0x3336C80
		public new [Vector2] get_textureScale();
		// VA: 0x7B46D3DD38 RVA: 0x3337D38 Offset: 0x3336D38
		public new [Void] set_textureScale([Vector2] value);
		// VA: 0x7B46D3DDC8 RVA: 0x3337DC8 Offset: 0x3336DC8
		public new [Single] get_shadowBias();
		// VA: 0x7B46D3DE54 RVA: 0x3337E54 Offset: 0x3336E54
		public new [Void] set_shadowBias([Single] value);
		// VA: 0x7B46D3DE90 RVA: 0x3337E90 Offset: 0x3336E90
		public new [Boolean] get_generateLightingData();
		// VA: 0x7B46D3DEDC RVA: 0x3337EDC Offset: 0x3336EDC
		public new [Void] set_generateLightingData([Boolean] value);
		// VA: 0x7B46D3DF18 RVA: 0x3337F18 Offset: 0x3336F18
		public new [LineTextureMode] get_textureMode();
		// VA: 0x7B46D3DF5C RVA: 0x3337F5C Offset: 0x3336F5C
		public new [Void] set_textureMode([LineTextureMode] value);
		// VA: 0x7B46D3DF98 RVA: 0x3337F98 Offset: 0x3336F98
		public new [LineAlignment] get_alignment();
		// VA: 0x7B46D3DFDC RVA: 0x3337FDC Offset: 0x3336FDC
		public new [Void] set_alignment([LineAlignment] value);
		// VA: 0x7B46D3E018 RVA: 0x3338018 Offset: 0x3337018
		public new [SpriteMaskInteraction] get_maskInteraction();
		// VA: 0x7B46D3E05C RVA: 0x333805C Offset: 0x333705C
		public new [Void] set_maskInteraction([SpriteMaskInteraction] value);
		// VA: 0x7B46D3E098 RVA: 0x3338098 Offset: 0x3337098
		public new [Void] Clear();
		// VA: 0x7B46D3E0DC RVA: 0x33380DC Offset: 0x33370DC
		public new [Void] BakeMesh([Mesh] mesh, [Boolean] useTransform);
		// VA: 0x7B46D3E118 RVA: 0x3338118 Offset: 0x3337118
		public new [Void] BakeMesh([Mesh] mesh, [Camera] camera, [Boolean] useTransform);
		// VA: 0x7B46D3E198 RVA: 0x3338198 Offset: 0x3337198
		public new [AnimationCurve] get_widthCurve();
		// VA: 0x7B46D3E1F4 RVA: 0x33381F4 Offset: 0x33371F4
		public new [Void] set_widthCurve([AnimationCurve] value);
		// VA: 0x7B46D3E26C RVA: 0x333826C Offset: 0x333726C
		public new [Gradient] get_colorGradient();
		// VA: 0x7B46D3E2F4 RVA: 0x33382F4 Offset: 0x33372F4
		public new [Void] set_colorGradient([Gradient] value);
		// VA: 0x7B46D3E36C RVA: 0x333836C Offset: 0x333736C
		private new [AnimationCurve] GetWidthCurveCopy();
		// VA: 0x7B46D3E230 RVA: 0x3338230 Offset: 0x3337230
		private new [Void] SetWidthCurve([AnimationCurve] curve);
		// VA: 0x7B46D3E2B0 RVA: 0x33382B0 Offset: 0x33372B0
		private new [Gradient] GetColorGradientCopy();
		// VA: 0x7B46D3E330 RVA: 0x3338330 Offset: 0x3337330
		private new [Void] SetColorGradient([Gradient] curve);
		// VA: 0x7B46D3E3B0 RVA: 0x33383B0 Offset: 0x33373B0
		public new [Int32] GetPositions([Out] [Vector3[]] positions);
		// VA: 0x7B46D3E3F4 RVA: 0x33383F4 Offset: 0x33373F4
		public new [Int32] GetVisiblePositions([Out] [Vector3[]] positions);
		// VA: 0x7B46D3E438 RVA: 0x3338438 Offset: 0x3337438
		public new [Void] SetPositions([Vector3[]] positions);
		// VA: 0x7B46D3E47C RVA: 0x333847C Offset: 0x333747C
		public new [Void] AddPosition([Vector3] position);
		// VA: 0x7B46D3E4C0 RVA: 0x33384C0 Offset: 0x33374C0
		public new [Void] AddPositions([Vector3[]] positions);
		// VA: 0x7B46D3E558 RVA: 0x3338558 Offset: 0x3337558
		public new [Void] SetPositions([NativeArray`1] positions);
		// VA: 0x7B46D3E59C RVA: 0x333859C Offset: 0x333759C
		public new [Void] SetPositions([NativeSlice`1] positions);
		// VA: 0x7B46D3E688 RVA: 0x3338688 Offset: 0x3337688
		public new [Int32] GetPositions([Out] [NativeArray`1] positions);
		// VA: 0x7B46D3E75C RVA: 0x333875C Offset: 0x333775C
		public new [Int32] GetPositions([Out] [NativeSlice`1] positions);
		// VA: 0x7B46D3E848 RVA: 0x3338848 Offset: 0x3337848
		public new [Int32] GetVisiblePositions([Out] [NativeArray`1] positions);
		// VA: 0x7B46D3E91C RVA: 0x333891C Offset: 0x333791C
		public new [Int32] GetVisiblePositions([Out] [NativeSlice`1] positions);
		// VA: 0x7B46D3EA08 RVA: 0x3338A08 Offset: 0x3337A08
		public new [Void] AddPositions([Out] [NativeArray`1] positions);
		// VA: 0x7B46D3EADC RVA: 0x3338ADC Offset: 0x3337ADC
		public new [Void] AddPositions([Out] [NativeSlice`1] positions);
		// VA: 0x7B46D3EBC8 RVA: 0x3338BC8 Offset: 0x3337BC8
		private new [Void] SetPositionsWithNativeContainer([IntPtr] positions, [Int32] count);
		// VA: 0x7B46D3E634 RVA: 0x3338634 Offset: 0x3337634
		private new [Int32] GetPositionsWithNativeContainer([IntPtr] positions, [Int32] length);
		// VA: 0x7B46D3E7F4 RVA: 0x33387F4 Offset: 0x33377F4
		private new [Int32] GetVisiblePositionsWithNativeContainer([IntPtr] positions, [Int32] length);
		// VA: 0x7B46D3E9B4 RVA: 0x33389B4 Offset: 0x33379B4
		private new [Void] AddPositionsWithNativeContainer([IntPtr] positions, [Int32] length);
		// VA: 0x7B46D3EB74 RVA: 0x3338B74 Offset: 0x3337B74
		public new [Void] .ctor();
		// VA: 0x7B46D3EC9C RVA: 0x3338C9C Offset: 0x3337C9C
		private new [Void] get_startColor_Injected(out [Color] ret);
		// VA: 0x7B46D3D9C0 RVA: 0x33379C0 Offset: 0x33369C0
		private new [Void] set_startColor_Injected(ref [Color] value);
		// VA: 0x7B46D3DA58 RVA: 0x3337A58 Offset: 0x3336A58
		private new [Void] get_endColor_Injected(out [Color] ret);
		// VA: 0x7B46D3DAF4 RVA: 0x3337AF4 Offset: 0x3336AF4
		private new [Void] set_endColor_Injected(ref [Color] value);
		// VA: 0x7B46D3DB8C RVA: 0x3337B8C Offset: 0x3336B8C
		private new [Void] SetPosition_Injected([Int32] index, ref [Vector3] position);
		// VA: 0x7B46D3DC2C RVA: 0x3337C2C Offset: 0x3336C2C
		private new [Void] GetPosition_Injected([Int32] index, out [Vector3] ret);
		// VA: 0x7B46D3DCE4 RVA: 0x3337CE4 Offset: 0x3336CE4
		private new [Void] get_textureScale_Injected(out [Vector2] ret);
		// VA: 0x7B46D3DD84 RVA: 0x3337D84 Offset: 0x3336D84
		private new [Void] set_textureScale_Injected(ref [Vector2] value);
		// VA: 0x7B46D3DE10 RVA: 0x3337E10 Offset: 0x3336E10
		private new [Void] AddPosition_Injected(ref [Vector3] position);
		// VA: 0x7B46D3E514 RVA: 0x3338514 Offset: 0x3337514
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33B20
	public sealed class LineRenderer : [Renderer]
	{
		// Fields

		// Methods
		public new [Void] set_startWidth([Single] value);
		// VA: 0x7B46D3ECAC RVA: 0x3338CAC Offset: 0x3337CAC
		public new [Void] set_endWidth([Single] value);
		// VA: 0x7B46D3ECF8 RVA: 0x3338CF8 Offset: 0x3337CF8
		public new [Void] set_useWorldSpace([Boolean] value);
		// VA: 0x7B46D3ED44 RVA: 0x3338D44 Offset: 0x3337D44
		public new [Color] get_startColor();
		// VA: 0x7B46D3ED88 RVA: 0x3338D88 Offset: 0x3337D88
		public new [Void] set_startColor([Color] value);
		// VA: 0x7B46D3EE24 RVA: 0x3338E24 Offset: 0x3337E24
		public new [Color] get_endColor();
		// VA: 0x7B46D3EEBC RVA: 0x3338EBC Offset: 0x3337EBC
		public new [Void] set_endColor([Color] value);
		// VA: 0x7B46D3EF58 RVA: 0x3338F58 Offset: 0x3337F58
		public new [Void] set_positionCount([Int32] value);
		// VA: 0x7B46D3EFF0 RVA: 0x3338FF0 Offset: 0x3337FF0
		public new [Void] SetPosition([Int32] index, [Vector3] position);
		// VA: 0x7B46D3F034 RVA: 0x3339034 Offset: 0x3338034
		public new [Void] set_textureMode([LineTextureMode] value);
		// VA: 0x7B46D3F0E4 RVA: 0x33390E4 Offset: 0x33380E4
		private new [Void] get_startColor_Injected(out [Color] ret);
		// VA: 0x7B46D3EDE0 RVA: 0x3338DE0 Offset: 0x3337DE0
		private new [Void] set_startColor_Injected(ref [Color] value);
		// VA: 0x7B46D3EE78 RVA: 0x3338E78 Offset: 0x3337E78
		private new [Void] get_endColor_Injected(out [Color] ret);
		// VA: 0x7B46D3EF14 RVA: 0x3338F14 Offset: 0x3337F14
		private new [Void] set_endColor_Injected(ref [Color] value);
		// VA: 0x7B46D3EFAC RVA: 0x3338FAC Offset: 0x3337FAC
		private new [Void] SetPosition_Injected([Int32] index, ref [Vector3] position);
		// VA: 0x7B46D3F090 RVA: 0x3339090 Offset: 0x3338090
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33CA0
	public sealed class MaterialPropertyBlock : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
		private new [Void] SetFloatImpl([Int32] name, [Single] value);
		// VA: 0x7B46D3F128 RVA: 0x3339128 Offset: 0x3338128
		private new [Void] SetVectorImpl([Int32] name, [Vector4] value);
		// VA: 0x7B46D3F17C RVA: 0x333917C Offset: 0x333817C
		private new [Void] SetColorImpl([Int32] name, [Color] value);
		// VA: 0x7B46D3F22C RVA: 0x333922C Offset: 0x333822C
		private new [Void] SetTextureImpl([Int32] name, [Texture] value);
		// VA: 0x7B46D3F2DC RVA: 0x33392DC Offset: 0x33382DC
		private new [Void] SetVectorArrayImpl([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D3F330 RVA: 0x3339330 Offset: 0x3338330
		private static new [IntPtr] CreateImpl();
		// VA: 0x7B46D3F38C RVA: 0x333938C Offset: 0x333838C
		private static new [Void] DestroyImpl([IntPtr] mpb);
		// VA: 0x7B46D3F3B4 RVA: 0x33393B4 Offset: 0x33383B4
		private new [Void] Clear([Boolean] keepMemory);
		// VA: 0x7B46D3F3F0 RVA: 0x33393F0 Offset: 0x33383F0
		public new [Void] Clear();
		// VA: 0x7B46D3F434 RVA: 0x3339434 Offset: 0x3338434
		private new [Void] SetVectorArray([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D3F474 RVA: 0x3339474 Offset: 0x3338474
		public new [Void] .ctor();
		// VA: 0x7B46D3F580 RVA: 0x3339580 Offset: 0x3338580
		protected override new [Void] Finalize();
		// VA: 0x7B46D3F5C8 RVA: 0x33395C8 Offset: 0x33385C8
		private new [Void] Dispose();
		// VA: 0x7B46D3F65C RVA: 0x333965C Offset: 0x333865C
		public new [Void] SetFloat([Int32] nameID, [Single] value);
		// VA: 0x7B46D3F700 RVA: 0x3339700 Offset: 0x3338700
		public new [Void] SetVector([Int32] nameID, [Vector4] value);
		// VA: 0x7B46D3F754 RVA: 0x3339754 Offset: 0x3338754
		public new [Void] SetColor([Int32] nameID, [Color] value);
		// VA: 0x7B46D3F758 RVA: 0x3339758 Offset: 0x3338758
		public new [Void] SetTexture([Int32] nameID, [Texture] value);
		// VA: 0x7B46D3F75C RVA: 0x333975C Offset: 0x333875C
		public new [Void] SetVectorArray([Int32] nameID, [Vector4[]] values);
		// VA: 0x7B46D3F7B0 RVA: 0x33397B0 Offset: 0x33387B0
		private new [Void] SetVectorImpl_Injected([Int32] name, ref [Vector4] value);
		// VA: 0x7B46D3F1D8 RVA: 0x33391D8 Offset: 0x33381D8
		private new [Void] SetColorImpl_Injected([Int32] name, ref [Color] value);
		// VA: 0x7B46D3F288 RVA: 0x3339288 Offset: 0x3338288
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B339A0
	public class Renderer : [Component]
	{
		// Fields

		// Methods
		private new [Material] GetMaterial();
		// VA: 0x7B46D3F7C8 RVA: 0x33397C8 Offset: 0x33387C8
		private new [Material] GetSharedMaterial();
		// VA: 0x7B46D3F804 RVA: 0x3339804 Offset: 0x3338804
		private new [Void] SetMaterial([Material] m);
		// VA: 0x7B46D3F840 RVA: 0x3339840 Offset: 0x3338840
		private new [Void] SetMaterialArray([Material[]] m, [Int32] length);
		// VA: 0x7B46D3F884 RVA: 0x3339884 Offset: 0x3338884
		private new [Void] SetMaterialArray([Material[]] m);
		// VA: 0x7B46D3F8D8 RVA: 0x33398D8 Offset: 0x33388D8
		public new [Boolean] get_enabled();
		// VA: 0x7B46D3F940 RVA: 0x3339940 Offset: 0x3338940
		public new [Void] set_enabled([Boolean] value);
		// VA: 0x7B46D3F97C RVA: 0x333997C Offset: 0x333897C
		public new [Boolean] get_isVisible();
		// VA: 0x7B46D3F9C0 RVA: 0x33399C0 Offset: 0x33389C0
		public new [Void] set_shadowCastingMode([ShadowCastingMode] value);
		// VA: 0x7B46D3F9FC RVA: 0x33399FC Offset: 0x33389FC
		public new [Void] set_receiveShadows([Boolean] value);
		// VA: 0x7B46D3FA40 RVA: 0x3339A40 Offset: 0x3338A40
		public new [String] get_sortingLayerName();
		// VA: 0x7B46D3FA84 RVA: 0x3339A84 Offset: 0x3338A84
		public new [Void] set_sortingLayerName([String] value);
		// VA: 0x7B46D3FAC0 RVA: 0x3339AC0 Offset: 0x3338AC0
		public new [Int32] get_sortingLayerID();
		// VA: 0x7B46D3FB04 RVA: 0x3339B04 Offset: 0x3338B04
		public new [Void] set_sortingLayerID([Int32] value);
		// VA: 0x7B46D3FB40 RVA: 0x3339B40 Offset: 0x3338B40
		public new [Int32] get_sortingOrder();
		// VA: 0x7B46D3FB84 RVA: 0x3339B84 Offset: 0x3338B84
		public new [Void] set_sortingOrder([Int32] value);
		// VA: 0x7B46D3FBC0 RVA: 0x3339BC0 Offset: 0x3338BC0
		internal new [Int32] get_sortingGroupID();
		// VA: 0x7B46D3FC04 RVA: 0x3339C04 Offset: 0x3338C04
		internal new [Int32] get_sortingGroupOrder();
		// VA: 0x7B46D3FC40 RVA: 0x3339C40 Offset: 0x3338C40
		private new [Material[]] GetSharedMaterialArray();
		// VA: 0x7B46D3FC7C RVA: 0x3339C7C Offset: 0x3338C7C
		public new [Material] get_material();
		// VA: 0x7B46D3FCB8 RVA: 0x3339CB8 Offset: 0x3338CB8
		public new [Void] set_material([Material] value);
		// VA: 0x7B46D3FCF4 RVA: 0x3339CF4 Offset: 0x3338CF4
		public new [Material] get_sharedMaterial();
		// VA: 0x7B46D3FD38 RVA: 0x3339D38 Offset: 0x3338D38
		public new [Void] set_sharedMaterial([Material] value);
		// VA: 0x7B46D3FD74 RVA: 0x3339D74 Offset: 0x3338D74
		public new [Material[]] get_sharedMaterials();
		// VA: 0x7B46D3FDB8 RVA: 0x3339DB8 Offset: 0x3338DB8
		public new [Void] set_sharedMaterials([Material[]] value);
		// VA: 0x7B46D3FDF4 RVA: 0x3339DF4 Offset: 0x3338DF4
		public new [Void] .ctor();
		// VA: 0x7B46D3ECA4 RVA: 0x3338CA4 Offset: 0x3337CA4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B33E20
	public sealed class RenderSettings : [Object]
	{
		// Fields

		// Methods
		public static new [Single] get_ambientSkyboxAmount();
		// VA: 0x7B46D3FDF8 RVA: 0x3339DF8 Offset: 0x3338DF8
		public static new [Void] set_ambientSkyboxAmount([Single] value);
		// VA: 0x7B46D3FE48 RVA: 0x3339E48 Offset: 0x3338E48
		private new [Void] .ctor();
		// VA: 0x7B46D3FEB8 RVA: 0x3339EB8 Offset: 0x3338EB8
		public static new [Boolean] get_fog();
		// VA: 0x7B46D3FF10 RVA: 0x3339F10 Offset: 0x3338F10
		public static new [Void] set_fog([Boolean] value);
		// VA: 0x7B46D3FF38 RVA: 0x3339F38 Offset: 0x3338F38
		public static new [Single] get_fogStartDistance();
		// VA: 0x7B46D3FF74 RVA: 0x3339F74 Offset: 0x3338F74
		public static new [Void] set_fogStartDistance([Single] value);
		// VA: 0x7B46D3FF9C RVA: 0x3339F9C Offset: 0x3338F9C
		public static new [Single] get_fogEndDistance();
		// VA: 0x7B46D3FFD4 RVA: 0x3339FD4 Offset: 0x3338FD4
		public static new [Void] set_fogEndDistance([Single] value);
		// VA: 0x7B46D3FFFC RVA: 0x3339FFC Offset: 0x3338FFC
		public static new [FogMode] get_fogMode();
		// VA: 0x7B46D40034 RVA: 0x333A034 Offset: 0x3339034
		public static new [Void] set_fogMode([FogMode] value);
		// VA: 0x7B46D4005C RVA: 0x333A05C Offset: 0x333905C
		public static new [Color] get_fogColor();
		// VA: 0x7B46D40098 RVA: 0x333A098 Offset: 0x3339098
		public static new [Void] set_fogColor([Color] value);
		// VA: 0x7B46D4011C RVA: 0x333A11C Offset: 0x333911C
		public static new [Single] get_fogDensity();
		// VA: 0x7B46D4019C RVA: 0x333A19C Offset: 0x333919C
		public static new [Void] set_fogDensity([Single] value);
		// VA: 0x7B46D401C4 RVA: 0x333A1C4 Offset: 0x33391C4
		public static new [AmbientMode] get_ambientMode();
		// VA: 0x7B46D401FC RVA: 0x333A1FC Offset: 0x33391FC
		public static new [Void] set_ambientMode([AmbientMode] value);
		// VA: 0x7B46D40224 RVA: 0x333A224 Offset: 0x3339224
		public static new [Color] get_ambientSkyColor();
		// VA: 0x7B46D40260 RVA: 0x333A260 Offset: 0x3339260
		public static new [Void] set_ambientSkyColor([Color] value);
		// VA: 0x7B46D402E4 RVA: 0x333A2E4 Offset: 0x33392E4
		public static new [Color] get_ambientEquatorColor();
		// VA: 0x7B46D40364 RVA: 0x333A364 Offset: 0x3339364
		public static new [Void] set_ambientEquatorColor([Color] value);
		// VA: 0x7B46D403E8 RVA: 0x333A3E8 Offset: 0x33393E8
		public static new [Color] get_ambientGroundColor();
		// VA: 0x7B46D40468 RVA: 0x333A468 Offset: 0x3339468
		public static new [Void] set_ambientGroundColor([Color] value);
		// VA: 0x7B46D404EC RVA: 0x333A4EC Offset: 0x33394EC
		public static new [Single] get_ambientIntensity();
		// VA: 0x7B46D3FE20 RVA: 0x3339E20 Offset: 0x3338E20
		public static new [Void] set_ambientIntensity([Single] value);
		// VA: 0x7B46D3FE80 RVA: 0x3339E80 Offset: 0x3338E80
		public static new [Color] get_ambientLight();
		// VA: 0x7B46D4056C RVA: 0x333A56C Offset: 0x333956C
		public static new [Void] set_ambientLight([Color] value);
		// VA: 0x7B46D405F0 RVA: 0x333A5F0 Offset: 0x33395F0
		public static new [Color] get_subtractiveShadowColor();
		// VA: 0x7B46D40670 RVA: 0x333A670 Offset: 0x3339670
		public static new [Void] set_subtractiveShadowColor([Color] value);
		// VA: 0x7B46D406F4 RVA: 0x333A6F4 Offset: 0x33396F4
		public static new [Material] get_skybox();
		// VA: 0x7B46D40774 RVA: 0x333A774 Offset: 0x3339774
		public static new [Void] set_skybox([Material] value);
		// VA: 0x7B46D4079C RVA: 0x333A79C Offset: 0x333979C
		public static new [Light] get_sun();
		// VA: 0x7B46D407D8 RVA: 0x333A7D8 Offset: 0x33397D8
		public static new [Void] set_sun([Light] value);
		// VA: 0x7B46D40800 RVA: 0x333A800 Offset: 0x3339800
		public static new [SphericalHarmonicsL2] get_ambientProbe();
		// VA: 0x7B46D4083C RVA: 0x333A83C Offset: 0x333983C
		public static new [Void] set_ambientProbe([SphericalHarmonicsL2] value);
		// VA: 0x7B46D408E4 RVA: 0x333A8E4 Offset: 0x33398E4
		public static new [Cubemap] get_customReflection();
		// VA: 0x7B46D4095C RVA: 0x333A95C Offset: 0x333995C
		public static new [Void] set_customReflection([Cubemap] value);
		// VA: 0x7B46D40A38 RVA: 0x333AA38 Offset: 0x3339A38
		public static new [Texture] get_customReflectionTexture();
		// VA: 0x7B46D40A10 RVA: 0x333AA10 Offset: 0x3339A10
		public static new [Void] set_customReflectionTexture([Texture] value);
		// VA: 0x7B46D40A74 RVA: 0x333AA74 Offset: 0x3339A74
		public static new [Single] get_reflectionIntensity();
		// VA: 0x7B46D40AB0 RVA: 0x333AAB0 Offset: 0x3339AB0
		public static new [Void] set_reflectionIntensity([Single] value);
		// VA: 0x7B46D40AD8 RVA: 0x333AAD8 Offset: 0x3339AD8
		public static new [Int32] get_reflectionBounces();
		// VA: 0x7B46D40B10 RVA: 0x333AB10 Offset: 0x3339B10
		public static new [Void] set_reflectionBounces([Int32] value);
		// VA: 0x7B46D40B38 RVA: 0x333AB38 Offset: 0x3339B38
		internal static new [Cubemap] get_defaultReflection();
		// VA: 0x7B46D40B74 RVA: 0x333AB74 Offset: 0x3339B74
		public static new [DefaultReflectionMode] get_defaultReflectionMode();
		// VA: 0x7B46D40B9C RVA: 0x333AB9C Offset: 0x3339B9C
		public static new [Void] set_defaultReflectionMode([DefaultReflectionMode] value);
		// VA: 0x7B46D40BC4 RVA: 0x333ABC4 Offset: 0x3339BC4
		public static new [Int32] get_defaultReflectionResolution();
		// VA: 0x7B46D40C00 RVA: 0x333AC00 Offset: 0x3339C00
		public static new [Void] set_defaultReflectionResolution([Int32] value);
		// VA: 0x7B46D40C28 RVA: 0x333AC28 Offset: 0x3339C28
		public static new [Single] get_haloStrength();
		// VA: 0x7B46D40C64 RVA: 0x333AC64 Offset: 0x3339C64
		public static new [Void] set_haloStrength([Single] value);
		// VA: 0x7B46D40C8C RVA: 0x333AC8C Offset: 0x3339C8C
		public static new [Single] get_flareStrength();
		// VA: 0x7B46D40CC4 RVA: 0x333ACC4 Offset: 0x3339CC4
		public static new [Void] set_flareStrength([Single] value);
		// VA: 0x7B46D40CEC RVA: 0x333ACEC Offset: 0x3339CEC
		public static new [Single] get_flareFadeSpeed();
		// VA: 0x7B46D40D24 RVA: 0x333AD24 Offset: 0x3339D24
		public static new [Void] set_flareFadeSpeed([Single] value);
		// VA: 0x7B46D40D4C RVA: 0x333AD4C Offset: 0x3339D4C
		internal static new [Object] GetRenderSettings();
		// VA: 0x7B46D40D84 RVA: 0x333AD84 Offset: 0x3339D84
		internal static new [Void] Reset();
		// VA: 0x7B46D40DAC RVA: 0x333ADAC Offset: 0x3339DAC
		private static new [Void] get_fogColor_Injected(out [Color] ret);
		// VA: 0x7B46D400E0 RVA: 0x333A0E0 Offset: 0x33390E0
		private static new [Void] set_fogColor_Injected(ref [Color] value);
		// VA: 0x7B46D40160 RVA: 0x333A160 Offset: 0x3339160
		private static new [Void] get_ambientSkyColor_Injected(out [Color] ret);
		// VA: 0x7B46D402A8 RVA: 0x333A2A8 Offset: 0x33392A8
		private static new [Void] set_ambientSkyColor_Injected(ref [Color] value);
		// VA: 0x7B46D40328 RVA: 0x333A328 Offset: 0x3339328
		private static new [Void] get_ambientEquatorColor_Injected(out [Color] ret);
		// VA: 0x7B46D403AC RVA: 0x333A3AC Offset: 0x33393AC
		private static new [Void] set_ambientEquatorColor_Injected(ref [Color] value);
		// VA: 0x7B46D4042C RVA: 0x333A42C Offset: 0x333942C
		private static new [Void] get_ambientGroundColor_Injected(out [Color] ret);
		// VA: 0x7B46D404B0 RVA: 0x333A4B0 Offset: 0x33394B0
		private static new [Void] set_ambientGroundColor_Injected(ref [Color] value);
		// VA: 0x7B46D40530 RVA: 0x333A530 Offset: 0x3339530
		private static new [Void] get_ambientLight_Injected(out [Color] ret);
		// VA: 0x7B46D405B4 RVA: 0x333A5B4 Offset: 0x33395B4
		private static new [Void] set_ambientLight_Injected(ref [Color] value);
		// VA: 0x7B46D40634 RVA: 0x333A634 Offset: 0x3339634
		private static new [Void] get_subtractiveShadowColor_Injected(out [Color] ret);
		// VA: 0x7B46D406B8 RVA: 0x333A6B8 Offset: 0x33396B8
		private static new [Void] set_subtractiveShadowColor_Injected(ref [Color] value);
		// VA: 0x7B46D40738 RVA: 0x333A738 Offset: 0x3339738
		private static new [Void] get_ambientProbe_Injected(out [SphericalHarmonicsL2] ret);
		// VA: 0x7B46D408A8 RVA: 0x333A8A8 Offset: 0x33398A8
		private static new [Void] set_ambientProbe_Injected(ref [SphericalHarmonicsL2] value);
		// VA: 0x7B46D40920 RVA: 0x333A920 Offset: 0x3339920
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38030
	public sealed class Shader : [Object]
	{
		// Fields

		// Methods
		public static new [ShaderHardwareTier] get_globalShaderHardwareTier();
		// VA: 0x7B46D40DD4 RVA: 0x333ADD4 Offset: 0x3339DD4
		public static new [Void] set_globalShaderHardwareTier([ShaderHardwareTier] value);
		// VA: 0x7B46D40E3C RVA: 0x333AE3C Offset: 0x3339E3C
		public static new [Shader] Find([String] name);
		// VA: 0x7B46D40EB0 RVA: 0x333AEB0 Offset: 0x3339EB0
		internal static new [Shader] FindBuiltin([String] name);
		// VA: 0x7B46D40F1C RVA: 0x333AF1C Offset: 0x3339F1C
		public static new [Int32] get_maximumChunksOverride();
		// VA: 0x7B46D40F58 RVA: 0x333AF58 Offset: 0x3339F58
		public static new [Void] set_maximumChunksOverride([Int32] value);
		// VA: 0x7B46D40F80 RVA: 0x333AF80 Offset: 0x3339F80
		public new [Int32] get_maximumLOD();
		// VA: 0x7B46D40FBC RVA: 0x333AFBC Offset: 0x3339FBC
		public new [Void] set_maximumLOD([Int32] value);
		// VA: 0x7B46D40FF8 RVA: 0x333AFF8 Offset: 0x3339FF8
		public static new [Int32] get_globalMaximumLOD();
		// VA: 0x7B46D4103C RVA: 0x333B03C Offset: 0x333A03C
		public static new [Void] set_globalMaximumLOD([Int32] value);
		// VA: 0x7B46D41064 RVA: 0x333B064 Offset: 0x333A064
		public new [Boolean] get_isSupported();
		// VA: 0x7B46D410A0 RVA: 0x333B0A0 Offset: 0x333A0A0
		public static new [String] get_globalRenderPipeline();
		// VA: 0x7B46D410DC RVA: 0x333B0DC Offset: 0x333A0DC
		public static new [Void] set_globalRenderPipeline([String] value);
		// VA: 0x7B46D41104 RVA: 0x333B104 Offset: 0x333A104
		public static new [GlobalKeyword[]] get_enabledGlobalKeywords();
		// VA: 0x7B46D41140 RVA: 0x333B140 Offset: 0x333A140
		public static new [GlobalKeyword[]] get_globalKeywords();
		// VA: 0x7B46D41190 RVA: 0x333B190 Offset: 0x333A190
		public new [LocalKeywordSpace] get_keywordSpace();
		// VA: 0x7B46D411E0 RVA: 0x333B1E0 Offset: 0x333A1E0
		internal static new [GlobalKeyword[]] GetEnabledGlobalKeywords();
		// VA: 0x7B46D41168 RVA: 0x333B168 Offset: 0x333A168
		internal static new [GlobalKeyword[]] GetAllGlobalKeywords();
		// VA: 0x7B46D411B8 RVA: 0x333B1B8 Offset: 0x333A1B8
		public static new [Void] EnableKeyword([String] keyword);
		// VA: 0x7B46D41270 RVA: 0x333B270 Offset: 0x333A270
		public static new [Void] DisableKeyword([String] keyword);
		// VA: 0x7B46D412AC RVA: 0x333B2AC Offset: 0x333A2AC
		public static new [Boolean] IsKeywordEnabled([String] keyword);
		// VA: 0x7B46D412E8 RVA: 0x333B2E8 Offset: 0x333A2E8
		internal static new [Void] EnableKeywordFast([GlobalKeyword] keyword);
		// VA: 0x7B46D41324 RVA: 0x333B324 Offset: 0x333A324
		internal static new [Void] DisableKeywordFast([GlobalKeyword] keyword);
		// VA: 0x7B46D413A0 RVA: 0x333B3A0 Offset: 0x333A3A0
		internal static new [Void] SetKeywordFast([GlobalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D4141C RVA: 0x333B41C Offset: 0x333A41C
		internal static new [Boolean] IsKeywordEnabledFast([GlobalKeyword] keyword);
		// VA: 0x7B46D414B0 RVA: 0x333B4B0 Offset: 0x333A4B0
		public static new [Void] EnableKeyword(in [GlobalKeyword] keyword);
		// VA: 0x7B46D41530 RVA: 0x333B530 Offset: 0x333A530
		public static new [Void] DisableKeyword(in [GlobalKeyword] keyword);
		// VA: 0x7B46D4153C RVA: 0x333B53C Offset: 0x333A53C
		public static new [Void] SetKeyword(in [GlobalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D41548 RVA: 0x333B548 Offset: 0x333A548
		public static new [Boolean] IsKeywordEnabled(in [GlobalKeyword] keyword);
		// VA: 0x7B46D4155C RVA: 0x333B55C Offset: 0x333A55C
		public new [Int32] get_renderQueue();
		// VA: 0x7B46D41568 RVA: 0x333B568 Offset: 0x333A568
		internal new [DisableBatchingType] get_disableBatching();
		// VA: 0x7B46D415A4 RVA: 0x333B5A4 Offset: 0x333A5A4
		public static new [Void] WarmupAllShaders();
		// VA: 0x7B46D415E0 RVA: 0x333B5E0 Offset: 0x333A5E0
		internal static new [Int32] TagToID([String] name);
		// VA: 0x7B46D41608 RVA: 0x333B608 Offset: 0x333A608
		internal static new [String] IDToTag([Int32] name);
		// VA: 0x7B46D41644 RVA: 0x333B644 Offset: 0x333A644
		public static new [Int32] PropertyToID([String] name);
		// VA: 0x7B46D41680 RVA: 0x333B680 Offset: 0x333A680
		public new [Shader] GetDependency([String] name);
		// VA: 0x7B46D416BC RVA: 0x333B6BC Offset: 0x333A6BC
		public new [Int32] get_passCount();
		// VA: 0x7B46D41700 RVA: 0x333B700 Offset: 0x333A700
		public new [Int32] get_subshaderCount();
		// VA: 0x7B46D4173C RVA: 0x333B73C Offset: 0x333A73C
		public new [Int32] GetPassCountInSubshader([Int32] subshaderIndex);
		// VA: 0x7B46D41778 RVA: 0x333B778 Offset: 0x333A778
		public new [ShaderTagId] FindPassTagValue([Int32] passIndex, [ShaderTagId] tagName);
		// VA: 0x7B46D417BC RVA: 0x333B7BC Offset: 0x333A7BC
		public new [ShaderTagId] FindPassTagValue([Int32] subshaderIndex, [Int32] passIndex, [ShaderTagId] tagName);
		// VA: 0x7B46D41918 RVA: 0x333B918 Offset: 0x333A918
		public new [ShaderTagId] FindSubshaderTagValue([Int32] subshaderIndex, [ShaderTagId] tagName);
		// VA: 0x7B46D41ADC RVA: 0x333BADC Offset: 0x333AADC
		private new [Int32] Internal_FindPassTagValue([Int32] passIndex, [Int32] tagName);
		// VA: 0x7B46D418C4 RVA: 0x333B8C4 Offset: 0x333A8C4
		private new [Int32] Internal_FindPassTagValueInSubShader([Int32] subShaderIndex, [Int32] passIndex, [Int32] tagName);
		// VA: 0x7B46D41A80 RVA: 0x333BA80 Offset: 0x333AA80
		private new [Int32] Internal_FindSubshaderTagValue([Int32] subShaderIndex, [Int32] tagName);
		// VA: 0x7B46D41C34 RVA: 0x333BC34 Offset: 0x333AC34
		private static new [Void] SetGlobalIntImpl([Int32] name, [Int32] value);
		// VA: 0x7B46D41C88 RVA: 0x333BC88 Offset: 0x333AC88
		private static new [Void] SetGlobalFloatImpl([Int32] name, [Single] value);
		// VA: 0x7B46D41CCC RVA: 0x333BCCC Offset: 0x333ACCC
		private static new [Void] SetGlobalVectorImpl([Int32] name, [Vector4] value);
		// VA: 0x7B46D41D18 RVA: 0x333BD18 Offset: 0x333AD18
		private static new [Void] SetGlobalMatrixImpl([Int32] name, [Matrix4x4] value);
		// VA: 0x7B46D41DB0 RVA: 0x333BDB0 Offset: 0x333ADB0
		private static new [Void] SetGlobalTextureImpl([Int32] name, [Texture] value);
		// VA: 0x7B46D41E38 RVA: 0x333BE38 Offset: 0x333AE38
		private static new [Void] SetGlobalRenderTextureImpl([Int32] name, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D41E7C RVA: 0x333BE7C Offset: 0x333AE7C
		private static new [Void] SetGlobalBufferImpl([Int32] name, [ComputeBuffer] value);
		// VA: 0x7B46D41ED0 RVA: 0x333BED0 Offset: 0x333AED0
		private static new [Void] SetGlobalGraphicsBufferImpl([Int32] name, [GraphicsBuffer] value);
		// VA: 0x7B46D41F14 RVA: 0x333BF14 Offset: 0x333AF14
		private static new [Void] SetGlobalConstantBufferImpl([Int32] name, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D41F58 RVA: 0x333BF58 Offset: 0x333AF58
		private static new [Void] SetGlobalConstantGraphicsBufferImpl([Int32] name, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D41FB4 RVA: 0x333BFB4 Offset: 0x333AFB4
		private static new [Int32] GetGlobalIntImpl([Int32] name);
		// VA: 0x7B46D42010 RVA: 0x333C010 Offset: 0x333B010
		private static new [Single] GetGlobalFloatImpl([Int32] name);
		// VA: 0x7B46D4204C RVA: 0x333C04C Offset: 0x333B04C
		private static new [Vector4] GetGlobalVectorImpl([Int32] name);
		// VA: 0x7B46D42088 RVA: 0x333C088 Offset: 0x333B088
		private static new [Matrix4x4] GetGlobalMatrixImpl([Int32] name);
		// VA: 0x7B46D42124 RVA: 0x333C124 Offset: 0x333B124
		private static new [Texture] GetGlobalTextureImpl([Int32] name);
		// VA: 0x7B46D421D4 RVA: 0x333C1D4 Offset: 0x333B1D4
		private static new [Void] SetGlobalFloatArrayImpl([Int32] name, [Single[]] values, [Int32] count);
		// VA: 0x7B46D42210 RVA: 0x333C210 Offset: 0x333B210
		private static new [Void] SetGlobalVectorArrayImpl([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D42264 RVA: 0x333C264 Offset: 0x333B264
		private static new [Void] SetGlobalMatrixArrayImpl([Int32] name, [Matrix4x4[]] values, [Int32] count);
		// VA: 0x7B46D422B8 RVA: 0x333C2B8 Offset: 0x333B2B8
		private static new [Single[]] GetGlobalFloatArrayImpl([Int32] name);
		// VA: 0x7B46D4230C RVA: 0x333C30C Offset: 0x333B30C
		private static new [Vector4[]] GetGlobalVectorArrayImpl([Int32] name);
		// VA: 0x7B46D42348 RVA: 0x333C348 Offset: 0x333B348
		private static new [Matrix4x4[]] GetGlobalMatrixArrayImpl([Int32] name);
		// VA: 0x7B46D42384 RVA: 0x333C384 Offset: 0x333B384
		private static new [Int32] GetGlobalFloatArrayCountImpl([Int32] name);
		// VA: 0x7B46D423C0 RVA: 0x333C3C0 Offset: 0x333B3C0
		private static new [Int32] GetGlobalVectorArrayCountImpl([Int32] name);
		// VA: 0x7B46D423FC RVA: 0x333C3FC Offset: 0x333B3FC
		private static new [Int32] GetGlobalMatrixArrayCountImpl([Int32] name);
		// VA: 0x7B46D42438 RVA: 0x333C438 Offset: 0x333B438
		private static new [Void] ExtractGlobalFloatArrayImpl([Int32] name, [Out] [Single[]] val);
		// VA: 0x7B46D42474 RVA: 0x333C474 Offset: 0x333B474
		private static new [Void] ExtractGlobalVectorArrayImpl([Int32] name, [Out] [Vector4[]] val);
		// VA: 0x7B46D424B8 RVA: 0x333C4B8 Offset: 0x333B4B8
		private static new [Void] ExtractGlobalMatrixArrayImpl([Int32] name, [Out] [Matrix4x4[]] val);
		// VA: 0x7B46D424FC RVA: 0x333C4FC Offset: 0x333B4FC
		private static new [Void] SetGlobalFloatArray([Int32] name, [Single[]] values, [Int32] count);
		// VA: 0x7B46D42540 RVA: 0x333C540 Offset: 0x333B540
		private static new [Void] SetGlobalVectorArray([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D42644 RVA: 0x333C644 Offset: 0x333B644
		private static new [Void] SetGlobalMatrixArray([Int32] name, [Matrix4x4[]] values, [Int32] count);
		// VA: 0x7B46D42748 RVA: 0x333C748 Offset: 0x333B748
		private static new [Void] ExtractGlobalFloatArray([Int32] name, [List`1] values);
		// VA: 0x7B46D4284C RVA: 0x333C84C Offset: 0x333B84C
		private static new [Void] ExtractGlobalVectorArray([Int32] name, [List`1] values);
		// VA: 0x7B46D429C0 RVA: 0x333C9C0 Offset: 0x333B9C0
		private static new [Void] ExtractGlobalMatrixArray([Int32] name, [List`1] values);
		// VA: 0x7B46D42B34 RVA: 0x333CB34 Offset: 0x333BB34
		public static new [Void] SetGlobalInt([String] name, [Int32] value);
		// VA: 0x7B46D42CA8 RVA: 0x333CCA8 Offset: 0x333BCA8
		public static new [Void] SetGlobalInt([Int32] nameID, [Int32] value);
		// VA: 0x7B46D42D18 RVA: 0x333CD18 Offset: 0x333BD18
		public static new [Void] SetGlobalFloat([String] name, [Single] value);
		// VA: 0x7B46D42D5C RVA: 0x333CD5C Offset: 0x333BD5C
		public static new [Void] SetGlobalFloat([Int32] nameID, [Single] value);
		// VA: 0x7B46D42DD4 RVA: 0x333CDD4 Offset: 0x333BDD4
		public static new [Void] SetGlobalInteger([String] name, [Int32] value);
		// VA: 0x7B46D42E20 RVA: 0x333CE20 Offset: 0x333BE20
		public static new [Void] SetGlobalInteger([Int32] nameID, [Int32] value);
		// VA: 0x7B46D42E90 RVA: 0x333CE90 Offset: 0x333BE90
		public static new [Void] SetGlobalVector([String] name, [Vector4] value);
		// VA: 0x7B46D42ED4 RVA: 0x333CED4 Offset: 0x333BED4
		public static new [Void] SetGlobalVector([Int32] nameID, [Vector4] value);
		// VA: 0x7B46D42F44 RVA: 0x333CF44 Offset: 0x333BF44
		public static new [Void] SetGlobalColor([String] name, [Color] value);
		// VA: 0x7B46D42F48 RVA: 0x333CF48 Offset: 0x333BF48
		public static new [Void] SetGlobalColor([Int32] nameID, [Color] value);
		// VA: 0x7B46D42FB8 RVA: 0x333CFB8 Offset: 0x333BFB8
		public static new [Void] SetGlobalMatrix([String] name, [Matrix4x4] value);
		// VA: 0x7B46D42FBC RVA: 0x333CFBC Offset: 0x333BFBC
		public static new [Void] SetGlobalMatrix([Int32] nameID, [Matrix4x4] value);
		// VA: 0x7B46D43048 RVA: 0x333D048 Offset: 0x333C048
		public static new [Void] SetGlobalTexture([String] name, [Texture] value);
		// VA: 0x7B46D430A4 RVA: 0x333D0A4 Offset: 0x333C0A4
		public static new [Void] SetGlobalTexture([Int32] nameID, [Texture] value);
		// VA: 0x7B46D43114 RVA: 0x333D114 Offset: 0x333C114
		public static new [Void] SetGlobalTexture([String] name, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D43158 RVA: 0x333D158 Offset: 0x333C158
		public static new [Void] SetGlobalTexture([Int32] nameID, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D431D8 RVA: 0x333D1D8 Offset: 0x333C1D8
		public static new [Void] SetGlobalBuffer([String] name, [ComputeBuffer] value);
		// VA: 0x7B46D4322C RVA: 0x333D22C Offset: 0x333C22C
		public static new [Void] SetGlobalBuffer([Int32] nameID, [ComputeBuffer] value);
		// VA: 0x7B46D4329C RVA: 0x333D29C Offset: 0x333C29C
		public static new [Void] SetGlobalBuffer([String] name, [GraphicsBuffer] value);
		// VA: 0x7B46D432E0 RVA: 0x333D2E0 Offset: 0x333C2E0
		public static new [Void] SetGlobalBuffer([Int32] nameID, [GraphicsBuffer] value);
		// VA: 0x7B46D43350 RVA: 0x333D350 Offset: 0x333C350
		public static new [Void] SetGlobalConstantBuffer([String] name, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D43394 RVA: 0x333D394 Offset: 0x333C394
		public static new [Void] SetGlobalConstantBuffer([Int32] nameID, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D4341C RVA: 0x333D41C Offset: 0x333C41C
		public static new [Void] SetGlobalConstantBuffer([String] name, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D43478 RVA: 0x333D478 Offset: 0x333C478
		public static new [Void] SetGlobalConstantBuffer([Int32] nameID, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D43500 RVA: 0x333D500 Offset: 0x333C500
		public static new [Void] SetGlobalFloatArray([String] name, [List`1] values);
		// VA: 0x7B46D4355C RVA: 0x333D55C Offset: 0x333C55C
		public static new [Void] SetGlobalFloatArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D43600 RVA: 0x333D600 Offset: 0x333C600
		public static new [Void] SetGlobalFloatArray([String] name, [Single[]] values);
		// VA: 0x7B46D43678 RVA: 0x333D678 Offset: 0x333C678
		public static new [Void] SetGlobalFloatArray([Int32] nameID, [Single[]] values);
		// VA: 0x7B46D436CC RVA: 0x333D6CC Offset: 0x333C6CC
		public static new [Void] SetGlobalVectorArray([String] name, [List`1] values);
		// VA: 0x7B46D436E4 RVA: 0x333D6E4 Offset: 0x333C6E4
		public static new [Void] SetGlobalVectorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D43788 RVA: 0x333D788 Offset: 0x333C788
		public static new [Void] SetGlobalVectorArray([String] name, [Vector4[]] values);
		// VA: 0x7B46D43800 RVA: 0x333D800 Offset: 0x333C800
		public static new [Void] SetGlobalVectorArray([Int32] nameID, [Vector4[]] values);
		// VA: 0x7B46D43854 RVA: 0x333D854 Offset: 0x333C854
		public static new [Void] SetGlobalMatrixArray([String] name, [List`1] values);
		// VA: 0x7B46D4386C RVA: 0x333D86C Offset: 0x333C86C
		public static new [Void] SetGlobalMatrixArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D43910 RVA: 0x333D910 Offset: 0x333C910
		public static new [Void] SetGlobalMatrixArray([String] name, [Matrix4x4[]] values);
		// VA: 0x7B46D43988 RVA: 0x333D988 Offset: 0x333C988
		public static new [Void] SetGlobalMatrixArray([Int32] nameID, [Matrix4x4[]] values);
		// VA: 0x7B46D439DC RVA: 0x333D9DC Offset: 0x333C9DC
		public static new [Int32] GetGlobalInt([String] name);
		// VA: 0x7B46D439F4 RVA: 0x333D9F4 Offset: 0x333C9F4
		public static new [Int32] GetGlobalInt([Int32] nameID);
		// VA: 0x7B46D43A78 RVA: 0x333DA78 Offset: 0x333CA78
		public static new [Single] GetGlobalFloat([String] name);
		// VA: 0x7B46D43AD0 RVA: 0x333DAD0 Offset: 0x333CAD0
		public static new [Single] GetGlobalFloat([Int32] nameID);
		// VA: 0x7B46D43B38 RVA: 0x333DB38 Offset: 0x333CB38
		public static new [Int32] GetGlobalInteger([String] name);
		// VA: 0x7B46D43B74 RVA: 0x333DB74 Offset: 0x333CB74
		public static new [Int32] GetGlobalInteger([Int32] nameID);
		// VA: 0x7B46D43BDC RVA: 0x333DBDC Offset: 0x333CBDC
		public static new [Vector4] GetGlobalVector([String] name);
		// VA: 0x7B46D43C18 RVA: 0x333DC18 Offset: 0x333CC18
		public static new [Vector4] GetGlobalVector([Int32] nameID);
		// VA: 0x7B46D43C58 RVA: 0x333DC58 Offset: 0x333CC58
		public static new [Color] GetGlobalColor([String] name);
		// VA: 0x7B46D43C5C RVA: 0x333DC5C Offset: 0x333CC5C
		public static new [Color] GetGlobalColor([Int32] nameID);
		// VA: 0x7B46D43C9C RVA: 0x333DC9C Offset: 0x333CC9C
		public static new [Matrix4x4] GetGlobalMatrix([String] name);
		// VA: 0x7B46D43CA0 RVA: 0x333DCA0 Offset: 0x333CCA0
		public static new [Matrix4x4] GetGlobalMatrix([Int32] nameID);
		// VA: 0x7B46D43D40 RVA: 0x333DD40 Offset: 0x333CD40
		public static new [Texture] GetGlobalTexture([String] name);
		// VA: 0x7B46D43DB4 RVA: 0x333DDB4 Offset: 0x333CDB4
		public static new [Texture] GetGlobalTexture([Int32] nameID);
		// VA: 0x7B46D43E1C RVA: 0x333DE1C Offset: 0x333CE1C
		public static new [Single[]] GetGlobalFloatArray([String] name);
		// VA: 0x7B46D43E58 RVA: 0x333DE58 Offset: 0x333CE58
		public static new [Single[]] GetGlobalFloatArray([Int32] nameID);
		// VA: 0x7B46D43E98 RVA: 0x333DE98 Offset: 0x333CE98
		public static new [Vector4[]] GetGlobalVectorArray([String] name);
		// VA: 0x7B46D43F10 RVA: 0x333DF10 Offset: 0x333CF10
		public static new [Vector4[]] GetGlobalVectorArray([Int32] nameID);
		// VA: 0x7B46D43F50 RVA: 0x333DF50 Offset: 0x333CF50
		public static new [Matrix4x4[]] GetGlobalMatrixArray([String] name);
		// VA: 0x7B46D43FC8 RVA: 0x333DFC8 Offset: 0x333CFC8
		public static new [Matrix4x4[]] GetGlobalMatrixArray([Int32] nameID);
		// VA: 0x7B46D44008 RVA: 0x333E008 Offset: 0x333D008
		public static new [Void] GetGlobalFloatArray([String] name, [List`1] values);
		// VA: 0x7B46D44080 RVA: 0x333E080 Offset: 0x333D080
		public static new [Void] GetGlobalFloatArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D440C8 RVA: 0x333E0C8 Offset: 0x333D0C8
		public static new [Void] GetGlobalVectorArray([String] name, [List`1] values);
		// VA: 0x7B46D440CC RVA: 0x333E0CC Offset: 0x333D0CC
		public static new [Void] GetGlobalVectorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D44114 RVA: 0x333E114 Offset: 0x333D114
		public static new [Void] GetGlobalMatrixArray([String] name, [List`1] values);
		// VA: 0x7B46D44118 RVA: 0x333E118 Offset: 0x333D118
		public static new [Void] GetGlobalMatrixArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D44160 RVA: 0x333E160 Offset: 0x333D160
		private new [Void] .ctor();
		// VA: 0x7B46D44164 RVA: 0x333E164 Offset: 0x333D164
		private static new [String] GetPropertyName([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D441BC RVA: 0x333E1BC Offset: 0x333D1BC
		private static new [Int32] GetPropertyNameId([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44200 RVA: 0x333E200 Offset: 0x333D200
		private static new [ShaderPropertyType] GetPropertyType([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44244 RVA: 0x333E244 Offset: 0x333D244
		private static new [String] GetPropertyDescription([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44288 RVA: 0x333E288 Offset: 0x333D288
		private static new [ShaderPropertyFlags] GetPropertyFlags([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D442CC RVA: 0x333E2CC Offset: 0x333D2CC
		private static new [String[]] GetPropertyAttributes([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44310 RVA: 0x333E310 Offset: 0x333D310
		private static new [Int32] GetPropertyDefaultIntValue([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44354 RVA: 0x333E354 Offset: 0x333D354
		private static new [Vector4] GetPropertyDefaultValue([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44398 RVA: 0x333E398 Offset: 0x333D398
		private static new [TextureDimension] GetPropertyTextureDimension([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D4444C RVA: 0x333E44C Offset: 0x333D44C
		private static new [String] GetPropertyTextureDefaultName([Shader] shader, [Int32] propertyIndex);
		// VA: 0x7B46D44490 RVA: 0x333E490 Offset: 0x333D490
		private static new [Boolean] FindTextureStackImpl([Shader] s, [Int32] propertyIdx, out [String] stackName, out [Int32] layerIndex);
		// VA: 0x7B46D444D4 RVA: 0x333E4D4 Offset: 0x333D4D4
		private static new [Void] CheckPropertyIndex([Shader] s, [Int32] propertyIndex);
		// VA: 0x7B46D44530 RVA: 0x333E530 Offset: 0x333D530
		public new [Int32] GetPropertyCount();
		// VA: 0x7B46D445D0 RVA: 0x333E5D0 Offset: 0x333D5D0
		public new [Int32] FindPropertyIndex([String] propertyName);
		// VA: 0x7B46D4460C RVA: 0x333E60C Offset: 0x333D60C
		public new [String] GetPropertyName([Int32] propertyIndex);
		// VA: 0x7B46D44650 RVA: 0x333E650 Offset: 0x333D650
		public new [Int32] GetPropertyNameId([Int32] propertyIndex);
		// VA: 0x7B46D44698 RVA: 0x333E698 Offset: 0x333D698
		public new [ShaderPropertyType] GetPropertyType([Int32] propertyIndex);
		// VA: 0x7B46D446E0 RVA: 0x333E6E0 Offset: 0x333D6E0
		public new [String] GetPropertyDescription([Int32] propertyIndex);
		// VA: 0x7B46D44728 RVA: 0x333E728 Offset: 0x333D728
		public new [ShaderPropertyFlags] GetPropertyFlags([Int32] propertyIndex);
		// VA: 0x7B46D44770 RVA: 0x333E770 Offset: 0x333D770
		public new [String[]] GetPropertyAttributes([Int32] propertyIndex);
		// VA: 0x7B46D447B8 RVA: 0x333E7B8 Offset: 0x333D7B8
		public new [Single] GetPropertyDefaultFloatValue([Int32] propertyIndex);
		// VA: 0x7B46D44800 RVA: 0x333E800 Offset: 0x333D800
		public new [Vector4] GetPropertyDefaultVectorValue([Int32] propertyIndex);
		// VA: 0x7B46D44888 RVA: 0x333E888 Offset: 0x333D888
		public new [Vector2] GetPropertyRangeLimits([Int32] propertyIndex);
		// VA: 0x7B46D4490C RVA: 0x333E90C Offset: 0x333D90C
		public new [Int32] GetPropertyDefaultIntValue([Int32] propertyIndex);
		// VA: 0x7B46D4499C RVA: 0x333E99C Offset: 0x333D99C
		public new [TextureDimension] GetPropertyTextureDimension([Int32] propertyIndex);
		// VA: 0x7B46D44A40 RVA: 0x333EA40 Offset: 0x333DA40
		public new [String] GetPropertyTextureDefaultName([Int32] propertyIndex);
		// VA: 0x7B46D44AE4 RVA: 0x333EAE4 Offset: 0x333DAE4
		public new [Boolean] FindTextureStack([Int32] propertyIndex, out [String] stackName, out [Int32] layerIndex);
		// VA: 0x7B46D44B88 RVA: 0x333EB88 Offset: 0x333DB88
		private new [Void] get_keywordSpace_Injected(out [LocalKeywordSpace] ret);
		// VA: 0x7B46D4122C RVA: 0x333B22C Offset: 0x333A22C
		private static new [Void] EnableKeywordFast_Injected(ref [GlobalKeyword] keyword);
		// VA: 0x7B46D41364 RVA: 0x333B364 Offset: 0x333A364
		private static new [Void] DisableKeywordFast_Injected(ref [GlobalKeyword] keyword);
		// VA: 0x7B46D413E0 RVA: 0x333B3E0 Offset: 0x333A3E0
		private static new [Void] SetKeywordFast_Injected(ref [GlobalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D4146C RVA: 0x333B46C Offset: 0x333A46C
		private static new [Boolean] IsKeywordEnabledFast_Injected(ref [GlobalKeyword] keyword);
		// VA: 0x7B46D414F4 RVA: 0x333B4F4 Offset: 0x333A4F4
		private static new [Void] SetGlobalVectorImpl_Injected([Int32] name, ref [Vector4] value);
		// VA: 0x7B46D41D6C RVA: 0x333BD6C Offset: 0x333AD6C
		private static new [Void] SetGlobalMatrixImpl_Injected([Int32] name, ref [Matrix4x4] value);
		// VA: 0x7B46D41DF4 RVA: 0x333BDF4 Offset: 0x333ADF4
		private static new [Void] GetGlobalVectorImpl_Injected([Int32] name, out [Vector4] ret);
		// VA: 0x7B46D420E0 RVA: 0x333C0E0 Offset: 0x333B0E0
		private static new [Void] GetGlobalMatrixImpl_Injected([Int32] name, out [Matrix4x4] ret);
		// VA: 0x7B46D42190 RVA: 0x333C190 Offset: 0x333B190
		private static new [Void] GetPropertyDefaultValue_Injected([Shader] shader, [Int32] propertyIndex, out [Vector4] ret);
		// VA: 0x7B46D443F8 RVA: 0x333E3F8 Offset: 0x333D3F8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B381B0
	public class Material : [Object]
	{
		// Fields

		// Methods
		public static new [Material] Create([String] scriptContents);
		// VA: 0x7B46D44C44 RVA: 0x333EC44 Offset: 0x333DC44
		private static new [Void] CreateWithShader([Material] self, [Shader] shader);
		// VA: 0x7B46D44D14 RVA: 0x333ED14 Offset: 0x333DD14
		private static new [Void] CreateWithMaterial([Material] self, [Material] source);
		// VA: 0x7B46D44D58 RVA: 0x333ED58 Offset: 0x333DD58
		private static new [Void] CreateWithString([Material] self);
		// VA: 0x7B46D44D9C RVA: 0x333ED9C Offset: 0x333DD9C
		public new [Void] .ctor([Shader] shader);
		// VA: 0x7B46D44DD8 RVA: 0x333EDD8 Offset: 0x333DDD8
		public new [Void] .ctor([Material] source);
		// VA: 0x7B46D44E68 RVA: 0x333EE68 Offset: 0x333DE68
		public new [Void] .ctor([String] contents);
		// VA: 0x7B46D44C94 RVA: 0x333EC94 Offset: 0x333DC94
		internal static new [Material] GetDefaultMaterial();
		// VA: 0x7B46D44EF8 RVA: 0x333EEF8 Offset: 0x333DEF8
		internal static new [Material] GetDefaultParticleMaterial();
		// VA: 0x7B46D44F20 RVA: 0x333EF20 Offset: 0x333DF20
		internal static new [Material] GetDefaultLineMaterial();
		// VA: 0x7B46D44F48 RVA: 0x333EF48 Offset: 0x333DF48
		public new [Shader] get_shader();
		// VA: 0x7B46D44F70 RVA: 0x333EF70 Offset: 0x333DF70
		public new [Void] set_shader([Shader] value);
		// VA: 0x7B46D44FAC RVA: 0x333EFAC Offset: 0x333DFAC
		public new [Color] get_color();
		// VA: 0x7B46D44FF0 RVA: 0x333EFF0 Offset: 0x333DFF0
		public new [Void] set_color([Color] value);
		// VA: 0x7B46D45110 RVA: 0x333F110 Offset: 0x333E110
		public new [Texture] get_mainTexture();
		// VA: 0x7B46D45264 RVA: 0x333F264 Offset: 0x333E264
		public new [Void] set_mainTexture([Texture] value);
		// VA: 0x7B46D453C8 RVA: 0x333F3C8 Offset: 0x333E3C8
		public new [Vector2] get_mainTextureOffset();
		// VA: 0x7B46D45564 RVA: 0x333F564 Offset: 0x333E564
		public new [Void] set_mainTextureOffset([Vector2] value);
		// VA: 0x7B46D4566C RVA: 0x333F66C Offset: 0x333E66C
		public new [Vector2] get_mainTextureScale();
		// VA: 0x7B46D45784 RVA: 0x333F784 Offset: 0x333E784
		public new [Void] set_mainTextureScale([Vector2] value);
		// VA: 0x7B46D45860 RVA: 0x333F860 Offset: 0x333E860
		private new [Int32] GetFirstPropertyNameIdByAttribute([ShaderPropertyFlags] attributeFlag);
		// VA: 0x7B46D4507C RVA: 0x333F07C Offset: 0x333E07C
		public new [Boolean] HasProperty([Int32] nameID);
		// VA: 0x7B46D45978 RVA: 0x333F978 Offset: 0x333E978
		public new [Boolean] HasProperty([String] name);
		// VA: 0x7B46D459BC RVA: 0x333F9BC Offset: 0x333E9BC
		private new [Boolean] HasFloatImpl([Int32] name);
		// VA: 0x7B46D45A2C RVA: 0x333FA2C Offset: 0x333EA2C
		public new [Boolean] HasFloat([String] name);
		// VA: 0x7B46D45A70 RVA: 0x333FA70 Offset: 0x333EA70
		public new [Boolean] HasFloat([Int32] nameID);
		// VA: 0x7B46D45AE0 RVA: 0x333FAE0 Offset: 0x333EAE0
		public new [Boolean] HasInt([String] name);
		// VA: 0x7B46D45B24 RVA: 0x333FB24 Offset: 0x333EB24
		public new [Boolean] HasInt([Int32] nameID);
		// VA: 0x7B46D45B94 RVA: 0x333FB94 Offset: 0x333EB94
		private new [Boolean] HasIntImpl([Int32] name);
		// VA: 0x7B46D45BD8 RVA: 0x333FBD8 Offset: 0x333EBD8
		public new [Boolean] HasInteger([String] name);
		// VA: 0x7B46D45C1C RVA: 0x333FC1C Offset: 0x333EC1C
		public new [Boolean] HasInteger([Int32] nameID);
		// VA: 0x7B46D45C8C RVA: 0x333FC8C Offset: 0x333EC8C
		private new [Boolean] HasTextureImpl([Int32] name);
		// VA: 0x7B46D45CD0 RVA: 0x333FCD0 Offset: 0x333ECD0
		public new [Boolean] HasTexture([String] name);
		// VA: 0x7B46D45D14 RVA: 0x333FD14 Offset: 0x333ED14
		public new [Boolean] HasTexture([Int32] nameID);
		// VA: 0x7B46D45D84 RVA: 0x333FD84 Offset: 0x333ED84
		private new [Boolean] HasMatrixImpl([Int32] name);
		// VA: 0x7B46D45DC8 RVA: 0x333FDC8 Offset: 0x333EDC8
		public new [Boolean] HasMatrix([String] name);
		// VA: 0x7B46D45E0C RVA: 0x333FE0C Offset: 0x333EE0C
		public new [Boolean] HasMatrix([Int32] nameID);
		// VA: 0x7B46D45E7C RVA: 0x333FE7C Offset: 0x333EE7C
		private new [Boolean] HasVectorImpl([Int32] name);
		// VA: 0x7B46D45EC0 RVA: 0x333FEC0 Offset: 0x333EEC0
		public new [Boolean] HasVector([String] name);
		// VA: 0x7B46D45F04 RVA: 0x333FF04 Offset: 0x333EF04
		public new [Boolean] HasVector([Int32] nameID);
		// VA: 0x7B46D45F74 RVA: 0x333FF74 Offset: 0x333EF74
		public new [Boolean] HasColor([String] name);
		// VA: 0x7B46D45FB8 RVA: 0x333FFB8 Offset: 0x333EFB8
		public new [Boolean] HasColor([Int32] nameID);
		// VA: 0x7B46D46028 RVA: 0x3340028 Offset: 0x333F028
		private new [Boolean] HasBufferImpl([Int32] name);
		// VA: 0x7B46D4606C RVA: 0x334006C Offset: 0x333F06C
		public new [Boolean] HasBuffer([String] name);
		// VA: 0x7B46D460B0 RVA: 0x33400B0 Offset: 0x333F0B0
		public new [Boolean] HasBuffer([Int32] nameID);
		// VA: 0x7B46D46120 RVA: 0x3340120 Offset: 0x333F120
		private new [Boolean] HasConstantBufferImpl([Int32] name);
		// VA: 0x7B46D46164 RVA: 0x3340164 Offset: 0x333F164
		public new [Boolean] HasConstantBuffer([String] name);
		// VA: 0x7B46D461A8 RVA: 0x33401A8 Offset: 0x333F1A8
		public new [Boolean] HasConstantBuffer([Int32] nameID);
		// VA: 0x7B46D46218 RVA: 0x3340218 Offset: 0x333F218
		public new [Int32] get_renderQueue();
		// VA: 0x7B46D4625C RVA: 0x334025C Offset: 0x333F25C
		public new [Void] set_renderQueue([Int32] value);
		// VA: 0x7B46D46298 RVA: 0x3340298 Offset: 0x333F298
		internal new [Int32] get_rawRenderQueue();
		// VA: 0x7B46D462DC RVA: 0x33402DC Offset: 0x333F2DC
		public new [Void] EnableKeyword([String] keyword);
		// VA: 0x7B46D46318 RVA: 0x3340318 Offset: 0x333F318
		public new [Void] DisableKeyword([String] keyword);
		// VA: 0x7B46D4635C RVA: 0x334035C Offset: 0x333F35C
		public new [Boolean] IsKeywordEnabled([String] keyword);
		// VA: 0x7B46D463A0 RVA: 0x33403A0 Offset: 0x333F3A0
		private new [Void] EnableLocalKeyword([LocalKeyword] keyword);
		// VA: 0x7B46D463E4 RVA: 0x33403E4 Offset: 0x333F3E4
		private new [Void] DisableLocalKeyword([LocalKeyword] keyword);
		// VA: 0x7B46D4646C RVA: 0x334046C Offset: 0x333F46C
		private new [Void] SetLocalKeyword([LocalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D464F4 RVA: 0x33404F4 Offset: 0x333F4F4
		private new [Boolean] IsLocalKeywordEnabled([LocalKeyword] keyword);
		// VA: 0x7B46D4659C RVA: 0x334059C Offset: 0x333F59C
		public new [Void] EnableKeyword(in [LocalKeyword] keyword);
		// VA: 0x7B46D46624 RVA: 0x3340624 Offset: 0x333F624
		public new [Void] DisableKeyword(in [LocalKeyword] keyword);
		// VA: 0x7B46D46680 RVA: 0x3340680 Offset: 0x333F680
		public new [Void] SetKeyword(in [LocalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D466DC RVA: 0x33406DC Offset: 0x333F6DC
		public new [Boolean] IsKeywordEnabled(in [LocalKeyword] keyword);
		// VA: 0x7B46D46740 RVA: 0x3340740 Offset: 0x333F740
		private new [LocalKeyword[]] GetEnabledKeywords();
		// VA: 0x7B46D467A0 RVA: 0x33407A0 Offset: 0x333F7A0
		private new [Void] SetEnabledKeywords([LocalKeyword[]] keywords);
		// VA: 0x7B46D467DC RVA: 0x33407DC Offset: 0x333F7DC
		public new [LocalKeyword[]] get_enabledKeywords();
		// VA: 0x7B46D46820 RVA: 0x3340820 Offset: 0x333F820
		public new [Void] set_enabledKeywords([LocalKeyword[]] value);
		// VA: 0x7B46D4685C RVA: 0x334085C Offset: 0x333F85C
		public new [MaterialGlobalIlluminationFlags] get_globalIlluminationFlags();
		// VA: 0x7B46D468A0 RVA: 0x33408A0 Offset: 0x333F8A0
		public new [Void] set_globalIlluminationFlags([MaterialGlobalIlluminationFlags] value);
		// VA: 0x7B46D468DC RVA: 0x33408DC Offset: 0x333F8DC
		public new [Boolean] get_doubleSidedGI();
		// VA: 0x7B46D46920 RVA: 0x3340920 Offset: 0x333F920
		public new [Void] set_doubleSidedGI([Boolean] value);
		// VA: 0x7B46D4695C RVA: 0x334095C Offset: 0x333F95C
		public new [Boolean] get_enableInstancing();
		// VA: 0x7B46D469A0 RVA: 0x33409A0 Offset: 0x333F9A0
		public new [Void] set_enableInstancing([Boolean] value);
		// VA: 0x7B46D469DC RVA: 0x33409DC Offset: 0x333F9DC
		public new [Int32] get_passCount();
		// VA: 0x7B46D46A20 RVA: 0x3340A20 Offset: 0x333FA20
		public new [Void] SetShaderPassEnabled([String] passName, [Boolean] enabled);
		// VA: 0x7B46D46A5C RVA: 0x3340A5C Offset: 0x333FA5C
		public new [Boolean] GetShaderPassEnabled([String] passName);
		// VA: 0x7B46D46AB0 RVA: 0x3340AB0 Offset: 0x333FAB0
		public new [String] GetPassName([Int32] pass);
		// VA: 0x7B46D46AF4 RVA: 0x3340AF4 Offset: 0x333FAF4
		public new [Int32] FindPass([String] passName);
		// VA: 0x7B46D46B38 RVA: 0x3340B38 Offset: 0x333FB38
		public new [Void] SetOverrideTag([String] tag, [String] val);
		// VA: 0x7B46D46B7C RVA: 0x3340B7C Offset: 0x333FB7C
		private new [String] GetTagImpl([String] tag, [Boolean] currentSubShaderOnly, [String] defaultValue);
		// VA: 0x7B46D46BD0 RVA: 0x3340BD0 Offset: 0x333FBD0
		public new [String] GetTag([String] tag, [Boolean] searchFallbacks, [String] defaultValue);
		// VA: 0x7B46D46C2C RVA: 0x3340C2C Offset: 0x333FC2C
		public new [String] GetTag([String] tag, [Boolean] searchFallbacks);
		// VA: 0x7B46D46C8C RVA: 0x3340C8C Offset: 0x333FC8C
		public new [Void] Lerp([Material] start, [Material] end, [Single] t);
		// VA: 0x7B46D46D14 RVA: 0x3340D14 Offset: 0x333FD14
		public new [Boolean] SetPass([Int32] pass);
		// VA: 0x7B46D46D78 RVA: 0x3340D78 Offset: 0x333FD78
		public new [Void] CopyPropertiesFromMaterial([Material] mat);
		// VA: 0x7B46D46DBC RVA: 0x3340DBC Offset: 0x333FDBC
		public new [Void] CopyMatchingPropertiesFromMaterial([Material] mat);
		// VA: 0x7B46D46E00 RVA: 0x3340E00 Offset: 0x333FE00
		private new [String[]] GetShaderKeywords();
		// VA: 0x7B46D46E44 RVA: 0x3340E44 Offset: 0x333FE44
		private new [Void] SetShaderKeywords([String[]] names);
		// VA: 0x7B46D46E80 RVA: 0x3340E80 Offset: 0x333FE80
		public new [String[]] get_shaderKeywords();
		// VA: 0x7B46D46EC4 RVA: 0x3340EC4 Offset: 0x333FEC4
		public new [Void] set_shaderKeywords([String[]] value);
		// VA: 0x7B46D46F00 RVA: 0x3340F00 Offset: 0x333FF00
		private new [String[]] GetPropertyNamesImpl([Int32] propertyType);
		// VA: 0x7B46D46F44 RVA: 0x3340F44 Offset: 0x333FF44
		public new [Int32] ComputeCRC();
		// VA: 0x7B46D46F88 RVA: 0x3340F88 Offset: 0x333FF88
		public new [String[]] GetTexturePropertyNames();
		// VA: 0x7B46D46FC4 RVA: 0x3340FC4 Offset: 0x333FFC4
		public new [Int32[]] GetTexturePropertyNameIDs();
		// VA: 0x7B46D47000 RVA: 0x3341000 Offset: 0x3340000
		private new [Void] GetTexturePropertyNamesInternal([Object] outNames);
		// VA: 0x7B46D4703C RVA: 0x334103C Offset: 0x334003C
		private new [Void] GetTexturePropertyNameIDsInternal([Object] outNames);
		// VA: 0x7B46D47080 RVA: 0x3341080 Offset: 0x3340080
		public new [Void] GetTexturePropertyNames([List`1] outNames);
		// VA: 0x7B46D470C4 RVA: 0x33410C4 Offset: 0x33400C4
		public new [Void] GetTexturePropertyNameIDs([List`1] outNames);
		// VA: 0x7B46D47154 RVA: 0x3341154 Offset: 0x3340154
		private new [Void] SetIntImpl([Int32] name, [Int32] value);
		// VA: 0x7B46D471E4 RVA: 0x33411E4 Offset: 0x33401E4
		private new [Void] SetFloatImpl([Int32] name, [Single] value);
		// VA: 0x7B46D47238 RVA: 0x3341238 Offset: 0x3340238
		private new [Void] SetColorImpl([Int32] name, [Color] value);
		// VA: 0x7B46D4728C RVA: 0x334128C Offset: 0x334028C
		private new [Void] SetMatrixImpl([Int32] name, [Matrix4x4] value);
		// VA: 0x7B46D4733C RVA: 0x334133C Offset: 0x334033C
		private new [Void] SetTextureImpl([Int32] name, [Texture] value);
		// VA: 0x7B46D473E4 RVA: 0x33413E4 Offset: 0x33403E4
		private new [Void] SetRenderTextureImpl([Int32] name, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D47438 RVA: 0x3341438 Offset: 0x3340438
		private new [Void] SetBufferImpl([Int32] name, [ComputeBuffer] value);
		// VA: 0x7B46D47494 RVA: 0x3341494 Offset: 0x3340494
		private new [Void] SetGraphicsBufferImpl([Int32] name, [GraphicsBuffer] value);
		// VA: 0x7B46D474E8 RVA: 0x33414E8 Offset: 0x33404E8
		private new [Void] SetConstantBufferImpl([Int32] name, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D4753C RVA: 0x334153C Offset: 0x334053C
		private new [Void] SetConstantGraphicsBufferImpl([Int32] name, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D475A8 RVA: 0x33415A8 Offset: 0x33405A8
		private new [Int32] GetIntImpl([Int32] name);
		// VA: 0x7B46D47614 RVA: 0x3341614 Offset: 0x3340614
		private new [Single] GetFloatImpl([Int32] name);
		// VA: 0x7B46D47658 RVA: 0x3341658 Offset: 0x3340658
		private new [Color] GetColorImpl([Int32] name);
		// VA: 0x7B46D4769C RVA: 0x334169C Offset: 0x334069C
		private new [Matrix4x4] GetMatrixImpl([Int32] name);
		// VA: 0x7B46D47750 RVA: 0x3341750 Offset: 0x3340750
		private new [Texture] GetTextureImpl([Int32] name);
		// VA: 0x7B46D47820 RVA: 0x3341820 Offset: 0x3340820
		private new [GraphicsBufferHandle] GetBufferImpl([Int32] name);
		// VA: 0x7B46D47864 RVA: 0x3341864 Offset: 0x3340864
		private new [GraphicsBufferHandle] GetConstantBufferImpl([Int32] name);
		// VA: 0x7B46D47914 RVA: 0x3341914 Offset: 0x3340914
		private new [Void] SetFloatArrayImpl([Int32] name, [Single[]] values, [Int32] count);
		// VA: 0x7B46D479C4 RVA: 0x33419C4 Offset: 0x33409C4
		private new [Void] SetVectorArrayImpl([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D47A20 RVA: 0x3341A20 Offset: 0x3340A20
		private new [Void] SetColorArrayImpl([Int32] name, [Color[]] values, [Int32] count);
		// VA: 0x7B46D47A7C RVA: 0x3341A7C Offset: 0x3340A7C
		private new [Void] SetMatrixArrayImpl([Int32] name, [Matrix4x4[]] values, [Int32] count);
		// VA: 0x7B46D47AD8 RVA: 0x3341AD8 Offset: 0x3340AD8
		private new [Single[]] GetFloatArrayImpl([Int32] name);
		// VA: 0x7B46D47B34 RVA: 0x3341B34 Offset: 0x3340B34
		private new [Vector4[]] GetVectorArrayImpl([Int32] name);
		// VA: 0x7B46D47B78 RVA: 0x3341B78 Offset: 0x3340B78
		private new [Color[]] GetColorArrayImpl([Int32] name);
		// VA: 0x7B46D47BBC RVA: 0x3341BBC Offset: 0x3340BBC
		private new [Matrix4x4[]] GetMatrixArrayImpl([Int32] name);
		// VA: 0x7B46D47C00 RVA: 0x3341C00 Offset: 0x3340C00
		private new [Int32] GetFloatArrayCountImpl([Int32] name);
		// VA: 0x7B46D47C44 RVA: 0x3341C44 Offset: 0x3340C44
		private new [Int32] GetVectorArrayCountImpl([Int32] name);
		// VA: 0x7B46D47C88 RVA: 0x3341C88 Offset: 0x3340C88
		private new [Int32] GetColorArrayCountImpl([Int32] name);
		// VA: 0x7B46D47CCC RVA: 0x3341CCC Offset: 0x3340CCC
		private new [Int32] GetMatrixArrayCountImpl([Int32] name);
		// VA: 0x7B46D47D10 RVA: 0x3341D10 Offset: 0x3340D10
		private new [Void] ExtractFloatArrayImpl([Int32] name, [Out] [Single[]] val);
		// VA: 0x7B46D47D54 RVA: 0x3341D54 Offset: 0x3340D54
		private new [Void] ExtractVectorArrayImpl([Int32] name, [Out] [Vector4[]] val);
		// VA: 0x7B46D47DA8 RVA: 0x3341DA8 Offset: 0x3340DA8
		private new [Void] ExtractColorArrayImpl([Int32] name, [Out] [Color[]] val);
		// VA: 0x7B46D47DFC RVA: 0x3341DFC Offset: 0x3340DFC
		private new [Void] ExtractMatrixArrayImpl([Int32] name, [Out] [Matrix4x4[]] val);
		// VA: 0x7B46D47E50 RVA: 0x3341E50 Offset: 0x3340E50
		private new [Vector4] GetTextureScaleAndOffsetImpl([Int32] name);
		// VA: 0x7B46D47EA4 RVA: 0x3341EA4 Offset: 0x3340EA4
		private new [Void] SetTextureOffsetImpl([Int32] name, [Vector2] offset);
		// VA: 0x7B46D47F58 RVA: 0x3341F58 Offset: 0x3340F58
		private new [Void] SetTextureScaleImpl([Int32] name, [Vector2] scale);
		// VA: 0x7B46D48004 RVA: 0x3342004 Offset: 0x3341004
		private new [Void] SetFloatArray([Int32] name, [Single[]] values, [Int32] count);
		// VA: 0x7B46D480B0 RVA: 0x33420B0 Offset: 0x33410B0
		private new [Void] SetVectorArray([Int32] name, [Vector4[]] values, [Int32] count);
		// VA: 0x7B46D481BC RVA: 0x33421BC Offset: 0x33411BC
		private new [Void] SetColorArray([Int32] name, [Color[]] values, [Int32] count);
		// VA: 0x7B46D482C8 RVA: 0x33422C8 Offset: 0x33412C8
		private new [Void] SetMatrixArray([Int32] name, [Matrix4x4[]] values, [Int32] count);
		// VA: 0x7B46D483D4 RVA: 0x33423D4 Offset: 0x33413D4
		private new [Void] ExtractFloatArray([Int32] name, [List`1] values);
		// VA: 0x7B46D484E0 RVA: 0x33424E0 Offset: 0x33414E0
		private new [Void] ExtractVectorArray([Int32] name, [List`1] values);
		// VA: 0x7B46D48660 RVA: 0x3342660 Offset: 0x3341660
		private new [Void] ExtractColorArray([Int32] name, [List`1] values);
		// VA: 0x7B46D487E0 RVA: 0x33427E0 Offset: 0x33417E0
		private new [Void] ExtractMatrixArray([Int32] name, [List`1] values);
		// VA: 0x7B46D48960 RVA: 0x3342960 Offset: 0x3341960
		public new [Void] SetInt([String] name, [Int32] value);
		// VA: 0x7B46D48AE0 RVA: 0x3342AE0 Offset: 0x3341AE0
		public new [Void] SetInt([Int32] nameID, [Int32] value);
		// VA: 0x7B46D48B60 RVA: 0x3342B60 Offset: 0x3341B60
		public new [Void] SetFloat([String] name, [Single] value);
		// VA: 0x7B46D48BB4 RVA: 0x3342BB4 Offset: 0x3341BB4
		public new [Void] SetFloat([Int32] nameID, [Single] value);
		// VA: 0x7B46D48C34 RVA: 0x3342C34 Offset: 0x3341C34
		public new [Void] SetInteger([String] name, [Int32] value);
		// VA: 0x7B46D48C88 RVA: 0x3342C88 Offset: 0x3341C88
		public new [Void] SetInteger([Int32] nameID, [Int32] value);
		// VA: 0x7B46D48D08 RVA: 0x3342D08 Offset: 0x3341D08
		public new [Void] SetColor([String] name, [Color] value);
		// VA: 0x7B46D451E8 RVA: 0x333F1E8 Offset: 0x333E1E8
		public new [Void] SetColor([Int32] nameID, [Color] value);
		// VA: 0x7B46D451E4 RVA: 0x333F1E4 Offset: 0x333E1E4
		public new [Void] SetVector([String] name, [Vector4] value);
		// VA: 0x7B46D48D5C RVA: 0x3342D5C Offset: 0x3341D5C
		public new [Void] SetVector([Int32] nameID, [Vector4] value);
		// VA: 0x7B46D48DD8 RVA: 0x3342DD8 Offset: 0x3341DD8
		public new [Void] SetMatrix([String] name, [Matrix4x4] value);
		// VA: 0x7B46D48DDC RVA: 0x3342DDC Offset: 0x3341DDC
		public new [Void] SetMatrix([Int32] nameID, [Matrix4x4] value);
		// VA: 0x7B46D48E78 RVA: 0x3342E78 Offset: 0x3341E78
		public new [Void] SetTexture([String] name, [Texture] value);
		// VA: 0x7B46D454E4 RVA: 0x333F4E4 Offset: 0x333E4E4
		public new [Void] SetTexture([Int32] nameID, [Texture] value);
		// VA: 0x7B46D45490 RVA: 0x333F490 Offset: 0x333E490
		public new [Void] SetTexture([String] name, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D48EDC RVA: 0x3342EDC Offset: 0x3341EDC
		public new [Void] SetTexture([Int32] nameID, [RenderTexture] value, [RenderTextureSubElement] element);
		// VA: 0x7B46D48F64 RVA: 0x3342F64 Offset: 0x3341F64
		public new [Void] SetBuffer([String] name, [ComputeBuffer] value);
		// VA: 0x7B46D48FC0 RVA: 0x3342FC0 Offset: 0x3341FC0
		public new [Void] SetBuffer([Int32] nameID, [ComputeBuffer] value);
		// VA: 0x7B46D49040 RVA: 0x3343040 Offset: 0x3342040
		public new [Void] SetBuffer([String] name, [GraphicsBuffer] value);
		// VA: 0x7B46D49094 RVA: 0x3343094 Offset: 0x3342094
		public new [Void] SetBuffer([Int32] nameID, [GraphicsBuffer] value);
		// VA: 0x7B46D49114 RVA: 0x3343114 Offset: 0x3342114
		public new [Void] SetConstantBuffer([String] name, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D49168 RVA: 0x3343168 Offset: 0x3342168
		public new [Void] SetConstantBuffer([Int32] nameID, [ComputeBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D49200 RVA: 0x3343200 Offset: 0x3342200
		public new [Void] SetConstantBuffer([String] name, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D4926C RVA: 0x334326C Offset: 0x334226C
		public new [Void] SetConstantBuffer([Int32] nameID, [GraphicsBuffer] value, [Int32] offset, [Int32] size);
		// VA: 0x7B46D49304 RVA: 0x3343304 Offset: 0x3342304
		public new [Void] SetFloatArray([String] name, [List`1] values);
		// VA: 0x7B46D49370 RVA: 0x3343370 Offset: 0x3342370
		public new [Void] SetFloatArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D4941C RVA: 0x334341C Offset: 0x334241C
		public new [Void] SetFloatArray([String] name, [Single[]] values);
		// VA: 0x7B46D4949C RVA: 0x334349C Offset: 0x334249C
		public new [Void] SetFloatArray([Int32] nameID, [Single[]] values);
		// VA: 0x7B46D49504 RVA: 0x3343504 Offset: 0x3342504
		public new [Void] SetColorArray([String] name, [List`1] values);
		// VA: 0x7B46D4951C RVA: 0x334351C Offset: 0x334251C
		public new [Void] SetColorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D495C8 RVA: 0x33435C8 Offset: 0x33425C8
		public new [Void] SetColorArray([String] name, [Color[]] values);
		// VA: 0x7B46D49648 RVA: 0x3343648 Offset: 0x3342648
		public new [Void] SetColorArray([Int32] nameID, [Color[]] values);
		// VA: 0x7B46D496B0 RVA: 0x33436B0 Offset: 0x33426B0
		public new [Void] SetVectorArray([String] name, [List`1] values);
		// VA: 0x7B46D496C8 RVA: 0x33436C8 Offset: 0x33426C8
		public new [Void] SetVectorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D49774 RVA: 0x3343774 Offset: 0x3342774
		public new [Void] SetVectorArray([String] name, [Vector4[]] values);
		// VA: 0x7B46D497F4 RVA: 0x33437F4 Offset: 0x33427F4
		public new [Void] SetVectorArray([Int32] nameID, [Vector4[]] values);
		// VA: 0x7B46D4985C RVA: 0x334385C Offset: 0x334285C
		public new [Void] SetMatrixArray([String] name, [List`1] values);
		// VA: 0x7B46D49874 RVA: 0x3343874 Offset: 0x3342874
		public new [Void] SetMatrixArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D49920 RVA: 0x3343920 Offset: 0x3342920
		public new [Void] SetMatrixArray([String] name, [Matrix4x4[]] values);
		// VA: 0x7B46D499A0 RVA: 0x33439A0 Offset: 0x33429A0
		public new [Void] SetMatrixArray([Int32] nameID, [Matrix4x4[]] values);
		// VA: 0x7B46D49A08 RVA: 0x3343A08 Offset: 0x3342A08
		public new [Int32] GetInt([String] name);
		// VA: 0x7B46D49A20 RVA: 0x3343A20 Offset: 0x3342A20
		public new [Int32] GetInt([Int32] nameID);
		// VA: 0x7B46D49AAC RVA: 0x3343AAC Offset: 0x3342AAC
		public new [Single] GetFloat([String] name);
		// VA: 0x7B46D49B0C RVA: 0x3343B0C Offset: 0x3342B0C
		public new [Single] GetFloat([Int32] nameID);
		// VA: 0x7B46D49B7C RVA: 0x3343B7C Offset: 0x3342B7C
		public new [Int32] GetInteger([String] name);
		// VA: 0x7B46D49BC0 RVA: 0x3343BC0 Offset: 0x3342BC0
		public new [Int32] GetInteger([Int32] nameID);
		// VA: 0x7B46D49C30 RVA: 0x3343C30 Offset: 0x3342C30
		public new [Color] GetColor([String] name);
		// VA: 0x7B46D450C4 RVA: 0x333F0C4 Offset: 0x333E0C4
		public new [Color] GetColor([Int32] nameID);
		// VA: 0x7B46D450C0 RVA: 0x333F0C0 Offset: 0x333E0C0
		public new [Vector4] GetVector([String] name);
		// VA: 0x7B46D49C74 RVA: 0x3343C74 Offset: 0x3342C74
		public new [Vector4] GetVector([Int32] nameID);
		// VA: 0x7B46D49CC0 RVA: 0x3343CC0 Offset: 0x3342CC0
		public new [Matrix4x4] GetMatrix([String] name);
		// VA: 0x7B46D49CC4 RVA: 0x3343CC4 Offset: 0x3342CC4
		public new [Matrix4x4] GetMatrix([Int32] nameID);
		// VA: 0x7B46D49D74 RVA: 0x3343D74 Offset: 0x3342D74
		public new [Texture] GetTexture([String] name);
		// VA: 0x7B46D45358 RVA: 0x333F358 Offset: 0x333E358
		public new [Texture] GetTexture([Int32] nameID);
		// VA: 0x7B46D45314 RVA: 0x333F314 Offset: 0x333E314
		public new [GraphicsBufferHandle] GetBuffer([String] name);
		// VA: 0x7B46D49DF8 RVA: 0x3343DF8 Offset: 0x3342DF8
		public new [GraphicsBufferHandle] GetConstantBuffer([String] name);
		// VA: 0x7B46D49E80 RVA: 0x3343E80 Offset: 0x3342E80
		public new [Single[]] GetFloatArray([String] name);
		// VA: 0x7B46D49F08 RVA: 0x3343F08 Offset: 0x3342F08
		public new [Single[]] GetFloatArray([Int32] nameID);
		// VA: 0x7B46D49F54 RVA: 0x3343F54 Offset: 0x3342F54
		public new [Color[]] GetColorArray([String] name);
		// VA: 0x7B46D49FD8 RVA: 0x3343FD8 Offset: 0x3342FD8
		public new [Color[]] GetColorArray([Int32] nameID);
		// VA: 0x7B46D4A024 RVA: 0x3344024 Offset: 0x3343024
		public new [Vector4[]] GetVectorArray([String] name);
		// VA: 0x7B46D4A0A8 RVA: 0x33440A8 Offset: 0x33430A8
		public new [Vector4[]] GetVectorArray([Int32] nameID);
		// VA: 0x7B46D4A0F4 RVA: 0x33440F4 Offset: 0x33430F4
		public new [Matrix4x4[]] GetMatrixArray([String] name);
		// VA: 0x7B46D4A178 RVA: 0x3344178 Offset: 0x3343178
		public new [Matrix4x4[]] GetMatrixArray([Int32] nameID);
		// VA: 0x7B46D4A1C4 RVA: 0x33441C4 Offset: 0x33431C4
		public new [Void] GetFloatArray([String] name, [List`1] values);
		// VA: 0x7B46D4A248 RVA: 0x3344248 Offset: 0x3343248
		public new [Void] GetFloatArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D4A2A4 RVA: 0x33442A4 Offset: 0x33432A4
		public new [Void] GetColorArray([String] name, [List`1] values);
		// VA: 0x7B46D4A2A8 RVA: 0x33442A8 Offset: 0x33432A8
		public new [Void] GetColorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D4A304 RVA: 0x3344304 Offset: 0x3343304
		public new [Void] GetVectorArray([String] name, [List`1] values);
		// VA: 0x7B46D4A308 RVA: 0x3344308 Offset: 0x3343308
		public new [Void] GetVectorArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D4A364 RVA: 0x3344364 Offset: 0x3343364
		public new [Void] GetMatrixArray([String] name, [List`1] values);
		// VA: 0x7B46D4A368 RVA: 0x3344368 Offset: 0x3343368
		public new [Void] GetMatrixArray([Int32] nameID, [List`1] values);
		// VA: 0x7B46D4A3C4 RVA: 0x33443C4 Offset: 0x33433C4
		public new [Void] SetTextureOffset([String] name, [Vector2] value);
		// VA: 0x7B46D45720 RVA: 0x333F720 Offset: 0x333E720
		public new [Void] SetTextureOffset([Int32] nameID, [Vector2] value);
		// VA: 0x7B46D4571C RVA: 0x333F71C Offset: 0x333E71C
		public new [Void] SetTextureScale([String] name, [Vector2] value);
		// VA: 0x7B46D45914 RVA: 0x333F914 Offset: 0x333E914
		public new [Void] SetTextureScale([Int32] nameID, [Vector2] value);
		// VA: 0x7B46D45910 RVA: 0x333F910 Offset: 0x333E910
		public new [Vector2] GetTextureOffset([String] name);
		// VA: 0x7B46D45614 RVA: 0x333F614 Offset: 0x333E614
		public new [Vector2] GetTextureOffset([Int32] nameID);
		// VA: 0x7B46D455FC RVA: 0x333F5FC Offset: 0x333E5FC
		public new [Vector2] GetTextureScale([String] name);
		// VA: 0x7B46D45814 RVA: 0x333F814 Offset: 0x333E814
		public new [Vector2] GetTextureScale([Int32] nameID);
		// VA: 0x7B46D45810 RVA: 0x333F810 Offset: 0x333E810
		public new [String[]] GetPropertyNames([MaterialPropertyType] type);
		// VA: 0x7B46D4A3C8 RVA: 0x33443C8 Offset: 0x33433C8
		private new [Void] EnableLocalKeyword_Injected(ref [LocalKeyword] keyword);
		// VA: 0x7B46D46428 RVA: 0x3340428 Offset: 0x333F428
		private new [Void] DisableLocalKeyword_Injected(ref [LocalKeyword] keyword);
		// VA: 0x7B46D464B0 RVA: 0x33404B0 Offset: 0x333F4B0
		private new [Void] SetLocalKeyword_Injected(ref [LocalKeyword] keyword, [Boolean] value);
		// VA: 0x7B46D46548 RVA: 0x3340548 Offset: 0x333F548
		private new [Boolean] IsLocalKeywordEnabled_Injected(ref [LocalKeyword] keyword);
		// VA: 0x7B46D465E0 RVA: 0x33405E0 Offset: 0x333F5E0
		private new [Void] SetColorImpl_Injected([Int32] name, ref [Color] value);
		// VA: 0x7B46D472E8 RVA: 0x33412E8 Offset: 0x33402E8
		private new [Void] SetMatrixImpl_Injected([Int32] name, ref [Matrix4x4] value);
		// VA: 0x7B46D47390 RVA: 0x3341390 Offset: 0x3340390
		private new [Void] GetColorImpl_Injected([Int32] name, out [Color] ret);
		// VA: 0x7B46D476FC RVA: 0x33416FC Offset: 0x33406FC
		private new [Void] GetMatrixImpl_Injected([Int32] name, out [Matrix4x4] ret);
		// VA: 0x7B46D477CC RVA: 0x33417CC Offset: 0x33407CC
		private new [Void] GetBufferImpl_Injected([Int32] name, out [GraphicsBufferHandle] ret);
		// VA: 0x7B46D478C0 RVA: 0x33418C0 Offset: 0x33408C0
		private new [Void] GetConstantBufferImpl_Injected([Int32] name, out [GraphicsBufferHandle] ret);
		// VA: 0x7B46D47970 RVA: 0x3341970 Offset: 0x3340970
		private new [Void] GetTextureScaleAndOffsetImpl_Injected([Int32] name, out [Vector4] ret);
		// VA: 0x7B46D47F04 RVA: 0x3341F04 Offset: 0x3340F04
		private new [Void] SetTextureOffsetImpl_Injected([Int32] name, ref [Vector2] offset);
		// VA: 0x7B46D47FB0 RVA: 0x3341FB0 Offset: 0x3340FB0
		private new [Void] SetTextureScaleImpl_Injected([Int32] name, ref [Vector2] scale);
		// VA: 0x7B46D4805C RVA: 0x334205C Offset: 0x334105C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38330
	public struct GraphicsBufferHandle : [ValueType]
	{
		// Fields
		public readonly [UInt32] value; // 0x0

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D4A40C RVA: 0x334440C Offset: 0x334340C
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D4A414 RVA: 0x3344414 Offset: 0x3343414
		public sealed new [Boolean] Equals([GraphicsBufferHandle] other);
		// VA: 0x7B46D4A48C RVA: 0x334448C Offset: 0x334348C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38770
	public sealed class GraphicsBuffer : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B384C0
		public enum Target : [Int32]
		{
			Vertex = 1,
			Index = 2,
			CopySource = 4,
			CopyDestination = 8,
			Structured = 16,
			Raw = 32,
			Append = 64,
			Counter = 128,
			IndirectArguments = 256,
			Constant = 512
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B388F0
	public struct LightBakingOutput : [ValueType]
	{
		// Fields
		public [Int32] probeOcclusionLightIndex; // 0x0
		public [Int32] occlusionMaskChannel; // 0x4
		public [Int32] lightmapBakeType; // enum: [LightmapBakeType], 0x8
		public [Int32] mixedLightingMode; // enum: [MixedLightingMode], 0xC
		public [Boolean] isBaked; // 0x10

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38A70
	public sealed class Light : [Behaviour]
	{
		// Fields
		private [Int32] m_BakedIndex; // 0x18

		// Methods
		public new [LightType] get_type();
		// VA: 0x7B46D4A49C RVA: 0x334449C Offset: 0x334349C
		public new [Single] get_spotAngle();
		// VA: 0x7B46D4A4D8 RVA: 0x33444D8 Offset: 0x33434D8
		public new [Color] get_color();
		// VA: 0x7B46D4A514 RVA: 0x3344514 Offset: 0x3343514
		public new [Void] set_color([Color] value);
		// VA: 0x7B46D4A5B0 RVA: 0x33445B0 Offset: 0x33435B0
		public new [Single] get_colorTemperature();
		// VA: 0x7B46D4A648 RVA: 0x3344648 Offset: 0x3343648
		public new [Boolean] get_useColorTemperature();
		// VA: 0x7B46D4A684 RVA: 0x3344684 Offset: 0x3343684
		public new [Single] get_intensity();
		// VA: 0x7B46D4A6C0 RVA: 0x33446C0 Offset: 0x33436C0
		public new [Void] set_intensity([Single] value);
		// VA: 0x7B46D4A6FC RVA: 0x33446FC Offset: 0x33436FC
		public new [Single] get_bounceIntensity();
		// VA: 0x7B46D4A748 RVA: 0x3344748 Offset: 0x3343748
		public new [Single] get_range();
		// VA: 0x7B46D4A784 RVA: 0x3344784 Offset: 0x3343784
		public new [LightBakingOutput] get_bakingOutput();
		// VA: 0x7B46D4A7C0 RVA: 0x33447C0 Offset: 0x33437C0
		public new [LightShadows] get_shadows();
		// VA: 0x7B46D4A86C RVA: 0x334486C Offset: 0x334386C
		public new [Single] get_shadowStrength();
		// VA: 0x7B46D4A8A8 RVA: 0x33448A8 Offset: 0x33438A8
		public new [Void] set_shadowStrength([Single] value);
		// VA: 0x7B46D4A8E4 RVA: 0x33448E4 Offset: 0x33438E4
		public new [Single] get_cookieSize();
		// VA: 0x7B46D4A930 RVA: 0x3344930 Offset: 0x3343930
		public new [Texture] get_cookie();
		// VA: 0x7B46D4A96C RVA: 0x334496C Offset: 0x334396C
		public new [Void] .ctor();
		// VA: 0x7B46D4A9A8 RVA: 0x33449A8 Offset: 0x33439A8
		private new [Void] get_color_Injected(out [Color] ret);
		// VA: 0x7B46D4A56C RVA: 0x334456C Offset: 0x334356C
		private new [Void] set_color_Injected(ref [Color] value);
		// VA: 0x7B46D4A604 RVA: 0x3344604 Offset: 0x3343604
		private new [Void] get_bakingOutput_Injected(out [LightBakingOutput] ret);
		// VA: 0x7B46D4A828 RVA: 0x3344828 Offset: 0x3343828
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38BF0
	public sealed class MeshFilter : [Component]
	{
		// Fields

		// Methods
		private new [Void] DontStripMeshFilter();
		// VA: 0x7B46D4A9B0 RVA: 0x33449B0 Offset: 0x33439B0
		public new [Mesh] get_sharedMesh();
		// VA: 0x7B46D4A9B4 RVA: 0x33449B4 Offset: 0x33439B4
		public new [Void] set_sharedMesh([Mesh] value);
		// VA: 0x7B46D4A9F0 RVA: 0x33449F0 Offset: 0x33439F0
		public new [Mesh] get_mesh();
		// VA: 0x7B46D4AA34 RVA: 0x3344A34 Offset: 0x3343A34
		public new [Void] set_mesh([Mesh] value);
		// VA: 0x7B46D4AA70 RVA: 0x3344A70 Offset: 0x3343A70
		public new [Void] .ctor();
		// VA: 0x7B46D4AAB4 RVA: 0x3344AB4 Offset: 0x3343AB4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B38D70
	public enum RenderingPath : [Int32]
	{
		UsePlayerSettings = 4294967295,
		VertexLit = 0,
		Forward = 1,
		DeferredLighting = 2,
		DeferredShading = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B39020
	public enum TransparencySortMode : [Int32]
	{
		Default = 0,
		Perspective = 1,
		Orthographic = 2,
		CustomAxis = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B392D0
	public enum StereoTargetEyeMask : [Int32]
	{
		None = 0,
		Left = 1,
		Right = 2,
		Both = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B39580
	public enum CameraType : [Int32]
	{
		Game = 1,
		SceneView = 2,
		Preview = 4,
		VR = 8,
		Reflection = 16
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B39830
	public enum LightType : [Int32]
	{
		Spot = 0,
		Directional = 1,
		Point = 2,
		Area = 3,
		Rectangle = 3,
		Disc = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B39AE0
	public enum LightShadows : [Int32]
	{
		None = 0,
		Hard = 1,
		Soft = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B39D90
	public enum FogMode : [Int32]
	{
		Linear = 1,
		Exponential = 2,
		ExponentialSquared = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3A040
	public enum LightmapBakeType : [Int32]
	{
		Realtime = 4,
		Baked = 2,
		Mixed = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3A2F0
	public enum MixedLightingMode : [Int32]
	{
		IndirectOnly = 0,
		Shadowmask = 2,
		Subtractive = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3A5A0
	public enum CameraClearFlags : [Int32]
	{
		Skybox = 1,
		Color = 2,
		SolidColor = 2,
		Depth = 3,
		Nothing = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3A850
	public enum DepthTextureMode : [Int32]
	{
		None = 0,
		Depth = 1,
		DepthNormals = 2,
		MotionVectors = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3AB00
	public enum SkinWeights : [Int32]
	{
		None = 0,
		OneBone = 1,
		TwoBones = 2,
		FourBones = 4,
		Unlimited = 255
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A709177A0
	public enum MeshTopology : [Int32]
	{
		Triangles = 0,
		Quads = 2,
		Lines = 3,
		LineStrip = 4,
		Points = 5
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3ADB0
	public enum ColorSpace : [Int32]
	{
		Uninitialized = 4294967295,
		Gamma = 0,
		Linear = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3B060
	public enum ColorGamut : [Int32]
	{
		sRGB = 0,
		Rec709 = 1,
		Rec2020 = 2,
		DisplayP3 = 3,
		HDR10 = 4,
		DolbyHDR = 5,
		P3D65G22 = 6
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3B310
	public enum ScreenOrientation : [Int32]
	{
		Portrait = 1,
		PortraitUpsideDown = 2,
		LandscapeLeft = 3,
		LandscapeRight = 4,
		AutoRotation = 5,
		Unknown = 0,
		Landscape = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3B5C0
	public enum FilterMode : [Int32]
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3B870
	public enum TextureWrapMode : [Int32]
	{
		Repeat = 0,
		Clamp = 1,
		Mirror = 2,
		MirrorOnce = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A707D4D10
	public enum TextureFormat : [Int32]
	{
		Alpha8 = 1,
		ARGB4444 = 2,
		RGB24 = 3,
		RGBA32 = 4,
		ARGB32 = 5,
		RGB565 = 7,
		R16 = 9,
		DXT1 = 10,
		DXT5 = 12,
		RGBA4444 = 13,
		BGRA32 = 14,
		RHalf = 15,
		RGHalf = 16,
		RGBAHalf = 17,
		RFloat = 18,
		RGFloat = 19,
		RGBAFloat = 20,
		YUY2 = 21,
		RGB9e5Float = 22,
		BC4 = 26,
		BC5 = 27,
		BC6H = 24,
		BC7 = 25,
		DXT1Crunched = 28,
		DXT5Crunched = 29,
		PVRTC_RGB2 = 30,
		PVRTC_RGBA2 = 31,
		PVRTC_RGB4 = 32,
		PVRTC_RGBA4 = 33,
		ETC_RGB4 = 34,
		EAC_R = 41,
		EAC_R_SIGNED = 42,
		EAC_RG = 43,
		EAC_RG_SIGNED = 44,
		ETC2_RGB = 45,
		ETC2_RGBA1 = 46,
		ETC2_RGBA8 = 47,
		ASTC_4x4 = 48,
		ASTC_5x5 = 49,
		ASTC_6x6 = 50,
		ASTC_8x8 = 51,
		ASTC_10x10 = 52,
		ASTC_12x12 = 53,
		ETC_RGB4_3DS = 60,
		ETC_RGBA8_3DS = 61,
		RG16 = 62,
		R8 = 63,
		ETC_RGB4Crunched = 64,
		ETC2_RGBA8Crunched = 65,
		ASTC_HDR_4x4 = 66,
		ASTC_HDR_5x5 = 67,
		ASTC_HDR_6x6 = 68,
		ASTC_HDR_8x8 = 69,
		ASTC_HDR_10x10 = 70,
		ASTC_HDR_12x12 = 71,
		RG32 = 72,
		RGB48 = 73,
		RGBA64 = 74,
		ASTC_RGB_4x4 = 48,
		ASTC_RGB_5x5 = 49,
		ASTC_RGB_6x6 = 50,
		ASTC_RGB_8x8 = 51,
		ASTC_RGB_10x10 = 52,
		ASTC_RGB_12x12 = 53,
		ASTC_RGBA_4x4 = 54,
		ASTC_RGBA_5x5 = 55,
		ASTC_RGBA_6x6 = 56,
		ASTC_RGBA_8x8 = 57,
		ASTC_RGBA_10x10 = 58,
		ASTC_RGBA_12x12 = 59
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3BB20
	private enum TextureColorSpace : [Int32]
	{
		Linear = 0,
		sRGB = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B40030
	public enum CubemapFace : [Int32]
	{
		Unknown = 4294967295,
		PositiveX = 0,
		NegativeX = 1,
		PositiveY = 2,
		NegativeY = 3,
		PositiveZ = 4,
		NegativeZ = 5
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B402E0
	public enum RenderTextureFormat : [Int32]
	{
		ARGB32 = 0,
		Depth = 1,
		ARGBHalf = 2,
		Shadowmap = 3,
		RGB565 = 4,
		ARGB4444 = 5,
		ARGB1555 = 6,
		Default = 7,
		ARGB2101010 = 8,
		DefaultHDR = 9,
		ARGB64 = 10,
		ARGBFloat = 11,
		RGFloat = 12,
		RGHalf = 13,
		RFloat = 14,
		RHalf = 15,
		R8 = 16,
		ARGBInt = 17,
		RGInt = 18,
		RInt = 19,
		BGRA32 = 20,
		RGB111110Float = 22,
		RG32 = 23,
		RGBAUShort = 24,
		RG16 = 25,
		BGRA10101010_XR = 26,
		BGR101010_XR = 27,
		R16 = 28
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B40590
	public enum VRTextureUsage : [Int32]
	{
		None = 0,
		OneEye = 1,
		TwoEyes = 2,
		DeviceSpecific = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B40840
	public enum RenderTextureCreationFlags : [Int32]
	{
		MipMap = 1,
		AutoGenerateMips = 2,
		SRGB = 4,
		EyeTexture = 8,
		EnableRandomWrite = 16,
		CreatedFromScript = 32,
		AllowVerticalFlip = 128,
		NoResolvedColorSurface = 256,
		DynamicallyScalable = 1024,
		BindMS = 2048
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B40AF0
	public enum RenderTextureReadWrite : [Int32]
	{
		Default = 0,
		Linear = 1,
		sRGB = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B40DA0
	public enum RenderTextureMemoryless : [Int32]
	{
		None = 0,
		Color = 1,
		Depth = 2,
		MSAA = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B41050
	public enum LightmapsMode : [Int32]
	{
		NonDirectional = 0,
		CombinedDirectional = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B41300
	public enum MaterialGlobalIlluminationFlags : [Int32]
	{
		None = 0,
		RealtimeEmissive = 1,
		BakedEmissive = 2,
		EmissiveIsBlack = 4,
		AnyEmissive = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B415B0
	public enum LineTextureMode : [Int32]
	{
		Stretch = 0,
		Tile = 1,
		DistributePerSegment = 2,
		RepeatPerSegment = 3,
		Static = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B41860
	public enum LineAlignment : [Int32]
	{
		View = 0,
		Local = 1,
		TransformZ = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B3BDD0
	public class SkinnedMeshRenderer : [Renderer]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B41B10
	public class MeshRenderer : [Renderer]
	{
		// Fields

		// Methods
		private new [Void] DontStripMeshRenderer();
		// VA: 0x7B46D4AABC RVA: 0x3344ABC Offset: 0x3343ABC
		public new [Mesh] get_additionalVertexStreams();
		// VA: 0x7B46D4AAC0 RVA: 0x3344AC0 Offset: 0x3343AC0
		public new [Void] set_additionalVertexStreams([Mesh] value);
		// VA: 0x7B46D4AAFC RVA: 0x3344AFC Offset: 0x3343AFC
		public new [Mesh] get_enlightenVertexStream();
		// VA: 0x7B46D4AB40 RVA: 0x3344B40 Offset: 0x3343B40
		public new [Void] set_enlightenVertexStream([Mesh] value);
		// VA: 0x7B46D4AB7C RVA: 0x3344B7C Offset: 0x3343B7C
		public new [Int32] get_subMeshStartIndex();
		// VA: 0x7B46D4ABC0 RVA: 0x3344BC0 Offset: 0x3343BC0
		public new [Void] .ctor();
		// VA: 0x7B46D4ABFC RVA: 0x3344BFC Offset: 0x3343BFC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70916E10
	public sealed class Mesh : [Object]
	{
		// Fields

		// Methods
		private static new [Void] Internal_Create([Mesh] mono);
		// VA: 0x7B46D4AC04 RVA: 0x3344C04 Offset: 0x3343C04
		public new [Void] .ctor();
		// VA: 0x7B46D4AC40 RVA: 0x3344C40 Offset: 0x3343C40
		internal static new [Mesh] FromInstanceID([Int32] id);
		// VA: 0x7B46D4ACC0 RVA: 0x3344CC0 Offset: 0x3343CC0
		public new [IndexFormat] get_indexFormat();
		// VA: 0x7B46D4ACFC RVA: 0x3344CFC Offset: 0x3343CFC
		public new [Void] set_indexFormat([IndexFormat] value);
		// VA: 0x7B46D4AD38 RVA: 0x3344D38 Offset: 0x3343D38
		internal new [UInt32] GetTotalIndexCount();
		// VA: 0x7B46D4AD7C RVA: 0x3344D7C Offset: 0x3343D7C
		public new [Void] SetIndexBufferParams([Int32] indexCount, [IndexFormat] format);
		// VA: 0x7B46D4ADB8 RVA: 0x3344DB8 Offset: 0x3343DB8
		private new [Void] InternalSetIndexBufferData([IntPtr] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] elemSize, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4AE0C RVA: 0x3344E0C Offset: 0x3343E0C
		private new [Void] InternalSetIndexBufferDataFromArray([Array] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] elemSize, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4AE90 RVA: 0x3344E90 Offset: 0x3343E90
		private new [Void] SetVertexBufferParamsFromPtr([Int32] vertexCount, [IntPtr] attributesPtr, [Int32] attributesCount);
		// VA: 0x7B46D4AF14 RVA: 0x3344F14 Offset: 0x3343F14
		private new [Void] SetVertexBufferParamsFromArray([Int32] vertexCount, [VertexAttributeDescriptor[]] attributes);
		// VA: 0x7B46D4AF70 RVA: 0x3344F70 Offset: 0x3343F70
		private new [Void] InternalSetVertexBufferData([Int32] stream, [IntPtr] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] elemSize, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4AFC4 RVA: 0x3344FC4 Offset: 0x3343FC4
		private new [Void] InternalSetVertexBufferDataFromArray([Int32] stream, [Array] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] elemSize, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4B050 RVA: 0x3345050 Offset: 0x3344050
		private new [Array] GetVertexAttributesAlloc();
		// VA: 0x7B46D4B0DC RVA: 0x33450DC Offset: 0x33440DC
		private new [Int32] GetVertexAttributesArray([VertexAttributeDescriptor[]] attributes);
		// VA: 0x7B46D4B118 RVA: 0x3345118 Offset: 0x3344118
		private new [Int32] GetVertexAttributesList([List`1] attributes);
		// VA: 0x7B46D4B15C RVA: 0x334515C Offset: 0x334415C
		private new [Int32] GetVertexAttributeCountImpl();
		// VA: 0x7B46D4B1A0 RVA: 0x33451A0 Offset: 0x33441A0
		public new [VertexAttributeDescriptor] GetVertexAttribute([Int32] index);
		// VA: 0x7B46D4B1DC RVA: 0x33451DC Offset: 0x33441DC
		private new [UInt32] GetIndexStartImpl([Int32] submesh);
		// VA: 0x7B46D4B28C RVA: 0x334528C Offset: 0x334428C
		private new [UInt32] GetIndexCountImpl([Int32] submesh);
		// VA: 0x7B46D4B2D0 RVA: 0x33452D0 Offset: 0x33442D0
		private new [UInt32] GetTrianglesCountImpl([Int32] submesh);
		// VA: 0x7B46D4B314 RVA: 0x3345314 Offset: 0x3344314
		private new [UInt32] GetBaseVertexImpl([Int32] submesh);
		// VA: 0x7B46D4B358 RVA: 0x3345358 Offset: 0x3344358
		private new [Int32[]] GetTrianglesImpl([Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B39C RVA: 0x334539C Offset: 0x334439C
		private new [Int32[]] GetIndicesImpl([Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B3F0 RVA: 0x33453F0 Offset: 0x33443F0
		private new [Void] SetIndicesImpl([Int32] submesh, [MeshTopology] topology, [IndexFormat] indicesFormat, [Array] indices, [Int32] arrayStart, [Int32] arraySize, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D4B444 RVA: 0x3345444 Offset: 0x3344444
		private new [Void] SetIndicesNativeArrayImpl([Int32] submesh, [MeshTopology] topology, [IndexFormat] indicesFormat, [IntPtr] indices, [Int32] arrayStart, [Int32] arraySize, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D4B4E0 RVA: 0x33454E0 Offset: 0x33444E0
		private new [Void] GetTrianglesNonAllocImpl([Out] [Int32[]] values, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B57C RVA: 0x334557C Offset: 0x334457C
		private new [Void] GetTrianglesNonAllocImpl16([Out] [UInt16[]] values, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B5D8 RVA: 0x33455D8 Offset: 0x33445D8
		private new [Void] GetIndicesNonAllocImpl([Out] [Int32[]] values, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B634 RVA: 0x3345634 Offset: 0x3344634
		private new [Void] GetIndicesNonAllocImpl16([Out] [UInt16[]] values, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D4B690 RVA: 0x3345690 Offset: 0x3344690
		private new [Void] PrintErrorCantAccessChannel([VertexAttribute] ch);
		// VA: 0x7B46D4B6EC RVA: 0x33456EC Offset: 0x33446EC
		public new [Boolean] HasVertexAttribute([VertexAttribute] attr);
		// VA: 0x7B46D4B730 RVA: 0x3345730 Offset: 0x3344730
		public new [Int32] GetVertexAttributeDimension([VertexAttribute] attr);
		// VA: 0x7B46D4B774 RVA: 0x3345774 Offset: 0x3344774
		public new [VertexAttributeFormat] GetVertexAttributeFormat([VertexAttribute] attr);
		// VA: 0x7B46D4B7B8 RVA: 0x33457B8 Offset: 0x33447B8
		public new [Int32] GetVertexAttributeStream([VertexAttribute] attr);
		// VA: 0x7B46D4B7FC RVA: 0x33457FC Offset: 0x33447FC
		public new [Int32] GetVertexAttributeOffset([VertexAttribute] attr);
		// VA: 0x7B46D4B840 RVA: 0x3345840 Offset: 0x3344840
		private new [Void] SetArrayForChannelImpl([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [Array] values, [Int32] arraySize, [Int32] valuesStart, [Int32] valuesCount, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4B884 RVA: 0x3345884 Offset: 0x3344884
		private new [Void] SetNativeArrayForChannelImpl([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [IntPtr] values, [Int32] arraySize, [Int32] valuesStart, [Int32] valuesCount, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4B920 RVA: 0x3345920 Offset: 0x3344920
		private new [Array] GetAllocArrayFromChannelImpl([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim);
		// VA: 0x7B46D4B9BC RVA: 0x33459BC Offset: 0x33449BC
		private new [Void] GetArrayFromChannelImpl([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [Array] values);
		// VA: 0x7B46D4BA18 RVA: 0x3345A18 Offset: 0x3344A18
		public new [Int32] get_vertexBufferCount();
		// VA: 0x7B46D4BA84 RVA: 0x3345A84 Offset: 0x3344A84
		public new [Int32] GetVertexBufferStride([Int32] stream);
		// VA: 0x7B46D4BAC0 RVA: 0x3345AC0 Offset: 0x3344AC0
		public new [IntPtr] GetNativeVertexBufferPtr([Int32] index);
		// VA: 0x7B46D4BB04 RVA: 0x3345B04 Offset: 0x3344B04
		public new [IntPtr] GetNativeIndexBufferPtr();
		// VA: 0x7B46D4BB48 RVA: 0x3345B48 Offset: 0x3344B48
		private new [GraphicsBuffer] GetVertexBufferImpl([Int32] index);
		// VA: 0x7B46D4BB84 RVA: 0x3345B84 Offset: 0x3344B84
		private new [GraphicsBuffer] GetIndexBufferImpl();
		// VA: 0x7B46D4BBC8 RVA: 0x3345BC8 Offset: 0x3344BC8
		private new [GraphicsBuffer] GetBoneWeightBufferImpl([Int32] bonesPerVertex);
		// VA: 0x7B46D4BC04 RVA: 0x3345C04 Offset: 0x3344C04
		private new [GraphicsBuffer] GetBlendShapeBufferImpl([Int32] layout);
		// VA: 0x7B46D4BC48 RVA: 0x3345C48 Offset: 0x3344C48
		public new [GraphicsBuffer]->[Target] get_vertexBufferTarget();
		// VA: 0x7B46D4BC8C RVA: 0x3345C8C Offset: 0x3344C8C
		public new [Void] set_vertexBufferTarget([GraphicsBuffer]->[Target] value);
		// VA: 0x7B46D4BCC8 RVA: 0x3345CC8 Offset: 0x3344CC8
		public new [GraphicsBuffer]->[Target] get_indexBufferTarget();
		// VA: 0x7B46D4BD0C RVA: 0x3345D0C Offset: 0x3344D0C
		public new [Void] set_indexBufferTarget([GraphicsBuffer]->[Target] value);
		// VA: 0x7B46D4BD48 RVA: 0x3345D48 Offset: 0x3344D48
		public new [Int32] get_blendShapeCount();
		// VA: 0x7B46D4BD8C RVA: 0x3345D8C Offset: 0x3344D8C
		public new [Void] ClearBlendShapes();
		// VA: 0x7B46D4BDC8 RVA: 0x3345DC8 Offset: 0x3344DC8
		public new [String] GetBlendShapeName([Int32] shapeIndex);
		// VA: 0x7B46D4BE04 RVA: 0x3345E04 Offset: 0x3344E04
		public new [Int32] GetBlendShapeIndex([String] blendShapeName);
		// VA: 0x7B46D4BE48 RVA: 0x3345E48 Offset: 0x3344E48
		public new [Int32] GetBlendShapeFrameCount([Int32] shapeIndex);
		// VA: 0x7B46D4BE8C RVA: 0x3345E8C Offset: 0x3344E8C
		public new [Single] GetBlendShapeFrameWeight([Int32] shapeIndex, [Int32] frameIndex);
		// VA: 0x7B46D4BED0 RVA: 0x3345ED0 Offset: 0x3344ED0
		public new [Void] GetBlendShapeFrameVertices([Int32] shapeIndex, [Int32] frameIndex, [Vector3[]] deltaVertices, [Vector3[]] deltaNormals, [Vector3[]] deltaTangents);
		// VA: 0x7B46D4BF24 RVA: 0x3345F24 Offset: 0x3344F24
		public new [Void] AddBlendShapeFrame([String] shapeName, [Single] frameWeight, [Vector3[]] deltaVertices, [Vector3[]] deltaNormals, [Vector3[]] deltaTangents);
		// VA: 0x7B46D4BF98 RVA: 0x3345F98 Offset: 0x3344F98
		private new [BlendShape] GetBlendShapeOffsetInternal([Int32] index);
		// VA: 0x7B46D4C014 RVA: 0x3346014 Offset: 0x3345014
		private new [Boolean] HasBoneWeights();
		// VA: 0x7B46D4C0CC RVA: 0x33460CC Offset: 0x33450CC
		private new [BoneWeight[]] GetBoneWeightsImpl();
		// VA: 0x7B46D4C108 RVA: 0x3346108 Offset: 0x3345108
		private new [Void] SetBoneWeightsImpl([BoneWeight[]] weights);
		// VA: 0x7B46D4C144 RVA: 0x3346144 Offset: 0x3345144
		public new [Void] SetBoneWeights([NativeArray`1] bonesPerVertex, [NativeArray`1] weights);
		// VA: 0x7B46D4C188 RVA: 0x3346188 Offset: 0x3345188
		private new [Void] InternalSetBoneWeights([IntPtr] bonesPerVertex, [Int32] bonesPerVertexSize, [IntPtr] weights, [Int32] weightsSize);
		// VA: 0x7B46D4C270 RVA: 0x3346270 Offset: 0x3345270
		public new [NativeArray`1] GetAllBoneWeights();
		// VA: 0x7B46D4C2DC RVA: 0x33462DC Offset: 0x33452DC
		public new [NativeArray`1] GetBonesPerVertex();
		// VA: 0x7B46D4C408 RVA: 0x3346408 Offset: 0x3345408
		private new [Int32] GetAllBoneWeightsArraySize();
		// VA: 0x7B46D4C3CC RVA: 0x33463CC Offset: 0x33453CC
		private new [Int32] GetBoneWeightBufferLayoutInternal();
		// VA: 0x7B46D4C564 RVA: 0x3346564 Offset: 0x3345564
		private new [IntPtr] GetAllBoneWeightsArray();
		// VA: 0x7B46D4C390 RVA: 0x3346390 Offset: 0x3345390
		private new [IntPtr] GetBonesPerVertexArray();
		// VA: 0x7B46D4C528 RVA: 0x3346528 Offset: 0x3345528
		public new [Int32] get_bindposeCount();
		// VA: 0x7B46D4C5A0 RVA: 0x33465A0 Offset: 0x33455A0
		public new [Matrix4x4[]] get_bindposes();
		// VA: 0x7B46D4C5DC RVA: 0x33465DC Offset: 0x33455DC
		public new [Void] set_bindposes([Matrix4x4[]] value);
		// VA: 0x7B46D4C618 RVA: 0x3346618 Offset: 0x3345618
		public new [NativeArray`1] GetBindposes();
		// VA: 0x7B46D4C65C RVA: 0x334665C Offset: 0x334565C
		private new [IntPtr] GetBindposesArray();
		// VA: 0x7B46D4C710 RVA: 0x3346710 Offset: 0x3345710
		private new [Void] GetBoneWeightsNonAllocImpl([Out] [BoneWeight[]] values);
		// VA: 0x7B46D4C74C RVA: 0x334674C Offset: 0x334574C
		private new [Void] GetBindposesNonAllocImpl([Out] [Matrix4x4[]] values);
		// VA: 0x7B46D4C790 RVA: 0x3346790 Offset: 0x3345790
		public new [Boolean] get_isReadable();
		// VA: 0x7B46D4C7D4 RVA: 0x33467D4 Offset: 0x33457D4
		internal new [Boolean] get_canAccess();
		// VA: 0x7B46D4C810 RVA: 0x3346810 Offset: 0x3345810
		public new [Int32] get_vertexCount();
		// VA: 0x7B46D4C4EC RVA: 0x33464EC Offset: 0x33454EC
		public new [Int32] get_subMeshCount();
		// VA: 0x7B46D4C84C RVA: 0x334684C Offset: 0x334584C
		public new [Void] set_subMeshCount([Int32] value);
		// VA: 0x7B46D4C888 RVA: 0x3346888 Offset: 0x3345888
		public new [Void] SetSubMesh([Int32] index, [SubMeshDescriptor] desc, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4C8CC RVA: 0x33468CC Offset: 0x33458CC
		public new [SubMeshDescriptor] GetSubMesh([Int32] index);
		// VA: 0x7B46D4C984 RVA: 0x3346984 Offset: 0x3345984
		private new [Void] SetAllSubMeshesAtOnceFromArray([SubMeshDescriptor[]] desc, [Int32] start, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4CA54 RVA: 0x3346A54 Offset: 0x3345A54
		private new [Void] SetAllSubMeshesAtOnceFromNativeArray([IntPtr] desc, [Int32] start, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4CAC0 RVA: 0x3346AC0 Offset: 0x3345AC0
		public new [Bounds] get_bounds();
		// VA: 0x7B46D4CB2C RVA: 0x3346B2C Offset: 0x3345B2C
		public new [Void] set_bounds([Bounds] value);
		// VA: 0x7B46D4CBD8 RVA: 0x3346BD8 Offset: 0x3345BD8
		private new [Void] ClearImpl([Boolean] keepVertexLayout);
		// VA: 0x7B46D4CC60 RVA: 0x3346C60 Offset: 0x3345C60
		private new [Void] RecalculateBoundsImpl([MeshUpdateFlags] flags);
		// VA: 0x7B46D4CCA4 RVA: 0x3346CA4 Offset: 0x3345CA4
		private new [Void] RecalculateNormalsImpl([MeshUpdateFlags] flags);
		// VA: 0x7B46D4CCE8 RVA: 0x3346CE8 Offset: 0x3345CE8
		private new [Void] RecalculateTangentsImpl([MeshUpdateFlags] flags);
		// VA: 0x7B46D4CD2C RVA: 0x3346D2C Offset: 0x3345D2C
		private new [Void] MarkDynamicImpl();
		// VA: 0x7B46D4CD70 RVA: 0x3346D70 Offset: 0x3345D70
		public new [Void] MarkModified();
		// VA: 0x7B46D4CDAC RVA: 0x3346DAC Offset: 0x3345DAC
		private new [Void] UploadMeshDataImpl([Boolean] markNoLongerReadable);
		// VA: 0x7B46D4CDE8 RVA: 0x3346DE8 Offset: 0x3345DE8
		private new [MeshTopology] GetTopologyImpl([Int32] submesh);
		// VA: 0x7B46D4CE2C RVA: 0x3346E2C Offset: 0x3345E2C
		private new [Void] RecalculateUVDistributionMetricImpl([Int32] uvSetIndex, [Single] uvAreaThreshold);
		// VA: 0x7B46D4CE70 RVA: 0x3346E70 Offset: 0x3345E70
		private new [Void] RecalculateUVDistributionMetricsImpl([Single] uvAreaThreshold);
		// VA: 0x7B46D4CEC4 RVA: 0x3346EC4 Offset: 0x3345EC4
		public new [Single] GetUVDistributionMetric([Int32] uvSetIndex);
		// VA: 0x7B46D4CF10 RVA: 0x3346F10 Offset: 0x3345F10
		private new [Void] CombineMeshesImpl([CombineInstance[]] combine, [Boolean] mergeSubMeshes, [Boolean] useMatrices, [Boolean] hasLightmapData);
		// VA: 0x7B46D4CF54 RVA: 0x3346F54 Offset: 0x3345F54
		private new [Void] OptimizeImpl();
		// VA: 0x7B46D4CFC0 RVA: 0x3346FC0 Offset: 0x3345FC0
		private new [Void] OptimizeIndexBuffersImpl();
		// VA: 0x7B46D4CFFC RVA: 0x3346FFC Offset: 0x3345FFC
		private new [Void] OptimizeReorderVertexBufferImpl();
		// VA: 0x7B46D4D038 RVA: 0x3347038 Offset: 0x3346038
		internal static new [VertexAttribute] GetUVChannel([Int32] uvIndex);
		// VA: 0x7B46D4D074 RVA: 0x3347074 Offset: 0x3346074
		internal static new [Int32] DefaultDimensionForChannel([VertexAttribute] channel);
		// VA: 0x7B46D4D0E8 RVA: 0x33470E8 Offset: 0x33460E8
		private new [T[]] GetAllocArrayFromChannel([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [T[]] GetAllocArrayFromChannel([VertexAttribute] channel);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		private new [Void] SetSizedArrayForChannel([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [Array] values, [Int32] valuesArrayLength, [Int32] valuesStart, [Int32] valuesCount, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4D184 RVA: 0x3347184 Offset: 0x3346184
		private new [Void] SetSizedNativeArrayForChannel([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [IntPtr] values, [Int32] valuesArrayLength, [Int32] valuesStart, [Int32] valuesCount, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4D418 RVA: 0x3347418 Offset: 0x3346418
		private new [Void] SetArrayForChannel([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [T[]] values, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] SetArrayForChannel([VertexAttribute] channel, [T[]] values, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] SetListForChannel([VertexAttribute] channel, [VertexAttributeFormat] format, [Int32] dim, [List`1] values, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] SetListForChannel([VertexAttribute] channel, [List`1] values, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] GetListForChannel([List`1] buffer, [Int32] capacity, [VertexAttribute] channel, [Int32] dim);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] GetListForChannel([List`1] buffer, [Int32] capacity, [VertexAttribute] channel, [Int32] dim, [VertexAttributeFormat] channelType);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Vector3[]] get_vertices();
		// VA: 0x7B46D4D6A4 RVA: 0x33476A4 Offset: 0x33466A4
		public new [Void] set_vertices([Vector3[]] value);
		// VA: 0x7B46D4D6F0 RVA: 0x33476F0 Offset: 0x33466F0
		public new [Vector3[]] get_normals();
		// VA: 0x7B46D4D750 RVA: 0x3347750 Offset: 0x3346750
		public new [Void] set_normals([Vector3[]] value);
		// VA: 0x7B46D4D79C RVA: 0x334779C Offset: 0x334679C
		public new [Vector4[]] get_tangents();
		// VA: 0x7B46D4D7FC RVA: 0x33477FC Offset: 0x33467FC
		public new [Void] set_tangents([Vector4[]] value);
		// VA: 0x7B46D4D848 RVA: 0x3347848 Offset: 0x3346848
		public new [Vector2[]] get_uv();
		// VA: 0x7B46D4D8A8 RVA: 0x33478A8 Offset: 0x33468A8
		public new [Void] set_uv([Vector2[]] value);
		// VA: 0x7B46D4D8F4 RVA: 0x33478F4 Offset: 0x33468F4
		public new [Vector2[]] get_uv2();
		// VA: 0x7B46D4D954 RVA: 0x3347954 Offset: 0x3346954
		public new [Void] set_uv2([Vector2[]] value);
		// VA: 0x7B46D4D9A0 RVA: 0x33479A0 Offset: 0x33469A0
		public new [Vector2[]] get_uv3();
		// VA: 0x7B46D4DA00 RVA: 0x3347A00 Offset: 0x3346A00
		public new [Void] set_uv3([Vector2[]] value);
		// VA: 0x7B46D4DA4C RVA: 0x3347A4C Offset: 0x3346A4C
		public new [Vector2[]] get_uv4();
		// VA: 0x7B46D4DAAC RVA: 0x3347AAC Offset: 0x3346AAC
		public new [Void] set_uv4([Vector2[]] value);
		// VA: 0x7B46D4DAF8 RVA: 0x3347AF8 Offset: 0x3346AF8
		public new [Vector2[]] get_uv5();
		// VA: 0x7B46D4DB58 RVA: 0x3347B58 Offset: 0x3346B58
		public new [Void] set_uv5([Vector2[]] value);
		// VA: 0x7B46D4DBA4 RVA: 0x3347BA4 Offset: 0x3346BA4
		public new [Vector2[]] get_uv6();
		// VA: 0x7B46D4DC04 RVA: 0x3347C04 Offset: 0x3346C04
		public new [Void] set_uv6([Vector2[]] value);
		// VA: 0x7B46D4DC50 RVA: 0x3347C50 Offset: 0x3346C50
		public new [Vector2[]] get_uv7();
		// VA: 0x7B46D4DCB0 RVA: 0x3347CB0 Offset: 0x3346CB0
		public new [Void] set_uv7([Vector2[]] value);
		// VA: 0x7B46D4DCFC RVA: 0x3347CFC Offset: 0x3346CFC
		public new [Vector2[]] get_uv8();
		// VA: 0x7B46D4DD5C RVA: 0x3347D5C Offset: 0x3346D5C
		public new [Void] set_uv8([Vector2[]] value);
		// VA: 0x7B46D4DDA8 RVA: 0x3347DA8 Offset: 0x3346DA8
		public new [Color[]] get_colors();
		// VA: 0x7B46D4DE08 RVA: 0x3347E08 Offset: 0x3346E08
		public new [Void] set_colors([Color[]] value);
		// VA: 0x7B46D4DE54 RVA: 0x3347E54 Offset: 0x3346E54
		public new [Color32[]] get_colors32();
		// VA: 0x7B46D4DEB4 RVA: 0x3347EB4 Offset: 0x3346EB4
		public new [Void] set_colors32([Color32[]] value);
		// VA: 0x7B46D4DF08 RVA: 0x3347F08 Offset: 0x3346F08
		public new [Void] GetVertices([List`1] vertices);
		// VA: 0x7B46D4DF70 RVA: 0x3347F70 Offset: 0x3346F70
		public new [Void] SetVertices([List`1] inVertices);
		// VA: 0x7B46D4E05C RVA: 0x334805C Offset: 0x334705C
		public new [Void] SetVertices([List`1] inVertices, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E0C8 RVA: 0x33480C8 Offset: 0x33470C8
		public new [Void] SetVertices([List`1] inVertices, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E0D0 RVA: 0x33480D0 Offset: 0x33470D0
		public new [Void] SetVertices([Vector3[]] inVertices);
		// VA: 0x7B46D4E14C RVA: 0x334814C Offset: 0x334714C
		public new [Void] SetVertices([Vector3[]] inVertices, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E1B4 RVA: 0x33481B4 Offset: 0x33471B4
		public new [Void] SetVertices([Vector3[]] inVertices, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E21C RVA: 0x334821C Offset: 0x334721C
		public new [Void] SetVertices([NativeArray`1] inVertices);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetVertices([NativeArray`1] inVertices, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetVertices([NativeArray`1] inVertices, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] GetNormals([List`1] normals);
		// VA: 0x7B46D4E288 RVA: 0x3348288 Offset: 0x3347288
		public new [Void] SetNormals([List`1] inNormals);
		// VA: 0x7B46D4E374 RVA: 0x3348374 Offset: 0x3347374
		public new [Void] SetNormals([List`1] inNormals, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E3E0 RVA: 0x33483E0 Offset: 0x33473E0
		public new [Void] SetNormals([List`1] inNormals, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E3E8 RVA: 0x33483E8 Offset: 0x33473E8
		public new [Void] SetNormals([Vector3[]] inNormals);
		// VA: 0x7B46D4E464 RVA: 0x3348464 Offset: 0x3347464
		public new [Void] SetNormals([Vector3[]] inNormals, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E4CC RVA: 0x33484CC Offset: 0x33474CC
		public new [Void] SetNormals([Vector3[]] inNormals, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E534 RVA: 0x3348534 Offset: 0x3347534
		public new [Void] SetNormals([NativeArray`1] inNormals);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetNormals([NativeArray`1] inNormals, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetNormals([NativeArray`1] inNormals, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] GetTangents([List`1] tangents);
		// VA: 0x7B46D4E5A0 RVA: 0x33485A0 Offset: 0x33475A0
		public new [Void] SetTangents([List`1] inTangents);
		// VA: 0x7B46D4E68C RVA: 0x334868C Offset: 0x334768C
		public new [Void] SetTangents([List`1] inTangents, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E6F8 RVA: 0x33486F8 Offset: 0x33476F8
		public new [Void] SetTangents([List`1] inTangents, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E700 RVA: 0x3348700 Offset: 0x3347700
		public new [Void] SetTangents([Vector4[]] inTangents);
		// VA: 0x7B46D4E77C RVA: 0x334877C Offset: 0x334777C
		public new [Void] SetTangents([Vector4[]] inTangents, [Int32] start, [Int32] length);
		// VA: 0x7B46D4E7E4 RVA: 0x33487E4 Offset: 0x33477E4
		public new [Void] SetTangents([Vector4[]] inTangents, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4E84C RVA: 0x334884C Offset: 0x334784C
		public new [Void] SetTangents([NativeArray`1] inTangents);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetTangents([NativeArray`1] inTangents, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetTangents([NativeArray`1] inTangents, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] GetColors([List`1] colors);
		// VA: 0x7B46D4E8B8 RVA: 0x33488B8 Offset: 0x33478B8
		public new [Void] SetColors([List`1] inColors);
		// VA: 0x7B46D4E9A4 RVA: 0x33489A4 Offset: 0x33479A4
		public new [Void] SetColors([List`1] inColors, [Int32] start, [Int32] length);
		// VA: 0x7B46D4EA10 RVA: 0x3348A10 Offset: 0x3347A10
		public new [Void] SetColors([List`1] inColors, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4EA18 RVA: 0x3348A18 Offset: 0x3347A18
		public new [Void] SetColors([Color[]] inColors);
		// VA: 0x7B46D4EA94 RVA: 0x3348A94 Offset: 0x3347A94
		public new [Void] SetColors([Color[]] inColors, [Int32] start, [Int32] length);
		// VA: 0x7B46D4EAFC RVA: 0x3348AFC Offset: 0x3347AFC
		public new [Void] SetColors([Color[]] inColors, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4EB64 RVA: 0x3348B64 Offset: 0x3347B64
		public new [Void] GetColors([List`1] colors);
		// VA: 0x7B46D4EBD0 RVA: 0x3348BD0 Offset: 0x3347BD0
		public new [Void] SetColors([List`1] inColors);
		// VA: 0x7B46D4ECC0 RVA: 0x3348CC0 Offset: 0x3347CC0
		public new [Void] SetColors([List`1] inColors, [Int32] start, [Int32] length);
		// VA: 0x7B46D4ED2C RVA: 0x3348D2C Offset: 0x3347D2C
		public new [Void] SetColors([List`1] inColors, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4ED34 RVA: 0x3348D34 Offset: 0x3347D34
		public new [Void] SetColors([Color32[]] inColors);
		// VA: 0x7B46D4EDC8 RVA: 0x3348DC8 Offset: 0x3347DC8
		public new [Void] SetColors([Color32[]] inColors, [Int32] start, [Int32] length);
		// VA: 0x7B46D4EE30 RVA: 0x3348E30 Offset: 0x3347E30
		public new [Void] SetColors([Color32[]] inColors, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4EE98 RVA: 0x3348E98 Offset: 0x3347E98
		public new [Void] SetColors([NativeArray`1] inColors);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetColors([NativeArray`1] inColors, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetColors([NativeArray`1] inColors, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] SetUvsImpl([Int32] uvIndex, [Int32] dim, [List`1] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4EF04 RVA: 0x3348F04 Offset: 0x3347F04
		public new [Void] SetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4EF80 RVA: 0x3348F80 Offset: 0x3347F80
		public new [Void] SetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4EFFC RVA: 0x3348FFC Offset: 0x3347FFC
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4EF78 RVA: 0x3348F78 Offset: 0x3347F78
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F078 RVA: 0x3349078 Offset: 0x3348078
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4EFF4 RVA: 0x3348FF4 Offset: 0x3347FF4
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F104 RVA: 0x3349104 Offset: 0x3348104
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4F070 RVA: 0x3349070 Offset: 0x3348070
		public new [Void] SetUVs([Int32] channel, [List`1] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F190 RVA: 0x3349190 Offset: 0x3348190
		private new [Void] SetUvsImpl([Int32] uvIndex, [Int32] dim, [Array] uvs, [Int32] arrayStart, [Int32] arraySize, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F21C RVA: 0x334921C Offset: 0x334821C
		public new [Void] SetUVs([Int32] channel, [Vector2[]] uvs);
		// VA: 0x7B46D4F324 RVA: 0x3349324 Offset: 0x3348324
		public new [Void] SetUVs([Int32] channel, [Vector3[]] uvs);
		// VA: 0x7B46D4F384 RVA: 0x3349384 Offset: 0x3348384
		public new [Void] SetUVs([Int32] channel, [Vector4[]] uvs);
		// VA: 0x7B46D4F3E4 RVA: 0x33493E4 Offset: 0x33483E4
		public new [Void] SetUVs([Int32] channel, [Vector2[]] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4F36C RVA: 0x334936C Offset: 0x334836C
		public new [Void] SetUVs([Int32] channel, [Vector2[]] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F444 RVA: 0x3349444 Offset: 0x3348444
		public new [Void] SetUVs([Int32] channel, [Vector3[]] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4F3CC RVA: 0x33493CC Offset: 0x33483CC
		public new [Void] SetUVs([Int32] channel, [Vector3[]] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F45C RVA: 0x334945C Offset: 0x334845C
		public new [Void] SetUVs([Int32] channel, [Vector4[]] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B46D4F42C RVA: 0x334942C Offset: 0x334842C
		public new [Void] SetUVs([Int32] channel, [Vector4[]] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F474 RVA: 0x3349474 Offset: 0x3348474
		public new [Void] SetUVs([Int32] channel, [NativeArray`1] uvs);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetUVs([Int32] channel, [NativeArray`1] uvs, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetUVs([Int32] channel, [NativeArray`1] uvs, [Int32] start, [Int32] length, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Void] GetUVsImpl([Int32] uvIndex, [List`1] uvs, [Int32] dim);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] GetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4F48C RVA: 0x334948C Offset: 0x334848C
		public new [Void] GetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4F4F0 RVA: 0x33494F0 Offset: 0x33484F0
		public new [Void] GetUVs([Int32] channel, [List`1] uvs);
		// VA: 0x7B46D4F554 RVA: 0x3349554 Offset: 0x3348554
		public new [Int32] get_vertexAttributeCount();
		// VA: 0x7B46D4F5B8 RVA: 0x33495B8 Offset: 0x33485B8
		public new [VertexAttributeDescriptor[]] GetVertexAttributes();
		// VA: 0x7B46D4F5F4 RVA: 0x33495F4 Offset: 0x33485F4
		public new [Int32] GetVertexAttributes([VertexAttributeDescriptor[]] attributes);
		// VA: 0x7B46D4F680 RVA: 0x3349680 Offset: 0x3348680
		public new [Int32] GetVertexAttributes([List`1] attributes);
		// VA: 0x7B46D4F6C4 RVA: 0x33496C4 Offset: 0x33486C4
		public new [Void] SetVertexBufferParams([Int32] vertexCount, [VertexAttributeDescriptor[]] attributes);
		// VA: 0x7B46D4F708 RVA: 0x3349708 Offset: 0x3348708
		public new [Void] SetVertexBufferParams([Int32] vertexCount, [NativeArray`1] attributes);
		// VA: 0x7B46D4F75C RVA: 0x334975C Offset: 0x334875C
		public new [Void] SetVertexBufferData([NativeArray`1] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] stream, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetVertexBufferData([T[]] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] stream, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetVertexBufferData([List`1] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [Int32] stream, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Mesh]->[MeshDataArray] AcquireReadOnlyMeshData([Mesh] mesh);
		// VA: 0x7B46D4F804 RVA: 0x3349804 Offset: 0x3348804
		public static new [Mesh]->[MeshDataArray] AcquireReadOnlyMeshData([Mesh[]] meshes);
		// VA: 0x7B46D4F834 RVA: 0x3349834 Offset: 0x3348834
		public static new [Mesh]->[MeshDataArray] AcquireReadOnlyMeshData([List`1] meshes);
		// VA: 0x7B46D4F8D0 RVA: 0x33498D0 Offset: 0x33488D0
		public static new [Mesh]->[MeshDataArray] AllocateWritableMeshData([Int32] meshCount);
		// VA: 0x7B46D4F9B0 RVA: 0x33499B0 Offset: 0x33489B0
		public static new [Void] ApplyAndDisposeWritableMeshData([Mesh]->[MeshDataArray] data, [Mesh] mesh, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4F9DC RVA: 0x33499DC Offset: 0x33489DC
		public static new [Void] ApplyAndDisposeWritableMeshData([Mesh]->[MeshDataArray] data, [Mesh[]] meshes, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4FB5C RVA: 0x3349B5C Offset: 0x3348B5C
		public static new [Void] ApplyAndDisposeWritableMeshData([Mesh]->[MeshDataArray] data, [List`1] meshes, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4FCB4 RVA: 0x3349CB4 Offset: 0x3348CB4
		public new [GraphicsBuffer] GetVertexBuffer([Int32] index);
		// VA: 0x7B46D4FE68 RVA: 0x3349E68 Offset: 0x3348E68
		public new [GraphicsBuffer] GetIndexBuffer();
		// VA: 0x7B46D4FF34 RVA: 0x3349F34 Offset: 0x3348F34
		public new [GraphicsBuffer] GetBoneWeightBuffer([SkinWeights] layout);
		// VA: 0x7B46D4FFF0 RVA: 0x3349FF0 Offset: 0x3348FF0
		public new [GraphicsBuffer] GetBlendShapeBuffer([BlendShapeBufferLayout] layout);
		// VA: 0x7B46D50284 RVA: 0x334A284 Offset: 0x3349284
		public new [GraphicsBuffer] GetBlendShapeBuffer();
		// VA: 0x7B46D503B0 RVA: 0x334A3B0 Offset: 0x33493B0
		public new [BlendShapeBufferRange] GetBlendShapeBufferRange([Int32] blendShapeIndex);
		// VA: 0x7B46D504CC RVA: 0x334A4CC Offset: 0x33494CC
		private new [Void] PrintErrorCantAccessIndices();
		// VA: 0x7B46D505E4 RVA: 0x334A5E4 Offset: 0x33495E4
		private new [Boolean] CheckCanAccessSubmesh([Int32] submesh, [Boolean] errorAboutTriangles);
		// VA: 0x7B46D5067C RVA: 0x334A67C Offset: 0x334967C
		private new [Boolean] CheckCanAccessSubmeshTriangles([Int32] submesh);
		// VA: 0x7B46D507BC RVA: 0x334A7BC Offset: 0x33497BC
		private new [Boolean] CheckCanAccessSubmeshIndices([Int32] submesh);
		// VA: 0x7B46D507C4 RVA: 0x334A7C4 Offset: 0x33497C4
		public new [Int32[]] get_triangles();
		// VA: 0x7B46D507CC RVA: 0x334A7CC Offset: 0x33497CC
		public new [Void] set_triangles([Int32[]] value);
		// VA: 0x7B46D50880 RVA: 0x334A880 Offset: 0x3349880
		public new [Int32[]] GetTriangles([Int32] submesh);
		// VA: 0x7B46D509C8 RVA: 0x334A9C8 Offset: 0x33499C8
		public new [Int32[]] GetTriangles([Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D509D0 RVA: 0x334A9D0 Offset: 0x33499D0
		public new [Void] GetTriangles([List`1] triangles, [Int32] submesh);
		// VA: 0x7B46D50A78 RVA: 0x334AA78 Offset: 0x3349A78
		public new [Void] GetTriangles([List`1] triangles, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D50A80 RVA: 0x334AA80 Offset: 0x3349A80
		public new [Void] GetTriangles([List`1] triangles, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D50C34 RVA: 0x334AC34 Offset: 0x3349C34
		public new [Int32[]] GetIndices([Int32] submesh);
		// VA: 0x7B46D50DE8 RVA: 0x334ADE8 Offset: 0x3349DE8
		public new [Int32[]] GetIndices([Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D50DF0 RVA: 0x334ADF0 Offset: 0x3349DF0
		public new [Void] GetIndices([List`1] indices, [Int32] submesh);
		// VA: 0x7B46D50E98 RVA: 0x334AE98 Offset: 0x3349E98
		public new [Void] GetIndices([List`1] indices, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D50EA0 RVA: 0x334AEA0 Offset: 0x3349EA0
		public new [Void] GetIndices([List`1] indices, [Int32] submesh, [Boolean] applyBaseVertex);
		// VA: 0x7B46D510F4 RVA: 0x334B0F4 Offset: 0x334A0F4
		public new [Void] SetIndexBufferData([NativeArray`1] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetIndexBufferData([T[]] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetIndexBufferData([List`1] data, [Int32] dataStart, [Int32] meshBufferStart, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [UInt32] GetIndexStart([Int32] submesh);
		// VA: 0x7B46D51288 RVA: 0x334B288 Offset: 0x334A288
		public new [UInt32] GetIndexCount([Int32] submesh);
		// VA: 0x7B46D51034 RVA: 0x334B034 Offset: 0x334A034
		public new [UInt32] GetBaseVertex([Int32] submesh);
		// VA: 0x7B46D51348 RVA: 0x334B348 Offset: 0x334A348
		private new [Void] CheckIndicesArrayRange([Int32] valuesLength, [Int32] start, [Int32] length);
		// VA: 0x7B46D51408 RVA: 0x334B408 Offset: 0x334A408
		private new [Void] SetTrianglesImpl([Int32] submesh, [IndexFormat] indicesFormat, [Array] triangles, [Int32] trianglesArrayLength, [Int32] start, [Int32] length, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D50928 RVA: 0x334A928 Offset: 0x3349928
		public new [Void] SetTriangles([Int32[]] triangles, [Int32] submesh);
		// VA: 0x7B46D515A4 RVA: 0x334B5A4 Offset: 0x334A5A4
		public new [Void] SetTriangles([Int32[]] triangles, [Int32] submesh, [Boolean] calculateBounds);
		// VA: 0x7B46D51644 RVA: 0x334B644 Offset: 0x334A644
		public new [Void] SetTriangles([Int32[]] triangles, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D515EC RVA: 0x334B5EC Offset: 0x334A5EC
		public new [Void] SetTriangles([Int32[]] triangles, [Int32] trianglesStart, [Int32] trianglesLength, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51698 RVA: 0x334B698 Offset: 0x334A698
		public new [Void] SetTriangles([UInt16[]] triangles, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51724 RVA: 0x334B724 Offset: 0x334A724
		public new [Void] SetTriangles([UInt16[]] triangles, [Int32] trianglesStart, [Int32] trianglesLength, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D5177C RVA: 0x334B77C Offset: 0x334A77C
		public new [Void] SetTriangles([List`1] triangles, [Int32] submesh);
		// VA: 0x7B46D51808 RVA: 0x334B808 Offset: 0x334A808
		public new [Void] SetTriangles([List`1] triangles, [Int32] submesh, [Boolean] calculateBounds);
		// VA: 0x7B46D5189C RVA: 0x334B89C Offset: 0x334A89C
		public new [Void] SetTriangles([List`1] triangles, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51814 RVA: 0x334B814 Offset: 0x334A814
		public new [Void] SetTriangles([List`1] triangles, [Int32] trianglesStart, [Int32] trianglesLength, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D518A8 RVA: 0x334B8A8 Offset: 0x334A8A8
		public new [Void] SetTriangles([List`1] triangles, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51978 RVA: 0x334B978 Offset: 0x334A978
		public new [Void] SetTriangles([List`1] triangles, [Int32] trianglesStart, [Int32] trianglesLength, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51A00 RVA: 0x334BA00 Offset: 0x334AA00
		public new [Void] SetIndices([Int32[]] indices, [MeshTopology] topology, [Int32] submesh);
		// VA: 0x7B46D51AD0 RVA: 0x334BAD0 Offset: 0x334AAD0
		public new [Void] SetIndices([Int32[]] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds);
		// VA: 0x7B46D51BA8 RVA: 0x334BBA8 Offset: 0x334ABA8
		public new [Void] SetIndices([Int32[]] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51B34 RVA: 0x334BB34 Offset: 0x334AB34
		public new [Void] SetIndices([Int32[]] indices, [Int32] indicesStart, [Int32] indicesLength, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51C10 RVA: 0x334BC10 Offset: 0x334AC10
		public new [Void] SetIndices([UInt16[]] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51CE4 RVA: 0x334BCE4 Offset: 0x334ACE4
		public new [Void] SetIndices([UInt16[]] indices, [Int32] indicesStart, [Int32] indicesLength, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51D58 RVA: 0x334BD58 Offset: 0x334AD58
		public new [Void] SetIndices([NativeArray`1] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetIndices([NativeArray`1] indices, [Int32] indicesStart, [Int32] indicesLength, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetIndices([List`1] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51E2C RVA: 0x334BE2C Offset: 0x334AE2C
		public new [Void] SetIndices([List`1] indices, [Int32] indicesStart, [Int32] indicesLength, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51ED0 RVA: 0x334BED0 Offset: 0x334AED0
		public new [Void] SetIndices([List`1] indices, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D51FE0 RVA: 0x334BFE0 Offset: 0x334AFE0
		public new [Void] SetIndices([List`1] indices, [Int32] indicesStart, [Int32] indicesLength, [MeshTopology] topology, [Int32] submesh, [Boolean] calculateBounds, [Int32] baseVertex);
		// VA: 0x7B46D52084 RVA: 0x334C084 Offset: 0x334B084
		public new [Void] SetSubMeshes([SubMeshDescriptor[]] desc, [Int32] start, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B46D52194 RVA: 0x334C194 Offset: 0x334B194
		public new [Void] SetSubMeshes([SubMeshDescriptor[]] desc, [MeshUpdateFlags] flags);
		// VA: 0x7B46D52460 RVA: 0x334C460 Offset: 0x334B460
		public new [Void] SetSubMeshes([List`1] desc, [Int32] start, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B46D5248C RVA: 0x334C48C Offset: 0x334B48C
		public new [Void] SetSubMeshes([List`1] desc, [MeshUpdateFlags] flags);
		// VA: 0x7B46D5250C RVA: 0x334C50C Offset: 0x334B50C
		public new [Void] SetSubMeshes([NativeArray`1] desc, [Int32] start, [Int32] count, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetSubMeshes([NativeArray`1] desc, [MeshUpdateFlags] flags);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] GetBindposes([List`1] bindposes);
		// VA: 0x7B46D5259C RVA: 0x334C59C Offset: 0x334B59C
		public new [Void] GetBoneWeights([List`1] boneWeights);
		// VA: 0x7B46D526CC RVA: 0x334C6CC Offset: 0x334B6CC
		public new [BoneWeight[]] get_boneWeights();
		// VA: 0x7B46D52828 RVA: 0x334C828 Offset: 0x334B828
		public new [Void] set_boneWeights([BoneWeight[]] value);
		// VA: 0x7B46D52864 RVA: 0x334C864 Offset: 0x334B864
		public new [SkinWeights] get_skinWeightBufferLayout();
		// VA: 0x7B46D528A8 RVA: 0x334C8A8 Offset: 0x334B8A8
		public new [Void] Clear([Boolean] keepVertexLayout);
		// VA: 0x7B46D528E4 RVA: 0x334C8E4 Offset: 0x334B8E4
		public new [Void] Clear();
		// VA: 0x7B46D52928 RVA: 0x334C928 Offset: 0x334B928
		public new [Void] RecalculateBounds();
		// VA: 0x7B46D52968 RVA: 0x334C968 Offset: 0x334B968
		public new [Void] RecalculateNormals();
		// VA: 0x7B46D52A64 RVA: 0x334CA64 Offset: 0x334BA64
		public new [Void] RecalculateTangents();
		// VA: 0x7B46D52B60 RVA: 0x334CB60 Offset: 0x334BB60
		public new [Void] RecalculateBounds([MeshUpdateFlags] flags);
		// VA: 0x7B46D52970 RVA: 0x334C970 Offset: 0x334B970
		public new [Void] RecalculateNormals([MeshUpdateFlags] flags);
		// VA: 0x7B46D52A6C RVA: 0x334CA6C Offset: 0x334BA6C
		public new [Void] RecalculateTangents([MeshUpdateFlags] flags);
		// VA: 0x7B46D52B68 RVA: 0x334CB68 Offset: 0x334BB68
		public new [Void] RecalculateUVDistributionMetric([Int32] uvSetIndex, [Single] uvAreaThreshold);
		// VA: 0x7B46D52C5C RVA: 0x334CC5C Offset: 0x334BC5C
		public new [Void] RecalculateUVDistributionMetrics([Single] uvAreaThreshold);
		// VA: 0x7B46D52D64 RVA: 0x334CD64 Offset: 0x334BD64
		public new [Void] MarkDynamic();
		// VA: 0x7B46D52E64 RVA: 0x334CE64 Offset: 0x334BE64
		public new [Void] UploadMeshData([Boolean] markNoLongerReadable);
		// VA: 0x7B46D52ED8 RVA: 0x334CED8 Offset: 0x334BED8
		public new [Void] Optimize();
		// VA: 0x7B46D52F54 RVA: 0x334CF54 Offset: 0x334BF54
		public new [Void] OptimizeIndexBuffers();
		// VA: 0x7B46D53040 RVA: 0x334D040 Offset: 0x334C040
		public new [Void] OptimizeReorderVertexBuffer();
		// VA: 0x7B46D5312C RVA: 0x334D12C Offset: 0x334C12C
		public new [MeshTopology] GetTopology([Int32] submesh);
		// VA: 0x7B46D53218 RVA: 0x334D218 Offset: 0x334C218
		public new [Void] CombineMeshes([CombineInstance[]] combine, [Boolean] mergeSubMeshes, [Boolean] useMatrices, [Boolean] hasLightmapData);
		// VA: 0x7B46D532F8 RVA: 0x334D2F8 Offset: 0x334C2F8
		public new [Void] CombineMeshes([CombineInstance[]] combine, [Boolean] mergeSubMeshes, [Boolean] useMatrices);
		// VA: 0x7B46D53364 RVA: 0x334D364 Offset: 0x334C364
		public new [Void] CombineMeshes([CombineInstance[]] combine, [Boolean] mergeSubMeshes);
		// VA: 0x7B46D533C4 RVA: 0x334D3C4 Offset: 0x334C3C4
		public new [Void] CombineMeshes([CombineInstance[]] combine);
		// VA: 0x7B46D53420 RVA: 0x334D420 Offset: 0x334C420
		private new [Void] GetVertexAttribute_Injected([Int32] index, out [VertexAttributeDescriptor] ret);
		// VA: 0x7B46D4B238 RVA: 0x3345238 Offset: 0x3344238
		private new [Void] GetBlendShapeOffsetInternal_Injected([Int32] index, out [BlendShape] ret);
		// VA: 0x7B46D4C078 RVA: 0x3346078 Offset: 0x3345078
		private new [Void] SetSubMesh_Injected([Int32] index, ref [SubMeshDescriptor] desc, [MeshUpdateFlags] flags);
		// VA: 0x7B46D4C928 RVA: 0x3346928 Offset: 0x3345928
		private new [Void] GetSubMesh_Injected([Int32] index, out [SubMeshDescriptor] ret);
		// VA: 0x7B46D4CA00 RVA: 0x3346A00 Offset: 0x3345A00
		private new [Void] get_bounds_Injected(out [Bounds] ret);
		// VA: 0x7B46D4CB94 RVA: 0x3346B94 Offset: 0x3345B94
		private new [Void] set_bounds_Injected(ref [Bounds] value);
		// VA: 0x7B46D4CC1C RVA: 0x3346C1C Offset: 0x3345C1C

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B41C90
		public struct MeshData : [ValueType]
		{
			// Fields
			public [IntPtr] m_Ptr; // 0x0

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B41E10
		public struct MeshDataArray : [ValueType]
		{
			// Fields
			public [IntPtr*] m_Ptrs; // 0x0
			public [Int32] m_Length; // 0x8

			// Methods
			private static new [Void] AcquireReadOnlyMeshData([Mesh] mesh, [IntPtr*] datas);
			// VA: 0x7B46D54384 RVA: 0x334E384 Offset: 0x334D384
			private static new [Void] AcquireReadOnlyMeshDatas([Mesh[]] meshes, [IntPtr*] datas, [Int32] count);
			// VA: 0x7B46D543C8 RVA: 0x334E3C8 Offset: 0x334D3C8
			private static new [Void] ReleaseMeshDatas([IntPtr*] datas, [Int32] count);
			// VA: 0x7B46D5441C RVA: 0x334E41C Offset: 0x334D41C
			private static new [Void] CreateNewMeshDatas([IntPtr*] datas, [Int32] count);
			// VA: 0x7B46D54460 RVA: 0x334E460 Offset: 0x334D460
			private static new [Void] ApplyToMeshesImpl([Mesh[]] meshes, [IntPtr*] datas, [Int32] count, [MeshUpdateFlags] flags);
			// VA: 0x7B46D544A4 RVA: 0x334E4A4 Offset: 0x334D4A4
			private static new [Void] ApplyToMeshImpl([Mesh] mesh, [IntPtr] data, [MeshUpdateFlags] flags);
			// VA: 0x7B46D54500 RVA: 0x334E500 Offset: 0x334D500
			public new [Int32] get_Length();
			// VA: 0x7B46D54554 RVA: 0x334E554 Offset: 0x334D554
			public sealed new [Void] Dispose();
			// VA: 0x7B46D5455C RVA: 0x334E55C Offset: 0x334D55C
			internal new [Void] ApplyToMeshAndDispose([Mesh] mesh, [MeshUpdateFlags] flags);
			// VA: 0x7B46D545E4 RVA: 0x334E5E4 Offset: 0x334D5E4
			internal new [Void] ApplyToMeshesAndDispose([Mesh[]] meshes, [MeshUpdateFlags] flags);
			// VA: 0x7B46D546E4 RVA: 0x334E6E4 Offset: 0x334D6E4
			internal new [Void] .ctor([Mesh] mesh, [Boolean] checkReadWrite);
			// VA: 0x7B46D548F4 RVA: 0x334E8F4 Offset: 0x334D8F4
			internal new [Void] .ctor([Mesh[]] meshes, [Int32] meshesCount, [Boolean] checkReadWrite);
			// VA: 0x7B46D54AF4 RVA: 0x334EAF4 Offset: 0x334DAF4
			internal new [Void] .ctor([Int32] meshesCount);
			// VA: 0x7B46D54DC0 RVA: 0x334EDC0 Offset: 0x334DDC0
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B41FA0
	private struct BlendShape : [ValueType]
	{
		// Fields
		private [UInt32] m_FirstVertex; // 0x0
		private [UInt32] m_VertexCount; // 0x4
		private [Boolean] m_HasNormals; // 0x8
		private [Boolean] m_HasTangents; // 0x9

		// Methods
		public new [UInt32] get_firstVertex();
		// VA: 0x7B46D54EE0 RVA: 0x334EEE0 Offset: 0x334DEE0
		public new [UInt32] get_vertexCount();
		// VA: 0x7B46D54EE8 RVA: 0x334EEE8 Offset: 0x334DEE8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42120
	public struct BlendShapeBufferRange : [ValueType]
	{
		// Fields
		private [UInt32] m_StartIndex; // 0x0
		private [UInt32] m_EndIndex; // 0x4

		// Methods
		internal new [Void] set_startIndex([UInt32] value);
		// VA: 0x7B46D54EF0 RVA: 0x334EEF0 Offset: 0x334DEF0
		internal new [Void] set_endIndex([UInt32] value);
		// VA: 0x7B46D54EF8 RVA: 0x334EEF8 Offset: 0x334DEF8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B422A0
	public struct BoneWeight : [ValueType]
	{
		// Fields
		private [Single] m_Weight0; // 0x0
		private [Single] m_Weight1; // 0x4
		private [Single] m_Weight2; // 0x8
		private [Single] m_Weight3; // 0xC
		private [Int32] m_BoneIndex0; // 0x10
		private [Int32] m_BoneIndex1; // 0x14
		private [Int32] m_BoneIndex2; // 0x18
		private [Int32] m_BoneIndex3; // 0x1C

		// Methods
		public new [Single] get_weight0();
		// VA: 0x7B46D54F00 RVA: 0x334EF00 Offset: 0x334DF00
		public new [Single] get_weight1();
		// VA: 0x7B46D54F08 RVA: 0x334EF08 Offset: 0x334DF08
		public new [Single] get_weight2();
		// VA: 0x7B46D54F10 RVA: 0x334EF10 Offset: 0x334DF10
		public new [Single] get_weight3();
		// VA: 0x7B46D54F18 RVA: 0x334EF18 Offset: 0x334DF18
		public new [Int32] get_boneIndex0();
		// VA: 0x7B46D54F20 RVA: 0x334EF20 Offset: 0x334DF20
		public new [Int32] get_boneIndex1();
		// VA: 0x7B46D54F28 RVA: 0x334EF28 Offset: 0x334DF28
		public new [Int32] get_boneIndex2();
		// VA: 0x7B46D54F30 RVA: 0x334EF30 Offset: 0x334DF30
		public new [Int32] get_boneIndex3();
		// VA: 0x7B46D54F38 RVA: 0x334EF38 Offset: 0x334DF38
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D54F40 RVA: 0x334EF40 Offset: 0x334DF40
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D55048 RVA: 0x334F048 Offset: 0x334E048
		public sealed new [Boolean] Equals([BoneWeight] other);
		// VA: 0x7B46D550D0 RVA: 0x334F0D0 Offset: 0x334E0D0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42430
	public struct BoneWeight1 : [ValueType]
	{
		// Fields
		private [Single] m_Weight; // 0x0
		private [Int32] m_BoneIndex; // 0x4

		// Methods
		public new [Single] get_weight();
		// VA: 0x7B46D551A8 RVA: 0x334F1A8 Offset: 0x334E1A8
		public new [Int32] get_boneIndex();
		// VA: 0x7B46D551B0 RVA: 0x334F1B0 Offset: 0x334E1B0
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D551B8 RVA: 0x334F1B8 Offset: 0x334E1B8
		public sealed new [Boolean] Equals([BoneWeight1] other);
		// VA: 0x7B46D55230 RVA: 0x334F230 Offset: 0x334E230
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D5528C RVA: 0x334F28C Offset: 0x334E28C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B425C0
	public struct CombineInstance : [ValueType]
	{
		// Fields
		private [Int32] m_MeshInstanceID; // 0x0
		private [Int32] m_SubMeshIndex; // 0x4
		private [Matrix4x4] m_Transform; // 0x8
		private [Vector4] m_LightmapScaleOffset; // 0x48
		private [Vector4] m_RealtimeLightmapScaleOffset; // 0x58

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7096D7D0
	public class Texture : [Object]
	{
		// Fields
		public readonly static [Int32] GenerateAllMips; // 0x0

		// Methods
		protected new [Void] .ctor();
		// VA: 0x7B46D552D4 RVA: 0x334F2D4 Offset: 0x334E2D4
		public new [Int32] get_mipmapCount();
		// VA: 0x7B46D5532C RVA: 0x334F32C Offset: 0x334E32C
		private new [Int32] GetDataWidth();
		// VA: 0x7B46D55368 RVA: 0x334F368 Offset: 0x334E368
		private new [Int32] GetDataHeight();
		// VA: 0x7B46D553A4 RVA: 0x334F3A4 Offset: 0x334E3A4
		private new [TextureDimension] GetDimension();
		// VA: 0x7B46D553E0 RVA: 0x334F3E0 Offset: 0x334E3E0
		public virtual new [Int32] get_width();
		// VA: 0x7B46D5541C RVA: 0x334F41C Offset: 0x334E41C
		public virtual new [Void] set_width([Int32] value);
		// VA: 0x7B46D55458 RVA: 0x334F458 Offset: 0x334E458
		public virtual new [Int32] get_height();
		// VA: 0x7B46D55490 RVA: 0x334F490 Offset: 0x334E490
		public virtual new [Void] set_height([Int32] value);
		// VA: 0x7B46D554CC RVA: 0x334F4CC Offset: 0x334E4CC
		public virtual new [TextureDimension] get_dimension();
		// VA: 0x7B46D55504 RVA: 0x334F504 Offset: 0x334E504
		public virtual new [Void] set_dimension([TextureDimension] value);
		// VA: 0x7B46D55540 RVA: 0x334F540 Offset: 0x334E540
		public virtual new [Boolean] get_isReadable();
		// VA: 0x7B46D55578 RVA: 0x334F578 Offset: 0x334E578
		public new [TextureWrapMode] get_wrapMode();
		// VA: 0x7B46D555B4 RVA: 0x334F5B4 Offset: 0x334E5B4
		public new [Void] set_wrapMode([TextureWrapMode] value);
		// VA: 0x7B46D555F0 RVA: 0x334F5F0 Offset: 0x334E5F0
		public new [Void] set_wrapModeU([TextureWrapMode] value);
		// VA: 0x7B46D55634 RVA: 0x334F634 Offset: 0x334E634
		public new [Void] set_wrapModeV([TextureWrapMode] value);
		// VA: 0x7B46D55678 RVA: 0x334F678 Offset: 0x334E678
		public new [FilterMode] get_filterMode();
		// VA: 0x7B46D556BC RVA: 0x334F6BC Offset: 0x334E6BC
		public new [Void] set_filterMode([FilterMode] value);
		// VA: 0x7B46D556F8 RVA: 0x334F6F8 Offset: 0x334E6F8
		public new [Void] set_anisoLevel([Int32] value);
		// VA: 0x7B46D5573C RVA: 0x334F73C Offset: 0x334E73C
		public new [Vector2] get_texelSize();
		// VA: 0x7B46D55780 RVA: 0x334F780 Offset: 0x334E780
		private new [Int32] Internal_GetActiveTextureColorSpace();
		// VA: 0x7B46D55810 RVA: 0x334F810 Offset: 0x334E810
		internal new [ColorSpace] get_activeTextureColorSpace();
		// VA: 0x7B46D5584C RVA: 0x334F84C Offset: 0x334E84C
		internal new [UInt64] GetPixelDataSize([Int32] mipLevel, [Int32] element);
		// VA: 0x7B46D55894 RVA: 0x334F894 Offset: 0x334E894
		internal new [UInt64] GetPixelDataOffset([Int32] mipLevel, [Int32] element);
		// VA: 0x7B46D558E8 RVA: 0x334F8E8 Offset: 0x334E8E8
		internal new [TextureColorSpace] GetTextureColorSpace([Boolean] linear);
		// VA: 0x7B46D5593C RVA: 0x334F93C Offset: 0x334E93C
		internal new [TextureColorSpace] GetTextureColorSpace([GraphicsFormat] format);
		// VA: 0x7B46D55948 RVA: 0x334F948 Offset: 0x334E948
		internal new [Boolean] ValidateFormat([TextureFormat] format);
		// VA: 0x7B46D559A8 RVA: 0x334F9A8 Offset: 0x334E9A8
		internal new [Boolean] ValidateFormat([GraphicsFormat] format, [FormatUsage] usage);
		// VA: 0x7B46D55B70 RVA: 0x334FB70 Offset: 0x334EB70
		internal new [UnityException] CreateNonReadableException([Texture] t);
		// VA: 0x7B46D55D30 RVA: 0x334FD30 Offset: 0x334ED30
		internal new [UnityException] CreateNativeArrayLengthOverflowException();
		// VA: 0x7B46D55DD0 RVA: 0x334FDD0 Offset: 0x334EDD0
		private static new [Void] .cctor();
		// VA: 0x7B46D55E3C RVA: 0x334FE3C Offset: 0x334EE3C
		private new [Void] get_texelSize_Injected(out [Vector2] ret);
		// VA: 0x7B46D557CC RVA: 0x334F7CC Offset: 0x334E7CC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7096D5E0
	public sealed class Texture2D : [Texture]
	{
		// Fields
		public const static [Int32] streamingMipmapsPriorityMin; // 0x0
		public const static [Int32] streamingMipmapsPriorityMax; // 0x0

		// Methods
		public new [TextureFormat] get_format();
		// VA: 0x7B46D55E88 RVA: 0x334FE88 Offset: 0x334EE88
		public new [Boolean] get_ignoreMipmapLimit();
		// VA: 0x7B46D55EC4 RVA: 0x334FEC4 Offset: 0x334EEC4
		public new [Void] set_ignoreMipmapLimit([Boolean] value);
		// VA: 0x7B46D55F00 RVA: 0x334FF00 Offset: 0x334EF00
		public new [String] get_mipmapLimitGroup();
		// VA: 0x7B46D55F44 RVA: 0x334FF44 Offset: 0x334EF44
		public new [Int32] get_activeMipmapLimit();
		// VA: 0x7B46D55F80 RVA: 0x334FF80 Offset: 0x334EF80
		public static new [Texture2D] get_whiteTexture();
		// VA: 0x7B46D55FBC RVA: 0x334FFBC Offset: 0x334EFBC
		public static new [Texture2D] get_blackTexture();
		// VA: 0x7B46D55FE4 RVA: 0x334FFE4 Offset: 0x334EFE4
		public static new [Texture2D] get_redTexture();
		// VA: 0x7B46D5600C RVA: 0x335000C Offset: 0x334F00C
		public static new [Texture2D] get_grayTexture();
		// VA: 0x7B46D56034 RVA: 0x3350034 Offset: 0x334F034
		public static new [Texture2D] get_linearGrayTexture();
		// VA: 0x7B46D5605C RVA: 0x335005C Offset: 0x334F05C
		public static new [Texture2D] get_normalTexture();
		// VA: 0x7B46D56084 RVA: 0x3350084 Offset: 0x334F084
		public new [Void] Compress([Boolean] highQuality);
		// VA: 0x7B46D560AC RVA: 0x33500AC Offset: 0x334F0AC
		private static new [Boolean] Internal_CreateImpl([Texture2D] mono, [Int32] w, [Int32] h, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex, [String] mipmapLimitGroupName);
		// VA: 0x7B46D560F0 RVA: 0x33500F0 Offset: 0x334F0F0
		private static new [Void] Internal_Create([Texture2D] mono, [Int32] w, [Int32] h, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex, [String] mipmapLimitGroupName);
		// VA: 0x7B46D5618C RVA: 0x335018C Offset: 0x334F18C
		public override new [Boolean] get_isReadable();
		// VA: 0x7B46D56280 RVA: 0x3350280 Offset: 0x334F280
		public new [Boolean] get_vtOnly();
		// VA: 0x7B46D562BC RVA: 0x33502BC Offset: 0x334F2BC
		private new [Void] ApplyImpl([Boolean] updateMipmaps, [Boolean] makeNoLongerReadable);
		// VA: 0x7B46D562F8 RVA: 0x33502F8 Offset: 0x334F2F8
		private new [Boolean] ReinitializeImpl([Int32] width, [Int32] height);
		// VA: 0x7B46D5634C RVA: 0x335034C Offset: 0x334F34C
		private new [Void] SetPixelImpl([Int32] image, [Int32] mip, [Int32] x, [Int32] y, [Color] color);
		// VA: 0x7B46D563A0 RVA: 0x33503A0 Offset: 0x334F3A0
		private new [Color] GetPixelImpl([Int32] image, [Int32] mip, [Int32] x, [Int32] y);
		// VA: 0x7B46D56498 RVA: 0x3350498 Offset: 0x334F498
		private new [Color] GetPixelBilinearImpl([Int32] image, [Int32] mip, [Single] u, [Single] v);
		// VA: 0x7B46D56594 RVA: 0x3350594 Offset: 0x334F594
		private new [Boolean] ReinitializeWithFormatImpl([Int32] width, [Int32] height, [GraphicsFormat] format, [Boolean] hasMipMap);
		// VA: 0x7B46D56690 RVA: 0x3350690 Offset: 0x334F690
		private new [Boolean] ReinitializeWithTextureFormatImpl([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Boolean] hasMipMap);
		// VA: 0x7B46D566FC RVA: 0x33506FC Offset: 0x334F6FC
		private new [Void] ReadPixelsImpl([Rect] source, [Int32] destX, [Int32] destY, [Boolean] recalculateMipMaps);
		// VA: 0x7B46D56768 RVA: 0x3350768 Offset: 0x334F768
		private new [Void] SetPixelsImpl([Int32] x, [Int32] y, [Int32] w, [Int32] h, [Color[]] pixel, [Int32] miplevel, [Int32] frame);
		// VA: 0x7B46D56848 RVA: 0x3350848 Offset: 0x334F848
		private new [Boolean] LoadRawTextureDataImpl([IntPtr] data, [UInt64] size);
		// VA: 0x7B46D568D4 RVA: 0x33508D4 Offset: 0x334F8D4
		private new [Boolean] LoadRawTextureDataImplArray([Byte[]] data);
		// VA: 0x7B46D56928 RVA: 0x3350928 Offset: 0x334F928
		private new [Boolean] SetPixelDataImplArray([Array] data, [Int32] mipLevel, [Int32] elementSize, [Int32] dataArraySize, [Int32] sourceDataStartIndex);
		// VA: 0x7B46D5696C RVA: 0x335096C Offset: 0x334F96C
		private new [Boolean] SetPixelDataImpl([IntPtr] data, [Int32] mipLevel, [Int32] elementSize, [Int32] dataArraySize, [Int32] sourceDataStartIndex);
		// VA: 0x7B46D569E0 RVA: 0x33509E0 Offset: 0x334F9E0
		private new [IntPtr] GetWritableImageData([Int32] frame);
		// VA: 0x7B46D56A54 RVA: 0x3350A54 Offset: 0x334FA54
		private new [UInt64] GetRawImageDataSize();
		// VA: 0x7B46D56A98 RVA: 0x3350A98 Offset: 0x334FA98
		private static new [Void] GenerateAtlasImpl([Vector2[]] sizes, [Int32] padding, [Int32] atlasSize, [Out] [Rect[]] rect);
		// VA: 0x7B46D56AD4 RVA: 0x3350AD4 Offset: 0x334FAD4
		internal new [Boolean] get_isPreProcessed();
		// VA: 0x7B46D56B30 RVA: 0x3350B30 Offset: 0x334FB30
		public new [Boolean] get_streamingMipmaps();
		// VA: 0x7B46D56B6C RVA: 0x3350B6C Offset: 0x334FB6C
		public new [Int32] get_streamingMipmapsPriority();
		// VA: 0x7B46D56BA8 RVA: 0x3350BA8 Offset: 0x334FBA8
		public new [Int32] get_requestedMipmapLevel();
		// VA: 0x7B46D56BE4 RVA: 0x3350BE4 Offset: 0x334FBE4
		public new [Void] set_requestedMipmapLevel([Int32] value);
		// VA: 0x7B46D56C20 RVA: 0x3350C20 Offset: 0x334FC20
		public new [Int32] get_minimumMipmapLevel();
		// VA: 0x7B46D56C64 RVA: 0x3350C64 Offset: 0x334FC64
		public new [Void] set_minimumMipmapLevel([Int32] value);
		// VA: 0x7B46D56CA0 RVA: 0x3350CA0 Offset: 0x334FCA0
		internal new [Boolean] get_loadAllMips();
		// VA: 0x7B46D56CE4 RVA: 0x3350CE4 Offset: 0x334FCE4
		internal new [Void] set_loadAllMips([Boolean] value);
		// VA: 0x7B46D56D20 RVA: 0x3350D20 Offset: 0x334FD20
		public new [Int32] get_calculatedMipmapLevel();
		// VA: 0x7B46D56D64 RVA: 0x3350D64 Offset: 0x334FD64
		public new [Int32] get_desiredMipmapLevel();
		// VA: 0x7B46D56DA0 RVA: 0x3350DA0 Offset: 0x334FDA0
		public new [Int32] get_loadingMipmapLevel();
		// VA: 0x7B46D56DDC RVA: 0x3350DDC Offset: 0x334FDDC
		public new [Int32] get_loadedMipmapLevel();
		// VA: 0x7B46D56E18 RVA: 0x3350E18 Offset: 0x334FE18
		public new [Void] ClearRequestedMipmapLevel();
		// VA: 0x7B46D56E54 RVA: 0x3350E54 Offset: 0x334FE54
		public new [Boolean] IsRequestedMipmapLevelLoaded();
		// VA: 0x7B46D56E90 RVA: 0x3350E90 Offset: 0x334FE90
		public new [Void] ClearMinimumMipmapLevel();
		// VA: 0x7B46D56ECC RVA: 0x3350ECC Offset: 0x334FECC
		public new [Void] UpdateExternalTexture([IntPtr] nativeTex);
		// VA: 0x7B46D56F08 RVA: 0x3350F08 Offset: 0x334FF08
		private new [Void] SetAllPixels32([Color32[]] colors, [Int32] miplevel);
		// VA: 0x7B46D56F4C RVA: 0x3350F4C Offset: 0x334FF4C
		private new [Void] SetBlockOfPixels32([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Color32[]] colors, [Int32] miplevel);
		// VA: 0x7B46D56FA0 RVA: 0x3350FA0 Offset: 0x334FFA0
		public new [Byte[]] GetRawTextureData();
		// VA: 0x7B46D57024 RVA: 0x3351024 Offset: 0x3350024
		public new [Color[]] GetPixels([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Int32] miplevel);
		// VA: 0x7B46D57060 RVA: 0x3351060 Offset: 0x3350060
		public new [Color[]] GetPixels([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight);
		// VA: 0x7B46D570D4 RVA: 0x33510D4 Offset: 0x33500D4
		public new [Color32[]] GetPixels32([Int32] miplevel);
		// VA: 0x7B46D57144 RVA: 0x3351144 Offset: 0x3350144
		public new [Color32[]] GetPixels32();
		// VA: 0x7B46D57188 RVA: 0x3351188 Offset: 0x3350188
		public new [Rect[]] PackTextures([Texture2D[]] textures, [Int32] padding, [Int32] maximumAtlasSize, [Boolean] makeNoLongerReadable);
		// VA: 0x7B46D571C8 RVA: 0x33511C8 Offset: 0x33501C8
		public new [Rect[]] PackTextures([Texture2D[]] textures, [Int32] padding, [Int32] maximumAtlasSize);
		// VA: 0x7B46D57234 RVA: 0x3351234 Offset: 0x3350234
		public new [Rect[]] PackTextures([Texture2D[]] textures, [Int32] padding);
		// VA: 0x7B46D57294 RVA: 0x3351294 Offset: 0x3350294
		internal new [Boolean] ValidateFormat([TextureFormat] format, [Int32] width, [Int32] height);
		// VA: 0x7B46D572F0 RVA: 0x33512F0 Offset: 0x33502F0
		internal new [Boolean] ValidateFormat([GraphicsFormat] format, [Int32] width, [Int32] height);
		// VA: 0x7B46D57428 RVA: 0x3351428 Offset: 0x3350428
		internal new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] format, [TextureCreationFlags] flags, [Int32] mipCount, [IntPtr] nativeTex, [String] mipmapLimitGroupName);
		// VA: 0x7B46D57570 RVA: 0x3351570 Offset: 0x3350570
		public new [Void] .ctor([Int32] width, [Int32] height, [DefaultFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D57664 RVA: 0x3351664 Offset: 0x3350664
		public new [Void] .ctor([Int32] width, [Int32] height, [DefaultFormat] format, [Int32] mipCount, [TextureCreationFlags] flags);
		// VA: 0x7B46D57754 RVA: 0x3351754 Offset: 0x3350754
		public new [Void] .ctor([Int32] width, [Int32] height, [DefaultFormat] format, [Int32] mipCount, [String] mipmapLimitGroupName, [TextureCreationFlags] flags);
		// VA: 0x7B46D577BC RVA: 0x33517BC Offset: 0x33507BC
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D576B0 RVA: 0x33516B0 Offset: 0x33506B0
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] format, [Int32] mipCount, [TextureCreationFlags] flags);
		// VA: 0x7B46D57830 RVA: 0x3351830 Offset: 0x3350830
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] format, [Int32] mipCount, [String] mipmapLimitGroupName, [TextureCreationFlags] flags);
		// VA: 0x7B46D5785C RVA: 0x335185C Offset: 0x335085C
		internal new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear, [IntPtr] nativeTex, [Boolean] createUninitialized, [Boolean] ignoreMipmapLimit, [String] mipmapLimitGroupName);
		// VA: 0x7B46D57884 RVA: 0x3351884 Offset: 0x3350884
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear);
		// VA: 0x7B46D57A28 RVA: 0x3351A28 Offset: 0x3350A28
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D57A54 RVA: 0x3351A54 Offset: 0x3350A54
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear, [Boolean] createUninitialized, [Boolean] ignoreMipmapLimit, [String] mipmapLimitGroupName);
		// VA: 0x7B46D57A80 RVA: 0x3351A80 Offset: 0x3350A80
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear);
		// VA: 0x7B46D57AB4 RVA: 0x3351AB4 Offset: 0x3350AB4
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D57B74 RVA: 0x3351B74 Offset: 0x3350B74
		public new [Void] .ctor([Int32] width, [Int32] height, [TextureFormat] textureFormat, [Boolean] mipChain);
		// VA: 0x7B46D57C40 RVA: 0x3351C40 Offset: 0x3350C40
		public new [Void] .ctor([Int32] width, [Int32] height);
		// VA: 0x7B46D57CFC RVA: 0x3351CFC Offset: 0x3350CFC
		public static new [Texture2D] CreateExternalTexture([Int32] width, [Int32] height, [TextureFormat] format, [Boolean] mipChain, [Boolean] linear, [IntPtr] nativeTex);
		// VA: 0x7B46D57D98 RVA: 0x3351D98 Offset: 0x3350D98
		public new [Void] SetPixel([Int32] x, [Int32] y, [Color] color);
		// VA: 0x7B46D57EA4 RVA: 0x3351EA4 Offset: 0x3350EA4
		public new [Void] SetPixel([Int32] x, [Int32] y, [Color] color, [Int32] mipLevel);
		// VA: 0x7B46D57F40 RVA: 0x3351F40 Offset: 0x3350F40
		public new [Void] SetPixels([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Color[]] colors, [Int32] miplevel);
		// VA: 0x7B46D57FE8 RVA: 0x3351FE8 Offset: 0x3350FE8
		public new [Void] SetPixels([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Color[]] colors);
		// VA: 0x7B46D580A8 RVA: 0x33520A8 Offset: 0x33510A8
		public new [Void] SetPixels([Color[]] colors, [Int32] miplevel);
		// VA: 0x7B46D580B0 RVA: 0x33520B0 Offset: 0x33510B0
		public new [Void] SetPixels([Color[]] colors);
		// VA: 0x7B46D58128 RVA: 0x3352128 Offset: 0x3351128
		public new [Color] GetPixel([Int32] x, [Int32] y);
		// VA: 0x7B46D58184 RVA: 0x3352184 Offset: 0x3351184
		public new [Color] GetPixel([Int32] x, [Int32] y, [Int32] mipLevel);
		// VA: 0x7B46D581F0 RVA: 0x33521F0 Offset: 0x33511F0
		public new [Color] GetPixelBilinear([Single] u, [Single] v);
		// VA: 0x7B46D58268 RVA: 0x3352268 Offset: 0x3351268
		public new [Color] GetPixelBilinear([Single] u, [Single] v, [Int32] mipLevel);
		// VA: 0x7B46D582D0 RVA: 0x33522D0 Offset: 0x33512D0
		public new [Void] LoadRawTextureData([IntPtr] data, [Int32] size);
		// VA: 0x7B46D58344 RVA: 0x3352344 Offset: 0x3351344
		public new [Void] LoadRawTextureData([Byte[]] data);
		// VA: 0x7B46D58490 RVA: 0x3352490 Offset: 0x3351490
		public new [Void] LoadRawTextureData([NativeArray`1] data);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] SetPixelData([T[]] data, [Int32] mipLevel, [Int32] sourceDataStartIndex);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Void] SetPixelData([NativeArray`1] data, [Int32] mipLevel, [Int32] sourceDataStartIndex);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [NativeArray`1] GetPixelData([Int32] mipLevel);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [NativeArray`1] GetRawTextureData();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] Apply([Boolean] updateMipmaps, [Boolean] makeNoLongerReadable);
		// VA: 0x7B46D585B8 RVA: 0x33525B8 Offset: 0x33515B8
		public new [Void] Apply([Boolean] updateMipmaps);
		// VA: 0x7B46D58644 RVA: 0x3352644 Offset: 0x3351644
		public new [Void] Apply();
		// VA: 0x7B46D58650 RVA: 0x3352650 Offset: 0x3351650
		public new [Boolean] Reinitialize([Int32] width, [Int32] height);
		// VA: 0x7B46D5865C RVA: 0x335265C Offset: 0x335165C
		public new [Boolean] Reinitialize([Int32] width, [Int32] height, [TextureFormat] format, [Boolean] hasMipMap);
		// VA: 0x7B46D586E8 RVA: 0x33526E8 Offset: 0x33516E8
		public new [Boolean] Reinitialize([Int32] width, [Int32] height, [GraphicsFormat] format, [Boolean] hasMipMap);
		// VA: 0x7B46D58754 RVA: 0x3352754 Offset: 0x3351754
		public new [Boolean] Resize([Int32] width, [Int32] height);
		// VA: 0x7B46D587F8 RVA: 0x33527F8 Offset: 0x33517F8
		public new [Boolean] Resize([Int32] width, [Int32] height, [TextureFormat] format, [Boolean] hasMipMap);
		// VA: 0x7B46D587FC RVA: 0x33527FC Offset: 0x33517FC
		public new [Boolean] Resize([Int32] width, [Int32] height, [GraphicsFormat] format, [Boolean] hasMipMap);
		// VA: 0x7B46D58868 RVA: 0x3352868 Offset: 0x3351868
		public new [Void] ReadPixels([Rect] source, [Int32] destX, [Int32] destY, [Boolean] recalculateMipMaps);
		// VA: 0x7B46D58870 RVA: 0x3352870 Offset: 0x3351870
		public new [Void] ReadPixels([Rect] source, [Int32] destX, [Int32] destY);
		// VA: 0x7B46D58910 RVA: 0x3352910 Offset: 0x3351910
		public static new [Boolean] GenerateAtlas([Vector2[]] sizes, [Int32] padding, [Int32] atlasSize, [List`1] results);
		// VA: 0x7B46D58918 RVA: 0x3352918 Offset: 0x3351918
		public new [Void] SetPixels32([Color32[]] colors, [Int32] miplevel);
		// VA: 0x7B46D58AD4 RVA: 0x3352AD4 Offset: 0x3351AD4
		public new [Void] SetPixels32([Color32[]] colors);
		// VA: 0x7B46D58B28 RVA: 0x3352B28 Offset: 0x3351B28
		public new [Void] SetPixels32([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Color32[]] colors, [Int32] miplevel);
		// VA: 0x7B46D58B70 RVA: 0x3352B70 Offset: 0x3351B70
		public new [Void] SetPixels32([Int32] x, [Int32] y, [Int32] blockWidth, [Int32] blockHeight, [Color32[]] colors);
		// VA: 0x7B46D58BF4 RVA: 0x3352BF4 Offset: 0x3351BF4
		public new [Color[]] GetPixels([Int32] miplevel);
		// VA: 0x7B46D58C6C RVA: 0x3352C6C Offset: 0x3351C6C
		public new [Color[]] GetPixels();
		// VA: 0x7B46D58CF8 RVA: 0x3352CF8 Offset: 0x3351CF8
		private new [Void] SetPixelImpl_Injected([Int32] image, [Int32] mip, [Int32] x, [Int32] y, ref [Color] color);
		// VA: 0x7B46D56424 RVA: 0x3350424 Offset: 0x334F424
		private new [Void] GetPixelImpl_Injected([Int32] image, [Int32] mip, [Int32] x, [Int32] y, out [Color] ret);
		// VA: 0x7B46D56520 RVA: 0x3350520 Offset: 0x334F520
		private new [Void] GetPixelBilinearImpl_Injected([Int32] image, [Int32] mip, [Single] u, [Single] v, out [Color] ret);
		// VA: 0x7B46D5661C RVA: 0x335061C Offset: 0x334F61C
		private new [Void] ReadPixelsImpl_Injected(ref [Rect] source, [Int32] destX, [Int32] destY, [Boolean] recalculateMipMaps);
		// VA: 0x7B46D567DC RVA: 0x33507DC Offset: 0x334F7DC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42740
	public sealed class Cubemap : [Texture]
	{
		// Fields

		// Methods
		private static new [Boolean] Internal_CreateImpl([Cubemap] mono, [Int32] ext, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex);
		// VA: 0x7B46D58D00 RVA: 0x3352D00 Offset: 0x3351D00
		private static new [Void] Internal_Create([Cubemap] mono, [Int32] ext, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex);
		// VA: 0x7B46D58D84 RVA: 0x3352D84 Offset: 0x3351D84
		public override new [Boolean] get_isReadable();
		// VA: 0x7B46D58E58 RVA: 0x3352E58 Offset: 0x3351E58
		internal new [Boolean] ValidateFormat([TextureFormat] format, [Int32] width);
		// VA: 0x7B46D58E94 RVA: 0x3352E94 Offset: 0x3351E94
		internal new [Boolean] ValidateFormat([GraphicsFormat] format, [Int32] width);
		// VA: 0x7B46D58F84 RVA: 0x3352F84 Offset: 0x3351F84
		public new [Void] .ctor([Int32] width, [DefaultFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D590C0 RVA: 0x33530C0 Offset: 0x33520C0
		public new [Void] .ctor([Int32] width, [DefaultFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D59184 RVA: 0x3353184 Offset: 0x3352184
		public new [Void] .ctor([Int32] width, [GraphicsFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D590FC RVA: 0x33530FC Offset: 0x33520FC
		public new [Void] .ctor([Int32] width, [GraphicsFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D591D0 RVA: 0x33531D0 Offset: 0x33521D0
		internal new [Void] .ctor([Int32] width, [TextureFormat] textureFormat, [Int32] mipCount, [IntPtr] nativeTex, [Boolean] createUninitialized);
		// VA: 0x7B46D59300 RVA: 0x3353300 Offset: 0x3352300
		public new [Void] .ctor([Int32] width, [TextureFormat] textureFormat, [Boolean] mipChain);
		// VA: 0x7B46D5945C RVA: 0x335345C Offset: 0x335245C
		public new [Void] .ctor([Int32] width, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] createUninitialized);
		// VA: 0x7B46D594F0 RVA: 0x33534F0 Offset: 0x33524F0
		public new [Void] .ctor([Int32] width, [TextureFormat] format, [Int32] mipCount);
		// VA: 0x7B46D59590 RVA: 0x3353590 Offset: 0x3352590
		public new [Void] .ctor([Int32] width, [TextureFormat] format, [Int32] mipCount, [Boolean] createUninitialized);
		// VA: 0x7B46D5959C RVA: 0x335359C Offset: 0x335259C
		private static new [Void] ValidateIsNotCrunched([TextureCreationFlags] flags);
		// VA: 0x7B46D592AC RVA: 0x33532AC Offset: 0x33522AC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42930
	public sealed class Texture3D : [Texture]
	{
		// Fields

		// Methods
		public override new [Boolean] get_isReadable();
		// VA: 0x7B46D595A8 RVA: 0x33535A8 Offset: 0x33525A8
		private static new [Boolean] Internal_CreateImpl([Texture3D] mono, [Int32] w, [Int32] h, [Int32] d, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex);
		// VA: 0x7B46D595E4 RVA: 0x33535E4 Offset: 0x33525E4
		private static new [Void] Internal_Create([Texture3D] mono, [Int32] w, [Int32] h, [Int32] d, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags, [IntPtr] nativeTex);
		// VA: 0x7B46D59680 RVA: 0x3353680 Offset: 0x3352680
		private new [Void] ApplyImpl([Boolean] updateMipmaps, [Boolean] makeNoLongerReadable);
		// VA: 0x7B46D59774 RVA: 0x3353774 Offset: 0x3352774
		public new [Void] SetPixels([Color[]] colors, [Int32] miplevel);
		// VA: 0x7B46D597C8 RVA: 0x33537C8 Offset: 0x33527C8
		public new [Void] SetPixels([Color[]] colors);
		// VA: 0x7B46D5981C RVA: 0x335381C Offset: 0x335281C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [DefaultFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D59864 RVA: 0x3353864 Offset: 0x3352864
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [DefaultFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D59958 RVA: 0x3353958 Offset: 0x3352958
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D598B8 RVA: 0x33538B8 Offset: 0x33528B8
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D599BC RVA: 0x33539BC Offset: 0x33529BC
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Int32] mipCount);
		// VA: 0x7B46D59AFC RVA: 0x3353AFC Offset: 0x3352AFC
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Int32] mipCount, [IntPtr] nativeTex);
		// VA: 0x7B46D59B1C RVA: 0x3353B1C Offset: 0x3352B1C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Int32] mipCount, [IntPtr] nativeTex, [Boolean] createUninitialized);
		// VA: 0x7B46D59B38 RVA: 0x3353B38 Offset: 0x3352B38
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain);
		// VA: 0x7B46D59C9C RVA: 0x3353C9C Offset: 0x3352C9C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] createUninitialized);
		// VA: 0x7B46D59D54 RVA: 0x3353D54 Offset: 0x3352D54
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain, [IntPtr] nativeTex);
		// VA: 0x7B46D59E18 RVA: 0x3353E18 Offset: 0x3352E18
		public new [Void] Apply([Boolean] updateMipmaps, [Boolean] makeNoLongerReadable);
		// VA: 0x7B46D59EDC RVA: 0x3353EDC Offset: 0x3352EDC
		public new [Void] Apply();
		// VA: 0x7B46D59F68 RVA: 0x3353F68 Offset: 0x3352F68
		private static new [Void] ValidateIsNotCrunched([TextureCreationFlags] flags);
		// VA: 0x7B46D59AA8 RVA: 0x3353AA8 Offset: 0x3352AA8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42B20
	public sealed class Texture2DArray : [Texture]
	{
		// Fields

		// Methods
		public override new [Boolean] get_isReadable();
		// VA: 0x7B46D59F74 RVA: 0x3353F74 Offset: 0x3352F74
		private static new [Boolean] Internal_CreateImpl([Texture2DArray] mono, [Int32] w, [Int32] h, [Int32] d, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags);
		// VA: 0x7B46D59FB0 RVA: 0x3353FB0 Offset: 0x3352FB0
		private static new [Void] Internal_Create([Texture2DArray] mono, [Int32] w, [Int32] h, [Int32] d, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags);
		// VA: 0x7B46D5A03C RVA: 0x335403C Offset: 0x335303C
		internal new [Boolean] ValidateFormat([TextureFormat] format, [Int32] width, [Int32] height);
		// VA: 0x7B46D5A118 RVA: 0x3354118 Offset: 0x3353118
		internal new [Boolean] ValidateFormat([GraphicsFormat] format, [Int32] width, [Int32] height);
		// VA: 0x7B46D5A214 RVA: 0x3354214 Offset: 0x3353214
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [DefaultFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D5A35C RVA: 0x335435C Offset: 0x335335C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [DefaultFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D5A450 RVA: 0x3354450 Offset: 0x3353450
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D5A3B0 RVA: 0x33543B0 Offset: 0x33533B0
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D5A5B0 RVA: 0x33545B0 Offset: 0x33535B0
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D5A69C RVA: 0x335469C Offset: 0x335369C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear);
		// VA: 0x7B46D5A818 RVA: 0x3354818 Offset: 0x3353818
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D5A838 RVA: 0x3354838 Offset: 0x3353838
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear);
		// VA: 0x7B46D5A8F4 RVA: 0x33548F4 Offset: 0x33538F4
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [TextureFormat] textureFormat, [Boolean] mipChain);
		// VA: 0x7B46D5A9B8 RVA: 0x33549B8 Offset: 0x33539B8
		private static new [Void] ValidateIsNotCrunched([TextureCreationFlags] flags);
		// VA: 0x7B46D5A55C RVA: 0x335455C Offset: 0x335355C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42D10
	public sealed class CubemapArray : [Texture]
	{
		// Fields

		// Methods
		public override new [Boolean] get_isReadable();
		// VA: 0x7B46D5AA70 RVA: 0x3354A70 Offset: 0x3353A70
		private static new [Boolean] Internal_CreateImpl([CubemapArray] mono, [Int32] ext, [Int32] count, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags);
		// VA: 0x7B46D5AAAC RVA: 0x3354AAC Offset: 0x3353AAC
		private static new [Void] Internal_Create([CubemapArray] mono, [Int32] ext, [Int32] count, [Int32] mipCount, [GraphicsFormat] format, [TextureColorSpace] colorSpace, [TextureCreationFlags] flags);
		// VA: 0x7B46D5AB30 RVA: 0x3354B30 Offset: 0x3353B30
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [DefaultFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D5AC04 RVA: 0x3354C04 Offset: 0x3353C04
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [DefaultFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D5ACE0 RVA: 0x3354CE0 Offset: 0x3353CE0
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [GraphicsFormat] format, [TextureCreationFlags] flags);
		// VA: 0x7B46D5AC50 RVA: 0x3354C50 Offset: 0x3353C50
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [GraphicsFormat] format, [TextureCreationFlags] flags, [Int32] mipCount);
		// VA: 0x7B46D5AD34 RVA: 0x3354D34 Offset: 0x3353D34
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D5AE74 RVA: 0x3354E74 Offset: 0x3353E74
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [TextureFormat] textureFormat, [Int32] mipCount, [Boolean] linear);
		// VA: 0x7B46D5AFE0 RVA: 0x3354FE0 Offset: 0x3353FE0
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear, [Boolean] createUninitialized);
		// VA: 0x7B46D5AFEC RVA: 0x3354FEC Offset: 0x3353FEC
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [TextureFormat] textureFormat, [Boolean] mipChain, [Boolean] linear);
		// VA: 0x7B46D5B0A0 RVA: 0x33550A0 Offset: 0x33540A0
		public new [Void] .ctor([Int32] width, [Int32] cubemapCount, [TextureFormat] textureFormat, [Boolean] mipChain);
		// VA: 0x7B46D5B148 RVA: 0x3355148 Offset: 0x3354148
		private static new [Void] ValidateIsNotCrunched([TextureCreationFlags] flags);
		// VA: 0x7B46D5AE20 RVA: 0x3354E20 Offset: 0x3353E20
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B42F00
	public class RenderTexture : [Texture]
	{
		// Fields

		// Methods
		public override new [Int32] get_width();
		// VA: 0x7B46D5B1EC RVA: 0x33551EC Offset: 0x33541EC
		public override new [Void] set_width([Int32] value);
		// VA: 0x7B46D5B228 RVA: 0x3355228 Offset: 0x3354228
		public override new [Int32] get_height();
		// VA: 0x7B46D5B26C RVA: 0x335526C Offset: 0x335426C
		public override new [Void] set_height([Int32] value);
		// VA: 0x7B46D5B2A8 RVA: 0x33552A8 Offset: 0x33542A8
		public override new [TextureDimension] get_dimension();
		// VA: 0x7B46D5B2EC RVA: 0x33552EC Offset: 0x33542EC
		public override new [Void] set_dimension([TextureDimension] value);
		// VA: 0x7B46D5B328 RVA: 0x3355328 Offset: 0x3354328
		private new [GraphicsFormat] GetColorFormat([Boolean] suppressWarnings);
		// VA: 0x7B46D5B36C RVA: 0x335536C Offset: 0x335436C
		private new [Void] SetColorFormat([GraphicsFormat] format);
		// VA: 0x7B46D5B3B0 RVA: 0x33553B0 Offset: 0x33543B0
		public new [GraphicsFormat] get_graphicsFormat();
		// VA: 0x7B46D5B3F4 RVA: 0x33553F4 Offset: 0x33543F4
		public new [Void] set_graphicsFormat([GraphicsFormat] value);
		// VA: 0x7B46D5B434 RVA: 0x3355434 Offset: 0x3354434
		public new [Boolean] get_useMipMap();
		// VA: 0x7B46D5B478 RVA: 0x3355478 Offset: 0x3354478
		public new [Void] set_useMipMap([Boolean] value);
		// VA: 0x7B46D5B4B4 RVA: 0x33554B4 Offset: 0x33544B4
		public new [Boolean] get_sRGB();
		// VA: 0x7B46D5B4F8 RVA: 0x33554F8 Offset: 0x33544F8
		public new [VRTextureUsage] get_vrUsage();
		// VA: 0x7B46D5B534 RVA: 0x3355534 Offset: 0x3354534
		public new [Void] set_vrUsage([VRTextureUsage] value);
		// VA: 0x7B46D5B570 RVA: 0x3355570 Offset: 0x3354570
		public new [RenderTextureMemoryless] get_memorylessMode();
		// VA: 0x7B46D5B5B4 RVA: 0x33555B4 Offset: 0x33545B4
		public new [Void] set_memorylessMode([RenderTextureMemoryless] value);
		// VA: 0x7B46D5B5F0 RVA: 0x33555F0 Offset: 0x33545F0
		public new [RenderTextureFormat] get_format();
		// VA: 0x7B46D5B634 RVA: 0x3355634 Offset: 0x3354634
		public new [Void] set_format([RenderTextureFormat] value);
		// VA: 0x7B46D5B7C8 RVA: 0x33557C8 Offset: 0x33547C8
		public new [GraphicsFormat] get_stencilFormat();
		// VA: 0x7B46D5B890 RVA: 0x3355890 Offset: 0x3354890
		public new [Void] set_stencilFormat([GraphicsFormat] value);
		// VA: 0x7B46D5B8CC RVA: 0x33558CC Offset: 0x33548CC
		public new [GraphicsFormat] get_depthStencilFormat();
		// VA: 0x7B46D5B910 RVA: 0x3355910 Offset: 0x3354910
		public new [Void] set_depthStencilFormat([GraphicsFormat] value);
		// VA: 0x7B46D5B94C RVA: 0x335594C Offset: 0x335494C
		public new [Boolean] get_autoGenerateMips();
		// VA: 0x7B46D5B990 RVA: 0x3355990 Offset: 0x3354990
		public new [Void] set_autoGenerateMips([Boolean] value);
		// VA: 0x7B46D5B9CC RVA: 0x33559CC Offset: 0x33549CC
		public new [Int32] get_volumeDepth();
		// VA: 0x7B46D5BA10 RVA: 0x3355A10 Offset: 0x3354A10
		public new [Void] set_volumeDepth([Int32] value);
		// VA: 0x7B46D5BA4C RVA: 0x3355A4C Offset: 0x3354A4C
		public new [Int32] get_antiAliasing();
		// VA: 0x7B46D5BA90 RVA: 0x3355A90 Offset: 0x3354A90
		public new [Void] set_antiAliasing([Int32] value);
		// VA: 0x7B46D5BACC RVA: 0x3355ACC Offset: 0x3354ACC
		public new [Boolean] get_bindTextureMS();
		// VA: 0x7B46D5BB10 RVA: 0x3355B10 Offset: 0x3354B10
		public new [Void] set_bindTextureMS([Boolean] value);
		// VA: 0x7B46D5BB4C RVA: 0x3355B4C Offset: 0x3354B4C
		public new [Boolean] get_enableRandomWrite();
		// VA: 0x7B46D5BB90 RVA: 0x3355B90 Offset: 0x3354B90
		public new [Void] set_enableRandomWrite([Boolean] value);
		// VA: 0x7B46D5BBCC RVA: 0x3355BCC Offset: 0x3354BCC
		public new [Boolean] get_useDynamicScale();
		// VA: 0x7B46D5BC10 RVA: 0x3355C10 Offset: 0x3354C10
		public new [Void] set_useDynamicScale([Boolean] value);
		// VA: 0x7B46D5BC4C RVA: 0x3355C4C Offset: 0x3354C4C
		private new [Boolean] GetIsPowerOfTwo();
		// VA: 0x7B46D5BC90 RVA: 0x3355C90 Offset: 0x3354C90
		public new [Boolean] get_isPowerOfTwo();
		// VA: 0x7B46D5BCCC RVA: 0x3355CCC Offset: 0x3354CCC
		public new [Void] set_isPowerOfTwo([Boolean] value);
		// VA: 0x7B46D5BD08 RVA: 0x3355D08 Offset: 0x3354D08
		private static new [RenderTexture] GetActive();
		// VA: 0x7B46D5BD0C RVA: 0x3355D0C Offset: 0x3354D0C
		private static new [Void] SetActive([RenderTexture] rt);
		// VA: 0x7B46D5BD34 RVA: 0x3355D34 Offset: 0x3354D34
		public static new [RenderTexture] get_active();
		// VA: 0x7B46D5BD70 RVA: 0x3355D70 Offset: 0x3354D70
		public static new [Void] set_active([RenderTexture] value);
		// VA: 0x7B46D5BD98 RVA: 0x3355D98 Offset: 0x3354D98
		private new [RenderBuffer] GetColorBuffer();
		// VA: 0x7B46D5BDD4 RVA: 0x3355DD4 Offset: 0x3354DD4
		private new [RenderBuffer] GetDepthBuffer();
		// VA: 0x7B46D5BE6C RVA: 0x3355E6C Offset: 0x3354E6C
		private new [Void] SetMipMapCount([Int32] count);
		// VA: 0x7B46D5BF04 RVA: 0x3355F04 Offset: 0x3354F04
		private new [Void] SetShadowSamplingMode([ShadowSamplingMode] samplingMode);
		// VA: 0x7B46D5BF48 RVA: 0x3355F48 Offset: 0x3354F48
		public new [RenderBuffer] get_colorBuffer();
		// VA: 0x7B46D5BF8C RVA: 0x3355F8C Offset: 0x3354F8C
		public new [RenderBuffer] get_depthBuffer();
		// VA: 0x7B46D5BF90 RVA: 0x3355F90 Offset: 0x3354F90
		public new [IntPtr] GetNativeDepthBufferPtr();
		// VA: 0x7B46D5BF94 RVA: 0x3355F94 Offset: 0x3354F94
		public new [Void] DiscardContents([Boolean] discardColor, [Boolean] discardDepth);
		// VA: 0x7B46D5BFD0 RVA: 0x3355FD0 Offset: 0x3354FD0
		public new [Void] MarkRestoreExpected();
		// VA: 0x7B46D5C024 RVA: 0x3356024 Offset: 0x3355024
		public new [Void] DiscardContents();
		// VA: 0x7B46D5C060 RVA: 0x3356060 Offset: 0x3355060
		private new [Void] ResolveAA();
		// VA: 0x7B46D5C0A4 RVA: 0x33560A4 Offset: 0x33550A4
		private new [Void] ResolveAATo([RenderTexture] rt);
		// VA: 0x7B46D5C0E0 RVA: 0x33560E0 Offset: 0x33550E0
		public new [Void] ResolveAntiAliasedSurface();
		// VA: 0x7B46D5C124 RVA: 0x3356124 Offset: 0x3355124
		public new [Void] ResolveAntiAliasedSurface([RenderTexture] target);
		// VA: 0x7B46D5C160 RVA: 0x3356160 Offset: 0x3355160
		public new [Void] SetGlobalShaderProperty([String] propertyName);
		// VA: 0x7B46D5C1A4 RVA: 0x33561A4 Offset: 0x33551A4
		public new [Boolean] Create();
		// VA: 0x7B46D5C1E8 RVA: 0x33561E8 Offset: 0x33551E8
		public new [Void] Release();
		// VA: 0x7B46D5C224 RVA: 0x3356224 Offset: 0x3355224
		public new [Boolean] IsCreated();
		// VA: 0x7B46D5C260 RVA: 0x3356260 Offset: 0x3355260
		public new [Void] GenerateMips();
		// VA: 0x7B46D5C29C RVA: 0x335629C Offset: 0x335529C
		public new [Void] ConvertToEquirect([RenderTexture] equirect, [Camera]->[MonoOrStereoscopicEye] eye);
		// VA: 0x7B46D5C2D8 RVA: 0x33562D8 Offset: 0x33552D8
		internal new [Void] SetSRGBReadWrite([Boolean] srgb);
		// VA: 0x7B46D5C32C RVA: 0x335632C Offset: 0x335532C
		private static new [Void] Internal_Create([RenderTexture] rt);
		// VA: 0x7B46D5C370 RVA: 0x3356370 Offset: 0x3355370
		public static new [Boolean] SupportsStencil([RenderTexture] rt);
		// VA: 0x7B46D5C3AC RVA: 0x33563AC Offset: 0x33553AC
		private new [Void] SetRenderTextureDescriptor([RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C3E8 RVA: 0x33563E8 Offset: 0x33553E8
		private new [RenderTextureDescriptor] GetDescriptor();
		// VA: 0x7B46D5B750 RVA: 0x3355750 Offset: 0x3354750
		private static new [RenderTexture] GetTemporary_Internal([RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C4B4 RVA: 0x33564B4 Offset: 0x33554B4
		public static new [Void] ReleaseTemporary([RenderTexture] temp);
		// VA: 0x7B46D5C52C RVA: 0x335652C Offset: 0x335552C
		public new [Int32] get_depth();
		// VA: 0x7B46D5C568 RVA: 0x3356568 Offset: 0x3355568
		public new [Void] set_depth([Int32] value);
		// VA: 0x7B46D5C5A4 RVA: 0x33565A4 Offset: 0x33555A4
		protected internal new [Void] .ctor();
		// VA: 0x7B46D5C5E8 RVA: 0x33565E8 Offset: 0x33555E8
		public new [Void] .ctor([RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C63C RVA: 0x335663C Offset: 0x335563C
		public new [Void] .ctor([RenderTexture] textureToCopy);
		// VA: 0x7B46D5CB1C RVA: 0x3356B1C Offset: 0x3355B1C
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [DefaultFormat] format);
		// VA: 0x7B46D5CD08 RVA: 0x3356D08 Offset: 0x3355D08
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format);
		// VA: 0x7B46D5D030 RVA: 0x3357030 Offset: 0x3356030
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [GraphicsFormat] format, [Int32] mipCount);
		// VA: 0x7B46D5D0C0 RVA: 0x33570C0 Offset: 0x33560C0
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] colorFormat, [GraphicsFormat] depthStencilFormat, [Int32] mipCount);
		// VA: 0x7B46D5CE2C RVA: 0x3356E2C Offset: 0x3355E2C
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] colorFormat, [GraphicsFormat] depthStencilFormat);
		// VA: 0x7B46D5D358 RVA: 0x3357358 Offset: 0x3356358
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite);
		// VA: 0x7B46D5D3E8 RVA: 0x33573E8 Offset: 0x33563E8
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [RenderTextureFormat] format);
		// VA: 0x7B46D5D670 RVA: 0x3357670 Offset: 0x3356670
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth);
		// VA: 0x7B46D5D7A0 RVA: 0x33577A0 Offset: 0x33567A0
		public new [Void] .ctor([Int32] width, [Int32] height, [Int32] depth, [RenderTextureFormat] format, [Int32] mipCount);
		// VA: 0x7B46D5D700 RVA: 0x3357700 Offset: 0x3356700
		private new [Void] Initialize([Int32] width, [Int32] height, [Int32] depth, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite, [Int32] mipCount);
		// VA: 0x7B46D5D490 RVA: 0x3357490 Offset: 0x3356490
		internal static new [GraphicsFormat] GetDepthStencilFormatLegacy([Int32] depthBits, [GraphicsFormat] colorFormat);
		// VA: 0x7B46D5D2D4 RVA: 0x33572D4 Offset: 0x33562D4
		internal static new [GraphicsFormat] GetDepthStencilFormatLegacy([Int32] depthBits, [RenderTextureFormat] format);
		// VA: 0x7B46D5D8FC RVA: 0x33578FC Offset: 0x33568FC
		internal static new [GraphicsFormat] GetDepthStencilFormatLegacy([Int32] depthBits, [DefaultFormat] format);
		// VA: 0x7B46D5D988 RVA: 0x3357988 Offset: 0x3356988
		internal static new [GraphicsFormat] GetDepthStencilFormatLegacy([Int32] depthBits, [Boolean] requestedShadowMap);
		// VA: 0x7B46D5D908 RVA: 0x3357908 Offset: 0x3356908
		public new [RenderTextureDescriptor] get_descriptor();
		// VA: 0x7B46D5CC84 RVA: 0x3356C84 Offset: 0x3355C84
		public new [Void] set_descriptor([RenderTextureDescriptor] value);
		// VA: 0x7B46D5D994 RVA: 0x3357994 Offset: 0x3356994
		private static new [Void] ValidateRenderTextureDesc([RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C734 RVA: 0x3356734 Offset: 0x3355734
		internal static new [GraphicsFormat] GetDefaultColorFormat([DefaultFormat] format);
		// VA: 0x7B46D5CDDC RVA: 0x3356DDC Offset: 0x3355DDC
		internal static new [GraphicsFormat] GetDefaultDepthStencilFormat([DefaultFormat] format, [Int32] depth);
		// VA: 0x7B46D5CE04 RVA: 0x3356E04 Offset: 0x3355E04
		internal static new [GraphicsFormat] GetCompatibleFormat([RenderTextureFormat] renderTextureFormat, [RenderTextureReadWrite] readWrite);
		// VA: 0x7B46D5D7A8 RVA: 0x33577A8 Offset: 0x33567A8
		public static new [RenderTexture] GetTemporary([RenderTextureDescriptor] desc);
		// VA: 0x7B46D5DA24 RVA: 0x3357A24 Offset: 0x3356A24
		private static new [RenderTexture] GetTemporaryImpl([Int32] width, [Int32] height, [GraphicsFormat] depthStencilFormat, [GraphicsFormat] colorFormat, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode, [VRTextureUsage] vrUsage, [Boolean] useDynamicScale);
		// VA: 0x7B46D5DAC4 RVA: 0x3357AC4 Offset: 0x3356AC4
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [GraphicsFormat] format, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode, [VRTextureUsage] vrUsage, [Boolean] useDynamicScale);
		// VA: 0x7B46D5DC38 RVA: 0x3357C38 Offset: 0x3356C38
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [GraphicsFormat] format, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode, [VRTextureUsage] vrUsage);
		// VA: 0x7B46D5DCA4 RVA: 0x3357CA4 Offset: 0x3356CA4
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [GraphicsFormat] format, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode);
		// VA: 0x7B46D5DD18 RVA: 0x3357D18 Offset: 0x3356D18
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [GraphicsFormat] format, [Int32] antiAliasing);
		// VA: 0x7B46D5DD80 RVA: 0x3357D80 Offset: 0x3356D80
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [GraphicsFormat] format);
		// VA: 0x7B46D5DDE4 RVA: 0x3357DE4 Offset: 0x3356DE4
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode, [VRTextureUsage] vrUsage, [Boolean] useDynamicScale);
		// VA: 0x7B46D5DE3C RVA: 0x3357E3C Offset: 0x3356E3C
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode, [VRTextureUsage] vrUsage);
		// VA: 0x7B46D5DEC8 RVA: 0x3357EC8 Offset: 0x3356EC8
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite, [Int32] antiAliasing, [RenderTextureMemoryless] memorylessMode);
		// VA: 0x7B46D5DEE4 RVA: 0x3357EE4 Offset: 0x3356EE4
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite, [Int32] antiAliasing);
		// VA: 0x7B46D5DF04 RVA: 0x3357F04 Offset: 0x3356F04
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format, [RenderTextureReadWrite] readWrite);
		// VA: 0x7B46D5DF28 RVA: 0x3357F28 Offset: 0x3356F28
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer, [RenderTextureFormat] format);
		// VA: 0x7B46D5DF50 RVA: 0x3357F50 Offset: 0x3356F50
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height, [Int32] depthBuffer);
		// VA: 0x7B46D5DF7C RVA: 0x3357F7C Offset: 0x3356F7C
		public static new [RenderTexture] GetTemporary([Int32] width, [Int32] height);
		// VA: 0x7B46D5DFAC RVA: 0x3357FAC Offset: 0x3356FAC
		public new [Boolean] get_isCubemap();
		// VA: 0x7B46D5DFE0 RVA: 0x3357FE0 Offset: 0x3356FE0
		public new [Void] set_isCubemap([Boolean] value);
		// VA: 0x7B46D5E000 RVA: 0x3358000 Offset: 0x3357000
		public new [Boolean] get_isVolume();
		// VA: 0x7B46D5E02C RVA: 0x335802C Offset: 0x335702C
		public new [Void] set_isVolume([Boolean] value);
		// VA: 0x7B46D5E04C RVA: 0x335804C Offset: 0x335704C
		public static new [Boolean] get_enabled();
		// VA: 0x7B46D5E074 RVA: 0x3358074 Offset: 0x3357074
		public static new [Void] set_enabled([Boolean] value);
		// VA: 0x7B46D5E07C RVA: 0x335807C Offset: 0x335707C
		public new [Vector2] GetTexelOffset();
		// VA: 0x7B46D5E080 RVA: 0x3358080 Offset: 0x3357080
		private new [Void] GetColorBuffer_Injected(out [RenderBuffer] ret);
		// VA: 0x7B46D5BE28 RVA: 0x3355E28 Offset: 0x3354E28
		private new [Void] GetDepthBuffer_Injected(out [RenderBuffer] ret);
		// VA: 0x7B46D5BEC0 RVA: 0x3355EC0 Offset: 0x3354EC0
		private new [Void] SetRenderTextureDescriptor_Injected(ref [RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C42C RVA: 0x335642C Offset: 0x335542C
		private new [Void] GetDescriptor_Injected(out [RenderTextureDescriptor] ret);
		// VA: 0x7B46D5C470 RVA: 0x3356470 Offset: 0x3355470
		private static new [RenderTexture] GetTemporary_Internal_Injected(ref [RenderTextureDescriptor] desc);
		// VA: 0x7B46D5C4F0 RVA: 0x33564F0 Offset: 0x33554F0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B430F0
	public sealed class CustomRenderTexture : [RenderTexture]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B432E0
	public struct RenderTextureDescriptor : [ValueType]
	{
		// Fields
		// private [Int32] width { get; set; }
		private [Int32] <width>k__BackingField; // 0x0
		// private [Int32] height { get; set; }
		private [Int32] <height>k__BackingField; // 0x4
		// private [Int32] msaaSamples { get; set; }
		private [Int32] <msaaSamples>k__BackingField; // 0x8
		// private [Int32] volumeDepth { get; set; }
		private [Int32] <volumeDepth>k__BackingField; // 0xC
		// private [Int32] mipCount { get; set; }
		private [Int32] <mipCount>k__BackingField; // 0x10
		private [Int32] _graphicsFormat; // enum: [GraphicsFormat], 0x14
		// private [GraphicsFormat] stencilFormat { get; set; }
		private [GraphicsFormat] <stencilFormat>k__BackingField; // 0x18
		// private [GraphicsFormat] depthStencilFormat { get; set; }
		private [GraphicsFormat] <depthStencilFormat>k__BackingField; // 0x1C
		// private [TextureDimension] dimension { get; set; }
		private [TextureDimension] <dimension>k__BackingField; // 0x20
		// private [ShadowSamplingMode] shadowSamplingMode { get; set; }
		private [ShadowSamplingMode] <shadowSamplingMode>k__BackingField; // 0x24
		// private [VRTextureUsage] vrUsage { get; set; }
		private [VRTextureUsage] <vrUsage>k__BackingField; // 0x28
		private [Int32] _flags; // enum: [RenderTextureCreationFlags], 0x2C
		// private [RenderTextureMemoryless] memoryless { get; set; }
		private [RenderTextureMemoryless] <memoryless>k__BackingField; // 0x30

		// Methods
		public new [Int32] get_width();
		// VA: 0x7B46D5E0C0 RVA: 0x33580C0 Offset: 0x33570C0
		public new [Void] set_width([Int32] value);
		// VA: 0x7B46D5E0C8 RVA: 0x33580C8 Offset: 0x33570C8
		public new [Int32] get_height();
		// VA: 0x7B46D5E0D0 RVA: 0x33580D0 Offset: 0x33570D0
		public new [Void] set_height([Int32] value);
		// VA: 0x7B46D5E0D8 RVA: 0x33580D8 Offset: 0x33570D8
		public new [Int32] get_msaaSamples();
		// VA: 0x7B46D5E0E0 RVA: 0x33580E0 Offset: 0x33570E0
		public new [Void] set_msaaSamples([Int32] value);
		// VA: 0x7B46D5E0E8 RVA: 0x33580E8 Offset: 0x33570E8
		public new [Int32] get_volumeDepth();
		// VA: 0x7B46D5E0F0 RVA: 0x33580F0 Offset: 0x33570F0
		public new [Void] set_volumeDepth([Int32] value);
		// VA: 0x7B46D5E0F8 RVA: 0x33580F8 Offset: 0x33570F8
		public new [Void] set_mipCount([Int32] value);
		// VA: 0x7B46D5E100 RVA: 0x3358100 Offset: 0x3357100
		public new [GraphicsFormat] get_graphicsFormat();
		// VA: 0x7B46D5DA1C RVA: 0x3357A1C Offset: 0x3356A1C
		public new [Void] set_graphicsFormat([GraphicsFormat] value);
		// VA: 0x7B46D5E108 RVA: 0x3358108 Offset: 0x3357108
		public new [GraphicsFormat] get_depthStencilFormat();
		// VA: 0x7B46D5E240 RVA: 0x3358240 Offset: 0x3357240
		public new [Void] set_depthStencilFormat([GraphicsFormat] value);
		// VA: 0x7B46D5E248 RVA: 0x3358248 Offset: 0x3357248
		public new [Int32] get_depthBufferBits();
		// VA: 0x7B46D5E1C0 RVA: 0x33581C0 Offset: 0x33571C0
		public new [Void] set_depthBufferBits([Int32] value);
		// VA: 0x7B46D5E21C RVA: 0x335821C Offset: 0x335721C
		public new [TextureDimension] get_dimension();
		// VA: 0x7B46D5E250 RVA: 0x3358250 Offset: 0x3357250
		public new [Void] set_dimension([TextureDimension] value);
		// VA: 0x7B46D5E258 RVA: 0x3358258 Offset: 0x3357258
		public new [ShadowSamplingMode] get_shadowSamplingMode();
		// VA: 0x7B46D5E260 RVA: 0x3358260 Offset: 0x3357260
		public new [Void] set_shadowSamplingMode([ShadowSamplingMode] value);
		// VA: 0x7B46D5E268 RVA: 0x3358268 Offset: 0x3357268
		public new [Void] set_vrUsage([VRTextureUsage] value);
		// VA: 0x7B46D5E270 RVA: 0x3358270 Offset: 0x3357270
		public new [Void] set_memoryless([RenderTextureMemoryless] value);
		// VA: 0x7B46D5E278 RVA: 0x3358278 Offset: 0x3357278
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] colorFormat, [GraphicsFormat] depthStencilFormat);
		// VA: 0x7B46D5DB5C RVA: 0x3357B5C Offset: 0x3356B5C
		public new [Void] .ctor([Int32] width, [Int32] height, [GraphicsFormat] colorFormat, [GraphicsFormat] depthStencilFormat, [Int32] mipCount);
		// VA: 0x7B46D5E280 RVA: 0x3358280 Offset: 0x3357280
		private new [Void] SetOrClearRenderTextureCreationFlag([Boolean] value, [RenderTextureCreationFlags] flag);
		// VA: 0x7B46D5E1A4 RVA: 0x33581A4 Offset: 0x33571A4
		internal new [Void] set_createdFromScript([Boolean] value);
		// VA: 0x7B46D5DAA4 RVA: 0x3357AA4 Offset: 0x3356AA4
		public new [Void] set_useDynamicScale([Boolean] value);
		// VA: 0x7B46D5DC18 RVA: 0x3357C18 Offset: 0x3356C18
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708ECF40
	public struct Hash128 : [ValueType]
	{
		// Fields
		public [UInt64] u64_0; // 0x0
		public [UInt64] u64_1; // 0x8

		// Methods
		public new [Void] .ctor([UInt64] u64_0, [UInt64] u64_1);
		// VA: 0x7B46D5E2DC RVA: 0x33582DC Offset: 0x33572DC
		public new [Boolean] get_isValid();
		// VA: 0x7B46D5E2E4 RVA: 0x33582E4 Offset: 0x33572E4
		public sealed new [Int32] CompareTo([Hash128] rhs);
		// VA: 0x7B46D5E304 RVA: 0x3358304 Offset: 0x3357304
		public override new [String] ToString();
		// VA: 0x7B46D5E3AC RVA: 0x33583AC Offset: 0x33573AC
		public static new [Hash128] Parse([String] hashString);
		// VA: 0x7B46D5E3F8 RVA: 0x33583F8 Offset: 0x33573F8
		private static new [String] Hash128ToStringImpl([Hash128] hash);
		// VA: 0x7B46D5E3B8 RVA: 0x33583B8 Offset: 0x33573B8
		private static new [Void] ComputeFromString([String] data, ref [Hash128] hash);
		// VA: 0x7B46D5E4CC RVA: 0x33584CC Offset: 0x33574CC
		private static new [Void] ComputeFromArray([Array] data, [Int32] start, [Int32] count, [Int32] elemSize, ref [Hash128] hash);
		// VA: 0x7B46D5E510 RVA: 0x3358510 Offset: 0x3357510
		public static new [Hash128] Compute([String] data);
		// VA: 0x7B46D5E57C RVA: 0x335857C Offset: 0x335757C
		public new [Void] Append([T[]] data);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D5E5D0 RVA: 0x33585D0 Offset: 0x33575D0
		public sealed new [Boolean] Equals([Hash128] obj);
		// VA: 0x7B46D5E66C RVA: 0x335866C Offset: 0x335766C
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D5E688 RVA: 0x3358688 Offset: 0x3357688
		public sealed new [Int32] CompareTo([Object] obj);
		// VA: 0x7B46D5E6BC RVA: 0x33586BC Offset: 0x33576BC
		public static new [Boolean] op_Equality([Hash128] hash1, [Hash128] hash2);
		// VA: 0x7B46D5E654 RVA: 0x3358654 Offset: 0x3357654
		public static new [Boolean] op_Inequality([Hash128] hash1, [Hash128] hash2);
		// VA: 0x7B46D5E778 RVA: 0x3358778 Offset: 0x3357778
		public static new [Boolean] op_LessThan([Hash128] x, [Hash128] y);
		// VA: 0x7B46D5E358 RVA: 0x3358358 Offset: 0x3357358
		public static new [Boolean] op_GreaterThan([Hash128] x, [Hash128] y);
		// VA: 0x7B46D5E370 RVA: 0x3358370 Offset: 0x3357370
		private static new [Void] Parse_Injected([String] hashString, out [Hash128] ret);
		// VA: 0x7B46D5E44C RVA: 0x335844C Offset: 0x335744C
		private static new [String] Hash128ToStringImpl_Injected(ref [Hash128] hash);
		// VA: 0x7B46D5E490 RVA: 0x3358490 Offset: 0x3357490
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B43460
	public static class HashUnsafeUtilities : [Object]
	{
		// Fields

		// Methods
		public static new [Void] ComputeHash128([Void*] data, [UInt64] dataSize, [UInt64*] hash1, [UInt64*] hash2);
		// VA: 0x7B46D5E790 RVA: 0x3358790 Offset: 0x3357790
		public static new [Void] ComputeHash128([Void*] data, [UInt64] dataSize, [Hash128*] hash);
		// VA: 0x7B46D5EB14 RVA: 0x3358B14 Offset: 0x3357B14
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B43760
	private static class SpookyHash : [Object]
	{
		// Fields
		private readonly static [Boolean] AllowUnalignedRead; // 0x0

		// Methods
		private static new [Boolean] AttemptDetectAllowUnalignedRead();
		// VA: 0x7B46D5EB54 RVA: 0x3358B54 Offset: 0x3357B54
		public static new [Void] Hash([Void*] message, [UInt64] length, [UInt64*] hash1, [UInt64*] hash2);
		// VA: 0x7B46D5E80C RVA: 0x335880C Offset: 0x335780C
		private static new [Void] End([UInt64*] data, ref [UInt64] h0, ref [UInt64] h1, ref [UInt64] h2, ref [UInt64] h3, ref [UInt64] h4, ref [UInt64] h5, ref [UInt64] h6, ref [UInt64] h7, ref [UInt64] h8, ref [UInt64] h9, ref [UInt64] h10, ref [UInt64] h11);
		// VA: 0x7B46D5F498 RVA: 0x3359498 Offset: 0x3358498
		private static new [Void] EndPartial(ref [UInt64] h0, ref [UInt64] h1, ref [UInt64] h2, ref [UInt64] h3, ref [UInt64] h4, ref [UInt64] h5, ref [UInt64] h6, ref [UInt64] h7, ref [UInt64] h8, ref [UInt64] h9, ref [UInt64] h10, ref [UInt64] h11);
		// VA: 0x7B46D5F704 RVA: 0x3359704 Offset: 0x3358704
		private static new [Void] Rot64(ref [UInt64] x, [Int32] k);
		// VA: 0x7B46D5F99C RVA: 0x335999C Offset: 0x335899C
		private static new [Void] Short([Void*] message, [UInt64] length, [UInt64*] hash1, [UInt64*] hash2);
		// VA: 0x7B46D5EBDC RVA: 0x3358BDC Offset: 0x3357BDC
		private static new [Void] ShortMix(ref [UInt64] h0, ref [UInt64] h1, ref [UInt64] h2, ref [UInt64] h3);
		// VA: 0x7B46D5F9B0 RVA: 0x33599B0 Offset: 0x33589B0
		private static new [Void] ShortEnd(ref [UInt64] h0, ref [UInt64] h1, ref [UInt64] h2, ref [UInt64] h3);
		// VA: 0x7B46D5FBCC RVA: 0x3359BCC Offset: 0x3358BCC
		private static new [Void] Mix([UInt64*] data, ref [UInt64] s0, ref [UInt64] s1, ref [UInt64] s2, ref [UInt64] s3, ref [UInt64] s4, ref [UInt64] s5, ref [UInt64] s6, ref [UInt64] s7, ref [UInt64] s8, ref [UInt64] s9, ref [UInt64] s10, ref [UInt64] s11);
		// VA: 0x7B46D5EF74 RVA: 0x3358F74 Offset: 0x3357F74
		private static new [Void] memset([Void*] dst, [Int32] value, [UInt64] numberOfBytes);
		// VA: 0x7B46D5F3C0 RVA: 0x33593C0 Offset: 0x33583C0
		private static new [Void] .cctor();
		// VA: 0x7B46D5FDC8 RVA: 0x3359DC8 Offset: 0x3358DC8

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B435E0
		public struct U : [ValueType]
		{
			// Fields
			public [Byte*] p8; // 0x0
			public [UInt32*] p32; // 0x0
			public [UInt64*] p64; // 0x0
			public [UInt64] i; // 0x0

			// Methods
			public new [Void] .ctor([UInt16*] p8);
			// VA: 0x7B46D5EF6C RVA: 0x3358F6C Offset: 0x3357F6C
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B438E0
	public enum CursorMode : [Int32]
	{
		Auto = 0,
		ForceSoftware = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B43B90
	public enum CursorLockMode : [Int32]
	{
		None = 0,
		Locked = 1,
		Confined = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B43E40
	public class Cursor : [Object]
	{
		// Fields

		// Methods
		public static new [Void] SetCursor([Texture2D] texture, [Vector2] hotspot, [CursorMode] cursorMode);
		// VA: 0x7B46D5FE18 RVA: 0x3359E18 Offset: 0x3358E18
		public static new [Boolean] get_visible();
		// VA: 0x7B46D5FEC4 RVA: 0x3359EC4 Offset: 0x3358EC4
		public static new [Void] set_visible([Boolean] value);
		// VA: 0x7B46D5FEEC RVA: 0x3359EEC Offset: 0x3358EEC
		public static new [CursorLockMode] get_lockState();
		// VA: 0x7B46D5FF28 RVA: 0x3359F28 Offset: 0x3358F28
		private static new [Void] SetCursor_Injected([Texture2D] texture, ref [Vector2] hotspot, [CursorMode] cursorMode);
		// VA: 0x7B46D5FE70 RVA: 0x3359E70 Offset: 0x3358E70
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7066CF00
	public enum KeyCode : [Int32]
	{
		None = 0,
		Backspace = 8,
		Delete = 127,
		Tab = 9,
		Clear = 12,
		Return = 13,
		Pause = 19,
		Escape = 27,
		Space = 32,
		Keypad0 = 256,
		Keypad1 = 257,
		Keypad2 = 258,
		Keypad3 = 259,
		Keypad4 = 260,
		Keypad5 = 261,
		Keypad6 = 262,
		Keypad7 = 263,
		Keypad8 = 264,
		Keypad9 = 265,
		KeypadPeriod = 266,
		KeypadDivide = 267,
		KeypadMultiply = 268,
		KeypadMinus = 269,
		KeypadPlus = 270,
		KeypadEnter = 271,
		KeypadEquals = 272,
		UpArrow = 273,
		DownArrow = 274,
		RightArrow = 275,
		LeftArrow = 276,
		Insert = 277,
		Home = 278,
		End = 279,
		PageUp = 280,
		PageDown = 281,
		F1 = 282,
		F2 = 283,
		F3 = 284,
		F4 = 285,
		F5 = 286,
		F6 = 287,
		F7 = 288,
		F8 = 289,
		F9 = 290,
		F10 = 291,
		F11 = 292,
		F12 = 293,
		F13 = 294,
		F14 = 295,
		F15 = 296,
		Alpha0 = 48,
		Alpha1 = 49,
		Alpha2 = 50,
		Alpha3 = 51,
		Alpha4 = 52,
		Alpha5 = 53,
		Alpha6 = 54,
		Alpha7 = 55,
		Alpha8 = 56,
		Alpha9 = 57,
		Exclaim = 33,
		DoubleQuote = 34,
		Hash = 35,
		Dollar = 36,
		Percent = 37,
		Ampersand = 38,
		Quote = 39,
		LeftParen = 40,
		RightParen = 41,
		Asterisk = 42,
		Plus = 43,
		Comma = 44,
		Minus = 45,
		Period = 46,
		Slash = 47,
		Colon = 58,
		Semicolon = 59,
		Less = 60,
		Equals = 61,
		Greater = 62,
		Question = 63,
		At = 64,
		LeftBracket = 91,
		Backslash = 92,
		RightBracket = 93,
		Caret = 94,
		Underscore = 95,
		BackQuote = 96,
		A = 97,
		B = 98,
		C = 99,
		D = 100,
		E = 101,
		F = 102,
		G = 103,
		H = 104,
		I = 105,
		J = 106,
		K = 107,
		L = 108,
		M = 109,
		N = 110,
		O = 111,
		P = 112,
		Q = 113,
		R = 114,
		S = 115,
		T = 116,
		U = 117,
		V = 118,
		W = 119,
		X = 120,
		Y = 121,
		Z = 122,
		LeftCurlyBracket = 123,
		Pipe = 124,
		RightCurlyBracket = 125,
		Tilde = 126,
		Numlock = 300,
		CapsLock = 301,
		ScrollLock = 302,
		RightShift = 303,
		LeftShift = 304,
		RightControl = 305,
		LeftControl = 306,
		RightAlt = 307,
		LeftAlt = 308,
		LeftMeta = 310,
		LeftCommand = 310,
		LeftApple = 310,
		LeftWindows = 311,
		RightMeta = 309,
		RightCommand = 309,
		RightApple = 309,
		RightWindows = 312,
		AltGr = 313,
		Help = 315,
		Print = 316,
		SysReq = 317,
		Break = 318,
		Menu = 319,
		Mouse0 = 323,
		Mouse1 = 324,
		Mouse2 = 325,
		Mouse3 = 326,
		Mouse4 = 327,
		Mouse5 = 328,
		Mouse6 = 329,
		JoystickButton0 = 330,
		JoystickButton1 = 331,
		JoystickButton2 = 332,
		JoystickButton3 = 333,
		JoystickButton4 = 334,
		JoystickButton5 = 335,
		JoystickButton6 = 336,
		JoystickButton7 = 337,
		JoystickButton8 = 338,
		JoystickButton9 = 339,
		JoystickButton10 = 340,
		JoystickButton11 = 341,
		JoystickButton12 = 342,
		JoystickButton13 = 343,
		JoystickButton14 = 344,
		JoystickButton15 = 345,
		JoystickButton16 = 346,
		JoystickButton17 = 347,
		JoystickButton18 = 348,
		JoystickButton19 = 349,
		Joystick1Button0 = 350,
		Joystick1Button1 = 351,
		Joystick1Button2 = 352,
		Joystick1Button3 = 353,
		Joystick1Button4 = 354,
		Joystick1Button5 = 355,
		Joystick1Button6 = 356,
		Joystick1Button7 = 357,
		Joystick1Button8 = 358,
		Joystick1Button9 = 359,
		Joystick1Button10 = 360,
		Joystick1Button11 = 361,
		Joystick1Button12 = 362,
		Joystick1Button13 = 363,
		Joystick1Button14 = 364,
		Joystick1Button15 = 365,
		Joystick1Button16 = 366,
		Joystick1Button17 = 367,
		Joystick1Button18 = 368,
		Joystick1Button19 = 369,
		Joystick2Button0 = 370,
		Joystick2Button1 = 371,
		Joystick2Button2 = 372,
		Joystick2Button3 = 373,
		Joystick2Button4 = 374,
		Joystick2Button5 = 375,
		Joystick2Button6 = 376,
		Joystick2Button7 = 377,
		Joystick2Button8 = 378,
		Joystick2Button9 = 379,
		Joystick2Button10 = 380,
		Joystick2Button11 = 381,
		Joystick2Button12 = 382,
		Joystick2Button13 = 383,
		Joystick2Button14 = 384,
		Joystick2Button15 = 385,
		Joystick2Button16 = 386,
		Joystick2Button17 = 387,
		Joystick2Button18 = 388,
		Joystick2Button19 = 389,
		Joystick3Button0 = 390,
		Joystick3Button1 = 391,
		Joystick3Button2 = 392,
		Joystick3Button3 = 393,
		Joystick3Button4 = 394,
		Joystick3Button5 = 395,
		Joystick3Button6 = 396,
		Joystick3Button7 = 397,
		Joystick3Button8 = 398,
		Joystick3Button9 = 399,
		Joystick3Button10 = 400,
		Joystick3Button11 = 401,
		Joystick3Button12 = 402,
		Joystick3Button13 = 403,
		Joystick3Button14 = 404,
		Joystick3Button15 = 405,
		Joystick3Button16 = 406,
		Joystick3Button17 = 407,
		Joystick3Button18 = 408,
		Joystick3Button19 = 409,
		Joystick4Button0 = 410,
		Joystick4Button1 = 411,
		Joystick4Button2 = 412,
		Joystick4Button3 = 413,
		Joystick4Button4 = 414,
		Joystick4Button5 = 415,
		Joystick4Button6 = 416,
		Joystick4Button7 = 417,
		Joystick4Button8 = 418,
		Joystick4Button9 = 419,
		Joystick4Button10 = 420,
		Joystick4Button11 = 421,
		Joystick4Button12 = 422,
		Joystick4Button13 = 423,
		Joystick4Button14 = 424,
		Joystick4Button15 = 425,
		Joystick4Button16 = 426,
		Joystick4Button17 = 427,
		Joystick4Button18 = 428,
		Joystick4Button19 = 429,
		Joystick5Button0 = 430,
		Joystick5Button1 = 431,
		Joystick5Button2 = 432,
		Joystick5Button3 = 433,
		Joystick5Button4 = 434,
		Joystick5Button5 = 435,
		Joystick5Button6 = 436,
		Joystick5Button7 = 437,
		Joystick5Button8 = 438,
		Joystick5Button9 = 439,
		Joystick5Button10 = 440,
		Joystick5Button11 = 441,
		Joystick5Button12 = 442,
		Joystick5Button13 = 443,
		Joystick5Button14 = 444,
		Joystick5Button15 = 445,
		Joystick5Button16 = 446,
		Joystick5Button17 = 447,
		Joystick5Button18 = 448,
		Joystick5Button19 = 449,
		Joystick6Button0 = 450,
		Joystick6Button1 = 451,
		Joystick6Button2 = 452,
		Joystick6Button3 = 453,
		Joystick6Button4 = 454,
		Joystick6Button5 = 455,
		Joystick6Button6 = 456,
		Joystick6Button7 = 457,
		Joystick6Button8 = 458,
		Joystick6Button9 = 459,
		Joystick6Button10 = 460,
		Joystick6Button11 = 461,
		Joystick6Button12 = 462,
		Joystick6Button13 = 463,
		Joystick6Button14 = 464,
		Joystick6Button15 = 465,
		Joystick6Button16 = 466,
		Joystick6Button17 = 467,
		Joystick6Button18 = 468,
		Joystick6Button19 = 469,
		Joystick7Button0 = 470,
		Joystick7Button1 = 471,
		Joystick7Button2 = 472,
		Joystick7Button3 = 473,
		Joystick7Button4 = 474,
		Joystick7Button5 = 475,
		Joystick7Button6 = 476,
		Joystick7Button7 = 477,
		Joystick7Button8 = 478,
		Joystick7Button9 = 479,
		Joystick7Button10 = 480,
		Joystick7Button11 = 481,
		Joystick7Button12 = 482,
		Joystick7Button13 = 483,
		Joystick7Button14 = 484,
		Joystick7Button15 = 485,
		Joystick7Button16 = 486,
		Joystick7Button17 = 487,
		Joystick7Button18 = 488,
		Joystick7Button19 = 489,
		Joystick8Button0 = 490,
		Joystick8Button1 = 491,
		Joystick8Button2 = 492,
		Joystick8Button3 = 493,
		Joystick8Button4 = 494,
		Joystick8Button5 = 495,
		Joystick8Button6 = 496,
		Joystick8Button7 = 497,
		Joystick8Button8 = 498,
		Joystick8Button9 = 499,
		Joystick8Button10 = 500,
		Joystick8Button11 = 501,
		Joystick8Button12 = 502,
		Joystick8Button13 = 503,
		Joystick8Button14 = 504,
		Joystick8Button15 = 505,
		Joystick8Button16 = 506,
		Joystick8Button17 = 507,
		Joystick8Button18 = 508,
		Joystick8Button19 = 509
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B23E70
	public abstract interface ILogHandler
	{
		// Fields

		// Methods
		public abstract new [Void] LogFormat([LogType] logType, [Object] context, [String] format, [Object[]] args);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] LogException([Exception] exception, [Object] context);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48030
	public abstract interface ILogger
	{
		// Fields

		// Methods
		public abstract new [ILogHandler] get_logHandler();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public abstract new [Boolean] get_logEnabled();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
		public abstract new [Void] Log([LogType] logType, [Object] message);
		// VA: 0x7B45028C04 RVA: 0x1622C04 Offset: 0x1621C04
		public abstract new [Void] Log([LogType] logType, [Object] message, [Object] context);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] Log([LogType] logType, [String] tag, [Object] message);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] Log([String] tag, [Object] message);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public abstract new [Void] LogWarning([String] tag, [Object] message);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public abstract new [Void] LogError([String] tag, [Object] message);
		// VA: 0x7B45028F38 RVA: 0x1622F38 Offset: 0x1621F38
		public abstract new [Void] LogFormat([LogType] logType, [String] format, [Object[]] args);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] LogException([Exception] exception);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48170
	public class Logger : [Object]
	{
		// Fields
		// private [ILogHandler] logHandler { get; set; }
		private [ILogHandler] <logHandler>k__BackingField; // 0x10
		// private [Boolean] logEnabled { get; set; }
		private [Boolean] <logEnabled>k__BackingField; // 0x18
		// private [LogType] filterLogType { get; set; }
		private [LogType] <filterLogType>k__BackingField; // 0x1C

		// Methods
		public new [Void] .ctor([ILogHandler] logHandler);
		// VA: 0x7B46D5FF50 RVA: 0x3359F50 Offset: 0x3358F50
		public sealed new [ILogHandler] get_logHandler();
		// VA: 0x7B46D5FF88 RVA: 0x3359F88 Offset: 0x3358F88
		public sealed new [Void] set_logHandler([ILogHandler] value);
		// VA: 0x7B46D5FF90 RVA: 0x3359F90 Offset: 0x3358F90
		public sealed new [Boolean] get_logEnabled();
		// VA: 0x7B46D5FF98 RVA: 0x3359F98 Offset: 0x3358F98
		public sealed new [Void] set_logEnabled([Boolean] value);
		// VA: 0x7B46D5FFA0 RVA: 0x3359FA0 Offset: 0x3358FA0
		public sealed new [LogType] get_filterLogType();
		// VA: 0x7B46D5FFAC RVA: 0x3359FAC Offset: 0x3358FAC
		public sealed new [Void] set_filterLogType([LogType] value);
		// VA: 0x7B46D5FFB4 RVA: 0x3359FB4 Offset: 0x3358FB4
		public sealed new [Boolean] IsLogTypeAllowed([LogType] logType);
		// VA: 0x7B46D5FFBC RVA: 0x3359FBC Offset: 0x3358FBC
		private static new [String] GetString([Object] message);
		// VA: 0x7B46D5FFF4 RVA: 0x3359FF4 Offset: 0x3358FF4
		public sealed new [Void] Log([LogType] logType, [Object] message);
		// VA: 0x7B46D60114 RVA: 0x335A114 Offset: 0x3359114
		public sealed new [Void] Log([LogType] logType, [Object] message, [Object] context);
		// VA: 0x7B46D6028C RVA: 0x335A28C Offset: 0x335928C
		public sealed new [Void] Log([LogType] logType, [String] tag, [Object] message);
		// VA: 0x7B46D60408 RVA: 0x335A408 Offset: 0x3359408
		public sealed new [Void] Log([String] tag, [Object] message);
		// VA: 0x7B46D605AC RVA: 0x335A5AC Offset: 0x33595AC
		public sealed new [Void] LogWarning([String] tag, [Object] message);
		// VA: 0x7B46D60740 RVA: 0x335A740 Offset: 0x3359740
		public sealed new [Void] LogError([String] tag, [Object] message);
		// VA: 0x7B46D608D4 RVA: 0x335A8D4 Offset: 0x33598D4
		public sealed new [Void] LogException([Exception] exception);
		// VA: 0x7B46D60A64 RVA: 0x335AA64 Offset: 0x3359A64
		public sealed new [Void] LogException([Exception] exception, [Object] context);
		// VA: 0x7B46D60B28 RVA: 0x335AB28 Offset: 0x3359B28
		public sealed new [Void] LogFormat([LogType] logType, [String] format, [Object[]] args);
		// VA: 0x7B46D60BFC RVA: 0x335ABFC Offset: 0x3359BFC
		public sealed new [Void] LogFormat([LogType] logType, [Object] context, [String] format, [Object[]] args);
		// VA: 0x7B46D60CF8 RVA: 0x335ACF8 Offset: 0x3359CF8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48400
	private class UnityLogWriter : [TextWriter]
	{
		// Fields

		// Methods
		public static new [Void] WriteStringToUnityLog([String] s);
		// VA: 0x7B46D60E04 RVA: 0x335AE04 Offset: 0x3359E04
		private static new [Void] WriteStringToUnityLogImpl([String] s);
		// VA: 0x7B46D60E48 RVA: 0x335AE48 Offset: 0x3359E48
		public static new [Void] Init();
		// VA: 0x7B46D60E84 RVA: 0x335AE84 Offset: 0x3359E84
		public override new [Encoding] get_Encoding();
		// VA: 0x7B46D60F54 RVA: 0x335AF54 Offset: 0x3359F54
		public override new [Void] Write([Char] value);
		// VA: 0x7B46D60F5C RVA: 0x335AF5C Offset: 0x3359F5C
		public override new [Void] Write([String] s);
		// VA: 0x7B46D60FE8 RVA: 0x335AFE8 Offset: 0x3359FE8
		public override new [Void] Write([Char[]] buffer, [Int32] index, [Int32] count);
		// VA: 0x7B46D6102C RVA: 0x335B02C Offset: 0x335A02C
		public new [Void] .ctor();
		// VA: 0x7B46D60EFC RVA: 0x335AEFC Offset: 0x3359EFC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A707D4FC0
	public struct Color : [ValueType]
	{
		// Fields
		public [Single] r; // 0x0
		public [Single] g; // 0x4
		public [Single] b; // 0x8
		public [Single] a; // 0xC

		// Methods
		public new [Void] .ctor([Single] r, [Single] g, [Single] b, [Single] a);
		// VA: 0x7B46D61074 RVA: 0x335B074 Offset: 0x335A074
		public new [Void] .ctor([Single] r, [Single] g, [Single] b);
		// VA: 0x7B46D61080 RVA: 0x335B080 Offset: 0x335A080
		public override new [String] ToString();
		// VA: 0x7B46D61094 RVA: 0x335B094 Offset: 0x335A094
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D610A4 RVA: 0x335B0A4 Offset: 0x335A0A4
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D612AC RVA: 0x335B2AC Offset: 0x335A2AC
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D61330 RVA: 0x335B330 Offset: 0x335A330
		public sealed new [Boolean] Equals([Color] other);
		// VA: 0x7B46D61404 RVA: 0x335B404 Offset: 0x335A404
		public static new [Color] op_Addition([Color] a, [Color] b);
		// VA: 0x7B46D61484 RVA: 0x335B484 Offset: 0x335A484
		public static new [Color] op_Subtraction([Color] a, [Color] b);
		// VA: 0x7B46D61498 RVA: 0x335B498 Offset: 0x335A498
		public static new [Color] op_Multiply([Color] a, [Color] b);
		// VA: 0x7B46D614AC RVA: 0x335B4AC Offset: 0x335A4AC
		public static new [Color] op_Multiply([Color] a, [Single] b);
		// VA: 0x7B46D614C0 RVA: 0x335B4C0 Offset: 0x335A4C0
		public static new [Color] op_Multiply([Single] b, [Color] a);
		// VA: 0x7B46D614D4 RVA: 0x335B4D4 Offset: 0x335A4D4
		public static new [Color] op_Division([Color] a, [Single] b);
		// VA: 0x7B46D614EC RVA: 0x335B4EC Offset: 0x335A4EC
		public static new [Boolean] op_Equality([Color] lhs, [Color] rhs);
		// VA: 0x7B46D61500 RVA: 0x335B500 Offset: 0x335A500
		public static new [Boolean] op_Inequality([Color] lhs, [Color] rhs);
		// VA: 0x7B46D61540 RVA: 0x335B540 Offset: 0x335A540
		public static new [Color] Lerp([Color] a, [Color] b, [Single] t);
		// VA: 0x7B46D61580 RVA: 0x335B580 Offset: 0x335A580
		public static new [Color] LerpUnclamped([Color] a, [Color] b, [Single] t);
		// VA: 0x7B46D615CC RVA: 0x335B5CC Offset: 0x335A5CC
		internal new [Color] RGBMultiplied([Single] multiplier);
		// VA: 0x7B46D61604 RVA: 0x335B604 Offset: 0x335A604
		public static new [Color] get_red();
		// VA: 0x7B46D61620 RVA: 0x335B620 Offset: 0x335A620
		public static new [Color] get_green();
		// VA: 0x7B46D61634 RVA: 0x335B634 Offset: 0x335A634
		public static new [Color] get_blue();
		// VA: 0x7B46D61648 RVA: 0x335B648 Offset: 0x335A648
		public static new [Color] get_white();
		// VA: 0x7B46D6165C RVA: 0x335B65C Offset: 0x335A65C
		public static new [Color] get_black();
		// VA: 0x7B46D61670 RVA: 0x335B670 Offset: 0x335A670
		public static new [Color] get_yellow();
		// VA: 0x7B46D61684 RVA: 0x335B684 Offset: 0x335A684
		public static new [Color] get_cyan();
		// VA: 0x7B46D616A0 RVA: 0x335B6A0 Offset: 0x335A6A0
		public static new [Color] get_magenta();
		// VA: 0x7B46D616B4 RVA: 0x335B6B4 Offset: 0x335A6B4
		public static new [Color] get_gray();
		// VA: 0x7B46D616C8 RVA: 0x335B6C8 Offset: 0x335A6C8
		public static new [Color] get_grey();
		// VA: 0x7B46D616DC RVA: 0x335B6DC Offset: 0x335A6DC
		public static new [Color] get_clear();
		// VA: 0x7B46D616F0 RVA: 0x335B6F0 Offset: 0x335A6F0
		public new [Color] get_linear();
		// VA: 0x7B46D61704 RVA: 0x335B704 Offset: 0x335A704
		public new [Single] get_maxColorComponent();
		// VA: 0x7B46D617EC RVA: 0x335B7EC Offset: 0x335A7EC
		public static new [Vector4] op_Implicit([Color] c);
		// VA: 0x7B46D61808 RVA: 0x335B808 Offset: 0x335A808
		public static new [Color] op_Implicit([Vector4] v);
		// VA: 0x7B46D6180C RVA: 0x335B80C Offset: 0x335A80C
		public static new [Void] RGBToHSV([Color] rgbColor, out [Single] H, out [Single] S, out [Single] V);
		// VA: 0x7B46D61810 RVA: 0x335B810 Offset: 0x335A810
		private static new [Void] RGBToHSVHelper([Single] offset, [Single] dominantcolor, [Single] colorone, [Single] colortwo, out [Single] H, out [Single] S, out [Single] V);
		// VA: 0x7B46D61924 RVA: 0x335B924 Offset: 0x335A924
		public static new [Color] HSVToRGB([Single] H, [Single] S, [Single] V);
		// VA: 0x7B46D61994 RVA: 0x335B994 Offset: 0x335A994
		public static new [Color] HSVToRGB([Single] H, [Single] S, [Single] V, [Boolean] hdr);
		// VA: 0x7B46D6199C RVA: 0x335B99C Offset: 0x335A99C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48900
	public struct Color32 : [ValueType]
	{
		// Fields
		private [Int32] rgba; // 0x0
		public [Byte] r; // 0x0
		public [Byte] g; // 0x1
		public [Byte] b; // 0x2
		public [Byte] a; // 0x3

		// Methods
		public new [Void] .ctor([Byte] r, [Byte] g, [Byte] b, [Byte] a);
		// VA: 0x7B46D61B0C RVA: 0x335BB0C Offset: 0x335AB0C
		public static new [Color32] op_Implicit([Color] c);
		// VA: 0x7B46D61B20 RVA: 0x335BB20 Offset: 0x335AB20
		public static new [Color] op_Implicit([Color32] c);
		// VA: 0x7B46D61DE4 RVA: 0x335BDE4 Offset: 0x335ADE4
		public static new [Color32] Lerp([Color32] a, [Color32] b, [Single] t);
		// VA: 0x7B46D61E20 RVA: 0x335BE20 Offset: 0x335AE20
		public override new [String] ToString();
		// VA: 0x7B46D61EFC RVA: 0x335BEFC Offset: 0x335AEFC
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D61F0C RVA: 0x335BF0C Offset: 0x335AF0C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48A90
	public class ColorUtility : [Object]
	{
		// Fields

		// Methods
		internal static new [Boolean] DoTryParseHtmlColor([String] htmlString, out [Color32] color);
		// VA: 0x7B46D620E8 RVA: 0x335C0E8 Offset: 0x335B0E8
		public static new [Boolean] TryParseHtmlString([String] htmlString, out [Color] color);
		// VA: 0x7B46D6212C RVA: 0x335C12C Offset: 0x335B12C
		public static new [String] ToHtmlStringRGB([Color] color);
		// VA: 0x7B46D621C0 RVA: 0x335C1C0 Offset: 0x335B1C0
		public static new [String] ToHtmlStringRGBA([Color] color);
		// VA: 0x7B46D625A8 RVA: 0x335C5A8 Offset: 0x335B5A8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48C10
	public struct GradientColorKey : [ValueType]
	{
		// Fields
		public [Color] color; // 0x0
		public [Single] time; // 0x10

		// Methods
		public new [Void] .ctor([Color] col, [Single] time);
		// VA: 0x7B46D62AAC RVA: 0x335CAAC Offset: 0x335BAAC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48D90
	public struct GradientAlphaKey : [ValueType]
	{
		// Fields
		public [Single] alpha; // 0x0
		public [Single] time; // 0x4

		// Methods
		public new [Void] .ctor([Single] alpha, [Single] time);
		// VA: 0x7B46D62ABC RVA: 0x335CABC Offset: 0x335BABC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B48F10
	public enum GradientMode : [Int32]
	{
		Blend = 0,
		Fixed = 1,
		PerceptualBlend = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B491C0
	public class Gradient : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
		private static new [IntPtr] Init();
		// VA: 0x7B46D62AC4 RVA: 0x335CAC4 Offset: 0x335BAC4
		private new [Void] Cleanup();
		// VA: 0x7B46D62AEC RVA: 0x335CAEC Offset: 0x335BAEC
		private new [Boolean] Internal_Equals([IntPtr] other);
		// VA: 0x7B46D62B28 RVA: 0x335CB28 Offset: 0x335BB28
		public new [Void] .ctor();
		// VA: 0x7B46D62B6C RVA: 0x335CB6C Offset: 0x335BB6C
		protected override new [Void] Finalize();
		// VA: 0x7B46D62BB4 RVA: 0x335CBB4 Offset: 0x335BBB4
		public new [Color] Evaluate([Single] time);
		// VA: 0x7B46D62C6C RVA: 0x335CC6C Offset: 0x335BC6C
		public new [GradientColorKey[]] get_colorKeys();
		// VA: 0x7B46D62D28 RVA: 0x335CD28 Offset: 0x335BD28
		public new [GradientAlphaKey[]] get_alphaKeys();
		// VA: 0x7B46D62D64 RVA: 0x335CD64 Offset: 0x335BD64
		public new [GradientMode] get_mode();
		// VA: 0x7B46D62DA0 RVA: 0x335CDA0 Offset: 0x335BDA0
		public new [Void] set_mode([GradientMode] value);
		// VA: 0x7B46D62DDC RVA: 0x335CDDC Offset: 0x335BDDC
		public new [Void] SetKeys([GradientColorKey[]] colorKeys, [GradientAlphaKey[]] alphaKeys);
		// VA: 0x7B46D62E20 RVA: 0x335CE20 Offset: 0x335BE20
		public override new [Boolean] Equals([Object] o);
		// VA: 0x7B46D62E74 RVA: 0x335CE74 Offset: 0x335BE74
		public sealed new [Boolean] Equals([Gradient] other);
		// VA: 0x7B46D62F80 RVA: 0x335CF80 Offset: 0x335BF80
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D63048 RVA: 0x335D048 Offset: 0x335C048
		private new [Void] Evaluate_Injected([Single] time, out [Color] ret);
		// VA: 0x7B46D62CD4 RVA: 0x335CCD4 Offset: 0x335BCD4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A00BE0
	public struct Matrix4x4 : [ValueType]
	{
		// Fields
		public [Single] m00; // 0x0
		public [Single] m10; // 0x4
		public [Single] m20; // 0x8
		public [Single] m30; // 0xC
		public [Single] m01; // 0x10
		public [Single] m11; // 0x14
		public [Single] m21; // 0x18
		public [Single] m31; // 0x1C
		public [Single] m02; // 0x20
		public [Single] m12; // 0x24
		public [Single] m22; // 0x28
		public [Single] m32; // 0x2C
		public [Single] m03; // 0x30
		public [Single] m13; // 0x34
		public [Single] m23; // 0x38
		public [Single] m33; // 0x3C
		private readonly static [Matrix4x4] zeroMatrix; // 0x0
		private readonly static [Matrix4x4] identityMatrix; // 0x40

		// Methods
		private new [Vector3] GetLossyScale();
		// VA: 0x7B46D63054 RVA: 0x335D054 Offset: 0x335C054
		public new [Vector3] get_lossyScale();
		// VA: 0x7B46D630F4 RVA: 0x335D0F4 Offset: 0x335C0F4
		public static new [Matrix4x4] TRS([Vector3] pos, [Quaternion] q, [Vector3] s);
		// VA: 0x7B46D630F8 RVA: 0x335D0F8 Offset: 0x335C0F8
		public new [Void] SetTRS([Vector3] pos, [Quaternion] q, [Vector3] s);
		// VA: 0x7B46D631E4 RVA: 0x335D1E4 Offset: 0x335C1E4
		public static new [Boolean] Inverse3DAffine([Matrix4x4] input, ref [Matrix4x4] result);
		// VA: 0x7B46D63224 RVA: 0x335D224 Offset: 0x335C224
		public static new [Matrix4x4] Inverse([Matrix4x4] m);
		// VA: 0x7B46D632AC RVA: 0x335D2AC Offset: 0x335C2AC
		public new [Matrix4x4] get_inverse();
		// VA: 0x7B46D6335C RVA: 0x335D35C Offset: 0x335C35C
		public new [Void] .ctor([Vector4] column0, [Vector4] column1, [Vector4] column2, [Vector4] column3);
		// VA: 0x7B46D633DC RVA: 0x335D3DC Offset: 0x335C3DC
		public new [Void] set_Item([Int32] row, [Int32] column, [Single] value);
		// VA: 0x7B46D633F8 RVA: 0x335D3F8 Offset: 0x335C3F8
		public new [Single] get_Item([Int32] index);
		// VA: 0x7B46D634F0 RVA: 0x335D4F0 Offset: 0x335C4F0
		public new [Void] set_Item([Int32] index, [Single] value);
		// VA: 0x7B46D63400 RVA: 0x335D400 Offset: 0x335C400
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D635E0 RVA: 0x335D5E0 Offset: 0x335C5E0
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6385C RVA: 0x335D85C Offset: 0x335C85C
		public sealed new [Boolean] Equals([Matrix4x4] other);
		// VA: 0x7B46D639D0 RVA: 0x335D9D0 Offset: 0x335C9D0
		public static new [Matrix4x4] op_Multiply([Matrix4x4] lhs, [Matrix4x4] rhs);
		// VA: 0x7B46D63AD8 RVA: 0x335DAD8 Offset: 0x335CAD8
		public static new [Vector4] op_Multiply([Matrix4x4] lhs, [Vector4] vector);
		// VA: 0x7B46D63BD0 RVA: 0x335DBD0 Offset: 0x335CBD0
		public new [Vector4] GetColumn([Int32] index);
		// VA: 0x7B46D63788 RVA: 0x335D788 Offset: 0x335C788
		public new [Vector4] GetRow([Int32] index);
		// VA: 0x7B46D63C04 RVA: 0x335DC04 Offset: 0x335CC04
		public new [Void] SetRow([Int32] index, [Vector4] row);
		// VA: 0x7B46D63CD8 RVA: 0x335DCD8 Offset: 0x335CCD8
		public new [Vector3] MultiplyPoint([Vector3] point);
		// VA: 0x7B46D63D40 RVA: 0x335DD40 Offset: 0x335CD40
		public new [Vector3] MultiplyPoint3x4([Vector3] point);
		// VA: 0x7B46D63DC0 RVA: 0x335DDC0 Offset: 0x335CDC0
		public static new [Matrix4x4] Rotate([Quaternion] q);
		// VA: 0x7B46D63E18 RVA: 0x335DE18 Offset: 0x335CE18
		public static new [Matrix4x4] get_identity();
		// VA: 0x7B46D63EB0 RVA: 0x335DEB0 Offset: 0x335CEB0
		public override new [String] ToString();
		// VA: 0x7B46D63F08 RVA: 0x335DF08 Offset: 0x335CF08
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D63F18 RVA: 0x335DF18 Offset: 0x335CF18
		private static new [Void] .cctor();
		// VA: 0x7B46D64420 RVA: 0x335E420 Offset: 0x335D420
		private static new [Void] GetLossyScale_Injected(ref [Matrix4x4] _unity_self, out [Vector3] ret);
		// VA: 0x7B46D630B0 RVA: 0x335D0B0 Offset: 0x335C0B0
		private static new [Void] TRS_Injected(ref [Vector3] pos, ref [Quaternion] q, ref [Vector3] s, out [Matrix4x4] ret);
		// VA: 0x7B46D63188 RVA: 0x335D188 Offset: 0x335C188
		private static new [Boolean] Inverse3DAffine_Injected(ref [Matrix4x4] input, ref [Matrix4x4] result);
		// VA: 0x7B46D63268 RVA: 0x335D268 Offset: 0x335C268
		private static new [Void] Inverse_Injected(ref [Matrix4x4] m, out [Matrix4x4] ret);
		// VA: 0x7B46D63318 RVA: 0x335D318 Offset: 0x335C318
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7063F520
	public struct Vector3 : [ValueType]
	{
		// Fields
		public const static [Single] kEpsilon; // 0xFFFFFFFFFFFFFFF0
		public const static [Single] kEpsilonNormalSqrt; // 0xFFFFFFFFFFFFFFF0
		public [Single] x; // 0x0
		public [Single] y; // 0x4
		public [Single] z; // 0x8
		private readonly static [Vector3] zeroVector; // 0x0
		private readonly static [Vector3] oneVector; // 0xC
		private readonly static [Vector3] upVector; // 0x18
		private readonly static [Vector3] downVector; // 0x24
		private readonly static [Vector3] leftVector; // 0x30
		private readonly static [Vector3] rightVector; // 0x3C
		private readonly static [Vector3] forwardVector; // 0x48
		private readonly static [Vector3] backVector; // 0x54
		private readonly static [Vector3] positiveInfinityVector; // 0x60
		private readonly static [Vector3] negativeInfinityVector; // 0x6C

		// Methods
		public static new [Vector3] Slerp([Vector3] a, [Vector3] b, [Single] t);
		// VA: 0x7B46D644A0 RVA: 0x335E4A0 Offset: 0x335D4A0
		public static new [Vector3] Lerp([Vector3] a, [Vector3] b, [Single] t);
		// VA: 0x7B46D64578 RVA: 0x335E578 Offset: 0x335D578
		public static new [Vector3] LerpUnclamped([Vector3] a, [Vector3] b, [Single] t);
		// VA: 0x7B46D645B4 RVA: 0x335E5B4 Offset: 0x335D5B4
		public static new [Vector3] SmoothDamp([Vector3] current, [Vector3] target, ref [Vector3] currentVelocity, [Single] smoothTime);
		// VA: 0x7B46D645DC RVA: 0x335E5DC Offset: 0x335D5DC
		public static new [Vector3] SmoothDamp([Vector3] current, [Vector3] target, ref [Vector3] currentVelocity, [Single] smoothTime, [Single] maxSpeed, [Single] deltaTime);
		// VA: 0x7B46D64668 RVA: 0x335E668 Offset: 0x335D668
		public new [Single] get_Item([Int32] index);
		// VA: 0x7B46D648A4 RVA: 0x335E8A4 Offset: 0x335D8A4
		public new [Void] set_Item([Int32] index, [Single] value);
		// VA: 0x7B46D6491C RVA: 0x335E91C Offset: 0x335D91C
		public new [Void] .ctor([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D64994 RVA: 0x335E994 Offset: 0x335D994
		public new [Void] .ctor([Single] x, [Single] y);
		// VA: 0x7B46D649A0 RVA: 0x335E9A0 Offset: 0x335D9A0
		public static new [Vector3] Scale([Vector3] a, [Vector3] b);
		// VA: 0x7B46D649AC RVA: 0x335E9AC Offset: 0x335D9AC
		public new [Void] Scale([Vector3] scale);
		// VA: 0x7B46D649BC RVA: 0x335E9BC Offset: 0x335D9BC
		public static new [Vector3] Cross([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D649DC RVA: 0x335E9DC Offset: 0x335D9DC
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D64A04 RVA: 0x335EA04 Offset: 0x335DA04
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D64A4C RVA: 0x335EA4C Offset: 0x335DA4C
		public sealed new [Boolean] Equals([Vector3] other);
		// VA: 0x7B46D64AE4 RVA: 0x335EAE4 Offset: 0x335DAE4
		public static new [Vector3] Normalize([Vector3] value);
		// VA: 0x7B46D64B14 RVA: 0x335EB14 Offset: 0x335DB14
		public new [Void] Normalize();
		// VA: 0x7B46D64BE4 RVA: 0x335EBE4 Offset: 0x335DBE4
		public new [Vector3] get_normalized();
		// VA: 0x7B46D64CCC RVA: 0x335ECCC Offset: 0x335DCCC
		public static new [Single] Dot([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D64D98 RVA: 0x335ED98 Offset: 0x335DD98
		public static new [Vector3] Project([Vector3] vector, [Vector3] onNormal);
		// VA: 0x7B46D64DB0 RVA: 0x335EDB0 Offset: 0x335DDB0
		public static new [Single] Angle([Vector3] from, [Vector3] to);
		// VA: 0x7B46D64EAC RVA: 0x335EEAC Offset: 0x335DEAC
		public static new [Single] Distance([Vector3] a, [Vector3] b);
		// VA: 0x7B46D64FC8 RVA: 0x335EFC8 Offset: 0x335DFC8
		public static new [Vector3] ClampMagnitude([Vector3] vector, [Single] maxLength);
		// VA: 0x7B46D65068 RVA: 0x335F068 Offset: 0x335E068
		public static new [Single] Magnitude([Vector3] vector);
		// VA: 0x7B46D6511C RVA: 0x335F11C Offset: 0x335E11C
		public new [Single] get_magnitude();
		// VA: 0x7B46D6519C RVA: 0x335F19C Offset: 0x335E19C
		public new [Single] get_sqrMagnitude();
		// VA: 0x7B46D6521C RVA: 0x335F21C Offset: 0x335E21C
		public static new [Vector3] Min([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D6523C RVA: 0x335F23C Offset: 0x335E23C
		public static new [Vector3] Max([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D65258 RVA: 0x335F258 Offset: 0x335E258
		public static new [Vector3] get_zero();
		// VA: 0x7B46D65274 RVA: 0x335F274 Offset: 0x335E274
		public static new [Vector3] get_one();
		// VA: 0x7B46D652C0 RVA: 0x335F2C0 Offset: 0x335E2C0
		public static new [Vector3] get_forward();
		// VA: 0x7B46D6530C RVA: 0x335F30C Offset: 0x335E30C
		public static new [Vector3] get_back();
		// VA: 0x7B46D65358 RVA: 0x335F358 Offset: 0x335E358
		public static new [Vector3] get_up();
		// VA: 0x7B46D653A4 RVA: 0x335F3A4 Offset: 0x335E3A4
		public static new [Vector3] get_down();
		// VA: 0x7B46D653F0 RVA: 0x335F3F0 Offset: 0x335E3F0
		public static new [Vector3] get_left();
		// VA: 0x7B46D6543C RVA: 0x335F43C Offset: 0x335E43C
		public static new [Vector3] get_right();
		// VA: 0x7B46D65488 RVA: 0x335F488 Offset: 0x335E488
		public static new [Vector3] op_Addition([Vector3] a, [Vector3] b);
		// VA: 0x7B46D654D4 RVA: 0x335F4D4 Offset: 0x335E4D4
		public static new [Vector3] op_Subtraction([Vector3] a, [Vector3] b);
		// VA: 0x7B46D654E4 RVA: 0x335F4E4 Offset: 0x335E4E4
		public static new [Vector3] op_UnaryNegation([Vector3] a);
		// VA: 0x7B46D654F4 RVA: 0x335F4F4 Offset: 0x335E4F4
		public static new [Vector3] op_Multiply([Vector3] a, [Single] d);
		// VA: 0x7B46D65504 RVA: 0x335F504 Offset: 0x335E504
		public static new [Vector3] op_Multiply([Single] d, [Vector3] a);
		// VA: 0x7B46D65514 RVA: 0x335F514 Offset: 0x335E514
		public static new [Vector3] op_Division([Vector3] a, [Single] d);
		// VA: 0x7B46D65528 RVA: 0x335F528 Offset: 0x335E528
		public static new [Boolean] op_Equality([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D65538 RVA: 0x335F538 Offset: 0x335E538
		public static new [Boolean] op_Inequality([Vector3] lhs, [Vector3] rhs);
		// VA: 0x7B46D6556C RVA: 0x335F56C Offset: 0x335E56C
		public override new [String] ToString();
		// VA: 0x7B46D655A0 RVA: 0x335F5A0 Offset: 0x335E5A0
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D655B0 RVA: 0x335F5B0 Offset: 0x335E5B0
		private static new [Void] .cctor();
		// VA: 0x7B46D65778 RVA: 0x335F778 Offset: 0x335E778
		private static new [Void] Slerp_Injected(ref [Vector3] a, ref [Vector3] b, [Single] t, out [Vector3] ret);
		// VA: 0x7B46D64514 RVA: 0x335E514 Offset: 0x335D514
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093CAD0
	public struct Quaternion : [ValueType]
	{
		// Fields
		public [Single] x; // 0x0
		public [Single] y; // 0x4
		public [Single] z; // 0x8
		public [Single] w; // 0xC
		private readonly static [Quaternion] identityQuaternion; // 0x0
		public const static [Single] kEpsilon; // 0xFFFFFFFFFFFFFFF0

		// Methods
		public static new [Quaternion] FromToRotation([Vector3] fromDirection, [Vector3] toDirection);
		// VA: 0x7B46D65874 RVA: 0x335F874 Offset: 0x335E874
		public static new [Quaternion] Inverse([Quaternion] rotation);
		// VA: 0x7B46D65928 RVA: 0x335F928 Offset: 0x335E928
		public static new [Quaternion] Slerp([Quaternion] a, [Quaternion] b, [Single] t);
		// VA: 0x7B46D659C0 RVA: 0x335F9C0 Offset: 0x335E9C0
		public static new [Quaternion] Lerp([Quaternion] a, [Quaternion] b, [Single] t);
		// VA: 0x7B46D65A94 RVA: 0x335FA94 Offset: 0x335EA94
		private static new [Quaternion] Internal_FromEulerRad([Vector3] euler);
		// VA: 0x7B46D65B68 RVA: 0x335FB68 Offset: 0x335EB68
		private static new [Vector3] Internal_ToEulerRad([Quaternion] rotation);
		// VA: 0x7B46D65C00 RVA: 0x335FC00 Offset: 0x335EC00
		public static new [Quaternion] AngleAxis([Single] angle, [Vector3] axis);
		// VA: 0x7B46D65C9C RVA: 0x335FC9C Offset: 0x335EC9C
		public static new [Quaternion] LookRotation([Vector3] forward, [Vector3] upwards);
		// VA: 0x7B46D65D54 RVA: 0x335FD54 Offset: 0x335ED54
		public static new [Quaternion] LookRotation([Vector3] forward);
		// VA: 0x7B46D65E08 RVA: 0x335FE08 Offset: 0x335EE08
		public new [Single] get_Item([Int32] index);
		// VA: 0x7B46D65E74 RVA: 0x335FE74 Offset: 0x335EE74
		public new [Void] .ctor([Single] x, [Single] y, [Single] z, [Single] w);
		// VA: 0x7B46D65F04 RVA: 0x335FF04 Offset: 0x335EF04
		public static new [Quaternion] get_identity();
		// VA: 0x7B46D65F10 RVA: 0x335FF10 Offset: 0x335EF10
		public static new [Quaternion] op_Multiply([Quaternion] lhs, [Quaternion] rhs);
		// VA: 0x7B46D65F5C RVA: 0x335FF5C Offset: 0x335EF5C
		public static new [Vector3] op_Multiply([Quaternion] rotation, [Vector3] point);
		// VA: 0x7B46D65FD0 RVA: 0x335FFD0 Offset: 0x335EFD0
		private static new [Boolean] IsEqualUsingDot([Single] dot);
		// VA: 0x7B46D66074 RVA: 0x3360074 Offset: 0x335F074
		public static new [Boolean] op_Equality([Quaternion] lhs, [Quaternion] rhs);
		// VA: 0x7B46D66088 RVA: 0x3360088 Offset: 0x335F088
		public static new [Boolean] op_Inequality([Quaternion] lhs, [Quaternion] rhs);
		// VA: 0x7B46D660B8 RVA: 0x33600B8 Offset: 0x335F0B8
		public static new [Single] Dot([Quaternion] a, [Quaternion] b);
		// VA: 0x7B46D660E8 RVA: 0x33600E8 Offset: 0x335F0E8
		private static new [Vector3] Internal_MakePositive([Vector3] euler);
		// VA: 0x7B46D66108 RVA: 0x3360108 Offset: 0x335F108
		public new [Vector3] get_eulerAngles();
		// VA: 0x7B46D66190 RVA: 0x3360190 Offset: 0x335F190
		public static new [Quaternion] Euler([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D661BC RVA: 0x33601BC Offset: 0x335F1BC
		public static new [Quaternion] Euler([Vector3] euler);
		// VA: 0x7B46D661D4 RVA: 0x33601D4 Offset: 0x335F1D4
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D661EC RVA: 0x33601EC Offset: 0x335F1EC
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D66250 RVA: 0x3360250 Offset: 0x335F250
		public sealed new [Boolean] Equals([Quaternion] other);
		// VA: 0x7B46D66324 RVA: 0x3360324 Offset: 0x335F324
		public override new [String] ToString();
		// VA: 0x7B46D663A4 RVA: 0x33603A4 Offset: 0x335F3A4
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D663B4 RVA: 0x33603B4 Offset: 0x335F3B4
		private static new [Void] .cctor();
		// VA: 0x7B46D665BC RVA: 0x33605BC Offset: 0x335F5BC
		private static new [Void] FromToRotation_Injected(ref [Vector3] fromDirection, ref [Vector3] toDirection, out [Quaternion] ret);
		// VA: 0x7B46D658D4 RVA: 0x335F8D4 Offset: 0x335E8D4
		private static new [Void] Inverse_Injected(ref [Quaternion] rotation, out [Quaternion] ret);
		// VA: 0x7B46D6597C RVA: 0x335F97C Offset: 0x335E97C
		private static new [Void] Slerp_Injected(ref [Quaternion] a, ref [Quaternion] b, [Single] t, out [Quaternion] ret);
		// VA: 0x7B46D65A30 RVA: 0x335FA30 Offset: 0x335EA30
		private static new [Void] Lerp_Injected(ref [Quaternion] a, ref [Quaternion] b, [Single] t, out [Quaternion] ret);
		// VA: 0x7B46D65B04 RVA: 0x335FB04 Offset: 0x335EB04
		private static new [Void] Internal_FromEulerRad_Injected(ref [Vector3] euler, out [Quaternion] ret);
		// VA: 0x7B46D65BBC RVA: 0x335FBBC Offset: 0x335EBBC
		private static new [Void] Internal_ToEulerRad_Injected(ref [Quaternion] rotation, out [Vector3] ret);
		// VA: 0x7B46D65C58 RVA: 0x335FC58 Offset: 0x335EC58
		private static new [Void] AngleAxis_Injected([Single] angle, ref [Vector3] axis, out [Quaternion] ret);
		// VA: 0x7B46D65D00 RVA: 0x335FD00 Offset: 0x335ED00
		private static new [Void] LookRotation_Injected(ref [Vector3] forward, ref [Vector3] upwards, out [Quaternion] ret);
		// VA: 0x7B46D65DB4 RVA: 0x335FDB4 Offset: 0x335EDB4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A00D80
	public struct Mathf : [ValueType]
	{
		// Fields
		public readonly static [Single] Epsilon; // 0x0

		// Methods
		public static new [Boolean] IsPowerOfTwo([Int32] value);
		// VA: 0x7B46D573EC RVA: 0x33513EC Offset: 0x33503EC
		public static new [Int32] NextPowerOfTwo([Int32] value);
		// VA: 0x7B46D6660C RVA: 0x336060C Offset: 0x335F60C
		public static new [Single] GammaToLinearSpace([Single] value);
		// VA: 0x7B46D617B4 RVA: 0x335B7B4 Offset: 0x335A7B4
		public static new [Color] CorrelatedColorTemperatureToRGB([Single] kelvin);
		// VA: 0x7B46D66648 RVA: 0x3360648 Offset: 0x335F648
		public static new [Single] Sin([Single] f);
		// VA: 0x7B46D666EC RVA: 0x33606EC Offset: 0x335F6EC
		public static new [Single] Cos([Single] f);
		// VA: 0x7B46D66750 RVA: 0x3360750 Offset: 0x335F750
		public static new [Single] Tan([Single] f);
		// VA: 0x7B46D667B4 RVA: 0x33607B4 Offset: 0x335F7B4
		public static new [Single] Asin([Single] f);
		// VA: 0x7B46D66818 RVA: 0x3360818 Offset: 0x335F818
		public static new [Single] Acos([Single] f);
		// VA: 0x7B46D6687C RVA: 0x336087C Offset: 0x335F87C
		public static new [Single] Atan([Single] f);
		// VA: 0x7B46D668E0 RVA: 0x33608E0 Offset: 0x335F8E0
		public static new [Single] Atan2([Single] y, [Single] x);
		// VA: 0x7B46D66944 RVA: 0x3360944 Offset: 0x335F944
		public static new [Single] Sqrt([Single] f);
		// VA: 0x7B46D669B0 RVA: 0x33609B0 Offset: 0x335F9B0
		public static new [Single] Abs([Single] f);
		// VA: 0x7B46D66A0C RVA: 0x3360A0C Offset: 0x335FA0C
		public static new [Int32] Abs([Int32] value);
		// VA: 0x7B46D66A68 RVA: 0x3360A68 Offset: 0x335FA68
		public static new [Single] Min([Single] a, [Single] b);
		// VA: 0x7B46D66AC0 RVA: 0x3360AC0 Offset: 0x335FAC0
		public static new [Single] Min([Single[]] values);
		// VA: 0x7B46D66ACC RVA: 0x3360ACC Offset: 0x335FACC
		public static new [Int32] Min([Int32] a, [Int32] b);
		// VA: 0x7B46D66B1C RVA: 0x3360B1C Offset: 0x335FB1C
		public static new [Single] Max([Single] a, [Single] b);
		// VA: 0x7B46D66B28 RVA: 0x3360B28 Offset: 0x335FB28
		public static new [Single] Max([Single[]] values);
		// VA: 0x7B46D66B34 RVA: 0x3360B34 Offset: 0x335FB34
		public static new [Int32] Max([Int32] a, [Int32] b);
		// VA: 0x7B46D66B84 RVA: 0x3360B84 Offset: 0x335FB84
		public static new [Single] Pow([Single] f, [Single] p);
		// VA: 0x7B46D66B90 RVA: 0x3360B90 Offset: 0x335FB90
		public static new [Single] Exp([Single] power);
		// VA: 0x7B46D66C00 RVA: 0x3360C00 Offset: 0x335FC00
		public static new [Single] Log([Single] f, [Single] p);
		// VA: 0x7B46D66C64 RVA: 0x3360C64 Offset: 0x335FC64
		public static new [Single] Log([Single] f);
		// VA: 0x7B46D66CD4 RVA: 0x3360CD4 Offset: 0x335FCD4
		public static new [Single] Log10([Single] f);
		// VA: 0x7B46D66D38 RVA: 0x3360D38 Offset: 0x335FD38
		public static new [Single] Ceil([Single] f);
		// VA: 0x7B46D66D9C RVA: 0x3360D9C Offset: 0x335FD9C
		public static new [Single] Floor([Single] f);
		// VA: 0x7B46D66DF8 RVA: 0x3360DF8 Offset: 0x335FDF8
		public static new [Single] Round([Single] f);
		// VA: 0x7B46D66E54 RVA: 0x3360E54 Offset: 0x335FE54
		public static new [Int32] CeilToInt([Single] f);
		// VA: 0x7B46D66F1C RVA: 0x3360F1C Offset: 0x335FF1C
		public static new [Int32] FloorToInt([Single] f);
		// VA: 0x7B46D66F90 RVA: 0x3360F90 Offset: 0x335FF90
		public static new [Int32] RoundToInt([Single] f);
		// VA: 0x7B46D67004 RVA: 0x3361004 Offset: 0x3360004
		public static new [Single] Sign([Single] f);
		// VA: 0x7B46D670E0 RVA: 0x33610E0 Offset: 0x33600E0
		public static new [Single] Clamp([Single] value, [Single] min, [Single] max);
		// VA: 0x7B46D670F4 RVA: 0x33610F4 Offset: 0x33600F4
		public static new [Int32] Clamp([Int32] value, [Int32] min, [Int32] max);
		// VA: 0x7B46D67110 RVA: 0x3361110 Offset: 0x3360110
		public static new [Single] Clamp01([Single] value);
		// VA: 0x7B46D6712C RVA: 0x336112C Offset: 0x336012C
		public static new [Single] Lerp([Single] a, [Single] b, [Single] t);
		// VA: 0x7B46D67148 RVA: 0x3361148 Offset: 0x3360148
		public static new [Single] LerpUnclamped([Single] a, [Single] b, [Single] t);
		// VA: 0x7B46D6716C RVA: 0x336116C Offset: 0x336016C
		public static new [Single] LerpAngle([Single] a, [Single] b, [Single] t);
		// VA: 0x7B46D6717C RVA: 0x336117C Offset: 0x336017C
		public static new [Single] MoveTowards([Single] current, [Single] target, [Single] maxDelta);
		// VA: 0x7B46D671E0 RVA: 0x33611E0 Offset: 0x33601E0
		public static new [Single] SmoothStep([Single] from, [Single] to, [Single] t);
		// VA: 0x7B46D67204 RVA: 0x3361204 Offset: 0x3360204
		public static new [Boolean] Approximately([Single] a, [Single] b);
		// VA: 0x7B46D67248 RVA: 0x3361248 Offset: 0x3360248
		public static new [Single] SmoothDamp([Single] current, [Single] target, ref [Single] currentVelocity, [Single] smoothTime, [Single] maxSpeed, [Single] deltaTime);
		// VA: 0x7B46D672D8 RVA: 0x33612D8 Offset: 0x33602D8
		public static new [Single] Repeat([Single] t, [Single] length);
		// VA: 0x7B46D673A4 RVA: 0x33613A4 Offset: 0x33603A4
		public static new [Single] PingPong([Single] t, [Single] length);
		// VA: 0x7B46D673CC RVA: 0x33613CC Offset: 0x33603CC
		public static new [Single] InverseLerp([Single] a, [Single] b, [Single] value);
		// VA: 0x7B46D67400 RVA: 0x3361400 Offset: 0x3360400
		public static new [Single] DeltaAngle([Single] current, [Single] target);
		// VA: 0x7B46D67430 RVA: 0x3361430 Offset: 0x3360430
		internal static new [Single] ClampToFloat([Double] value);
		// VA: 0x7B46D6747C RVA: 0x336147C Offset: 0x336047C
		internal static new [Int32] ClampToInt([Int64] value);
		// VA: 0x7B46D674E8 RVA: 0x33614E8 Offset: 0x33604E8
		internal static new [UInt32] ClampToUInt([Int64] value);
		// VA: 0x7B46D67510 RVA: 0x3361510 Offset: 0x3360510
		internal static new [Int32] GetNumberOfDecimalsForMinimumDifference([Double] minDifference);
		// VA: 0x7B46D6752C RVA: 0x336152C Offset: 0x336052C
		internal static new [Double] RoundBasedOnMinimumDifference([Double] valueToRound, [Double] minDifference);
		// VA: 0x7B46D675B8 RVA: 0x33615B8 Offset: 0x33605B8
		internal static new [Double] DiscardLeastSignificantDecimal([Double] v);
		// VA: 0x7B46D67644 RVA: 0x3361644 Offset: 0x3360644
		private static new [Void] .cctor();
		// VA: 0x7B46D677A4 RVA: 0x33617A4 Offset: 0x33607A4
		private static new [Void] CorrelatedColorTemperatureToRGB_Injected([Single] kelvin, out [Color] ret);
		// VA: 0x7B46D666A0 RVA: 0x33606A0 Offset: 0x335F6A0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70647C30
	public struct Vector2 : [ValueType]
	{
		// Fields
		public [Single] x; // 0x0
		public [Single] y; // 0x4
		private readonly static [Vector2] zeroVector; // 0x0
		private readonly static [Vector2] oneVector; // 0x8
		private readonly static [Vector2] upVector; // 0x10
		private readonly static [Vector2] downVector; // 0x18
		private readonly static [Vector2] leftVector; // 0x20
		private readonly static [Vector2] rightVector; // 0x28
		private readonly static [Vector2] positiveInfinityVector; // 0x30
		private readonly static [Vector2] negativeInfinityVector; // 0x38
		public const static [Single] kEpsilon; // 0xFFFFFFFFFFFFFFF0
		public const static [Single] kEpsilonNormalSqrt; // 0xFFFFFFFFFFFFFFF0

		// Methods
		public new [Single] get_Item([Int32] index);
		// VA: 0x7B46D68298 RVA: 0x3362298 Offset: 0x3361298
		public new [Void] set_Item([Int32] index, [Single] value);
		// VA: 0x7B46D68300 RVA: 0x3362300 Offset: 0x3361300
		public new [Void] .ctor([Single] x, [Single] y);
		// VA: 0x7B46D68368 RVA: 0x3362368 Offset: 0x3361368
		public new [Void] Set([Single] newX, [Single] newY);
		// VA: 0x7B46D68370 RVA: 0x3362370 Offset: 0x3361370
		public static new [Vector2] Lerp([Vector2] a, [Vector2] b, [Single] t);
		// VA: 0x7B46D68378 RVA: 0x3362378 Offset: 0x3361378
		public static new [Vector2] LerpUnclamped([Vector2] a, [Vector2] b, [Single] t);
		// VA: 0x7B46D683A8 RVA: 0x33623A8 Offset: 0x33613A8
		public static new [Vector2] Scale([Vector2] a, [Vector2] b);
		// VA: 0x7B46D683C4 RVA: 0x33623C4 Offset: 0x33613C4
		public new [Void] Normalize();
		// VA: 0x7B46D683D0 RVA: 0x33623D0 Offset: 0x33613D0
		public new [Vector2] get_normalized();
		// VA: 0x7B46D68494 RVA: 0x3362494 Offset: 0x3361494
		public override new [String] ToString();
		// VA: 0x7B46D68544 RVA: 0x3362544 Offset: 0x3361544
		public new [String] ToString([String] format);
		// VA: 0x7B46D68554 RVA: 0x3362554 Offset: 0x3361554
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D68560 RVA: 0x3362560 Offset: 0x3361560
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D686E8 RVA: 0x33626E8 Offset: 0x33616E8
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6871C RVA: 0x336271C Offset: 0x336171C
		public sealed new [Boolean] Equals([Vector2] other);
		// VA: 0x7B46D687A4 RVA: 0x33627A4 Offset: 0x33617A4
		public static new [Single] Dot([Vector2] lhs, [Vector2] rhs);
		// VA: 0x7B46D687C8 RVA: 0x33627C8 Offset: 0x33617C8
		public new [Single] get_magnitude();
		// VA: 0x7B46D687D8 RVA: 0x33627D8 Offset: 0x33617D8
		public new [Single] get_sqrMagnitude();
		// VA: 0x7B46D68844 RVA: 0x3362844 Offset: 0x3361844
		public static new [Single] Angle([Vector2] from, [Vector2] to);
		// VA: 0x7B46D68858 RVA: 0x3362858 Offset: 0x3361858
		public static new [Single] Distance([Vector2] a, [Vector2] b);
		// VA: 0x7B46D6894C RVA: 0x336294C Offset: 0x336194C
		public static new [Vector2] ClampMagnitude([Vector2] vector, [Single] maxLength);
		// VA: 0x7B46D689D0 RVA: 0x33629D0 Offset: 0x33619D0
		public static new [Vector2] Min([Vector2] lhs, [Vector2] rhs);
		// VA: 0x7B46D68A64 RVA: 0x3362A64 Offset: 0x3361A64
		public static new [Vector2] Max([Vector2] lhs, [Vector2] rhs);
		// VA: 0x7B46D68A78 RVA: 0x3362A78 Offset: 0x3361A78
		public static new [Vector2] op_Addition([Vector2] a, [Vector2] b);
		// VA: 0x7B46D68A8C RVA: 0x3362A8C Offset: 0x3361A8C
		public static new [Vector2] op_Subtraction([Vector2] a, [Vector2] b);
		// VA: 0x7B46D68A98 RVA: 0x3362A98 Offset: 0x3361A98
		public static new [Vector2] op_Multiply([Vector2] a, [Vector2] b);
		// VA: 0x7B46D68AA4 RVA: 0x3362AA4 Offset: 0x3361AA4
		public static new [Vector2] op_Division([Vector2] a, [Vector2] b);
		// VA: 0x7B46D68AB0 RVA: 0x3362AB0 Offset: 0x3361AB0
		public static new [Vector2] op_UnaryNegation([Vector2] a);
		// VA: 0x7B46D68ABC RVA: 0x3362ABC Offset: 0x3361ABC
		public static new [Vector2] op_Multiply([Vector2] a, [Single] d);
		// VA: 0x7B46D68AC8 RVA: 0x3362AC8 Offset: 0x3361AC8
		public static new [Vector2] op_Multiply([Single] d, [Vector2] a);
		// VA: 0x7B46D68AD4 RVA: 0x3362AD4 Offset: 0x3361AD4
		public static new [Vector2] op_Division([Vector2] a, [Single] d);
		// VA: 0x7B46D68AE4 RVA: 0x3362AE4 Offset: 0x3361AE4
		public static new [Boolean] op_Equality([Vector2] lhs, [Vector2] rhs);
		// VA: 0x7B46D68AF0 RVA: 0x3362AF0 Offset: 0x3361AF0
		public static new [Boolean] op_Inequality([Vector2] lhs, [Vector2] rhs);
		// VA: 0x7B46D68B18 RVA: 0x3362B18 Offset: 0x3361B18
		public static new [Vector2] op_Implicit([Vector3] v);
		// VA: 0x7B46D68B40 RVA: 0x3362B40 Offset: 0x3361B40
		public static new [Vector3] op_Implicit([Vector2] v);
		// VA: 0x7B46D68B44 RVA: 0x3362B44 Offset: 0x3361B44
		public static new [Vector2] get_zero();
		// VA: 0x7B46D68B4C RVA: 0x3362B4C Offset: 0x3361B4C
		public static new [Vector2] get_one();
		// VA: 0x7B46D68B94 RVA: 0x3362B94 Offset: 0x3361B94
		public static new [Vector2] get_up();
		// VA: 0x7B46D68BDC RVA: 0x3362BDC Offset: 0x3361BDC
		public static new [Vector2] get_down();
		// VA: 0x7B46D68C24 RVA: 0x3362C24 Offset: 0x3361C24
		public static new [Vector2] get_left();
		// VA: 0x7B46D68C6C RVA: 0x3362C6C Offset: 0x3361C6C
		public static new [Vector2] get_right();
		// VA: 0x7B46D68CB4 RVA: 0x3362CB4 Offset: 0x3361CB4
		public static new [Vector2] get_negativeInfinity();
		// VA: 0x7B46D68CFC RVA: 0x3362CFC Offset: 0x3361CFC
		private static new [Void] .cctor();
		// VA: 0x7B46D68D44 RVA: 0x3362D44 Offset: 0x3361D44
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A00F00
	public struct Vector2Int : [ValueType]
	{
		// Fields
		private [Int32] m_X; // 0x0
		private [Int32] m_Y; // 0x4
		private readonly static [Vector2Int] s_Zero; // 0x0
		private readonly static [Vector2Int] s_One; // 0x8
		private readonly static [Vector2Int] s_Up; // 0x10
		private readonly static [Vector2Int] s_Down; // 0x18
		private readonly static [Vector2Int] s_Left; // 0x20
		private readonly static [Vector2Int] s_Right; // 0x28

		// Methods
		public new [Int32] get_x();
		// VA: 0x7B46D68DF8 RVA: 0x3362DF8 Offset: 0x3361DF8
		public new [Void] set_x([Int32] value);
		// VA: 0x7B46D68E00 RVA: 0x3362E00 Offset: 0x3361E00
		public new [Int32] get_y();
		// VA: 0x7B46D68E08 RVA: 0x3362E08 Offset: 0x3361E08
		public new [Void] set_y([Int32] value);
		// VA: 0x7B46D68E10 RVA: 0x3362E10 Offset: 0x3361E10
		public new [Void] .ctor([Int32] x, [Int32] y);
		// VA: 0x7B46D68E18 RVA: 0x3362E18 Offset: 0x3361E18
		public static new [Vector2] op_Implicit([Vector2Int] v);
		// VA: 0x7B46D68E20 RVA: 0x3362E20 Offset: 0x3361E20
		public static new [Vector2Int] FloorToInt([Vector2] v);
		// VA: 0x7B46D68E30 RVA: 0x3362E30 Offset: 0x3361E30
		public static new [Vector2Int] RoundToInt([Vector2] v);
		// VA: 0x7B46D68EF8 RVA: 0x3362EF8 Offset: 0x3361EF8
		public static new [Vector2Int] op_Addition([Vector2Int] a, [Vector2Int] b);
		// VA: 0x7B46D69098 RVA: 0x3363098 Offset: 0x3362098
		public static new [Vector2Int] op_Subtraction([Vector2Int] a, [Vector2Int] b);
		// VA: 0x7B46D690B0 RVA: 0x33630B0 Offset: 0x33620B0
		public static new [Boolean] op_Equality([Vector2Int] lhs, [Vector2Int] rhs);
		// VA: 0x7B46D690C8 RVA: 0x33630C8 Offset: 0x33620C8
		public static new [Boolean] op_Inequality([Vector2Int] lhs, [Vector2Int] rhs);
		// VA: 0x7B46D690E8 RVA: 0x33630E8 Offset: 0x33620E8
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D69108 RVA: 0x3363108 Offset: 0x3362108
		public sealed new [Boolean] Equals([Vector2Int] other);
		// VA: 0x7B46D69190 RVA: 0x3363190 Offset: 0x3362190
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D691B8 RVA: 0x33631B8 Offset: 0x33621B8
		public override new [String] ToString();
		// VA: 0x7B46D69200 RVA: 0x3363200 Offset: 0x3362200
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D69210 RVA: 0x3363210 Offset: 0x3362210
		public static new [Vector2Int] get_up();
		// VA: 0x7B46D69388 RVA: 0x3363388 Offset: 0x3362388
		public static new [Vector2Int] get_down();
		// VA: 0x7B46D693D0 RVA: 0x33633D0 Offset: 0x33623D0
		public static new [Vector2Int] get_left();
		// VA: 0x7B46D69418 RVA: 0x3363418 Offset: 0x3362418
		public static new [Vector2Int] get_right();
		// VA: 0x7B46D69460 RVA: 0x3363460 Offset: 0x3362460
		private static new [Void] .cctor();
		// VA: 0x7B46D694A8 RVA: 0x33634A8 Offset: 0x33624A8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A010A0
	public struct Vector3Int : [ValueType]
	{
		// Fields
		private [Int32] m_X; // 0x0
		private [Int32] m_Y; // 0x4
		private [Int32] m_Z; // 0x8
		private readonly static [Vector3Int] s_Zero; // 0x0
		private readonly static [Vector3Int] s_One; // 0xC
		private readonly static [Vector3Int] s_Up; // 0x18
		private readonly static [Vector3Int] s_Down; // 0x24
		private readonly static [Vector3Int] s_Left; // 0x30
		private readonly static [Vector3Int] s_Right; // 0x3C
		private readonly static [Vector3Int] s_Forward; // 0x48
		private readonly static [Vector3Int] s_Back; // 0x54

		// Methods
		public new [Int32] get_x();
		// VA: 0x7B46D69530 RVA: 0x3363530 Offset: 0x3362530
		public new [Void] set_x([Int32] value);
		// VA: 0x7B46D69538 RVA: 0x3363538 Offset: 0x3362538
		public new [Int32] get_y();
		// VA: 0x7B46D69540 RVA: 0x3363540 Offset: 0x3362540
		public new [Void] set_y([Int32] value);
		// VA: 0x7B46D69548 RVA: 0x3363548 Offset: 0x3362548
		public new [Int32] get_z();
		// VA: 0x7B46D69550 RVA: 0x3363550 Offset: 0x3362550
		public new [Void] set_z([Int32] value);
		// VA: 0x7B46D69558 RVA: 0x3363558 Offset: 0x3362558
		public new [Void] .ctor([Int32] x, [Int32] y, [Int32] z);
		// VA: 0x7B46D69560 RVA: 0x3363560 Offset: 0x3362560
		public static new [Boolean] op_Equality([Vector3Int] lhs, [Vector3Int] rhs);
		// VA: 0x7B46D6956C RVA: 0x336356C Offset: 0x336256C
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6959C RVA: 0x336359C Offset: 0x336259C
		public sealed new [Boolean] Equals([Vector3Int] other);
		// VA: 0x7B46D69638 RVA: 0x3363638 Offset: 0x3362638
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D69670 RVA: 0x3363670 Offset: 0x3362670
		public override new [String] ToString();
		// VA: 0x7B46D696E8 RVA: 0x33636E8 Offset: 0x33626E8
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D696F8 RVA: 0x33636F8 Offset: 0x33626F8
		private static new [Void] .cctor();
		// VA: 0x7B46D698B8 RVA: 0x33638B8 Offset: 0x33628B8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A01240
	public struct Vector4 : [ValueType]
	{
		// Fields
		public const static [Single] kEpsilon; // 0xFFFFFFFFFFFFFFF0
		public [Single] x; // 0x0
		public [Single] y; // 0x4
		public [Single] z; // 0x8
		public [Single] w; // 0xC
		private readonly static [Vector4] zeroVector; // 0x0
		private readonly static [Vector4] oneVector; // 0x10
		private readonly static [Vector4] positiveInfinityVector; // 0x20
		private readonly static [Vector4] negativeInfinityVector; // 0x30

		// Methods
		public new [Single] get_Item([Int32] index);
		// VA: 0x7B46D69984 RVA: 0x3363984 Offset: 0x3362984
		public new [Void] set_Item([Int32] index, [Single] value);
		// VA: 0x7B46D69A14 RVA: 0x3363A14 Offset: 0x3362A14
		public new [Void] .ctor([Single] x, [Single] y, [Single] z, [Single] w);
		// VA: 0x7B46D69AA4 RVA: 0x3363AA4 Offset: 0x3362AA4
		public new [Void] Set([Single] newX, [Single] newY, [Single] newZ, [Single] newW);
		// VA: 0x7B46D69AB0 RVA: 0x3363AB0 Offset: 0x3362AB0
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D69ABC RVA: 0x3363ABC Offset: 0x3362ABC
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D69B20 RVA: 0x3363B20 Offset: 0x3362B20
		public sealed new [Boolean] Equals([Vector4] other);
		// VA: 0x7B46D69BC8 RVA: 0x3363BC8 Offset: 0x3362BC8
		public static new [Single] Dot([Vector4] a, [Vector4] b);
		// VA: 0x7B46D69C04 RVA: 0x3363C04 Offset: 0x3362C04
		public new [Single] get_magnitude();
		// VA: 0x7B46D69C24 RVA: 0x3363C24 Offset: 0x3362C24
		public new [Single] get_sqrMagnitude();
		// VA: 0x7B46D69CAC RVA: 0x3363CAC Offset: 0x3362CAC
		public static new [Vector4] get_zero();
		// VA: 0x7B46D69CD4 RVA: 0x3363CD4 Offset: 0x3362CD4
		public static new [Vector4] op_Addition([Vector4] a, [Vector4] b);
		// VA: 0x7B46D69D20 RVA: 0x3363D20 Offset: 0x3362D20
		public static new [Vector4] op_Subtraction([Vector4] a, [Vector4] b);
		// VA: 0x7B46D69D34 RVA: 0x3363D34 Offset: 0x3362D34
		public static new [Vector4] op_Multiply([Vector4] a, [Single] d);
		// VA: 0x7B46D69D48 RVA: 0x3363D48 Offset: 0x3362D48
		public static new [Vector4] op_Division([Vector4] a, [Single] d);
		// VA: 0x7B46D69D5C RVA: 0x3363D5C Offset: 0x3362D5C
		public static new [Boolean] op_Equality([Vector4] lhs, [Vector4] rhs);
		// VA: 0x7B46D69D70 RVA: 0x3363D70 Offset: 0x3362D70
		public static new [Boolean] op_Inequality([Vector4] lhs, [Vector4] rhs);
		// VA: 0x7B46D69DB0 RVA: 0x3363DB0 Offset: 0x3362DB0
		public static new [Vector4] op_Implicit([Vector3] v);
		// VA: 0x7B46D69DF0 RVA: 0x3363DF0 Offset: 0x3362DF0
		public static new [Vector3] op_Implicit([Vector4] v);
		// VA: 0x7B46D69DF8 RVA: 0x3363DF8 Offset: 0x3362DF8
		public static new [Vector4] op_Implicit([Vector2] v);
		// VA: 0x7B46D69DFC RVA: 0x3363DFC Offset: 0x3362DFC
		public static new [Vector2] op_Implicit([Vector4] v);
		// VA: 0x7B46D69E08 RVA: 0x3363E08 Offset: 0x3362E08
		public override new [String] ToString();
		// VA: 0x7B46D69E0C RVA: 0x3363E0C Offset: 0x3362E0C
		public sealed new [String] ToString([String] format, [IFormatProvider] formatProvider);
		// VA: 0x7B46D69E1C RVA: 0x3363E1C Offset: 0x3362E1C
		private static new [Void] .cctor();
		// VA: 0x7B46D6A024 RVA: 0x3364024 Offset: 0x3363024
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B49350
	private struct TypeDispatchData : [ValueType]
	{
		// Fields
		public [Object[]] changed; // 0x0
		public [NativeArray`1] changedID; // 0x8
		public [NativeArray`1] destroyedID; // 0x18

		// Methods
		public sealed new [Void] Dispose();
		// VA: 0x7B46D6A098 RVA: 0x3364098 Offset: 0x3363098
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B494E0
	private struct TransformDispatchData : [ValueType]
	{
		// Fields
		public [NativeArray`1] transformedID; // 0x0
		public [NativeArray`1] parentID; // 0x10
		public [NativeArray`1] localToWorldMatrices; // 0x20
		public [NativeArray`1] positions; // 0x30
		public [NativeArray`1] rotations; // 0x40
		public [NativeArray`1] scales; // 0x50

		// Methods
		public sealed new [Void] Dispose();
		// VA: 0x7B46D6A0F0 RVA: 0x33640F0 Offset: 0x33630F0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B497F0
	private sealed class ObjectDispatcher : [Object]
	{
		// Fields
		private [IntPtr] m_Ptr; // 0x10
		private static [Action`6] s_TypeDispatch; // 0x0
		private static [Action`8] s_TransformDispatch; // 0x8

		// Methods
		private static new [Void] .cctor();
		// VA: 0x7B46D6A1C0 RVA: 0x33641C0 Offset: 0x33631C0

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B49670
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [ObjectDispatcher]->[<>c] <>9 { get; set; }
			public readonly static [ObjectDispatcher]->[<>c] <>9; // 0x0

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D6A2E8 RVA: 0x33642E8 Offset: 0x33632E8
			public new [Void] .ctor();
			// VA: 0x7B46D6A344 RVA: 0x3364344 Offset: 0x3363344
			internal new [Void] <.cctor>b__54_0([Object[]] changed, [IntPtr] changedID, [IntPtr] destroyedID, [Int32] changedCount, [Int32] destroyedCount, [Action`1] callback);
			// VA: 0x7B46D6A34C RVA: 0x336434C Offset: 0x336334C
			internal new [Void] <.cctor>b__54_1([IntPtr] transformed, [IntPtr] parents, [IntPtr] localToWorldMatrices, [IntPtr] positions, [IntPtr] rotations, [IntPtr] scales, [Int32] count, [Action`1] callback);
			// VA: 0x7B46D6A41C RVA: 0x336441C Offset: 0x336341C
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B49970
	private class NumericFieldDraggerUtility : [Object]
	{
		// Fields
		private static [Boolean] s_UseYSign; // 0x0

		// Methods
		internal static new [Single] Acceleration([Boolean] shiftPressed, [Boolean] altPressed);
		// VA: 0x7B46D6A620 RVA: 0x3364620 Offset: 0x3363620
		internal static new [Single] NiceDelta([Vector2] deviceDelta, [Single] acceleration);
		// VA: 0x7B46D6A644 RVA: 0x3364644 Offset: 0x3363644
		internal static new [Double] CalculateFloatDragSensitivity([Double] value);
		// VA: 0x7B46D6A79C RVA: 0x336479C Offset: 0x336379C
		internal static new [Double] CalculateFloatDragSensitivity([Double] value, [Double] minValue, [Double] maxValue);
		// VA: 0x7B46D6A82C RVA: 0x336482C Offset: 0x336382C
		internal static new [Int64] CalculateIntDragSensitivity([Int64] value);
		// VA: 0x7B46D6A8BC RVA: 0x33648BC Offset: 0x33638BC
		internal static new [UInt64] CalculateIntDragSensitivity([UInt64] value);
		// VA: 0x7B46D6A964 RVA: 0x3364964 Offset: 0x3363964
		private static new [Double] CalculateIntDragSensitivity([Double] value);
		// VA: 0x7B46D6A8E8 RVA: 0x33648E8 Offset: 0x33638E8
		internal static new [Int64] CalculateIntDragSensitivity([Int64] value, [Int64] minValue, [Int64] maxValue);
		// VA: 0x7B46D6A988 RVA: 0x3364988 Offset: 0x3363988
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B49AF0
	private abstract interface IPlayerEditorConnectionNative
	{
		// Fields

		// Methods
		public abstract new [Void] Initialize();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public abstract new [Void] DisconnectAll();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public abstract new [Void] SendMessage([Guid] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Boolean] TrySendMessage([Guid] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] Poll();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public abstract new [Void] RegisterInternal([Guid] messageId);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Void] UnregisterInternal([Guid] messageId);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public abstract new [Boolean] IsConnected();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B49C30
	private class PlayerConnectionInternal : [Object]
	{
		// Fields

		// Methods
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.SendMessage([Guid] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x7B46D6AA28 RVA: 0x3364A28 Offset: 0x3363A28
		private sealed new [Boolean] UnityEngine.IPlayerEditorConnectionNative.TrySendMessage([Guid] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x7B46D6ABA4 RVA: 0x3364BA4 Offset: 0x3363BA4
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.Poll();
		// VA: 0x7B46D6AD24 RVA: 0x3364D24 Offset: 0x3363D24
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.RegisterInternal([Guid] messageId);
		// VA: 0x7B46D6AD74 RVA: 0x3364D74 Offset: 0x3363D74
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal([Guid] messageId);
		// VA: 0x7B46D6AE34 RVA: 0x3364E34 Offset: 0x3363E34
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.Initialize();
		// VA: 0x7B46D6AEF4 RVA: 0x3364EF4 Offset: 0x3363EF4
		private sealed new [Boolean] UnityEngine.IPlayerEditorConnectionNative.IsConnected();
		// VA: 0x7B46D6AF44 RVA: 0x3364F44 Offset: 0x3363F44
		private sealed new [Void] UnityEngine.IPlayerEditorConnectionNative.DisconnectAll();
		// VA: 0x7B46D6AF94 RVA: 0x3364F94 Offset: 0x3363F94
		private static new [Boolean] IsConnected();
		// VA: 0x7B46D6AF6C RVA: 0x3364F6C Offset: 0x3363F6C
		private static new [Void] Initialize();
		// VA: 0x7B46D6AF1C RVA: 0x3364F1C Offset: 0x3363F1C
		private static new [Void] RegisterInternal([String] messageId);
		// VA: 0x7B46D6ADF8 RVA: 0x3364DF8 Offset: 0x3363DF8
		private static new [Void] UnregisterInternal([String] messageId);
		// VA: 0x7B46D6AEB8 RVA: 0x3364EB8 Offset: 0x3363EB8
		private static new [Void] SendMessage([String] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x7B46D6AB50 RVA: 0x3364B50 Offset: 0x3363B50
		private static new [Boolean] TrySendMessage([String] messageId, [Byte[]] data, [Int32] playerId);
		// VA: 0x7B46D6ACD0 RVA: 0x3364CD0 Offset: 0x3363CD0
		private static new [Void] PollInternal();
		// VA: 0x7B46D6AD4C RVA: 0x3364D4C Offset: 0x3363D4C
		private static new [Void] DisconnectAll();
		// VA: 0x7B46D6AFBC RVA: 0x3364FBC Offset: 0x3363FBC
		public new [Void] .ctor();
		// VA: 0x7B46D6AFE4 RVA: 0x3364FE4 Offset: 0x3363FE4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B49E30
	public class PlayerPrefsException : [Exception]
	{
		// Fields

		// Methods
		public new [Void] .ctor([String] error);
		// VA: 0x7B46D6AFEC RVA: 0x3364FEC Offset: 0x3363FEC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A050
	public class PlayerPrefs : [Object]
	{
		// Fields

		// Methods
		private static new [Boolean] TrySetInt([String] key, [Int32] value);
		// VA: 0x7B46D6B054 RVA: 0x3365054 Offset: 0x3364054
		private static new [Boolean] TrySetFloat([String] key, [Single] value);
		// VA: 0x7B46D6B098 RVA: 0x3365098 Offset: 0x3364098
		private static new [Boolean] TrySetSetString([String] key, [String] value);
		// VA: 0x7B46D6B0E4 RVA: 0x33650E4 Offset: 0x33640E4
		public static new [Void] SetInt([String] key, [Int32] value);
		// VA: 0x7B46D6B128 RVA: 0x3365128 Offset: 0x3364128
		public static new [Int32] GetInt([String] key, [Int32] defaultValue);
		// VA: 0x7B46D6B1B8 RVA: 0x33651B8 Offset: 0x33641B8
		public static new [Int32] GetInt([String] key);
		// VA: 0x7B46D6B1FC RVA: 0x33651FC Offset: 0x33641FC
		public static new [Void] SetFloat([String] key, [Single] value);
		// VA: 0x7B46D6B23C RVA: 0x336523C Offset: 0x336423C
		public static new [Single] GetFloat([String] key, [Single] defaultValue);
		// VA: 0x7B46D6B2D4 RVA: 0x33652D4 Offset: 0x33642D4
		public static new [Single] GetFloat([String] key);
		// VA: 0x7B46D6B320 RVA: 0x3365320 Offset: 0x3364320
		public static new [Void] SetString([String] key, [String] value);
		// VA: 0x7B46D6B360 RVA: 0x3365360 Offset: 0x3364360
		public static new [String] GetString([String] key, [String] defaultValue);
		// VA: 0x7B46D6B3F0 RVA: 0x33653F0 Offset: 0x33643F0
		public static new [String] GetString([String] key);
		// VA: 0x7B46D6B434 RVA: 0x3365434 Offset: 0x3364434
		public static new [Boolean] HasKey([String] key);
		// VA: 0x7B46D6B4A0 RVA: 0x33654A0 Offset: 0x33644A0
		public static new [Void] DeleteKey([String] key);
		// VA: 0x7B46D6B4DC RVA: 0x33654DC Offset: 0x33644DC
		public static new [Void] Save();
		// VA: 0x7B46D6B518 RVA: 0x3365518 Offset: 0x3364518
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A1D0
	public abstract class PropertyAttribute : [Attribute]
	{
		// Fields
		// private [Int32] order { get; set; }
		private [Int32] <order>k__BackingField; // 0x10

		// Methods
		public new [Void] set_order([Int32] value);
		// VA: 0x7B46D6B540 RVA: 0x3365540 Offset: 0x3364540
		protected new [Void] .ctor();
		// VA: 0x7B46D6B548 RVA: 0x3365548 Offset: 0x3364548
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A380
	public class InspectorNameAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [String] displayName; // 0x18

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A530
	public class TooltipAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [String] tooltip; // 0x18

		// Methods
		public new [Void] .ctor([String] tooltip);
		// VA: 0x7B46D6B550 RVA: 0x3365550 Offset: 0x3364550
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A6E0
	public class SpaceAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [Single] height; // 0x14

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6B578 RVA: 0x3365578 Offset: 0x3364578
		public new [Void] .ctor([Single] height);
		// VA: 0x7B46D6B598 RVA: 0x3365598 Offset: 0x3364598
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4A890
	public class HeaderAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [String] header; // 0x18

		// Methods
		public new [Void] .ctor([String] header);
		// VA: 0x7B46D6B5C0 RVA: 0x33655C0 Offset: 0x33645C0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4AA40
	public sealed class RangeAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [Single] min; // 0x14
		public readonly [Single] max; // 0x18

		// Methods
		public new [Void] .ctor([Single] min, [Single] max);
		// VA: 0x7B46D6B5E8 RVA: 0x33655E8 Offset: 0x33645E8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4ABF0
	public sealed class MinAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [Single] min; // 0x14

		// Methods
		public new [Void] .ctor([Single] min);
		// VA: 0x7B46D6B614 RVA: 0x3365614 Offset: 0x3364614
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4ADA0
	public sealed class MultilineAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [Int32] lines; // 0x14

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6B63C RVA: 0x336563C Offset: 0x336463C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4AF50
	public sealed class TextAreaAttribute : [PropertyAttribute]
	{
		// Fields
		public readonly [Int32] minLines; // 0x14
		public readonly [Int32] maxLines; // 0x18

		// Methods
		public new [Void] .ctor([Int32] minLines, [Int32] maxLines);
		// VA: 0x7B46D6B65C RVA: 0x336565C Offset: 0x336465C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B100
	private class PropertyNameUtils : [Object]
	{
		// Fields

		// Methods
		public static new [PropertyName] PropertyNameFromString([String] name);
		// VA: 0x7B46D6B688 RVA: 0x3365688 Offset: 0x3364688
		private static new [Void] PropertyNameFromString_Injected([String] name, out [PropertyName] ret);
		// VA: 0x7B46D6B6D4 RVA: 0x33656D4 Offset: 0x33646D4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B280
	public struct PropertyName : [ValueType]
	{
		// Fields
		public [Int32] id; // 0x0

		// Methods
		public new [Void] .ctor([String] name);
		// VA: 0x7B46D6B718 RVA: 0x3365718 Offset: 0x3364718
		public new [Void] .ctor([PropertyName] other);
		// VA: 0x7B46D6B774 RVA: 0x3365774 Offset: 0x3364774
		public static new [Boolean] IsNullOrEmpty([PropertyName] prop);
		// VA: 0x7B46D6B77C RVA: 0x336577C Offset: 0x336477C
		public static new [Boolean] op_Equality([PropertyName] lhs, [PropertyName] rhs);
		// VA: 0x7B46D6B788 RVA: 0x3365788 Offset: 0x3364788
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D6B794 RVA: 0x3365794 Offset: 0x3364794
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6B79C RVA: 0x336579C Offset: 0x336479C
		public sealed new [Boolean] Equals([PropertyName] other);
		// VA: 0x7B46D6B814 RVA: 0x3365814 Offset: 0x3364814
		public static new [PropertyName] op_Implicit([String] name);
		// VA: 0x7B46D6B824 RVA: 0x3365824 Offset: 0x3364824
		public override new [String] ToString();
		// VA: 0x7B46D6B870 RVA: 0x3365870 Offset: 0x3364870
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B410
	public static class Random : [Object]
	{
		// Fields

		// Methods
		public static new [Single] Range([Single] minInclusive, [Single] maxInclusive);
		// VA: 0x7B46D6B8F4 RVA: 0x33658F4 Offset: 0x33648F4
		public static new [Int32] Range([Int32] minInclusive, [Int32] maxExclusive);
		// VA: 0x7B46D6B934 RVA: 0x3365934 Offset: 0x3364934
		private static new [Int32] RandomRangeInt([Int32] minInclusive, [Int32] maxExclusive);
		// VA: 0x7B46D6B978 RVA: 0x3365978 Offset: 0x3364978
		public static new [Single] get_value();
		// VA: 0x7B46D6B9BC RVA: 0x33659BC Offset: 0x33649BC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B590
	public class ResourceRequest : [AsyncOperation]
	{
		// Fields
		public [String] m_Path; // 0x20
		public [Type] m_Type; // 0x28

		// Methods
		protected virtual new [Object] GetResult();
		// VA: 0x7B46D6B9E4 RVA: 0x33659E4 Offset: 0x33649E4
		public new [Object] get_asset();
		// VA: 0x7B46D6BA68 RVA: 0x3365A68 Offset: 0x3364A68
		public new [Void] .ctor();
		// VA: 0x7B46D6BA74 RVA: 0x3365A74 Offset: 0x3364A74
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4BA20
	private static class ResourcesAPIInternal : [Object]
	{
		// Fields

		// Methods
		public static new [Object[]] FindObjectsOfTypeAll([Type] type);
		// VA: 0x7B46D6BA84 RVA: 0x3365A84 Offset: 0x3364A84
		public static new [Shader] FindShaderByName([String] name);
		// VA: 0x7B46D6BAC0 RVA: 0x3365AC0 Offset: 0x3364AC0
		public static new [Object] Load([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6BAFC RVA: 0x3365AFC Offset: 0x3364AFC
		public static new [Object[]] LoadAll([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6BB40 RVA: 0x3365B40 Offset: 0x3364B40
		internal static new [ResourceRequest] LoadAsyncInternal([String] path, [Type] type);
		// VA: 0x7B46D6BB84 RVA: 0x3365B84 Offset: 0x3364B84
		public static new [Void] UnloadAsset([Object] assetToUnload);
		// VA: 0x7B46D6BBC8 RVA: 0x3365BC8 Offset: 0x3364BC8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4BBA0
	public class ResourcesAPI : [Object]
	{
		// Fields
		private static [ResourcesAPI] s_DefaultAPI; // 0x0
		// private static [ResourcesAPI] overrideAPI { get; set; }
		private static [ResourcesAPI] <overrideAPI>k__BackingField; // 0x8

		// Methods
		internal static new [ResourcesAPI] get_ActiveAPI();
		// VA: 0x7B46D6BC04 RVA: 0x3365C04 Offset: 0x3364C04
		public static new [ResourcesAPI] get_overrideAPI();
		// VA: 0x7B46D6BCAC RVA: 0x3365CAC Offset: 0x3364CAC
		protected internal new [Void] .ctor();
		// VA: 0x7B46D6BD04 RVA: 0x3365D04 Offset: 0x3364D04
		protected internal virtual new [Object[]] FindObjectsOfTypeAll([Type] systemTypeInstance);
		// VA: 0x7B46D6BD0C RVA: 0x3365D0C Offset: 0x3364D0C
		protected internal virtual new [Shader] FindShaderByName([String] name);
		// VA: 0x7B46D6BD48 RVA: 0x3365D48 Offset: 0x3364D48
		protected internal virtual new [Object] Load([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6BD84 RVA: 0x3365D84 Offset: 0x3364D84
		protected internal virtual new [Object[]] LoadAll([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6BDC8 RVA: 0x3365DC8 Offset: 0x3364DC8
		protected internal virtual new [ResourceRequest] LoadAsync([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6BE0C RVA: 0x3365E0C Offset: 0x3364E0C
		protected internal virtual new [Void] UnloadAsset([Object] assetToUnload);
		// VA: 0x7B46D6BE60 RVA: 0x3365E60 Offset: 0x3364E60
		private static new [Void] .cctor();
		// VA: 0x7B46D6BE9C RVA: 0x3365E9C Offset: 0x3364E9C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70954030
	public sealed class Resources : [Object]
	{
		// Fields

		// Methods
		internal static new [T[]] ConvertObjects([Object[]] rawObjects);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public static new [Object[]] FindObjectsOfTypeAll([Type] type);
		// VA: 0x7B46D6BEF8 RVA: 0x3365EF8 Offset: 0x3364EF8
		public static new [Object] Load([String] path);
		// VA: 0x7B46D6BF60 RVA: 0x3365F60 Offset: 0x3364F60
		public static new [T] Load([String] path);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Object] Load([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6B9F0 RVA: 0x33659F0 Offset: 0x33649F0
		public static new [ResourceRequest] LoadAsync([String] path);
		// VA: 0x7B46D6BFE4 RVA: 0x3365FE4 Offset: 0x3364FE4
		public static new [ResourceRequest] LoadAsync([String] path);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public static new [ResourceRequest] LoadAsync([String] path, [Type] type);
		// VA: 0x7B46D6C068 RVA: 0x3366068 Offset: 0x3365068
		public static new [Object[]] LoadAll([String] path, [Type] systemTypeInstance);
		// VA: 0x7B46D6C0E0 RVA: 0x33660E0 Offset: 0x33650E0
		public static new [Object] GetBuiltinResource([Type] type, [String] path);
		// VA: 0x7B46D6C158 RVA: 0x3366158 Offset: 0x3365158
		public static new [T] GetBuiltinResource([String] path);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] UnloadAsset([Object] assetToUnload);
		// VA: 0x7B46D6C19C RVA: 0x336619C Offset: 0x336519C
		public static new [AsyncOperation] UnloadUnusedAssets();
		// VA: 0x7B46D6C204 RVA: 0x3366204 Offset: 0x3365204
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4BD80
	public class AsyncInstantiateOperation : [AsyncOperation]
	{
		// Fields
		public [Object[]] m_Result; // 0x20

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6C22C RVA: 0x336622C Offset: 0x336522C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70627A20
	public class AsyncInstantiateOperation`1 : [CustomYieldInstruction]
	{
		// Fields
		public [AsyncInstantiateOperation] m_op; // 0x0

		// Methods
		internal new [Void] .ctor([AsyncInstantiateOperation] op);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public override new [Boolean] get_keepWaiting();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50030
	private class AsyncInstantiateOperationHelper : [Object]
	{
		// Fields

		// Methods
		public static new [Void] SetAsyncInstantiateOperationResult([AsyncInstantiateOperation] op, [Object[]] result);
		// VA: 0x7B46D6C234 RVA: 0x3366234 Offset: 0x3365234
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B720
	public class AsyncOperation : [YieldInstruction]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10
		private [Action`1] m_completeCallback; // 0x18

		// Methods
		private static new [Void] InternalDestroy([IntPtr] ptr);
		// VA: 0x7B46D6C24C RVA: 0x336624C Offset: 0x336524C
		public new [Boolean] get_isDone();
		// VA: 0x7B46D6C288 RVA: 0x3366288 Offset: 0x3365288
		public new [Single] get_progress();
		// VA: 0x7B46D6C2C4 RVA: 0x33662C4 Offset: 0x33652C4
		public new [Void] set_priority([Int32] value);
		// VA: 0x7B46D6C300 RVA: 0x3366300 Offset: 0x3365300
		public new [Boolean] get_allowSceneActivation();
		// VA: 0x7B46D6C344 RVA: 0x3366344 Offset: 0x3365344
		public new [Void] set_allowSceneActivation([Boolean] value);
		// VA: 0x7B46D6C380 RVA: 0x3366380 Offset: 0x3365380
		protected override new [Void] Finalize();
		// VA: 0x7B46D6C3C4 RVA: 0x33663C4 Offset: 0x33653C4
		internal new [Void] InvokeCompletionEvent();
		// VA: 0x7B46D6C480 RVA: 0x3366480 Offset: 0x3365480
		public new [Void] add_completed([Action`1] value);
		// VA: 0x7B46D6C4B0 RVA: 0x33664B0 Offset: 0x33654B0
		public new [Void] remove_completed([Action`1] value);
		// VA: 0x7B46D6C5AC RVA: 0x33665AC Offset: 0x33655AC
		public new [Void] .ctor();
		// VA: 0x7B46D6BA7C RVA: 0x3365A7C Offset: 0x3364A7C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70894930
	private class AttributeHelperEngine : [Object]
	{
		// Fields
		public static [DisallowMultipleComponent[]] _disallowMultipleComponentArray; // 0x0
		public static [ExecuteInEditMode[]] _executeInEditModeArray; // 0x8
		public static [RequireComponent[]] _requireComponentArray; // 0x10

		// Methods
		private static new [Type] GetParentTypeDisallowingMultipleInclusion([Type] type);
		// VA: 0x7B46D6C65C RVA: 0x336665C Offset: 0x336565C
		private static new [Type[]] GetRequiredComponents([Type] klass);
		// VA: 0x7B46D6C790 RVA: 0x3366790 Offset: 0x3365790
		private static new [Int32] GetExecuteMode([Type] klass);
		// VA: 0x7B46D6CC64 RVA: 0x3366C64 Offset: 0x3365C64
		private static new [Int32] CheckIsEditorScript([Type] klass);
		// VA: 0x7B46D6CD78 RVA: 0x3366D78 Offset: 0x3365D78
		private static new [Int32] GetDefaultExecutionOrderFor([Type] klass);
		// VA: 0x7B46D6CE88 RVA: 0x3366E88 Offset: 0x3365E88
		private static new [T] GetCustomAttributeOfType([Type] klass);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] .cctor();
		// VA: 0x7B46D6CF08 RVA: 0x3366F08 Offset: 0x3365F08
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B501B0
	public sealed class DisallowMultipleComponent : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6CFD0 RVA: 0x3366FD0 Offset: 0x3365FD0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50360
	public sealed class RequireComponent : [Attribute]
	{
		// Fields
		public [Type] m_Type0; // 0x10
		public [Type] m_Type1; // 0x18
		public [Type] m_Type2; // 0x20

		// Methods
		public new [Void] .ctor([Type] requiredComponent);
		// VA: 0x7B46D6CFD8 RVA: 0x3366FD8 Offset: 0x3365FD8
		public new [Void] .ctor([Type] requiredComponent, [Type] requiredComponent2);
		// VA: 0x7B46D6D000 RVA: 0x3367000 Offset: 0x3366000
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50510
	public sealed class AddComponentMenu : [Attribute]
	{
		// Fields
		private [String] m_AddComponentMenu; // 0x10
		private [Int32] m_Ordering; // 0x18

		// Methods
		public new [Void] .ctor([String] menuName);
		// VA: 0x7B46D6D02C RVA: 0x336702C Offset: 0x336602C
		public new [Void] .ctor([String] menuName, [Int32] order);
		// VA: 0x7B46D6D058 RVA: 0x3367058 Offset: 0x3366058
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B506C0
	public sealed class CreateAssetMenuAttribute : [Attribute]
	{
		// Fields
		// private [String] menuName { get; set; }
		private [String] <menuName>k__BackingField; // 0x10
		// private [String] fileName { get; set; }
		private [String] <fileName>k__BackingField; // 0x18
		// private [Int32] order { get; set; }
		private [Int32] <order>k__BackingField; // 0x20

		// Methods
		public new [Void] set_menuName([String] value);
		// VA: 0x7B46D6D088 RVA: 0x3367088 Offset: 0x3366088
		public new [Void] set_fileName([String] value);
		// VA: 0x7B46D6D090 RVA: 0x3367090 Offset: 0x3366090
		public new [Void] set_order([Int32] value);
		// VA: 0x7B46D6D098 RVA: 0x3367098 Offset: 0x3366098
		public new [Void] .ctor();
		// VA: 0x7B46D6D0A0 RVA: 0x33670A0 Offset: 0x33660A0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50870
	public sealed class ContextMenu : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50A20
	public sealed class ExecuteInEditMode : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6D0A8 RVA: 0x33670A8 Offset: 0x33660A8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50BD0
	public sealed class ExecuteAlways : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6D0B0 RVA: 0x33670B0 Offset: 0x33660B0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50D80
	public sealed class HideInInspector : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6D0B8 RVA: 0x33670B8 Offset: 0x33660B8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B50F30
	public class HelpURLAttribute : [Attribute]
	{
		// Fields
		public readonly [String] m_Url; // 0x10
		public readonly [Boolean] m_Dispatcher; // 0x18
		public readonly [String] m_DispatchingFieldName; // 0x20

		// Methods
		public new [Void] .ctor([String] url);
		// VA: 0x7B46D6D0C0 RVA: 0x33670C0 Offset: 0x33660C0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B510E0
	public class DefaultExecutionOrder : [Attribute]
	{
		// Fields
		private [Int32] m_Order; // 0x10

		// Methods
		public new [Void] .ctor([Int32] order);
		// VA: 0x7B46D6D128 RVA: 0x3367128 Offset: 0x3366128
		public new [Int32] get_order();
		// VA: 0x7B46D6CF00 RVA: 0x3366F00 Offset: 0x3365F00
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51290
	public class AssemblyIsEditorAssembly : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51440
	public class ExcludeFromPresetAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6D150 RVA: 0x3367150 Offset: 0x3366150
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705DE4D0
	public class Behaviour : [Component]
	{
		// Fields

		// Methods
		public new [Boolean] get_enabled();
		// VA: 0x7B46D6D158 RVA: 0x3367158 Offset: 0x3366158
		public new [Void] set_enabled([Boolean] value);
		// VA: 0x7B46D6D194 RVA: 0x3367194 Offset: 0x3366194
		public new [Boolean] get_isActiveAndEnabled();
		// VA: 0x7B46D6D1D8 RVA: 0x33671D8 Offset: 0x33661D8
		public new [Void] .ctor();
		// VA: 0x7B46D6D214 RVA: 0x3367214 Offset: 0x3366214
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B515F0
	private struct CastHelper`1 : [ValueType]
	{
		// Fields
		public [T] t; // 0xFFFFFFFFFFFFFFF0
		public [IntPtr] onePointerFurtherThanT; // 0xFFFFFFFFFFFFFFF0

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B518F0
	private static class ClassLibraryInitializer : [Object]
	{
		// Fields

		// Methods
		private static new [Void] Init();
		// VA: 0x7B46D6D270 RVA: 0x3367270 Offset: 0x3366270
		private static new [Void] InitStdErrWithHandle([IntPtr] fileHandle);
		// VA: 0x7B46D6D278 RVA: 0x3367278 Offset: 0x3366278
		private static new [Void] InitAssemblyRedirections();
		// VA: 0x7B46D6D3A0 RVA: 0x33673A0 Offset: 0x33663A0

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B51770
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [ClassLibraryInitializer]->[<>c] <>9 { get; set; }
			public readonly static [ClassLibraryInitializer]->[<>c] <>9; // 0x0
			// public static [ResolveEventHandler] <>9__2_0 { get; set; }
			public static [ResolveEventHandler] <>9__2_0; // 0x8

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D6D494 RVA: 0x3367494 Offset: 0x3366494
			public new [Void] .ctor();
			// VA: 0x7B46D6D4F0 RVA: 0x33674F0 Offset: 0x33664F0
			internal new [Assembly] <InitAssemblyRedirections>b__2_0([Object] _, [ResolveEventArgs] args);
			// VA: 0x7B46D6D4F8 RVA: 0x33674F8 Offset: 0x33664F8
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51A70
	private struct AssemblyVersion : [ValueType]
	{
		// Fields
		public [UInt16] major; // 0x0
		public [UInt16] minor; // 0x2
		public [UInt16] build; // 0x4
		public [UInt16] revision; // 0x6

		// Methods
		public static new [Boolean] op_Equality([AssemblyVersion] lhs, [AssemblyVersion] rhs);
		// VA: 0x7B46D6D600 RVA: 0x3367600 Offset: 0x3366600
		public override new [String] ToString();
		// VA: 0x7B46D6D630 RVA: 0x3367630 Offset: 0x3366630
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6D7DC RVA: 0x33677DC Offset: 0x33667DC
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D6D884 RVA: 0x3367884 Offset: 0x3366884
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51BF0
	private struct AssemblyFullName : [ValueType]
	{
		// Fields
		public [String] Name; // 0x0
		public [AssemblyVersion] Version; // 0x8
		public [String] PublicKeyToken; // 0x10
		public [String] Culture; // 0x18

		// Methods
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D6D914 RVA: 0x3367914 Offset: 0x3366914
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D6D9EC RVA: 0x33679EC Offset: 0x33669EC
		public override new [String] ToString();
		// VA: 0x7B46D6DA74 RVA: 0x3367A74 Offset: 0x3366A74
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705DE650
	public class Component : [Object]
	{
		// Fields

		// Methods
		public new [Transform] get_transform();
		// VA: 0x7B46D6DC14 RVA: 0x3367C14 Offset: 0x3366C14
		public new [GameObject] get_gameObject();
		// VA: 0x7B46D6DC50 RVA: 0x3367C50 Offset: 0x3366C50
		public new [Component] GetComponent([Type] type);
		// VA: 0x7B46D6DC8C RVA: 0x3367C8C Offset: 0x3366C8C
		internal new [Void] GetComponentFastPath([Type] type, [IntPtr] oneFurtherThanResultValue);
		// VA: 0x7B46D6DD48 RVA: 0x3367D48 Offset: 0x3366D48
		public new [T] GetComponent();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Boolean] TryGetComponent([Type] type, out [Component] component);
		// VA: 0x7B46D6DD9C RVA: 0x3367D9C Offset: 0x3366D9C
		public new [Boolean] TryGetComponent(out [T] component);
		// VA: 0x7B45027BCC RVA: 0x1621BCC Offset: 0x1620BCC
		public new [Component] GetComponent([String] type);
		// VA: 0x7B46D6DE98 RVA: 0x3367E98 Offset: 0x3366E98
		public new [Component] GetComponentInChildren([Type] t, [Boolean] includeInactive);
		// VA: 0x7B46D6DEDC RVA: 0x3367EDC Offset: 0x3366EDC
		public new [Component] GetComponentInChildren([Type] t);
		// VA: 0x7B46D6DFB8 RVA: 0x3367FB8 Offset: 0x3366FB8
		public new [T] GetComponentInChildren([Boolean] includeInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [T] GetComponentInChildren();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Component[]] GetComponentsInChildren([Type] t, [Boolean] includeInactive);
		// VA: 0x7B46D6DFC0 RVA: 0x3367FC0 Offset: 0x3366FC0
		public new [Component[]] GetComponentsInChildren([Type] t);
		// VA: 0x7B46D6E0D4 RVA: 0x33680D4 Offset: 0x33670D4
		public new [T[]] GetComponentsInChildren([Boolean] includeInactive);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Void] GetComponentsInChildren([Boolean] includeInactive, [List`1] result);
		// VA: 0x7B45028ABC RVA: 0x1622ABC Offset: 0x1621ABC
		public new [T[]] GetComponentsInChildren();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Void] GetComponentsInChildren([List`1] results);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Component] GetComponentInParent([Type] t, [Boolean] includeInactive);
		// VA: 0x7B46D6E128 RVA: 0x3368128 Offset: 0x3367128
		public new [Component] GetComponentInParent([Type] t);
		// VA: 0x7B46D6E204 RVA: 0x3368204 Offset: 0x3367204
		public new [T] GetComponentInParent([Boolean] includeInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [T] GetComponentInParent();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Component[]] GetComponentsInParent([Type] t, [Boolean] includeInactive);
		// VA: 0x7B46D6E280 RVA: 0x3368280 Offset: 0x3367280
		public new [Component[]] GetComponentsInParent([Type] t);
		// VA: 0x7B46D6E394 RVA: 0x3368394 Offset: 0x3367394
		public new [T[]] GetComponentsInParent([Boolean] includeInactive);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Void] GetComponentsInParent([Boolean] includeInactive, [List`1] results);
		// VA: 0x7B45028ABC RVA: 0x1622ABC Offset: 0x1621ABC
		public new [T[]] GetComponentsInParent();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Component[]] GetComponents([Type] type);
		// VA: 0x7B46D6E39C RVA: 0x336839C Offset: 0x336739C
		private new [Void] GetComponentsForListInternal([Type] searchType, [Object] resultList);
		// VA: 0x7B46D6E494 RVA: 0x3368494 Offset: 0x3367494
		public new [Void] GetComponents([Type] type, [List`1] results);
		// VA: 0x7B46D6E4E8 RVA: 0x33684E8 Offset: 0x33674E8
		public new [Void] GetComponents([List`1] results);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [String] get_tag();
		// VA: 0x7B46D6E53C RVA: 0x336853C Offset: 0x336753C
		public new [Void] set_tag([String] value);
		// VA: 0x7B46D6E5E8 RVA: 0x33685E8 Offset: 0x33675E8
		public new [T[]] GetComponents();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Int32] GetComponentIndex();
		// VA: 0x7B46D6E6A4 RVA: 0x33686A4 Offset: 0x33676A4
		public new [Boolean] CompareTag([String] tag);
		// VA: 0x7B46D6E6E0 RVA: 0x33686E0 Offset: 0x33676E0
		public new [Void] SendMessageUpwards([String] methodName, [Object] value, [SendMessageOptions] options);
		// VA: 0x7B46D6E79C RVA: 0x336879C Offset: 0x336779C
		public new [Void] SendMessageUpwards([String] methodName, [Object] value);
		// VA: 0x7B46D6E7F8 RVA: 0x33687F8 Offset: 0x33677F8
		public new [Void] SendMessageUpwards([String] methodName);
		// VA: 0x7B46D6E850 RVA: 0x3368850 Offset: 0x3367850
		public new [Void] SendMessageUpwards([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D6E89C RVA: 0x336889C Offset: 0x336789C
		public new [Void] SendMessage([String] methodName, [Object] value);
		// VA: 0x7B46D6E8F4 RVA: 0x33688F4 Offset: 0x33678F4
		public new [Void] SendMessage([String] methodName);
		// VA: 0x7B46D6E9A8 RVA: 0x33689A8 Offset: 0x33679A8
		public new [Void] SendMessage([String] methodName, [Object] value, [SendMessageOptions] options);
		// VA: 0x7B46D6E94C RVA: 0x336894C Offset: 0x336794C
		public new [Void] SendMessage([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D6E9F4 RVA: 0x33689F4 Offset: 0x33679F4
		public new [Void] BroadcastMessage([String] methodName, [Object] parameter, [SendMessageOptions] options);
		// VA: 0x7B46D6EA4C RVA: 0x3368A4C Offset: 0x3367A4C
		public new [Void] BroadcastMessage([String] methodName, [Object] parameter);
		// VA: 0x7B46D6EAA8 RVA: 0x3368AA8 Offset: 0x3367AA8
		public new [Void] BroadcastMessage([String] methodName);
		// VA: 0x7B46D6EB00 RVA: 0x3368B00 Offset: 0x3367B00
		public new [Void] BroadcastMessage([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D6EB4C RVA: 0x3368B4C Offset: 0x3367B4C
		public new [Void] .ctor();
		// VA: 0x7B46D6D218 RVA: 0x3367218 Offset: 0x3366218
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51D70
	public sealed class Coroutine : [YieldInstruction]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
		private new [Void] .ctor();
		// VA: 0x7B46D6EBAC RVA: 0x3368BAC Offset: 0x3367BAC
		protected override new [Void] Finalize();
		// VA: 0x7B46D6EBB4 RVA: 0x3368BB4 Offset: 0x3367BB4
		private static new [Void] ReleaseCoroutine([IntPtr] ptr);
		// VA: 0x7B46D6EC70 RVA: 0x3368C70 Offset: 0x3367C70
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B51EF0
	private class SetupCoroutine : [Object]
	{
		// Fields

		// Methods
		public static new [Void] InvokeMoveNext([IEnumerator] enumerator, [IntPtr] returnValueAddress);
		// VA: 0x7B46D6ECAC RVA: 0x3368CAC Offset: 0x3367CAC
		public static new [Object] InvokeMember([Object] behaviour, [String] name, [Object] variable);
		// VA: 0x7B46D6EDD8 RVA: 0x3368DD8 Offset: 0x3367DD8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705D71D0
	public abstract class CustomYieldInstruction : [Object]
	{
		// Fields

		// Methods
		public abstract new [Boolean] get_keepWaiting();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
		public sealed new [Object] get_Current();
		// VA: 0x7B46D6EECC RVA: 0x3368ECC Offset: 0x3367ECC
		public sealed new [Boolean] MoveNext();
		// VA: 0x7B46D6EED4 RVA: 0x3368ED4 Offset: 0x3367ED4
		public virtual new [Void] Reset();
		// VA: 0x7B46D6EEE0 RVA: 0x3368EE0 Offset: 0x3367EE0
		protected new [Void] .ctor();
		// VA: 0x7B46D6EEE4 RVA: 0x3368EE4 Offset: 0x3367EE4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B52070
	private struct EnumData : [ValueType]
	{
		// Fields
		public [Enum[]] values; // 0x0
		public [Int32[]] flagValues; // 0x8
		public [String[]] displayNames; // 0x10
		public [String[]] names; // 0x18
		public [String[]] tooltip; // 0x20
		public [Boolean] flags; // 0x28
		public [Type] underlyingType; // 0x30
		public [Boolean] unsigned; // 0x38
		public [Boolean] serializable; // 0x39

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B524A0
	private static class EnumDataUtility : [Object]
	{
		// Fields
		private readonly static [Dictionary`2] s_EnumData; // 0x0

		// Methods
		public static new [EnumData] GetCachedEnumData([Type] enumType, [EnumDataUtility]->[CachedType] cachedType, [Func`2] nicifyName);
		// VA: 0x7B46D6EEEC RVA: 0x3368EEC Offset: 0x3367EEC
		internal static new [Void] HandleInspectorOrderAttribute([Type] enumType, ref [EnumData] enumData);
		// VA: 0x7B46D6FEC0 RVA: 0x3369EC0 Offset: 0x3368EC0
		private static new [Boolean] CheckObsoleteAddition([FieldInfo] field, [EnumDataUtility]->[CachedType] cachedType);
		// VA: 0x7B46D6FDA0 RVA: 0x3369DA0 Offset: 0x3368DA0
		private static new [String] EnumTooltipFromEnumField([FieldInfo] field);
		// VA: 0x7B46D7032C RVA: 0x336A32C Offset: 0x336932C
		private static new [String] EnumNameFromEnumField([FieldInfo] field, [Func`2] nicifyName);
		// VA: 0x7B46D70464 RVA: 0x336A464 Offset: 0x3369464
		private static new [Void] .cctor();
		// VA: 0x7B46D70680 RVA: 0x336A680 Offset: 0x3369680
		internal static new [String] <EnumNameFromEnumField>g__NicifyName|8_0(ref [EnumDataUtility]->[<>c__DisplayClass8_0] );
		// VA: 0x7B46D70630 RVA: 0x336A630 Offset: 0x3369630

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B521F0
		public enum CachedType : [Int32]
		{
			ExcludeObsolete = 0,
			IncludeObsoleteExceptErrors = 1,
			IncludeAllObsolete = 2
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B52620
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [EnumDataUtility]->[<>c] <>9 { get; set; }
			public readonly static [EnumDataUtility]->[<>c] <>9; // 0x0
			// public static [Func`2] <>9__2_5 { get; set; }
			public static [Func`2] <>9__2_5; // 0x8
			// public static [Func`2] <>9__2_1 { get; set; }
			public static [Func`2] <>9__2_1; // 0x10
			// public static [Func`2] <>9__2_2 { get; set; }
			public static [Func`2] <>9__2_2; // 0x18
			// public static [Func`2] <>9__2_3 { get; set; }
			public static [Func`2] <>9__2_3; // 0x20
			// public static [Func`2] <>9__2_4 { get; set; }
			public static [Func`2] <>9__2_4; // 0x28

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D7070C RVA: 0x336A70C Offset: 0x336970C
			public new [Void] .ctor();
			// VA: 0x7B46D70768 RVA: 0x336A768 Offset: 0x3369768
			internal new [Int32] <GetCachedEnumData>b__2_5([FieldInfo] f);
			// VA: 0x7B46D70770 RVA: 0x336A770 Offset: 0x3369770
			internal new [String] <GetCachedEnumData>b__2_1([FieldInfo] f);
			// VA: 0x7B46D70798 RVA: 0x336A798 Offset: 0x3369798
			internal new [Enum] <GetCachedEnumData>b__2_2([FieldInfo] f);
			// VA: 0x7B46D707EC RVA: 0x336A7EC Offset: 0x33697EC
			internal new [Int32] <GetCachedEnumData>b__2_3([Enum] v);
			// VA: 0x7B46D70880 RVA: 0x336A880 Offset: 0x3369880
			internal new [Int32] <GetCachedEnumData>b__2_4([Enum] v);
			// VA: 0x7B46D708DC RVA: 0x336A8DC Offset: 0x33698DC
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B527A0
		public sealed class <>c__DisplayClass2_0 : [Object]
		{
			// Fields
			public [Func`2] nicifyName; // 0x10

			// Methods
			public new [Void] .ctor();
			// VA: 0x7B46D6FD98 RVA: 0x3369D98 Offset: 0x3368D98
			internal new [String] <GetCachedEnumData>b__0([FieldInfo] f);
			// VA: 0x7B46D70938 RVA: 0x336A938 Offset: 0x3369938
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B52920
		public struct <>c__DisplayClass8_0 : [ValueType]
		{
			// Fields
			public [Func`2] nicifyName; // 0x0
			public [FieldInfo] field; // 0x8

			// Methods
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B52AA0
	public class ExcludeFromObjectFactoryAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D709A0 RVA: 0x336A9A0 Offset: 0x33699A0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B52C50
	private sealed class ExtensionOfNativeClassAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D709A8 RVA: 0x336A9A8 Offset: 0x33699A8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B52E00
	private class FailedToLoadScriptObject : [Object]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708ECA60
	public sealed class GameObject : [Object]
	{
		// Fields

		// Methods
		public static new [GameObject] CreatePrimitive([PrimitiveType] type);
		// VA: 0x7B46D709B0 RVA: 0x336A9B0 Offset: 0x33699B0
		public new [T] GetComponent();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Component] GetComponent([Type] type);
		// VA: 0x7B46D6DD04 RVA: 0x3367D04 Offset: 0x3366D04
		internal new [Void] GetComponentFastPath([Type] type, [IntPtr] oneFurtherThanResultValue);
		// VA: 0x7B46D709EC RVA: 0x336A9EC Offset: 0x33699EC
		internal new [Component] GetComponentByName([String] type);
		// VA: 0x7B46D70A40 RVA: 0x336AA40 Offset: 0x3369A40
		internal new [Component] GetComponentByNameWithCase([String] type, [Boolean] caseSensitive);
		// VA: 0x7B46D70A84 RVA: 0x336AA84 Offset: 0x3369A84
		public new [Component] GetComponent([String] type);
		// VA: 0x7B46D70AD8 RVA: 0x336AAD8 Offset: 0x3369AD8
		public new [Component] GetComponentInChildren([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D6DF64 RVA: 0x3367F64 Offset: 0x3366F64
		public new [Component] GetComponentInChildren([Type] type);
		// VA: 0x7B46D70B1C RVA: 0x336AB1C Offset: 0x3369B1C
		public new [T] GetComponentInChildren();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [T] GetComponentInChildren([Boolean] includeInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Component] GetComponentInParent([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D6E1B0 RVA: 0x33681B0 Offset: 0x33671B0
		public new [Component] GetComponentInParent([Type] type);
		// VA: 0x7B46D70B64 RVA: 0x336AB64 Offset: 0x3369B64
		public new [T] GetComponentInParent();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [T] GetComponentInParent([Boolean] includeInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private new [Array] GetComponentsInternal([Type] type, [Boolean] useSearchTypeAsArrayReturnType, [Boolean] recursive, [Boolean] includeInactive, [Boolean] reverse, [Object] resultList);
		// VA: 0x7B46D70BAC RVA: 0x336ABAC Offset: 0x3369BAC
		public new [Component[]] GetComponents([Type] type);
		// VA: 0x7B46D6E3EC RVA: 0x33683EC Offset: 0x33673EC
		public new [T[]] GetComponents();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Void] GetComponents([Type] type, [List`1] results);
		// VA: 0x7B46D70C30 RVA: 0x336AC30 Offset: 0x3369C30
		public new [Void] GetComponents([List`1] results);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Component[]] GetComponentsInChildren([Type] type);
		// VA: 0x7B46D70C94 RVA: 0x336AC94 Offset: 0x3369C94
		public new [Component[]] GetComponentsInChildren([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D6E020 RVA: 0x3368020 Offset: 0x3367020
		public new [T[]] GetComponentsInChildren([Boolean] includeInactive);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Void] GetComponentsInChildren([Boolean] includeInactive, [List`1] results);
		// VA: 0x7B45028ABC RVA: 0x1622ABC Offset: 0x1621ABC
		public new [T[]] GetComponentsInChildren();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Void] GetComponentsInChildren([List`1] results);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Component[]] GetComponentsInParent([Type] type);
		// VA: 0x7B46D70C9C RVA: 0x336AC9C Offset: 0x3369C9C
		public new [Component[]] GetComponentsInParent([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D6E2E0 RVA: 0x33682E0 Offset: 0x33672E0
		public new [Void] GetComponentsInParent([Boolean] includeInactive, [List`1] results);
		// VA: 0x7B45028ABC RVA: 0x1622ABC Offset: 0x1621ABC
		public new [T[]] GetComponentsInParent([Boolean] includeInactive);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [T[]] GetComponentsInParent();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [Boolean] TryGetComponent(out [T] component);
		// VA: 0x7B45027BCC RVA: 0x1621BCC Offset: 0x1620BCC
		public new [Boolean] TryGetComponent([Type] type, out [Component] component);
		// VA: 0x7B46D6DDFC RVA: 0x3367DFC Offset: 0x3366DFC
		internal new [Component] TryGetComponentInternal([Type] type);
		// VA: 0x7B46D70CA4 RVA: 0x336ACA4 Offset: 0x3369CA4
		internal new [Void] TryGetComponentFastPath([Type] type, [IntPtr] oneFurtherThanResultValue);
		// VA: 0x7B46D70D58 RVA: 0x336AD58 Offset: 0x3369D58
		public static new [GameObject] FindWithTag([String] tag);
		// VA: 0x7B46D70DAC RVA: 0x336ADAC Offset: 0x3369DAC
		public new [Void] SendMessageUpwards([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D70E24 RVA: 0x336AE24 Offset: 0x3369E24
		public new [Void] SendMessage([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D70ED8 RVA: 0x336AED8 Offset: 0x3369ED8
		public new [Void] BroadcastMessage([String] methodName, [SendMessageOptions] options);
		// VA: 0x7B46D70F8C RVA: 0x336AF8C Offset: 0x3369F8C
		internal new [Component] AddComponentInternal([String] className);
		// VA: 0x7B46D71040 RVA: 0x336B040 Offset: 0x336A040
		private new [Component] Internal_AddComponentWithType([Type] componentType);
		// VA: 0x7B46D71084 RVA: 0x336B084 Offset: 0x336A084
		public new [Component] AddComponent([Type] componentType);
		// VA: 0x7B46D710C8 RVA: 0x336B0C8 Offset: 0x336A0C8
		public new [T] AddComponent();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Int32] GetComponentCount();
		// VA: 0x7B46D7110C RVA: 0x336B10C Offset: 0x336A10C
		internal new [Component] QueryComponentAtIndex([Int32] index);
		// VA: 0x7B46D71148 RVA: 0x336B148 Offset: 0x336A148
		public new [Component] GetComponentAtIndex([Int32] index);
		// VA: 0x7B46D7118C RVA: 0x336B18C Offset: 0x336A18C
		public new [T] GetComponentAtIndex([Int32] index);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Int32] GetComponentIndex([Component] component);
		// VA: 0x7B46D71260 RVA: 0x336B260 Offset: 0x336A260
		public new [Transform] get_transform();
		// VA: 0x7B46D712A4 RVA: 0x336B2A4 Offset: 0x336A2A4
		public new [Int32] get_layer();
		// VA: 0x7B46D712E0 RVA: 0x336B2E0 Offset: 0x336A2E0
		public new [Void] set_layer([Int32] value);
		// VA: 0x7B46D7131C RVA: 0x336B31C Offset: 0x336A31C
		public new [Boolean] get_active();
		// VA: 0x7B46D71360 RVA: 0x336B360 Offset: 0x336A360
		public new [Void] set_active([Boolean] value);
		// VA: 0x7B46D7139C RVA: 0x336B39C Offset: 0x336A39C
		public new [Void] SetActive([Boolean] value);
		// VA: 0x7B46D713E0 RVA: 0x336B3E0 Offset: 0x336A3E0
		public new [Boolean] get_activeSelf();
		// VA: 0x7B46D71424 RVA: 0x336B424 Offset: 0x336A424
		public new [Boolean] get_activeInHierarchy();
		// VA: 0x7B46D71460 RVA: 0x336B460 Offset: 0x336A460
		public new [Void] SetActiveRecursively([Boolean] state);
		// VA: 0x7B46D7149C RVA: 0x336B49C Offset: 0x336A49C
		public new [Boolean] get_isStatic();
		// VA: 0x7B46D714E0 RVA: 0x336B4E0 Offset: 0x336A4E0
		public new [Void] set_isStatic([Boolean] value);
		// VA: 0x7B46D7151C RVA: 0x336B51C Offset: 0x336A51C
		internal new [Boolean] get_isStaticBatchable();
		// VA: 0x7B46D71560 RVA: 0x336B560 Offset: 0x336A560
		public new [String] get_tag();
		// VA: 0x7B46D6E5AC RVA: 0x33685AC Offset: 0x33675AC
		public new [Void] set_tag([String] value);
		// VA: 0x7B46D6E660 RVA: 0x3368660 Offset: 0x3367660
		public new [Boolean] CompareTag([String] tag);
		// VA: 0x7B46D6E758 RVA: 0x3368758 Offset: 0x3367758
		public static new [GameObject] FindGameObjectWithTag([String] tag);
		// VA: 0x7B46D70DE8 RVA: 0x336ADE8 Offset: 0x3369DE8
		public static new [GameObject[]] FindGameObjectsWithTag([String] tag);
		// VA: 0x7B46D7159C RVA: 0x336B59C Offset: 0x336A59C
		public new [Void] SendMessageUpwards([String] methodName, [Object] value, [SendMessageOptions] options);
		// VA: 0x7B46D70E7C RVA: 0x336AE7C Offset: 0x3369E7C
		public new [Void] SendMessageUpwards([String] methodName, [Object] value);
		// VA: 0x7B46D715D8 RVA: 0x336B5D8 Offset: 0x336A5D8
		public new [Void] SendMessageUpwards([String] methodName);
		// VA: 0x7B46D71630 RVA: 0x336B630 Offset: 0x336A630
		public new [Void] SendMessage([String] methodName, [Object] value, [SendMessageOptions] options);
		// VA: 0x7B46D70F30 RVA: 0x336AF30 Offset: 0x3369F30
		public new [Void] SendMessage([String] methodName, [Object] value);
		// VA: 0x7B46D7167C RVA: 0x336B67C Offset: 0x336A67C
		public new [Void] SendMessage([String] methodName);
		// VA: 0x7B46D716D4 RVA: 0x336B6D4 Offset: 0x336A6D4
		public new [Void] BroadcastMessage([String] methodName, [Object] parameter, [SendMessageOptions] options);
		// VA: 0x7B46D70FE4 RVA: 0x336AFE4 Offset: 0x3369FE4
		public new [Void] BroadcastMessage([String] methodName, [Object] parameter);
		// VA: 0x7B46D71720 RVA: 0x336B720 Offset: 0x336A720
		public new [Void] BroadcastMessage([String] methodName);
		// VA: 0x7B46D71778 RVA: 0x336B778 Offset: 0x336A778
		public new [Void] .ctor([String] name);
		// VA: 0x7B46D717C4 RVA: 0x336B7C4 Offset: 0x336A7C4
		public new [Void] .ctor();
		// VA: 0x7B46D71898 RVA: 0x336B898 Offset: 0x336A898
		public new [Void] .ctor([String] name, [Type[]] components);
		// VA: 0x7B46D7191C RVA: 0x336B91C Offset: 0x336A91C
		private static new [Void] Internal_CreateGameObject([GameObject] self, [String] name);
		// VA: 0x7B46D71854 RVA: 0x336B854 Offset: 0x336A854
		public static new [GameObject] Find([String] name);
		// VA: 0x7B46D71A2C RVA: 0x336BA2C Offset: 0x336AA2C
		private static new [Void] SetGameObjectsActive([IntPtr] instanceIds, [Int32] instanceCount, [Boolean] active);
		// VA: 0x7B46D71A68 RVA: 0x336BA68 Offset: 0x336AA68
		public static new [Void] SetGameObjectsActive([NativeArray`1] instanceIDs, [Boolean] active);
		// VA: 0x7B46D71ABC RVA: 0x336BABC Offset: 0x336AABC
		public static new [Void] SetGameObjectsActive([ReadOnlySpan`1] instanceIDs, [Boolean] active);
		// VA: 0x7B46D71BD4 RVA: 0x336BBD4 Offset: 0x336ABD4
		private static new [Void] InstantiateGameObjects([Int32] sourceInstanceID, [IntPtr] newInstanceIDs, [IntPtr] newTransformInstanceIDs, [Int32] count, [Scene] destinationScene);
		// VA: 0x7B46D71C88 RVA: 0x336BC88 Offset: 0x336AC88
		public static new [Void] InstantiateGameObjects([Int32] sourceInstanceID, [Int32] count, [NativeArray`1] newInstanceIDs, [NativeArray`1] newTransformInstanceIDs, [Scene] destinationScene);
		// VA: 0x7B46D71D64 RVA: 0x336BD64 Offset: 0x336AD64
		public static new [Scene] GetScene([Int32] instanceID);
		// VA: 0x7B46D71F30 RVA: 0x336BF30 Offset: 0x336AF30
		public new [Scene] get_scene();
		// VA: 0x7B46D71FC0 RVA: 0x336BFC0 Offset: 0x336AFC0
		public new [UInt64] get_sceneCullingMask();
		// VA: 0x7B46D72050 RVA: 0x336C050 Offset: 0x336B050
		public new [GameObject] get_gameObject();
		// VA: 0x7B46D7208C RVA: 0x336C08C Offset: 0x336B08C
		private static new [Void] InstantiateGameObjects_Injected([Int32] sourceInstanceID, [IntPtr] newInstanceIDs, [IntPtr] newTransformInstanceIDs, [Int32] count, ref [Scene] destinationScene);
		// VA: 0x7B46D71CF8 RVA: 0x336BCF8 Offset: 0x336ACF8
		private static new [Void] GetScene_Injected([Int32] instanceID, out [Scene] ret);
		// VA: 0x7B46D71F7C RVA: 0x336BF7C Offset: 0x336AF7C
		private new [Void] get_scene_Injected(out [Scene] ret);
		// VA: 0x7B46D7200C RVA: 0x336C00C Offset: 0x336B00C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B52F80
	public sealed class InspectorOrderAttribute : [PropertyAttribute]
	{
		// Fields
		// private [InspectorSort] m_inspectorSort { get; set; }
		private [InspectorSort] <m_inspectorSort>k__BackingField; // 0x14
		// private [InspectorSortDirection] m_sortDirection { get; set; }
		private [InspectorSortDirection] <m_sortDirection>k__BackingField; // 0x18

		// Methods
		internal new [InspectorSort] get_m_inspectorSort();
		// VA: 0x7B46D72090 RVA: 0x336C090 Offset: 0x336B090
		internal new [InspectorSortDirection] get_m_sortDirection();
		// VA: 0x7B46D72098 RVA: 0x336C098 Offset: 0x336B098
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53130
	public enum InspectorSort : [Int32]
	{
		ByName = 0,
		ByValue = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B533E0
	public enum InspectorSortDirection : [Int32]
	{
		Ascending = 0,
		Descending = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53690
	public struct LayerMask : [ValueType]
	{
		// Fields
		private [Int32] m_Mask; // 0x0

		// Methods
		public static new [Int32] op_Implicit([LayerMask] mask);
		// VA: 0x7B46D720A0 RVA: 0x336C0A0 Offset: 0x336B0A0
		public static new [LayerMask] op_Implicit([Int32] intVal);
		// VA: 0x7B46D720A4 RVA: 0x336C0A4 Offset: 0x336B0A4
		public new [Int32] get_value();
		// VA: 0x7B46D720AC RVA: 0x336C0AC Offset: 0x336B0AC
		public static new [Int32] NameToLayer([String] layerName);
		// VA: 0x7B46D720B4 RVA: 0x336C0B4 Offset: 0x336B0B4
		public static new [Int32] GetMask([String[]] layerNames);
		// VA: 0x7B46D720F0 RVA: 0x336C0F0 Offset: 0x336B0F0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53810
	public struct LazyLoadReference`1 : [ValueType]
	{
		// Fields
		private [Int32] m_InstanceID; // 0xFFFFFFFFFFFFFFF0

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53990
	private static class ManagedStreamHelpers : [Object]
	{
		// Fields

		// Methods
		internal static new [Void] ValidateLoadFromStream([Stream] stream);
		// VA: 0x7B46D721F4 RVA: 0x336C1F4 Offset: 0x336B1F4
		internal static new [Void] ManagedStreamRead([Byte[]] buffer, [Int32] offset, [Int32] count, [Stream] stream, [IntPtr] returnValueAddress);
		// VA: 0x7B46D722F8 RVA: 0x336C2F8 Offset: 0x336B2F8
		internal static new [Void] ManagedStreamSeek([Int64] offset, [UInt32] origin, [Stream] stream, [IntPtr] returnValueAddress);
		// VA: 0x7B46D723DC RVA: 0x336C3DC Offset: 0x336B3DC
		internal static new [Void] ManagedStreamLength([Stream] stream, [IntPtr] returnValueAddress);
		// VA: 0x7B46D724B8 RVA: 0x336C4B8 Offset: 0x336B4B8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705DE350
	public class MonoBehaviour : [Behaviour]
	{
		// Fields
		private [CancellationTokenSource] m_CancellationTokenSource; // 0x18

		// Methods
		public new [CancellationToken] get_destroyCancellationToken();
		// VA: 0x7B46D72578 RVA: 0x336C578 Offset: 0x336B578
		private new [Void] RaiseCancellation();
		// VA: 0x7B46D7264C RVA: 0x336C64C Offset: 0x336B64C
		public new [Boolean] IsInvoking();
		// VA: 0x7B46D72660 RVA: 0x336C660 Offset: 0x336B660
		public new [Void] CancelInvoke();
		// VA: 0x7B46D726D8 RVA: 0x336C6D8 Offset: 0x336B6D8
		public new [Void] Invoke([String] methodName, [Single] time);
		// VA: 0x7B46D72750 RVA: 0x336C750 Offset: 0x336B750
		public new [Void] InvokeRepeating([String] methodName, [Single] time, [Single] repeatRate);
		// VA: 0x7B46D72804 RVA: 0x336C804 Offset: 0x336B804
		public new [Void] CancelInvoke([String] methodName);
		// VA: 0x7B46D72934 RVA: 0x336C934 Offset: 0x336B934
		public new [Boolean] IsInvoking([String] methodName);
		// VA: 0x7B46D729BC RVA: 0x336C9BC Offset: 0x336B9BC
		public new [Coroutine] StartCoroutine([String] methodName);
		// VA: 0x7B46D72A44 RVA: 0x336CA44 Offset: 0x336BA44
		public new [Coroutine] StartCoroutine([String] methodName, [Object] value);
		// VA: 0x7B46D72A4C RVA: 0x336CA4C Offset: 0x336BA4C
		public new [Coroutine] StartCoroutine([IEnumerator] routine);
		// VA: 0x7B46D72BE8 RVA: 0x336CBE8 Offset: 0x336BBE8
		public new [Coroutine] StartCoroutine_Auto([IEnumerator] routine);
		// VA: 0x7B46D72D1C RVA: 0x336CD1C Offset: 0x336BD1C
		public new [Void] StopCoroutine([IEnumerator] routine);
		// VA: 0x7B46D72D20 RVA: 0x336CD20 Offset: 0x336BD20
		public new [Void] StopCoroutine([Coroutine] routine);
		// VA: 0x7B46D72E54 RVA: 0x336CE54 Offset: 0x336BE54
		public new [Void] StopCoroutine([String] methodName);
		// VA: 0x7B46D72F88 RVA: 0x336CF88 Offset: 0x336BF88
		public new [Void] StopAllCoroutines();
		// VA: 0x7B46D72FCC RVA: 0x336CFCC Offset: 0x336BFCC
		public new [Boolean] get_useGUILayout();
		// VA: 0x7B46D73008 RVA: 0x336D008 Offset: 0x336C008
		public new [Void] set_useGUILayout([Boolean] value);
		// VA: 0x7B46D73044 RVA: 0x336D044 Offset: 0x336C044
		public static new [Void] print([Object] message);
		// VA: 0x7B46D73088 RVA: 0x336D088 Offset: 0x336C088
		private static new [Void] Internal_CancelInvokeAll([MonoBehaviour] self);
		// VA: 0x7B46D72714 RVA: 0x336C714 Offset: 0x336B714
		private static new [Boolean] Internal_IsInvokingAll([MonoBehaviour] self);
		// VA: 0x7B46D7269C RVA: 0x336C69C Offset: 0x336B69C
		private static new [Void] InvokeDelayed([MonoBehaviour] self, [String] methodName, [Single] time, [Single] repeatRate);
		// VA: 0x7B46D727A8 RVA: 0x336C7A8 Offset: 0x336B7A8
		private static new [Void] CancelInvoke([MonoBehaviour] self, [String] methodName);
		// VA: 0x7B46D72978 RVA: 0x336C978 Offset: 0x336B978
		private static new [Boolean] IsInvoking([MonoBehaviour] self, [String] methodName);
		// VA: 0x7B46D72A00 RVA: 0x336CA00 Offset: 0x336BA00
		private static new [Boolean] IsObjectMonoBehaviour([Object] obj);
		// VA: 0x7B46D72B58 RVA: 0x336CB58 Offset: 0x336BB58
		private new [Coroutine] StartCoroutineManaged([String] methodName, [Object] value);
		// VA: 0x7B46D72B94 RVA: 0x336CB94 Offset: 0x336BB94
		private new [Coroutine] StartCoroutineManaged2([IEnumerator] enumerator);
		// VA: 0x7B46D72CD8 RVA: 0x336CCD8 Offset: 0x336BCD8
		private new [Void] StopCoroutineManaged([Coroutine] routine);
		// VA: 0x7B46D72F44 RVA: 0x336CF44 Offset: 0x336BF44
		private new [Void] StopCoroutineFromEnumeratorManaged([IEnumerator] routine);
		// VA: 0x7B46D72E10 RVA: 0x336CE10 Offset: 0x336BE10
		internal new [String] GetScriptClassName();
		// VA: 0x7B46D730E0 RVA: 0x336D0E0 Offset: 0x336C0E0
		private new [Void] OnCancellationTokenCreated();
		// VA: 0x7B46D72610 RVA: 0x336C610 Offset: 0x336B610
		public new [Void] .ctor();
		// VA: 0x7B46D7311C RVA: 0x336D11C Offset: 0x336C11C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093C950
	private sealed class NoAllocHelpers : [Object]
	{
		// Fields

		// Methods
		public static new [Void] ResizeList([List`1] list, [Int32] size);
		// VA: 0x7B4503B3D4 RVA: 0x16353D4 Offset: 0x16343D4
		public static new [Void] EnsureListElemCount([List`1] list, [Int32] count);
		// VA: 0x7B4503B3D4 RVA: 0x16353D4 Offset: 0x16343D4
		public static new [Int32] SafeLength([Array] values);
		// VA: 0x7B46D73120 RVA: 0x336D120 Offset: 0x336C120
		public static new [Int32] SafeLength([List`1] values);
		// VA: 0x7B4503023C RVA: 0x162A23C Offset: 0x162923C
		public static new [T[]] ExtractArrayFromListT([List`1] list);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		internal static new [Void] Internal_ResizeList([Object] list, [Int32] size);
		// VA: 0x7B46D73130 RVA: 0x336D130 Offset: 0x336C130
		public static new [Array] ExtractArrayFromList([Object] list);
		// VA: 0x7B46D73174 RVA: 0x336D174 Offset: 0x336C174
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53B10
	public struct RangeInt : [ValueType]
	{
		// Fields
		public [Int32] start; // 0x0
		public [Int32] length; // 0x4

		// Methods
		public new [Int32] get_end();
		// VA: 0x7B46D731B0 RVA: 0x336D1B0 Offset: 0x336C1B0
		public new [Void] .ctor([Int32] start, [Int32] length);
		// VA: 0x7B46D731BC RVA: 0x336D1BC Offset: 0x336C1BC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B53C90
	public enum RuntimeInitializeLoadType : [Int32]
	{
		AfterSceneLoad = 0,
		BeforeSceneLoad = 1,
		AfterAssembliesLoaded = 2,
		BeforeSplashScreen = 3,
		SubsystemRegistration = 4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58030
	public class RuntimeInitializeOnLoadMethodAttribute : [PreserveAttribute]
	{
		// Fields
		private [Int32] m_LoadType; // enum: [RuntimeInitializeLoadType], 0x10

		// Methods
		public new [Void] .ctor([RuntimeInitializeLoadType] loadType);
		// VA: 0x7B46D731C4 RVA: 0x336D1C4 Offset: 0x336C1C4
		private new [Void] set_loadType([RuntimeInitializeLoadType] value);
		// VA: 0x7B46D731EC RVA: 0x336D1EC Offset: 0x336C1EC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708EC5E0
	public class ScriptableObject : [Object]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D731F4 RVA: 0x336D1F4 Offset: 0x336C1F4
		public static new [ScriptableObject] CreateInstance([Type] type);
		// VA: 0x7B46D732B0 RVA: 0x336D2B0 Offset: 0x336C2B0
		public static new [T] CreateInstance();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] CreateScriptableObject([ScriptableObject] self);
		// VA: 0x7B46D73274 RVA: 0x336D274 Offset: 0x336C274
		internal static new [ScriptableObject] CreateScriptableObjectInstanceFromType([Type] type, [Boolean] applyDefaultsAndReset);
		// VA: 0x7B46D732F0 RVA: 0x336D2F0 Offset: 0x336C2F0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58390
	private class ScriptingRuntime : [Object]
	{
		// Fields

		// Methods
		public static new [String[]] GetAllUserAssemblies();
		// VA: 0x7B46D73334 RVA: 0x336D334 Offset: 0x336C334
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58690
	private class ScriptingUtility : [Object]
	{
		// Fields

		// Methods
		private static new [Boolean] IsManagedCodeWorking();
		// VA: 0x7B46D7335C RVA: 0x336D35C Offset: 0x336C35C

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B58510
		public struct TestClass : [ValueType]
		{
			// Fields
			public [Int32] value; // 0x0

			// Methods
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58810
	public class SelectionBaseAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D73364 RVA: 0x336D364 Offset: 0x336C364
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B589C0
	public static class StackTraceUtility : [Object]
	{
		// Fields
		private static [String] projectFolder; // 0x0

		// Methods
		internal static new [Void] SetProjectFolder([String] folder);
		// VA: 0x7B46D7336C RVA: 0x336D36C Offset: 0x336C36C
		public static new [String] ExtractStackTrace();
		// VA: 0x7B46D73448 RVA: 0x336D448 Offset: 0x336C448
		internal static new [Void] ExtractStringFromExceptionInternal([Object] exceptiono, out [String] message, out [String] stackTrace);
		// VA: 0x7B46D73CB0 RVA: 0x336DCB0 Offset: 0x336CCB0
		internal static new [String] ExtractFormattedStackTrace([StackTrace] stackTrace);
		// VA: 0x7B46D735A4 RVA: 0x336D5A4 Offset: 0x336C5A4
		private static new [Void] .cctor();
		// VA: 0x7B46D7400C RVA: 0x336E00C Offset: 0x336D00C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58B40
	public class UnityException : [Exception]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D7406C RVA: 0x336E06C Offset: 0x336D06C
		public new [Void] .ctor([String] message);
		// VA: 0x7B46D728BC RVA: 0x336C8BC Offset: 0x336B8BC
		protected new [Void] .ctor([SerializationInfo] info, [StreamingContext] context);
		// VA: 0x7B46D740EC RVA: 0x336E0EC Offset: 0x336D0EC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B58D60
	public class MissingComponentException : [Exception]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D7416C RVA: 0x336E16C Offset: 0x336D16C
		public new [Void] .ctor([String] message);
		// VA: 0x7B46D741EC RVA: 0x336E1EC Offset: 0x336D1EC
		protected new [Void] .ctor([SerializationInfo] info, [StreamingContext] context);
		// VA: 0x7B46D74264 RVA: 0x336E264 Offset: 0x336D264
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7096D160
	public class TextAsset : [Object]
	{
		// Fields

		// Methods
		public new [Byte[]] get_bytes();
		// VA: 0x7B46D742E4 RVA: 0x336E2E4 Offset: 0x336D2E4
		private new [Byte[]] GetPreviewBytes([Int32] maxByteCount);
		// VA: 0x7B46D74320 RVA: 0x336E320 Offset: 0x336D320
		private static new [Void] Internal_CreateInstance([TextAsset] self, [String] text);
		// VA: 0x7B46D74364 RVA: 0x336E364 Offset: 0x336D364
		private new [IntPtr] GetDataPtr();
		// VA: 0x7B46D743A8 RVA: 0x336E3A8 Offset: 0x336D3A8
		private new [Int64] GetDataSize();
		// VA: 0x7B46D743E4 RVA: 0x336E3E4 Offset: 0x336D3E4
		public new [String] get_text();
		// VA: 0x7B46D74420 RVA: 0x336E420 Offset: 0x336D420
		public new [Int64] get_dataSize();
		// VA: 0x7B46D74738 RVA: 0x336E738 Offset: 0x336D738
		public override new [String] ToString();
		// VA: 0x7B46D74774 RVA: 0x336E774 Offset: 0x336D774
		public new [Void] .ctor();
		// VA: 0x7B46D74778 RVA: 0x336E778 Offset: 0x336D778
		public new [Void] .ctor([String] text);
		// VA: 0x7B46D74830 RVA: 0x336E830 Offset: 0x336D830
		internal new [Void] .ctor([TextAsset]->[CreateOptions] options, [String] text);
		// VA: 0x7B46D74784 RVA: 0x336E784 Offset: 0x336D784
		public new [NativeArray`1] GetData();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		internal new [String] GetPreview([Int32] maxChars);
		// VA: 0x7B46D7483C RVA: 0x336E83C Offset: 0x336D83C
		internal static new [String] DecodeString([Byte[]] bytes);
		// VA: 0x7B46D744B0 RVA: 0x336E4B0 Offset: 0x336D4B0

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B58F80
		private enum CreateOptions : [Int32]
		{
			None = 0,
			CreateNativeObject = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B59230
		public static class EncodingUtility : [Object]
		{
			// Fields
			public readonly static [KeyValuePair`2[]] encodingLookup; // 0x0
			public readonly static [Encoding] targetEncoding; // 0x8

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D74884 RVA: 0x336E884 Offset: 0x336D884
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B593B0
	public class TrackedReference : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B596B0
	private sealed class UnhandledExceptionHandler : [Object]
	{
		// Fields

		// Methods
		private static new [Void] RegisterUECatcher();
		// VA: 0x7B46D74BFC RVA: 0x336EBFC Offset: 0x336DBFC

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B59530
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [UnhandledExceptionHandler]->[<>c] <>9 { get; set; }
			public readonly static [UnhandledExceptionHandler]->[<>c] <>9; // 0x0
			// public static [UnhandledExceptionEventHandler] <>9__0_0 { get; set; }
			public static [UnhandledExceptionEventHandler] <>9__0_0; // 0x8

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D74CF0 RVA: 0x336ECF0 Offset: 0x336DCF0
			public new [Void] .ctor();
			// VA: 0x7B46D74D4C RVA: 0x336ED4C Offset: 0x336DD4C
			internal new [Void] <RegisterUECatcher>b__0_0([Object] sender, [UnhandledExceptionEventArgs] e);
			// VA: 0x7B46D74D54 RVA: 0x336ED54 Offset: 0x336DD54
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B59830
	public enum HideFlags : [Int32]
	{
		None = 0,
		HideInHierarchy = 1,
		HideInInspector = 2,
		DontSaveInEditor = 4,
		NotEditable = 8,
		DontSaveInBuild = 16,
		DontUnloadUnusedAsset = 32,
		DontSave = 52,
		HideAndDontSave = 61
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093CC70
	public enum FindObjectsSortMode : [Int32]
	{
		None = 0,
		InstanceID = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093CF20
	public enum FindObjectsInactive : [Int32]
	{
		Exclude = 0,
		Include = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705DE7D0
	public class Object : [Object]
	{
		// Fields
		private [IntPtr] m_CachedPtr; // 0x10
		public static [Int32] OffsetOfInstanceIDInCPlusPlusObject; // 0x0
		private const static [String] objectIsNullMessage; // 0x0
		private const static [String] cloneDestroyedMessage; // 0x0

		// Methods
		public new [Int32] GetInstanceID();
		// VA: 0x7B46D74E08 RVA: 0x336EE08 Offset: 0x336DE08
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D74F48 RVA: 0x336EF48 Offset: 0x336DF48
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D74F50 RVA: 0x336EF50 Offset: 0x336DF50
		public static new [Boolean] op_Implicit([Object] exists);
		// VA: 0x7B46D75158 RVA: 0x336F158 Offset: 0x336E158
		private static new [Boolean] CompareBaseObjects([Object] lhs, [Object] rhs);
		// VA: 0x7B46D750B0 RVA: 0x336F0B0 Offset: 0x336E0B0
		private new [Void] EnsureRunningOnMainThread();
		// VA: 0x7B46D751DC RVA: 0x336F1DC Offset: 0x336E1DC
		private static new [Boolean] IsNativeObjectAlive([Object] o);
		// VA: 0x7B46D751BC RVA: 0x336F1BC Offset: 0x336E1BC
		private new [IntPtr] GetCachedPtr();
		// VA: 0x7B46D752C0 RVA: 0x336F2C0 Offset: 0x336E2C0
		public new [String] get_name();
		// VA: 0x7B46D752C8 RVA: 0x336F2C8 Offset: 0x336E2C8
		public new [Void] set_name([String] value);
		// VA: 0x7B46D75378 RVA: 0x336F378 Offset: 0x336E378
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Transform] parent);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Transform] parent, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count, [Transform] parent);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count, [ReadOnlySpan`1] positions, [ReadOnlySpan`1] rotations);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count, [Transform] parent, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [AsyncInstantiateOperation`1] InstantiateAsync([T] original, [Int32] count, [Transform] parent, [ReadOnlySpan`1] positions, [ReadOnlySpan`1] rotations);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Object] Instantiate([Object] original, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B46D75440 RVA: 0x336F440 Offset: 0x336E440
		public static new [Object] Instantiate([Object] original, [Vector3] position, [Quaternion] rotation, [Transform] parent);
		// VA: 0x7B46D756D4 RVA: 0x336F6D4 Offset: 0x336E6D4
		public static new [Object] Instantiate([Object] original);
		// VA: 0x7B46D75920 RVA: 0x336F920 Offset: 0x336E920
		public static new [Object] Instantiate([Object] original, [Scene] scene);
		// VA: 0x7B46D75A4C RVA: 0x336FA4C Offset: 0x336EA4C
		public static new [Object] Instantiate([Object] original, [Transform] parent);
		// VA: 0x7B46D75BB4 RVA: 0x336FBB4 Offset: 0x336EBB4
		public static new [Object] Instantiate([Object] original, [Transform] parent, [Boolean] instantiateInWorldSpace);
		// VA: 0x7B46D75C1C RVA: 0x336FC1C Offset: 0x336EC1C
		public static new [T] Instantiate([T] original);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] Instantiate([T] original, [Vector3] position, [Quaternion] rotation);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] Instantiate([T] original, [Vector3] position, [Quaternion] rotation, [Transform] parent);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] Instantiate([T] original, [Transform] parent);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] Instantiate([T] original, [Transform] parent, [Boolean] worldPositionStays);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] Destroy([Object] obj, [Single] t);
		// VA: 0x7B46D75DB8 RVA: 0x336FDB8 Offset: 0x336EDB8
		public static new [Void] Destroy([Object] obj);
		// VA: 0x7B46D75E04 RVA: 0x336FE04 Offset: 0x336EE04
		public static new [Void] DestroyImmediate([Object] obj, [Boolean] allowDestroyingAssets);
		// VA: 0x7B46D75E7C RVA: 0x336FE7C Offset: 0x336EE7C
		public static new [Void] DestroyImmediate([Object] obj);
		// VA: 0x7B46D75EC0 RVA: 0x336FEC0 Offset: 0x336EEC0
		public static new [Object[]] FindObjectsOfType([Type] type);
		// VA: 0x7B46D75F38 RVA: 0x336FF38 Offset: 0x336EF38
		public static new [Object[]] FindObjectsOfType([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D75FB0 RVA: 0x336FFB0 Offset: 0x336EFB0
		public static new [Object[]] FindObjectsByType([Type] type, [FindObjectsSortMode] sortMode);
		// VA: 0x7B46D75FF4 RVA: 0x336FFF4 Offset: 0x336EFF4
		public static new [Object[]] FindObjectsByType([Type] type, [FindObjectsInactive] findObjectsInactive, [FindObjectsSortMode] sortMode);
		// VA: 0x7B46D7607C RVA: 0x337007C Offset: 0x336F07C
		public static new [Void] DontDestroyOnLoad([Object] target);
		// VA: 0x7B46D760D0 RVA: 0x33700D0 Offset: 0x336F0D0
		public new [HideFlags] get_hideFlags();
		// VA: 0x7B46D7610C RVA: 0x337010C Offset: 0x336F10C
		public new [Void] set_hideFlags([HideFlags] value);
		// VA: 0x7B46D76148 RVA: 0x3370148 Offset: 0x336F148
		public static new [Void] DestroyObject([Object] obj, [Single] t);
		// VA: 0x7B46D7618C RVA: 0x337018C Offset: 0x336F18C
		public static new [Void] DestroyObject([Object] obj);
		// VA: 0x7B46D76210 RVA: 0x3370210 Offset: 0x336F210
		public static new [Object[]] FindSceneObjectsOfType([Type] type);
		// VA: 0x7B46D76288 RVA: 0x3370288 Offset: 0x336F288
		public static new [Object[]] FindObjectsOfTypeIncludingAssets([Type] type);
		// VA: 0x7B46D762DC RVA: 0x33702DC Offset: 0x336F2DC
		public static new [T[]] FindObjectsOfType();
		// VA: 0x7B45034C64 RVA: 0x162EC64 Offset: 0x162DC64
		public static new [T[]] FindObjectsByType([FindObjectsSortMode] sortMode);
		// VA: 0x7B45034E40 RVA: 0x162EE40 Offset: 0x162DE40
		public static new [T[]] FindObjectsOfType([Boolean] includeInactive);
		// VA: 0x7B45034DD0 RVA: 0x162EDD0 Offset: 0x162DDD0
		public static new [T[]] FindObjectsByType([FindObjectsInactive] findObjectsInactive, [FindObjectsSortMode] sortMode);
		// VA: 0x7B45034E78 RVA: 0x162EE78 Offset: 0x162DE78
		public static new [T] FindObjectOfType();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] FindObjectOfType([Boolean] includeInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] FindFirstObjectByType();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] FindAnyObjectByType();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] FindFirstObjectByType([FindObjectsInactive] findObjectsInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] FindAnyObjectByType([FindObjectsInactive] findObjectsInactive);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Object[]] FindObjectsOfTypeAll([Type] type);
		// VA: 0x7B46D76318 RVA: 0x3370318 Offset: 0x336F318
		private static new [Void] CheckNullArgument([Object] arg, [String] message);
		// VA: 0x7B46D755F0 RVA: 0x336F5F0 Offset: 0x336E5F0
		public static new [Object] FindObjectOfType([Type] type);
		// VA: 0x7B46D7631C RVA: 0x337031C Offset: 0x336F31C
		public static new [Object] FindFirstObjectByType([Type] type);
		// VA: 0x7B46D763B4 RVA: 0x33703B4 Offset: 0x336F3B4
		public static new [Object] FindAnyObjectByType([Type] type);
		// VA: 0x7B46D76458 RVA: 0x3370458 Offset: 0x336F458
		public static new [Object] FindObjectOfType([Type] type, [Boolean] includeInactive);
		// VA: 0x7B46D764FC RVA: 0x33704FC Offset: 0x336F4FC
		public static new [Object] FindFirstObjectByType([Type] type, [FindObjectsInactive] findObjectsInactive);
		// VA: 0x7B46D765A0 RVA: 0x33705A0 Offset: 0x336F5A0
		public static new [Object] FindAnyObjectByType([Type] type, [FindObjectsInactive] findObjectsInactive);
		// VA: 0x7B46D76650 RVA: 0x3370650 Offset: 0x336F650
		public override new [String] ToString();
		// VA: 0x7B46D76700 RVA: 0x3370700 Offset: 0x336F700
		public static new [Boolean] op_Equality([Object] x, [Object] y);
		// VA: 0x7B46D7504C RVA: 0x336F04C Offset: 0x336E04C
		public static new [Boolean] op_Inequality([Object] x, [Object] y);
		// VA: 0x7B46D70CE8 RVA: 0x336ACE8 Offset: 0x3369CE8
		private static new [Int32] GetOffsetOfInstanceIDInCPlusPlusObject();
		// VA: 0x7B46D74F20 RVA: 0x336EF20 Offset: 0x336DF20
		private static new [Boolean] CurrentThreadIsMainThread();
		// VA: 0x7B46D75298 RVA: 0x336F298 Offset: 0x336E298
		private static new [Object] Internal_CloneSingle([Object] data);
		// VA: 0x7B46D75A10 RVA: 0x336FA10 Offset: 0x336EA10
		private static new [Object] Internal_CloneSingleWithScene([Object] data, [Scene] scene);
		// VA: 0x7B46D75B2C RVA: 0x336FB2C Offset: 0x336EB2C
		private static new [Object] Internal_CloneSingleWithParent([Object] data, [Transform] parent, [Boolean] worldPositionStays);
		// VA: 0x7B46D75D64 RVA: 0x336FD64 Offset: 0x336ED64
		private static new [AsyncInstantiateOperation] Internal_InstantiateAsyncWithParent([Object] original, [Int32] count, [Transform] parent, [IntPtr] positions, [Int32] positionsCount, [IntPtr] rotations, [Int32] rotationsCount);
		// VA: 0x7B46D767F4 RVA: 0x33707F4 Offset: 0x336F7F4
		private static new [Object] Internal_InstantiateSingle([Object] data, [Vector3] pos, [Quaternion] rot);
		// VA: 0x7B46D7563C RVA: 0x336F63C Offset: 0x336E63C
		private static new [Object] Internal_InstantiateSingleWithParent([Object] data, [Transform] parent, [Vector3] pos, [Quaternion] rot);
		// VA: 0x7B46D75878 RVA: 0x336F878 Offset: 0x336E878
		private static new [String] ToString([Object] obj);
		// VA: 0x7B46D76774 RVA: 0x3370774 Offset: 0x336F774
		private static new [String] GetName([Object] obj);
		// VA: 0x7B46D7533C RVA: 0x336F33C Offset: 0x336E33C
		internal static new [Boolean] IsPersistent([Object] obj);
		// VA: 0x7B46D76928 RVA: 0x3370928 Offset: 0x336F928
		private static new [Void] SetName([Object] obj, [String] name);
		// VA: 0x7B46D753FC RVA: 0x336F3FC Offset: 0x336E3FC
		internal static new [Boolean] DoesObjectWithInstanceIDExist([Int32] instanceID);
		// VA: 0x7B46D76964 RVA: 0x3370964 Offset: 0x336F964
		internal static new [Object] FindObjectFromInstanceID([Int32] instanceID);
		// VA: 0x7B46D769A0 RVA: 0x33709A0 Offset: 0x336F9A0
		internal static new [Object] ForceLoadFromInstanceID([Int32] instanceID);
		// VA: 0x7B46D769DC RVA: 0x33709DC Offset: 0x336F9DC
		internal new [Void] MarkDirty();
		// VA: 0x7B46D76A18 RVA: 0x3370A18 Offset: 0x336FA18
		public new [Void] .ctor();
		// VA: 0x7B46D6EBA4 RVA: 0x3368BA4 Offset: 0x3367BA4
		private static new [Void] .cctor();
		// VA: 0x7B46D76A54 RVA: 0x3370A54 Offset: 0x336FA54
		private static new [Object] Internal_CloneSingleWithScene_Injected([Object] data, ref [Scene] scene);
		// VA: 0x7B46D767B0 RVA: 0x33707B0 Offset: 0x336F7B0
		private static new [Object] Internal_InstantiateSingle_Injected([Object] data, ref [Vector3] pos, ref [Quaternion] rot);
		// VA: 0x7B46D76878 RVA: 0x3370878 Offset: 0x336F878
		private static new [Object] Internal_InstantiateSingleWithParent_Injected([Object] data, [Transform] parent, ref [Vector3] pos, ref [Quaternion] rot);
		// VA: 0x7B46D768CC RVA: 0x33708CC Offset: 0x336F8CC
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D31EC0
	private sealed class UnitySynchronizationContext : [SynchronizationContext]
	{
		// Fields
		private readonly [List`1] m_AsyncWorkQueue; // 0x18
		private readonly [List`1] m_CurrentFrameWork; // 0x20
		private readonly [Int32] m_MainThreadID; // 0x28
		private [Int32] m_TrackedCount; // 0x2C

		// Methods
		private new [Void] .ctor([Int32] mainThreadID);
		// VA: 0x7B46D76AA0 RVA: 0x3370AA0 Offset: 0x336FAA0
		private new [Void] .ctor([List`1] queue, [Int32] mainThreadID);
		// VA: 0x7B46D76B4C RVA: 0x3370B4C Offset: 0x336FB4C
		public override new [Void] Send([SendOrPostCallback] callback, [Object] state);
		// VA: 0x7B46D76BEC RVA: 0x3370BEC Offset: 0x336FBEC
		public override new [Void] OperationStarted();
		// VA: 0x7B46D76F14 RVA: 0x3370F14 Offset: 0x336FF14
		public override new [Void] OperationCompleted();
		// VA: 0x7B46D76F20 RVA: 0x3370F20 Offset: 0x336FF20
		public override new [Void] Post([SendOrPostCallback] callback, [Object] state);
		// VA: 0x7B46D76F2C RVA: 0x3370F2C Offset: 0x336FF2C
		public override new [SynchronizationContext] CreateCopy();
		// VA: 0x7B46D77090 RVA: 0x3371090 Offset: 0x3370090
		public new [Void] Exec();
		// VA: 0x7B46D770F4 RVA: 0x33710F4 Offset: 0x33700F4
		private new [Boolean] HasPendingTasks();
		// VA: 0x7B46D77380 RVA: 0x3371380 Offset: 0x3370380
		private static new [Void] InitializeSynchronizationContext();
		// VA: 0x7B46D773E0 RVA: 0x33713E0 Offset: 0x33703E0
		private static new [Void] ExecuteTasks();
		// VA: 0x7B46D77458 RVA: 0x3371458 Offset: 0x3370458
		private static new [Boolean] ExecutePendingTasks([Int64] millisecondsTimeout);
		// VA: 0x7B46D774B0 RVA: 0x33714B0 Offset: 0x33704B0

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D31D40
		public struct WorkRequest : [ValueType]
		{
			// Fields
			private readonly [SendOrPostCallback] m_DelagateCallback; // 0x0
			private readonly [Object] m_DelagateState; // 0x8
			private readonly [ManualResetEvent] m_WaitHandle; // 0x10

			// Methods
			public new [Void] .ctor([SendOrPostCallback] callback, [Object] state, [ManualResetEvent] waitHandle);
			// VA: 0x7B46D76F08 RVA: 0x3370F08 Offset: 0x336FF08
			public new [Void] Invoke();
			// VA: 0x7B46D772D4 RVA: 0x33712D4 Offset: 0x33702D4
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D320A0
	public sealed class WaitForEndOfFrame : [YieldInstruction]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D7759C RVA: 0x337159C Offset: 0x337059C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32220
	public sealed class WaitForFixedUpdate : [YieldInstruction]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D323A0
	public sealed class WaitForSeconds : [YieldInstruction]
	{
		// Fields
		public [Single] m_Seconds; // 0x10

		// Methods
		public new [Void] .ctor([Single] seconds);
		// VA: 0x7B46D775A4 RVA: 0x33715A4 Offset: 0x33705A4
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32520
	public class WaitForSecondsRealtime : [CustomYieldInstruction]
	{
		// Fields
		// private [Single] waitTime { get; set; }
		private [Single] <waitTime>k__BackingField; // 0x10
		private [Single] m_WaitUntilTime; // 0x14

		// Methods
		public new [Single] get_waitTime();
		// VA: 0x7B46D775CC RVA: 0x33715CC Offset: 0x33705CC
		public new [Void] set_waitTime([Single] value);
		// VA: 0x7B46D775D4 RVA: 0x33715D4 Offset: 0x33705D4
		public override new [Boolean] get_keepWaiting();
		// VA: 0x7B46D775DC RVA: 0x33715DC Offset: 0x33705DC
		public new [Void] .ctor([Single] time);
		// VA: 0x7B46D776A0 RVA: 0x33716A0 Offset: 0x33706A0
		public override new [Void] Reset();
		// VA: 0x7B46D776D0 RVA: 0x33716D0 Offset: 0x33706D0
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D326F0
	public sealed class WaitUntil : [CustomYieldInstruction]
	{
		// Fields
		private [Func`1] m_Predicate; // 0x10

		// Methods
		public override new [Boolean] get_keepWaiting();
		// VA: 0x7B46D776DC RVA: 0x33716DC Offset: 0x33706DC
		public new [Void] .ctor([Func`1] predicate);
		// VA: 0x7B46D7770C RVA: 0x337170C Offset: 0x337070C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B4B8A0
	public class YieldInstruction : [Object]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D6C654 RVA: 0x3366654 Offset: 0x3365654
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D328C0
	public sealed class SerializeField : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D77734 RVA: 0x3371734 Offset: 0x3370734
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32A70
	public sealed class SerializeReference : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32C20
	public sealed class PreferBinarySerialization : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32DD0
	public abstract interface ISerializationCallbackReceiver
	{
		// Fields

		// Methods
		public abstract new [Void] OnBeforeSerialize();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public abstract new [Void] OnAfterDeserialize();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D32F10
	public sealed class ComputeBuffer : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D33090
	public sealed class ComputeShader : [Object]
	{
		// Fields

		// Methods
		public new [Int32] FindKernel([String] name);
		// VA: 0x7B46D7773C RVA: 0x337173C Offset: 0x337073C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D33210
	public enum MaterialPropertyType : [Int32]
	{
		Float = 0,
		Int = 1,
		Vector = 2,
		Matrix = 3,
		Texture = 4,
		ConstantBuffer = 5,
		ComputeBuffer = 6
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D334C0
	private enum DisableBatchingType : [Int32]
	{
		False = 0,
		True = 1,
		WhenLODFading = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D33770
	private class LowerResBlitTexture : [Object]
	{
		// Fields

		// Methods
		internal new [Void] LowerResBlitTextureDontStripMe();
		// VA: 0x7B46D77780 RVA: 0x3371780 Offset: 0x3370780
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D338F0
	private class PreloadData : [Object]
	{
		// Fields

		// Methods
		internal new [Void] PreloadDataDontStripMe();
		// VA: 0x7B46D77784 RVA: 0x3371784 Offset: 0x3370784
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D33A70
	public enum OperatingSystemFamily : [Int32]
	{
		Other = 0,
		MacOSX = 1,
		Windows = 2,
		Linux = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38030
	public enum DeviceType : [Int32]
	{
		Unknown = 0,
		Handheld = 1,
		Console = 2,
		Desktop = 3
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D33D20
	public sealed class SystemInfo : [Object]
	{
		// Fields

		// Methods
		public static new [String] get_operatingSystem();
		// VA: 0x7B46D77788 RVA: 0x3371788 Offset: 0x3370788
		public static new [OperatingSystemFamily] get_operatingSystemFamily();
		// VA: 0x7B46D777D8 RVA: 0x33717D8 Offset: 0x33707D8
		public static new [String] get_processorType();
		// VA: 0x7B46D77828 RVA: 0x3371828 Offset: 0x3370828
		public static new [Int32] get_processorCount();
		// VA: 0x7B46D77878 RVA: 0x3371878 Offset: 0x3370878
		public static new [String] get_deviceUniqueIdentifier();
		// VA: 0x7B46D778C8 RVA: 0x33718C8 Offset: 0x33708C8
		public static new [String] get_deviceName();
		// VA: 0x7B46D77918 RVA: 0x3371918 Offset: 0x3370918
		public static new [String] get_deviceModel();
		// VA: 0x7B46D77968 RVA: 0x3371968 Offset: 0x3370968
		public static new [DeviceType] get_deviceType();
		// VA: 0x7B46D779B8 RVA: 0x33719B8 Offset: 0x33709B8
		public static new [Int32] get_graphicsShaderLevel();
		// VA: 0x7B46D77A08 RVA: 0x3371A08 Offset: 0x3370A08
		public static new [Boolean] get_supports3DTextures();
		// VA: 0x7B46D77A58 RVA: 0x3371A58 Offset: 0x3370A58
		public static new [Boolean] get_supportsComputeShaders();
		// VA: 0x7B46D77AA8 RVA: 0x3371AA8 Offset: 0x3370AA8
		private static new [Boolean] IsValidEnumValue([Enum] value);
		// VA: 0x7B46D77AF8 RVA: 0x3371AF8 Offset: 0x3370AF8
		public static new [Boolean] SupportsRenderTextureFormat([RenderTextureFormat] format);
		// VA: 0x7B46D77B70 RVA: 0x3371B70 Offset: 0x3370B70
		public static new [Boolean] SupportsTextureFormat([TextureFormat] format);
		// VA: 0x7B46D77C80 RVA: 0x3371C80 Offset: 0x3370C80
		public static new [Int32] get_maxTextureSize();
		// VA: 0x7B46D77D90 RVA: 0x3371D90 Offset: 0x3370D90
		internal static new [Int32] get_maxRenderTextureSize();
		// VA: 0x7B46D77DE0 RVA: 0x3371DE0 Offset: 0x3370DE0
		private static new [String] GetOperatingSystem();
		// VA: 0x7B46D777B0 RVA: 0x33717B0 Offset: 0x33707B0
		private static new [OperatingSystemFamily] GetOperatingSystemFamily();
		// VA: 0x7B46D77800 RVA: 0x3371800 Offset: 0x3370800
		private static new [String] GetProcessorType();
		// VA: 0x7B46D77850 RVA: 0x3371850 Offset: 0x3370850
		private static new [Int32] GetProcessorCount();
		// VA: 0x7B46D778A0 RVA: 0x33718A0 Offset: 0x33708A0
		private static new [String] GetDeviceUniqueIdentifier();
		// VA: 0x7B46D778F0 RVA: 0x33718F0 Offset: 0x33708F0
		private static new [String] GetDeviceName();
		// VA: 0x7B46D77940 RVA: 0x3371940 Offset: 0x3370940
		private static new [String] GetDeviceModel();
		// VA: 0x7B46D77990 RVA: 0x3371990 Offset: 0x3370990
		private static new [DeviceType] GetDeviceType();
		// VA: 0x7B46D779E0 RVA: 0x33719E0 Offset: 0x33709E0
		private static new [Int32] GetGraphicsShaderLevel();
		// VA: 0x7B46D77A30 RVA: 0x3371A30 Offset: 0x3370A30
		private static new [Boolean] Supports3DTextures();
		// VA: 0x7B46D77A80 RVA: 0x3371A80 Offset: 0x3370A80
		private static new [Boolean] SupportsComputeShaders();
		// VA: 0x7B46D77AD0 RVA: 0x3371AD0 Offset: 0x3370AD0
		private static new [Boolean] HasRenderTextureNative([RenderTextureFormat] format);
		// VA: 0x7B46D77C44 RVA: 0x3371C44 Offset: 0x3370C44
		private static new [Boolean] SupportsTextureFormatNative([TextureFormat] format);
		// VA: 0x7B46D77D54 RVA: 0x3371D54 Offset: 0x3370D54
		private static new [Int32] GetMaxTextureSize();
		// VA: 0x7B46D77DB8 RVA: 0x3371DB8 Offset: 0x3370DB8
		private static new [Int32] GetMaxRenderTextureSize();
		// VA: 0x7B46D77E08 RVA: 0x3371E08 Offset: 0x3370E08
		public static new [Boolean] IsFormatSupported([GraphicsFormat] format, [FormatUsage] usage);
		// VA: 0x7B46D77E30 RVA: 0x3371E30 Offset: 0x3370E30
		public static new [GraphicsFormat] GetCompatibleFormat([GraphicsFormat] format, [FormatUsage] usage);
		// VA: 0x7B46D77E74 RVA: 0x3371E74 Offset: 0x3370E74
		public static new [GraphicsFormat] GetGraphicsFormat([DefaultFormat] format);
		// VA: 0x7B46D77EB8 RVA: 0x3371EB8 Offset: 0x3370EB8
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D382E0
	private class SystemClock : [Object]
	{
		// Fields
		private readonly static [DateTime] s_Epoch; // 0x0

		// Methods
		public static new [DateTime] get_now();
		// VA: 0x7B46D77EF4 RVA: 0x3371EF4 Offset: 0x3370EF4
		private static new [Void] .cctor();
		// VA: 0x7B46D77F44 RVA: 0x3371F44 Offset: 0x3370F44
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38460
	public class Time : [Object]
	{
		// Fields

		// Methods
		public static new [Single] get_time();
		// VA: 0x7B46D77FC0 RVA: 0x3371FC0 Offset: 0x3370FC0
		public static new [Double] get_timeAsDouble();
		// VA: 0x7B46D77FE8 RVA: 0x3371FE8 Offset: 0x3370FE8
		public static new [Single] get_timeSinceLevelLoad();
		// VA: 0x7B46D78010 RVA: 0x3372010 Offset: 0x3371010
		public static new [Single] get_deltaTime();
		// VA: 0x7B46D78038 RVA: 0x3372038 Offset: 0x3371038
		public static new [Single] get_unscaledTime();
		// VA: 0x7B46D78060 RVA: 0x3372060 Offset: 0x3371060
		public static new [Single] get_unscaledDeltaTime();
		// VA: 0x7B46D78088 RVA: 0x3372088 Offset: 0x3371088
		public static new [Single] get_fixedDeltaTime();
		// VA: 0x7B46D780B0 RVA: 0x33720B0 Offset: 0x33710B0
		public static new [Single] get_smoothDeltaTime();
		// VA: 0x7B46D780D8 RVA: 0x33720D8 Offset: 0x33710D8
		public static new [Single] get_timeScale();
		// VA: 0x7B46D78100 RVA: 0x3372100 Offset: 0x3371100
		public static new [Void] set_timeScale([Single] value);
		// VA: 0x7B46D78128 RVA: 0x3372128 Offset: 0x3371128
		public static new [Int32] get_frameCount();
		// VA: 0x7B46D78160 RVA: 0x3372160 Offset: 0x3371160
		public static new [Single] get_realtimeSinceStartup();
		// VA: 0x7B46D77678 RVA: 0x3371678 Offset: 0x3370678
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D385E0
	private struct TouchScreenKeyboard_InternalConstructorHelperArguments : [ValueType]
	{
		// Fields
		public [UInt32] keyboardType; // 0x0
		public [UInt32] autocorrection; // 0x4
		public [UInt32] multiline; // 0x8
		public [UInt32] secure; // 0xC
		public [UInt32] alert; // 0x10
		public [Int32] characterLimit; // 0x14

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38A10
	public class TouchScreenKeyboard : [Object]
	{
		// Fields
		public [NonSerialized] [IntPtr] m_Ptr; // 0x10
		// private static [Boolean] disableInPlaceEditing { get; set; }
		private static [Boolean] <disableInPlaceEditing>k__BackingField; // 0x0

		// Methods
		private static new [Void] Internal_Destroy([IntPtr] ptr);
		// VA: 0x7B46D78188 RVA: 0x3372188 Offset: 0x3371188
		private new [Void] Destroy();
		// VA: 0x7B46D781C4 RVA: 0x33721C4 Offset: 0x33711C4
		protected override new [Void] Finalize();
		// VA: 0x7B46D78268 RVA: 0x3372268 Offset: 0x3371268
		public new [Void] .ctor([String] text, [TouchScreenKeyboardType] keyboardType, [Boolean] autocorrection, [Boolean] multiline, [Boolean] secure, [Boolean] alert, [String] textPlaceholder, [Int32] characterLimit);
		// VA: 0x7B46D782FC RVA: 0x33722FC Offset: 0x33712FC
		private static new [IntPtr] TouchScreenKeyboard_InternalConstructorHelper(ref [TouchScreenKeyboard_InternalConstructorHelperArguments] arguments, [String] text, [String] textPlaceholder);
		// VA: 0x7B46D78458 RVA: 0x3372458 Offset: 0x3371458
		public static new [Boolean] get_isSupported();
		// VA: 0x7B46D784AC RVA: 0x33724AC Offset: 0x33714AC
		internal static new [Boolean] get_disableInPlaceEditing();
		// VA: 0x7B46D78558 RVA: 0x3372558 Offset: 0x3371558
		public static new [Boolean] get_isInPlaceEditingAllowed();
		// VA: 0x7B46D785A0 RVA: 0x33725A0 Offset: 0x33715A0
		private static new [Boolean] IsInPlaceEditingAllowed();
		// VA: 0x7B46D7860C RVA: 0x337260C Offset: 0x337160C
		internal static new [Boolean] get_isRequiredToForceOpen();
		// VA: 0x7B46D78634 RVA: 0x3372634 Offset: 0x3371634
		private static new [Boolean] IsRequiredToForceOpen();
		// VA: 0x7B46D7865C RVA: 0x337265C Offset: 0x337165C
		public static new [TouchScreenKeyboard] Open([String] text, [TouchScreenKeyboardType] keyboardType, [Boolean] autocorrection, [Boolean] multiline, [Boolean] secure, [Boolean] alert, [String] textPlaceholder, [Int32] characterLimit);
		// VA: 0x7B46D78684 RVA: 0x3372684 Offset: 0x3371684
		public static new [TouchScreenKeyboard] Open([String] text, [TouchScreenKeyboardType] keyboardType, [Boolean] autocorrection, [Boolean] multiline, [Boolean] secure);
		// VA: 0x7B46D7873C RVA: 0x337273C Offset: 0x337173C
		public new [String] get_text();
		// VA: 0x7B46D787C8 RVA: 0x33727C8 Offset: 0x33717C8
		public new [Void] set_text([String] value);
		// VA: 0x7B46D78804 RVA: 0x3372804 Offset: 0x3371804
		public static new [Void] set_hideInput([Boolean] value);
		// VA: 0x7B46D78848 RVA: 0x3372848 Offset: 0x3371848
		public new [Boolean] get_active();
		// VA: 0x7B46D78884 RVA: 0x3372884 Offset: 0x3371884
		public new [Void] set_active([Boolean] value);
		// VA: 0x7B46D788C0 RVA: 0x33728C0 Offset: 0x33718C0
		public new [TouchScreenKeyboard]->[Status] get_status();
		// VA: 0x7B46D78904 RVA: 0x3372904 Offset: 0x3371904
		public new [Void] set_characterLimit([Int32] value);
		// VA: 0x7B46D78940 RVA: 0x3372940 Offset: 0x3371940
		public new [Boolean] get_canGetSelection();
		// VA: 0x7B46D78984 RVA: 0x3372984 Offset: 0x3371984
		public new [Boolean] get_canSetSelection();
		// VA: 0x7B46D789C0 RVA: 0x33729C0 Offset: 0x33719C0
		public new [RangeInt] get_selection();
		// VA: 0x7B46D789FC RVA: 0x33729FC Offset: 0x33719FC
		public new [Void] set_selection([RangeInt] value);
		// VA: 0x7B46D78A8C RVA: 0x3372A8C Offset: 0x3371A8C
		private static new [Void] GetSelection(out [Int32] start, out [Int32] length);
		// VA: 0x7B46D78A48 RVA: 0x3372A48 Offset: 0x3371A48
		private static new [Void] SetSelection([Int32] start, [Int32] length);
		// VA: 0x7B46D78B80 RVA: 0x3372B80 Offset: 0x3371B80

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D38760
		public enum Status : [Int32]
		{
			Visible = 0,
			Done = 1,
			Canceled = 2,
			LostFocus = 3
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A707EDDA0
	public enum TouchScreenKeyboardType : [Int32]
	{
		Default = 0,
		ASCIICapable = 1,
		NumbersAndPunctuation = 2,
		URL = 3,
		NumberPad = 4,
		PhonePad = 5,
		NamePhonePad = 6,
		EmailAddress = 7,
		NintendoNetworkAccount = 8,
		Social = 9,
		Search = 10,
		DecimalPad = 11,
		OneTimeCode = 12
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38B90
	private static class UINumericFieldsUtils : [Object]
	{
		// Fields
		public readonly static [String] k_AllowedCharactersForFloat; // 0x0
		public readonly static [String] k_AllowedCharactersForInt; // 0x8
		public readonly static [String] k_DoubleFieldFormatString; // 0x10
		public readonly static [String] k_FloatFieldFormatString; // 0x18
		public readonly static [String] k_IntFieldFormatString; // 0x20

		// Methods
		public static new [Boolean] TryConvertStringToDouble([String] str, out [Double] value, out [ExpressionEvaluator]->[Expression] expr);
		// VA: 0x7B46D78BC4 RVA: 0x3372BC4 Offset: 0x3371BC4
		public static new [Boolean] TryConvertStringToDouble([String] str, [String] initialValueAsString, out [Double] value);
		// VA: 0x7B46D78D54 RVA: 0x3372D54 Offset: 0x3371D54
		public static new [Boolean] TryConvertStringToFloat([String] str, [String] initialValueAsString, out [Single] value);
		// VA: 0x7B46D78E5C RVA: 0x3372E5C Offset: 0x3371E5C
		public static new [Boolean] TryConvertStringToLong([String] str, out [Int64] value, out [ExpressionEvaluator]->[Expression] expr);
		// VA: 0x7B46D78EF0 RVA: 0x3372EF0 Offset: 0x3371EF0
		public static new [Boolean] TryConvertStringToLong([String] str, [String] initialValueAsString, out [Int64] value);
		// VA: 0x7B46D78F74 RVA: 0x3372F74 Offset: 0x3371F74
		public static new [Boolean] TryConvertStringToULong([String] str, out [UInt64] value, out [ExpressionEvaluator]->[Expression] expr);
		// VA: 0x7B46D79078 RVA: 0x3373078 Offset: 0x3372078
		public static new [Boolean] TryConvertStringToULong([String] str, [String] initialValueAsString, out [UInt64] value);
		// VA: 0x7B46D790FC RVA: 0x33730FC Offset: 0x33720FC
		public static new [Boolean] TryConvertStringToInt([String] str, [String] initialValueAsString, out [Int32] value);
		// VA: 0x7B46D79200 RVA: 0x3373200 Offset: 0x3372200
		public static new [Boolean] TryConvertStringToUInt([String] str, [String] initialValueAsString, out [UInt32] value);
		// VA: 0x7B46D7929C RVA: 0x337329C Offset: 0x337229C
		private static new [Void] .cctor();
		// VA: 0x7B46D79338 RVA: 0x3373338 Offset: 0x3372338
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38D10
	public enum DrivenTransformProperties : [Int32]
	{
		None = 0,
		All = 4294967295,
		AnchoredPositionX = 2,
		AnchoredPositionY = 4,
		AnchoredPositionZ = 8,
		Rotation = 16,
		ScaleX = 32,
		ScaleY = 64,
		ScaleZ = 128,
		AnchorMinX = 256,
		AnchorMinY = 512,
		AnchorMaxX = 1024,
		AnchorMaxY = 2048,
		SizeDeltaX = 4096,
		SizeDeltaY = 8192,
		PivotX = 16384,
		PivotY = 32768,
		AnchoredPosition = 6,
		AnchoredPosition3D = 14,
		Scale = 224,
		AnchorMin = 768,
		AnchorMax = 3072,
		Anchors = 3840,
		SizeDelta = 12288,
		Pivot = 49152
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D38FC0
	public struct DrivenRectTransformTracker : [ValueType]
	{
		// Fields

		// Methods
		public new [Void] Add([Object] driver, [RectTransform] rectTransform, [DrivenTransformProperties] drivenProperties);
		// VA: 0x7B46D79418 RVA: 0x3373418 Offset: 0x3372418
		public new [Void] Clear();
		// VA: 0x7B46D7941C RVA: 0x337341C Offset: 0x337241C
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D393F0
	public sealed class RectTransform : [Transform]
	{
		// Fields
		private static [RectTransform]->[ReapplyDrivenProperties] reapplyDrivenProperties; // 0x0

		// Methods
		public static new [Void] add_reapplyDrivenProperties([RectTransform]->[ReapplyDrivenProperties] value);
		// VA: 0x7B46D79420 RVA: 0x3373420 Offset: 0x3372420
		public static new [Void] remove_reapplyDrivenProperties([RectTransform]->[ReapplyDrivenProperties] value);
		// VA: 0x7B46D794D8 RVA: 0x33734D8 Offset: 0x33724D8
		public new [Rect] get_rect();
		// VA: 0x7B46D79590 RVA: 0x3373590 Offset: 0x3372590
		public new [Vector2] get_anchorMin();
		// VA: 0x7B46D7962C RVA: 0x337362C Offset: 0x337262C
		public new [Void] set_anchorMin([Vector2] value);
		// VA: 0x7B46D796BC RVA: 0x33736BC Offset: 0x33726BC
		public new [Vector2] get_anchorMax();
		// VA: 0x7B46D79748 RVA: 0x3373748 Offset: 0x3372748
		public new [Void] set_anchorMax([Vector2] value);
		// VA: 0x7B46D797D8 RVA: 0x33737D8 Offset: 0x33727D8
		public new [Vector2] get_anchoredPosition();
		// VA: 0x7B46D79864 RVA: 0x3373864 Offset: 0x3372864
		public new [Void] set_anchoredPosition([Vector2] value);
		// VA: 0x7B46D798F4 RVA: 0x33738F4 Offset: 0x33728F4
		public new [Vector2] get_sizeDelta();
		// VA: 0x7B46D79980 RVA: 0x3373980 Offset: 0x3372980
		public new [Void] set_sizeDelta([Vector2] value);
		// VA: 0x7B46D79A10 RVA: 0x3373A10 Offset: 0x3372A10
		public new [Vector2] get_pivot();
		// VA: 0x7B46D79A9C RVA: 0x3373A9C Offset: 0x3372A9C
		public new [Void] set_pivot([Vector2] value);
		// VA: 0x7B46D79B2C RVA: 0x3373B2C Offset: 0x3372B2C
		public new [Vector3] get_anchoredPosition3D();
		// VA: 0x7B46D79BB8 RVA: 0x3373BB8 Offset: 0x3372BB8
		public new [Void] set_anchoredPosition3D([Vector3] value);
		// VA: 0x7B46D79C48 RVA: 0x3373C48 Offset: 0x3372C48
		public new [Vector2] get_offsetMin();
		// VA: 0x7B46D79CCC RVA: 0x3373CCC Offset: 0x3372CCC
		public new [Void] set_offsetMin([Vector2] value);
		// VA: 0x7B46D79D20 RVA: 0x3373D20 Offset: 0x3372D20
		public new [Vector2] get_offsetMax();
		// VA: 0x7B46D79E14 RVA: 0x3373E14 Offset: 0x3372E14
		public new [Void] set_offsetMax([Vector2] value);
		// VA: 0x7B46D79EB4 RVA: 0x3373EB4 Offset: 0x3372EB4
		public new [Object] get_drivenByObject();
		// VA: 0x7B46D79FB0 RVA: 0x3373FB0 Offset: 0x3372FB0
		internal new [Void] set_drivenByObject([Object] value);
		// VA: 0x7B46D79FEC RVA: 0x3373FEC Offset: 0x3372FEC
		internal new [DrivenTransformProperties] get_drivenProperties();
		// VA: 0x7B46D7A030 RVA: 0x3374030 Offset: 0x3373030
		internal new [Void] set_drivenProperties([DrivenTransformProperties] value);
		// VA: 0x7B46D7A06C RVA: 0x337406C Offset: 0x337306C
		public new [Void] ForceUpdateRectTransforms();
		// VA: 0x7B46D7A0B0 RVA: 0x33740B0 Offset: 0x33730B0
		public new [Void] GetLocalCorners([Vector3[]] fourCornersArray);
		// VA: 0x7B46D7A0EC RVA: 0x33740EC Offset: 0x33730EC
		public new [Void] GetWorldCorners([Vector3[]] fourCornersArray);
		// VA: 0x7B46D7A1CC RVA: 0x33741CC Offset: 0x33731CC
		public new [Void] SetInsetAndSizeFromParentEdge([RectTransform]->[Edge] edge, [Single] inset, [Single] size);
		// VA: 0x7B46D7A3A8 RVA: 0x33743A8 Offset: 0x33733A8
		public new [Void] SetSizeWithCurrentAnchors([RectTransform]->[Axis] axis, [Single] size);
		// VA: 0x7B46D7A4B8 RVA: 0x33744B8 Offset: 0x33734B8
		internal static new [Void] SendReapplyDrivenProperties([RectTransform] driven);
		// VA: 0x7B46D7A6B4 RVA: 0x33746B4 Offset: 0x33736B4
		internal new [Rect] GetRectInParentSpace();
		// VA: 0x7B46D7A720 RVA: 0x3374720 Offset: 0x3373720
		private new [Vector2] GetParentSize();
		// VA: 0x7B46D7A5B0 RVA: 0x33745B0 Offset: 0x33735B0
		public new [Void] .ctor();
		// VA: 0x7B46D7A95C RVA: 0x337495C Offset: 0x337395C
		private new [Void] get_rect_Injected(out [Rect] ret);
		// VA: 0x7B46D795E8 RVA: 0x33735E8 Offset: 0x33725E8
		private new [Void] get_anchorMin_Injected(out [Vector2] ret);
		// VA: 0x7B46D79678 RVA: 0x3373678 Offset: 0x3372678
		private new [Void] set_anchorMin_Injected(ref [Vector2] value);
		// VA: 0x7B46D79704 RVA: 0x3373704 Offset: 0x3372704
		private new [Void] get_anchorMax_Injected(out [Vector2] ret);
		// VA: 0x7B46D79794 RVA: 0x3373794 Offset: 0x3372794
		private new [Void] set_anchorMax_Injected(ref [Vector2] value);
		// VA: 0x7B46D79820 RVA: 0x3373820 Offset: 0x3372820
		private new [Void] get_anchoredPosition_Injected(out [Vector2] ret);
		// VA: 0x7B46D798B0 RVA: 0x33738B0 Offset: 0x33728B0
		private new [Void] set_anchoredPosition_Injected(ref [Vector2] value);
		// VA: 0x7B46D7993C RVA: 0x337393C Offset: 0x337293C
		private new [Void] get_sizeDelta_Injected(out [Vector2] ret);
		// VA: 0x7B46D799CC RVA: 0x33739CC Offset: 0x33729CC
		private new [Void] set_sizeDelta_Injected(ref [Vector2] value);
		// VA: 0x7B46D79A58 RVA: 0x3373A58 Offset: 0x3372A58
		private new [Void] get_pivot_Injected(out [Vector2] ret);
		// VA: 0x7B46D79AE8 RVA: 0x3373AE8 Offset: 0x3372AE8
		private new [Void] set_pivot_Injected(ref [Vector2] value);
		// VA: 0x7B46D79B74 RVA: 0x3373B74 Offset: 0x3372B74

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D39140
		public enum Edge : [Int32]
		{
			Left = 0,
			Right = 1,
			Top = 2,
			Bottom = 3
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D39710
		public enum Axis : [Int32]
		{
			Horizontal = 0,
			Vertical = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D399C0
		public sealed class ReapplyDrivenProperties : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D7A964 RVA: 0x3374964 Offset: 0x3373964
			public virtual new [Void] Invoke([RectTransform] driven);
			// VA: 0x7B46D7AA00 RVA: 0x3374A00 Offset: 0x3373A00
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D39BE0
	private enum RotationOrder : [Int32]
	{
		OrderXYZ = 0,
		OrderXZY = 1,
		OrderYZX = 2,
		OrderYXZ = 3,
		OrderZXY = 4,
		OrderZYX = 5
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D39580
	public class Transform : [Component]
	{
		// Fields

		// Methods
		protected new [Void] .ctor();
		// VA: 0x7B46D7A960 RVA: 0x3374960 Offset: 0x3373960
		public new [Vector3] get_position();
		// VA: 0x7B46D7AA14 RVA: 0x3374A14 Offset: 0x3373A14
		public new [Void] set_position([Vector3] value);
		// VA: 0x7B46D7AAB4 RVA: 0x3374AB4 Offset: 0x3373AB4
		public new [Vector3] get_localPosition();
		// VA: 0x7B46D79BEC RVA: 0x3373BEC Offset: 0x3372BEC
		public new [Void] set_localPosition([Vector3] value);
		// VA: 0x7B46D79C78 RVA: 0x3373C78 Offset: 0x3372C78
		internal new [Vector3] GetLocalEulerAngles([RotationOrder] order);
		// VA: 0x7B46D7ABD4 RVA: 0x3374BD4 Offset: 0x3373BD4
		internal new [Void] SetLocalEulerAngles([Vector3] euler, [RotationOrder] order);
		// VA: 0x7B46D7AC8C RVA: 0x3374C8C Offset: 0x3373C8C
		internal new [Void] SetLocalEulerHint([Vector3] euler);
		// VA: 0x7B46D7AD3C RVA: 0x3374D3C Offset: 0x3373D3C
		public new [Vector3] get_eulerAngles();
		// VA: 0x7B46D7ADD4 RVA: 0x3374DD4 Offset: 0x3373DD4
		public new [Void] set_eulerAngles([Vector3] value);
		// VA: 0x7B46D7AE5C RVA: 0x3374E5C Offset: 0x3373E5C
		public new [Vector3] get_localEulerAngles();
		// VA: 0x7B46D7AEE0 RVA: 0x3374EE0 Offset: 0x3373EE0
		public new [Void] set_localEulerAngles([Vector3] value);
		// VA: 0x7B46D7AF68 RVA: 0x3374F68 Offset: 0x3373F68
		public new [Vector3] get_right();
		// VA: 0x7B46D7AFEC RVA: 0x3374FEC Offset: 0x3373FEC
		public new [Void] set_right([Vector3] value);
		// VA: 0x7B46D7B068 RVA: 0x3375068 Offset: 0x3374068
		public new [Vector3] get_up();
		// VA: 0x7B46D7B0EC RVA: 0x33750EC Offset: 0x33740EC
		public new [Void] set_up([Vector3] value);
		// VA: 0x7B46D7B168 RVA: 0x3375168 Offset: 0x3374168
		public new [Vector3] get_forward();
		// VA: 0x7B46D7B1EC RVA: 0x33751EC Offset: 0x33741EC
		public new [Void] set_forward([Vector3] value);
		// VA: 0x7B46D7B268 RVA: 0x3375268 Offset: 0x3374268
		public new [Quaternion] get_rotation();
		// VA: 0x7B46D7AE04 RVA: 0x3374E04 Offset: 0x3373E04
		public new [Void] set_rotation([Quaternion] value);
		// VA: 0x7B46D7AE8C RVA: 0x3374E8C Offset: 0x3373E8C
		public new [Quaternion] get_localRotation();
		// VA: 0x7B46D7AF10 RVA: 0x3374F10 Offset: 0x3373F10
		public new [Void] set_localRotation([Quaternion] value);
		// VA: 0x7B46D7AF98 RVA: 0x3374F98 Offset: 0x3373F98
		internal new [RotationOrder] get_rotationOrder();
		// VA: 0x7B46D7B394 RVA: 0x3375394 Offset: 0x3374394
		internal new [Void] set_rotationOrder([RotationOrder] value);
		// VA: 0x7B46D7B40C RVA: 0x337540C Offset: 0x337440C
		internal new [Int32] GetRotationOrderInternal();
		// VA: 0x7B46D7B3D0 RVA: 0x33753D0 Offset: 0x33743D0
		internal new [Void] SetRotationOrderInternal([RotationOrder] rotationOrder);
		// VA: 0x7B46D7B450 RVA: 0x3375450 Offset: 0x3374450
		public new [Vector3] get_localScale();
		// VA: 0x7B46D7B494 RVA: 0x3375494 Offset: 0x3374494
		public new [Void] set_localScale([Vector3] value);
		// VA: 0x7B46D7B534 RVA: 0x3375534 Offset: 0x3374534
		public new [Transform] get_parent();
		// VA: 0x7B46D7A920 RVA: 0x3374920 Offset: 0x3373920
		public new [Void] set_parent([Transform] value);
		// VA: 0x7B46D7B608 RVA: 0x3375608 Offset: 0x3374608
		internal new [Transform] get_parentInternal();
		// VA: 0x7B46D7B5CC RVA: 0x33755CC Offset: 0x33745CC
		internal new [Void] set_parentInternal([Transform] value);
		// VA: 0x7B46D7B6D4 RVA: 0x33756D4 Offset: 0x33746D4
		private new [Transform] GetParent();
		// VA: 0x7B46D7B71C RVA: 0x337571C Offset: 0x337471C
		public new [Void] SetParent([Transform] p);
		// VA: 0x7B46D7B758 RVA: 0x3375758 Offset: 0x3374758
		public new [Void] SetParent([Transform] parent, [Boolean] worldPositionStays);
		// VA: 0x7B46D7B7A0 RVA: 0x33757A0 Offset: 0x33747A0
		public new [Matrix4x4] get_worldToLocalMatrix();
		// VA: 0x7B46D7B7F4 RVA: 0x33757F4 Offset: 0x33747F4
		public new [Matrix4x4] get_localToWorldMatrix();
		// VA: 0x7B46D7A33C RVA: 0x337433C Offset: 0x337333C
		public new [Void] SetPositionAndRotation([Vector3] position, [Quaternion] rotation);
		// VA: 0x7B46D7B8E8 RVA: 0x33758E8 Offset: 0x33748E8
		public new [Void] SetLocalPositionAndRotation([Vector3] localPosition, [Quaternion] localRotation);
		// VA: 0x7B46D7B99C RVA: 0x337599C Offset: 0x337499C
		public new [Void] GetPositionAndRotation(out [Vector3] position, out [Quaternion] rotation);
		// VA: 0x7B46D7BA50 RVA: 0x3375A50 Offset: 0x3374A50
		public new [Void] GetLocalPositionAndRotation(out [Vector3] localPosition, out [Quaternion] localRotation);
		// VA: 0x7B46D7BAA4 RVA: 0x3375AA4 Offset: 0x3374AA4
		public new [Void] Translate([Vector3] translation, [Space] relativeTo);
		// VA: 0x7B46D7BAF8 RVA: 0x3375AF8 Offset: 0x3374AF8
		public new [Void] Translate([Vector3] translation);
		// VA: 0x7B46D7BBE8 RVA: 0x3375BE8 Offset: 0x3374BE8
		public new [Void] Translate([Single] x, [Single] y, [Single] z, [Space] relativeTo);
		// VA: 0x7B46D7BBF0 RVA: 0x3375BF0 Offset: 0x3374BF0
		public new [Void] Translate([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7BBF4 RVA: 0x3375BF4 Offset: 0x3374BF4
		public new [Void] Translate([Vector3] translation, [Transform] relativeTo);
		// VA: 0x7B46D7BBFC RVA: 0x3375BFC Offset: 0x3374BFC
		public new [Void] Translate([Single] x, [Single] y, [Single] z, [Transform] relativeTo);
		// VA: 0x7B46D7BCDC RVA: 0x3375CDC Offset: 0x3374CDC
		public new [Void] Rotate([Vector3] eulers, [Space] relativeTo);
		// VA: 0x7B46D7BCE0 RVA: 0x3375CE0 Offset: 0x3374CE0
		public new [Void] Rotate([Vector3] eulers);
		// VA: 0x7B46D7BF68 RVA: 0x3375F68 Offset: 0x3374F68
		public new [Void] Rotate([Single] xAngle, [Single] yAngle, [Single] zAngle, [Space] relativeTo);
		// VA: 0x7B46D7BF70 RVA: 0x3375F70 Offset: 0x3374F70
		public new [Void] Rotate([Single] xAngle, [Single] yAngle, [Single] zAngle);
		// VA: 0x7B46D7BF74 RVA: 0x3375F74 Offset: 0x3374F74
		internal new [Void] RotateAroundInternal([Vector3] axis, [Single] angle);
		// VA: 0x7B46D7BF7C RVA: 0x3375F7C Offset: 0x3374F7C
		public new [Void] Rotate([Vector3] axis, [Single] angle, [Space] relativeTo);
		// VA: 0x7B46D7C034 RVA: 0x3376034 Offset: 0x3375034
		public new [Void] Rotate([Vector3] axis, [Single] angle);
		// VA: 0x7B46D7C0E4 RVA: 0x33760E4 Offset: 0x33750E4
		public new [Void] RotateAround([Vector3] point, [Vector3] axis, [Single] angle);
		// VA: 0x7B46D7C0EC RVA: 0x33760EC Offset: 0x33750EC
		public new [Void] LookAt([Transform] target, [Vector3] worldUp);
		// VA: 0x7B46D7C1B0 RVA: 0x33761B0 Offset: 0x33751B0
		public new [Void] LookAt([Transform] target);
		// VA: 0x7B46D7C270 RVA: 0x3376270 Offset: 0x3375270
		public new [Void] LookAt([Vector3] worldPosition, [Vector3] worldUp);
		// VA: 0x7B46D7C26C RVA: 0x337626C Offset: 0x337526C
		public new [Void] LookAt([Vector3] worldPosition);
		// VA: 0x7B46D7C3C4 RVA: 0x33763C4 Offset: 0x33753C4
		private new [Void] Internal_LookAt([Vector3] worldPosition, [Vector3] worldUp);
		// VA: 0x7B46D7C364 RVA: 0x3376364 Offset: 0x3375364
		public new [Vector3] TransformDirection([Vector3] direction);
		// VA: 0x7B46D7BB80 RVA: 0x3375B80 Offset: 0x3374B80
		public new [Vector3] TransformDirection([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7C4E8 RVA: 0x33764E8 Offset: 0x33754E8
		internal new [Void] TransformDirections([Vector3*] directions, [Int32] count, [Vector3*] transformedDirections, [Int32] transformedCount);
		// VA: 0x7B46D7C4EC RVA: 0x33764EC Offset: 0x33754EC
		public new [Void] TransformDirections([ReadOnlySpan`1] directions, [Span`1] transformedDirections);
		// VA: 0x7B46D7C558 RVA: 0x3376558 Offset: 0x3375558
		public new [Void] TransformDirections([Span`1] directions);
		// VA: 0x7B46D7C69C RVA: 0x337669C Offset: 0x337569C
		public new [Vector3] InverseTransformDirection([Vector3] direction);
		// VA: 0x7B46D7C718 RVA: 0x3376718 Offset: 0x3375718
		public new [Vector3] InverseTransformDirection([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7C7D4 RVA: 0x33767D4 Offset: 0x33757D4
		internal new [Void] InverseTransformDirections([Vector3*] directions, [Int32] count, [Vector3*] transformedDirections, [Int32] transformedCount);
		// VA: 0x7B46D7C7D8 RVA: 0x33767D8 Offset: 0x33757D8
		public new [Void] InverseTransformDirections([ReadOnlySpan`1] directions, [Span`1] transformedDirections);
		// VA: 0x7B46D7C844 RVA: 0x3376844 Offset: 0x3375844
		public new [Void] InverseTransformDirections([Span`1] directions);
		// VA: 0x7B46D7C988 RVA: 0x3376988 Offset: 0x3375988
		public new [Vector3] TransformVector([Vector3] vector);
		// VA: 0x7B46D7CA04 RVA: 0x3376A04 Offset: 0x3375A04
		public new [Vector3] TransformVector([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7CAC0 RVA: 0x3376AC0 Offset: 0x3375AC0
		internal new [Void] TransformVectors([Vector3*] vectors, [Int32] count, [Vector3*] transformedVectors, [Int32] transformedCount);
		// VA: 0x7B46D7CAC4 RVA: 0x3376AC4 Offset: 0x3375AC4
		public new [Void] TransformVectors([ReadOnlySpan`1] vectors, [Span`1] transformedVectors);
		// VA: 0x7B46D7CB30 RVA: 0x3376B30 Offset: 0x3375B30
		public new [Void] TransformVectors([Span`1] vectors);
		// VA: 0x7B46D7CC74 RVA: 0x3376C74 Offset: 0x3375C74
		public new [Vector3] InverseTransformVector([Vector3] vector);
		// VA: 0x7B46D7CCF0 RVA: 0x3376CF0 Offset: 0x3375CF0
		public new [Vector3] InverseTransformVector([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7CDAC RVA: 0x3376DAC Offset: 0x3375DAC
		internal new [Void] InverseTransformVectors([Vector3*] vectors, [Int32] count, [Vector3*] transformedVectors, [Int32] transformedCount);
		// VA: 0x7B46D7CDB0 RVA: 0x3376DB0 Offset: 0x3375DB0
		public new [Void] InverseTransformVectors([ReadOnlySpan`1] vectors, [Span`1] transformedVectors);
		// VA: 0x7B46D7CE1C RVA: 0x3376E1C Offset: 0x3375E1C
		public new [Void] InverseTransformVectors([Span`1] vectors);
		// VA: 0x7B46D7CF60 RVA: 0x3376F60 Offset: 0x3375F60
		public new [Vector3] TransformPoint([Vector3] position);
		// VA: 0x7B46D7CFDC RVA: 0x3376FDC Offset: 0x3375FDC
		public new [Vector3] TransformPoint([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7D098 RVA: 0x3377098 Offset: 0x3376098
		internal new [Void] TransformPoints([Vector3*] positions, [Int32] count, [Vector3*] transformedPositions, [Int32] transformedCount);
		// VA: 0x7B46D7D09C RVA: 0x337709C Offset: 0x337609C
		public new [Void] TransformPoints([ReadOnlySpan`1] positions, [Span`1] transformedPositions);
		// VA: 0x7B46D7D108 RVA: 0x3377108 Offset: 0x3376108
		public new [Void] TransformPoints([Span`1] positions);
		// VA: 0x7B46D7D24C RVA: 0x337724C Offset: 0x337624C
		public new [Vector3] InverseTransformPoint([Vector3] position);
		// VA: 0x7B46D7D2C8 RVA: 0x33772C8 Offset: 0x33762C8
		public new [Vector3] InverseTransformPoint([Single] x, [Single] y, [Single] z);
		// VA: 0x7B46D7D384 RVA: 0x3377384 Offset: 0x3376384
		internal new [Void] InverseTransformPoints([Vector3*] positions, [Int32] count, [Vector3*] transformedPositions, [Int32] transformedCount);
		// VA: 0x7B46D7D388 RVA: 0x3377388 Offset: 0x3376388
		public new [Void] InverseTransformPoints([ReadOnlySpan`1] positions, [Span`1] transformedPositions);
		// VA: 0x7B46D7D3F4 RVA: 0x33773F4 Offset: 0x33763F4
		public new [Void] InverseTransformPoints([Span`1] positions);
		// VA: 0x7B46D7D538 RVA: 0x3377538 Offset: 0x3376538
		public new [Transform] get_root();
		// VA: 0x7B46D7D5B4 RVA: 0x33775B4 Offset: 0x33765B4
		private new [Transform] GetRoot();
		// VA: 0x7B46D7D5F0 RVA: 0x33775F0 Offset: 0x33765F0
		public new [Int32] get_childCount();
		// VA: 0x7B46D7D62C RVA: 0x337762C Offset: 0x337662C
		public new [Void] DetachChildren();
		// VA: 0x7B46D7D668 RVA: 0x3377668 Offset: 0x3376668
		public new [Void] SetAsFirstSibling();
		// VA: 0x7B46D7D6A4 RVA: 0x33776A4 Offset: 0x33766A4
		public new [Void] SetAsLastSibling();
		// VA: 0x7B46D7D6E0 RVA: 0x33776E0 Offset: 0x33766E0
		public new [Void] SetSiblingIndex([Int32] index);
		// VA: 0x7B46D7D71C RVA: 0x337771C Offset: 0x337671C
		internal new [Void] MoveAfterSibling([Transform] transform, [Boolean] notifyEditorAndMarkDirty);
		// VA: 0x7B46D7D760 RVA: 0x3377760 Offset: 0x3376760
		public new [Int32] GetSiblingIndex();
		// VA: 0x7B46D7D7B4 RVA: 0x33777B4 Offset: 0x33767B4
		private static new [Transform] FindRelativeTransformWithPath([Transform] transform, [String] path, [Boolean] isActiveOnly);
		// VA: 0x7B46D7D7F0 RVA: 0x33777F0 Offset: 0x33767F0
		public new [Transform] Find([String] n);
		// VA: 0x7B46D7D844 RVA: 0x3377844 Offset: 0x3376844
		internal new [Void] SendTransformChangedScale();
		// VA: 0x7B46D7D8D8 RVA: 0x33778D8 Offset: 0x33768D8
		public new [Vector3] get_lossyScale();
		// VA: 0x7B46D7D914 RVA: 0x3377914 Offset: 0x3376914
		public new [Boolean] IsChildOf([Transform] parent);
		// VA: 0x7B46D7D9B4 RVA: 0x33779B4 Offset: 0x33769B4
		public new [Boolean] get_hasChanged();
		// VA: 0x7B46D7D9F8 RVA: 0x33779F8 Offset: 0x33769F8
		public new [Void] set_hasChanged([Boolean] value);
		// VA: 0x7B46D7DA34 RVA: 0x3377A34 Offset: 0x3376A34
		public new [Transform] FindChild([String] n);
		// VA: 0x7B46D7DA78 RVA: 0x3377A78 Offset: 0x3376A78
		public sealed new [IEnumerator] GetEnumerator();
		// VA: 0x7B46D7DA7C RVA: 0x3377A7C Offset: 0x3376A7C
		public new [Void] RotateAround([Vector3] axis, [Single] angle);
		// VA: 0x7B46D7DB10 RVA: 0x3377B10 Offset: 0x3376B10
		public new [Void] RotateAroundLocal([Vector3] axis, [Single] angle);
		// VA: 0x7B46D7DBC8 RVA: 0x3377BC8 Offset: 0x3376BC8
		public new [Transform] GetChild([Int32] index);
		// VA: 0x7B46D7DC80 RVA: 0x3377C80 Offset: 0x3376C80
		public new [Int32] GetChildCount();
		// VA: 0x7B46D7DCC4 RVA: 0x3377CC4 Offset: 0x3376CC4
		public new [Int32] get_hierarchyCapacity();
		// VA: 0x7B46D7DD00 RVA: 0x3377D00 Offset: 0x3376D00
		public new [Void] set_hierarchyCapacity([Int32] value);
		// VA: 0x7B46D7DD78 RVA: 0x3377D78 Offset: 0x3376D78
		private new [Int32] internal_getHierarchyCapacity();
		// VA: 0x7B46D7DD3C RVA: 0x3377D3C Offset: 0x3376D3C
		private new [Void] internal_setHierarchyCapacity([Int32] value);
		// VA: 0x7B46D7DDBC RVA: 0x3377DBC Offset: 0x3376DBC
		public new [Int32] get_hierarchyCount();
		// VA: 0x7B46D7DE00 RVA: 0x3377E00 Offset: 0x3376E00
		private new [Int32] internal_getHierarchyCount();
		// VA: 0x7B46D7DE3C RVA: 0x3377E3C Offset: 0x3376E3C
		internal new [Boolean] IsNonUniformScaleTransform();
		// VA: 0x7B46D7DE78 RVA: 0x3377E78 Offset: 0x3376E78
		internal new [Boolean] get_constrainProportionsScale();
		// VA: 0x7B46D7DEB4 RVA: 0x3377EB4 Offset: 0x3376EB4
		internal new [Void] set_constrainProportionsScale([Boolean] value);
		// VA: 0x7B46D7DF2C RVA: 0x3377F2C Offset: 0x3376F2C
		private new [Void] SetConstrainProportionsScale([Boolean] isLinked);
		// VA: 0x7B46D7DF70 RVA: 0x3377F70 Offset: 0x3376F70
		private new [Boolean] IsConstrainProportionsScale();
		// VA: 0x7B46D7DEF0 RVA: 0x3377EF0 Offset: 0x3376EF0
		private new [Void] get_position_Injected(out [Vector3] ret);
		// VA: 0x7B46D7AA70 RVA: 0x3374A70 Offset: 0x3373A70
		private new [Void] set_position_Injected(ref [Vector3] value);
		// VA: 0x7B46D7AB08 RVA: 0x3374B08 Offset: 0x3373B08
		private new [Void] get_localPosition_Injected(out [Vector3] ret);
		// VA: 0x7B46D7AB4C RVA: 0x3374B4C Offset: 0x3373B4C
		private new [Void] set_localPosition_Injected(ref [Vector3] value);
		// VA: 0x7B46D7AB90 RVA: 0x3374B90 Offset: 0x3373B90
		private new [Void] GetLocalEulerAngles_Injected([RotationOrder] order, out [Vector3] ret);
		// VA: 0x7B46D7AC38 RVA: 0x3374C38 Offset: 0x3373C38
		private new [Void] SetLocalEulerAngles_Injected(ref [Vector3] euler, [RotationOrder] order);
		// VA: 0x7B46D7ACE8 RVA: 0x3374CE8 Offset: 0x3373CE8
		private new [Void] SetLocalEulerHint_Injected(ref [Vector3] euler);
		// VA: 0x7B46D7AD90 RVA: 0x3374D90 Offset: 0x3373D90
		private new [Void] get_rotation_Injected(out [Quaternion] ret);
		// VA: 0x7B46D7B284 RVA: 0x3375284 Offset: 0x3374284
		private new [Void] set_rotation_Injected(ref [Quaternion] value);
		// VA: 0x7B46D7B2C8 RVA: 0x33752C8 Offset: 0x33742C8
		private new [Void] get_localRotation_Injected(out [Quaternion] ret);
		// VA: 0x7B46D7B30C RVA: 0x337530C Offset: 0x337430C
		private new [Void] set_localRotation_Injected(ref [Quaternion] value);
		// VA: 0x7B46D7B350 RVA: 0x3375350 Offset: 0x3374350
		private new [Void] get_localScale_Injected(out [Vector3] ret);
		// VA: 0x7B46D7B4F0 RVA: 0x33754F0 Offset: 0x33744F0
		private new [Void] set_localScale_Injected(ref [Vector3] value);
		// VA: 0x7B46D7B588 RVA: 0x3375588 Offset: 0x3374588
		private new [Void] get_worldToLocalMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D7B860 RVA: 0x3375860 Offset: 0x3374860
		private new [Void] get_localToWorldMatrix_Injected(out [Matrix4x4] ret);
		// VA: 0x7B46D7B8A4 RVA: 0x33758A4 Offset: 0x33748A4
		private new [Void] SetPositionAndRotation_Injected(ref [Vector3] position, ref [Quaternion] rotation);
		// VA: 0x7B46D7B948 RVA: 0x3375948 Offset: 0x3374948
		private new [Void] SetLocalPositionAndRotation_Injected(ref [Vector3] localPosition, ref [Quaternion] localRotation);
		// VA: 0x7B46D7B9FC RVA: 0x33759FC Offset: 0x33749FC
		private new [Void] RotateAroundInternal_Injected(ref [Vector3] axis, [Single] angle);
		// VA: 0x7B46D7BFE0 RVA: 0x3375FE0 Offset: 0x3374FE0
		private new [Void] Internal_LookAt_Injected(ref [Vector3] worldPosition, ref [Vector3] worldUp);
		// VA: 0x7B46D7C440 RVA: 0x3376440 Offset: 0x3375440
		private new [Void] TransformDirection_Injected(ref [Vector3] direction, out [Vector3] ret);
		// VA: 0x7B46D7C494 RVA: 0x3376494 Offset: 0x3375494
		private new [Void] InverseTransformDirection_Injected(ref [Vector3] direction, out [Vector3] ret);
		// VA: 0x7B46D7C780 RVA: 0x3376780 Offset: 0x3375780
		private new [Void] TransformVector_Injected(ref [Vector3] vector, out [Vector3] ret);
		// VA: 0x7B46D7CA6C RVA: 0x3376A6C Offset: 0x3375A6C
		private new [Void] InverseTransformVector_Injected(ref [Vector3] vector, out [Vector3] ret);
		// VA: 0x7B46D7CD58 RVA: 0x3376D58 Offset: 0x3375D58
		private new [Void] TransformPoint_Injected(ref [Vector3] position, out [Vector3] ret);
		// VA: 0x7B46D7D044 RVA: 0x3377044 Offset: 0x3376044
		private new [Void] InverseTransformPoint_Injected(ref [Vector3] position, out [Vector3] ret);
		// VA: 0x7B46D7D330 RVA: 0x3377330 Offset: 0x3376330
		private new [Void] get_lossyScale_Injected(out [Vector3] ret);
		// VA: 0x7B46D7D970 RVA: 0x3377970 Offset: 0x3376970
		private new [Void] RotateAround_Injected(ref [Vector3] axis, [Single] angle);
		// VA: 0x7B46D7DB74 RVA: 0x3377B74 Offset: 0x3376B74
		private new [Void] RotateAroundLocal_Injected(ref [Vector3] axis, [Single] angle);
		// VA: 0x7B46D7DC2C RVA: 0x3377C2C Offset: 0x3376C2C

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D39E90
		public class Enumerator : [Object]
		{
			// Fields
			private [Transform] outer; // 0x10
			private [Int32] currentIndex; // 0x18

			// Methods
			internal new [Void] .ctor([Transform] outer);
			// VA: 0x7B46D7DAE0 RVA: 0x3377AE0 Offset: 0x3376AE0
			public sealed new [Object] get_Current();
			// VA: 0x7B46D7DFB4 RVA: 0x3377FB4 Offset: 0x3376FB4
			public sealed new [Boolean] MoveNext();
			// VA: 0x7B46D7E000 RVA: 0x3378000 Offset: 0x3377000
			public sealed new [Void] Reset();
			// VA: 0x7B46D7E060 RVA: 0x3378060 Offset: 0x3377060
		}

	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3A040
	public enum SpriteDrawMode : [Int32]
	{
		Simple = 0,
		Sliced = 1,
		Tiled = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3A2F0
	public enum SpriteTileMode : [Int32]
	{
		Continuous = 0,
		Adaptive = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3A5A0
	public enum SpriteMaskInteraction : [Int32]
	{
		None = 0,
		VisibleInsideMask = 1,
		VisibleOutsideMask = 2
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3A850
	public sealed class SpriteRenderer : [Renderer]
	{
		// Fields
		private [UnityEvent`1] m_SpriteChangeEvent; // 0x18

		// Methods
		public new [Void] RegisterSpriteChangeCallback([UnityAction`1] callback);
		// VA: 0x7B46D7E06C RVA: 0x337806C Offset: 0x337706C
		public new [Void] UnregisterSpriteChangeCallback([UnityAction`1] callback);
		// VA: 0x7B46D7E10C RVA: 0x337810C Offset: 0x337710C
		private new [Void] InvokeSpriteChanged();
		// VA: 0x7B46D7E16C RVA: 0x337816C Offset: 0x337716C
		internal new [Boolean] get_shouldSupportTiling();
		// VA: 0x7B46D7E260 RVA: 0x3378260 Offset: 0x3377260
		public new [Sprite] get_sprite();
		// VA: 0x7B46D7E29C RVA: 0x337829C Offset: 0x337729C
		public new [Void] set_sprite([Sprite] value);
		// VA: 0x7B46D7E2D8 RVA: 0x33782D8 Offset: 0x33772D8
		public new [SpriteDrawMode] get_drawMode();
		// VA: 0x7B46D7E31C RVA: 0x337831C Offset: 0x337731C
		public new [Void] set_drawMode([SpriteDrawMode] value);
		// VA: 0x7B46D7E358 RVA: 0x3378358 Offset: 0x3377358
		public new [Vector2] get_size();
		// VA: 0x7B46D7E39C RVA: 0x337839C Offset: 0x337739C
		public new [Void] set_size([Vector2] value);
		// VA: 0x7B46D7E42C RVA: 0x337842C Offset: 0x337742C
		public new [Single] get_adaptiveModeThreshold();
		// VA: 0x7B46D7E4B8 RVA: 0x33784B8 Offset: 0x33774B8
		public new [Void] set_adaptiveModeThreshold([Single] value);
		// VA: 0x7B46D7E4F4 RVA: 0x33784F4 Offset: 0x33774F4
		public new [SpriteTileMode] get_tileMode();
		// VA: 0x7B46D7E540 RVA: 0x3378540 Offset: 0x3377540
		public new [Void] set_tileMode([SpriteTileMode] value);
		// VA: 0x7B46D7E57C RVA: 0x337857C Offset: 0x337757C
		public new [Color] get_color();
		// VA: 0x7B46D7E5C0 RVA: 0x33785C0 Offset: 0x33775C0
		public new [Void] set_color([Color] value);
		// VA: 0x7B46D7E65C RVA: 0x337865C Offset: 0x337765C
		public new [SpriteMaskInteraction] get_maskInteraction();
		// VA: 0x7B46D7E6F4 RVA: 0x33786F4 Offset: 0x33776F4
		public new [Void] set_maskInteraction([SpriteMaskInteraction] value);
		// VA: 0x7B46D7E730 RVA: 0x3378730 Offset: 0x3377730
		public new [Boolean] get_flipX();
		// VA: 0x7B46D7E774 RVA: 0x3378774 Offset: 0x3377774
		public new [Void] set_flipX([Boolean] value);
		// VA: 0x7B46D7E7B0 RVA: 0x33787B0 Offset: 0x33777B0
		public new [Boolean] get_flipY();
		// VA: 0x7B46D7E7F4 RVA: 0x33787F4 Offset: 0x33777F4
		public new [Void] set_flipY([Boolean] value);
		// VA: 0x7B46D7E830 RVA: 0x3378830 Offset: 0x3377830
		public new [SpriteSortPoint] get_spriteSortPoint();
		// VA: 0x7B46D7E874 RVA: 0x3378874 Offset: 0x3377874
		public new [Void] set_spriteSortPoint([SpriteSortPoint] value);
		// VA: 0x7B46D7E8B0 RVA: 0x33788B0 Offset: 0x33778B0
		private new [IntPtr] GetCurrentMeshDataPtr();
		// VA: 0x7B46D7E8F4 RVA: 0x33788F4 Offset: 0x33778F4
		internal new [Mesh]->[MeshDataArray] GetCurrentMeshData();
		// VA: 0x7B46D7E930 RVA: 0x3378930 Offset: 0x3377930
		internal new [Bounds] Internal_GetSpriteBounds([SpriteDrawMode] mode);
		// VA: 0x7B46D7E9C8 RVA: 0x33789C8 Offset: 0x33779C8
		internal new [Void] GetSecondaryTextureProperties([MaterialPropertyBlock] mbp);
		// VA: 0x7B46D7EA8C RVA: 0x3378A8C Offset: 0x3377A8C
		internal new [Bounds] GetSpriteBounds();
		// VA: 0x7B46D7EAD0 RVA: 0x3378AD0 Offset: 0x3377AD0
		public new [Void] .ctor();
		// VA: 0x7B46D7EB74 RVA: 0x3378B74 Offset: 0x3377B74
		private new [Void] get_size_Injected(out [Vector2] ret);
		// VA: 0x7B46D7E3E8 RVA: 0x33783E8 Offset: 0x33773E8
		private new [Void] set_size_Injected(ref [Vector2] value);
		// VA: 0x7B46D7E474 RVA: 0x3378474 Offset: 0x3377474
		private new [Void] get_color_Injected(out [Color] ret);
		// VA: 0x7B46D7E618 RVA: 0x3378618 Offset: 0x3377618
		private new [Void] set_color_Injected(ref [Color] value);
		// VA: 0x7B46D7E6B0 RVA: 0x33786B0 Offset: 0x33776B0
		private new [Void] Internal_GetSpriteBounds_Injected([SpriteDrawMode] mode, out [Bounds] ret);
		// VA: 0x7B46D7EA38 RVA: 0x3378A38 Offset: 0x3377A38
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3A9D0
	public enum SpriteMeshType : [Int32]
	{
		FullRect = 0,
		Tight = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3AC80
	public enum SpritePackingMode : [Int32]
	{
		Tight = 0,
		Rectangle = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3AF30
	public enum SpritePackingRotation : [Int32]
	{
		None = 0,
		FlipHorizontal = 1,
		FlipVertical = 2,
		Rotate180 = 3,
		Any = 15
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3B1E0
	public enum SpriteSortPoint : [Int32]
	{
		Center = 0,
		Pivot = 1
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3B490
	public struct SecondarySpriteTexture : [ValueType]
	{
		// Fields
		public [String] name; // 0x0
		public [Texture2D] texture; // 0x8

		// Methods
	}
} // namespace UnityEngine

namespace UnityEngine {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3B610
	public sealed class Sprite : [Object]
	{
		// Fields

		// Methods
		private new [Void] .ctor();
		// VA: 0x7B46D7EB7C RVA: 0x3378B7C Offset: 0x3377B7C
		internal new [Int32] GetPackingMode();
		// VA: 0x7B46D7EBD4 RVA: 0x3378BD4 Offset: 0x3377BD4
		internal new [Int32] GetPackingRotation();
		// VA: 0x7B46D7EC10 RVA: 0x3378C10 Offset: 0x3377C10
		internal new [Int32] GetPacked();
		// VA: 0x7B46D7EC4C RVA: 0x3378C4C Offset: 0x3377C4C
		internal new [Rect] GetTextureRect();
		// VA: 0x7B46D7EC88 RVA: 0x3378C88 Offset: 0x3377C88
		internal new [Vector2] GetTextureRectOffset();
		// VA: 0x7B46D7ED24 RVA: 0x3378D24 Offset: 0x3377D24
		internal new [Vector4] GetInnerUVs();
		// VA: 0x7B46D7EDB4 RVA: 0x3378DB4 Offset: 0x3377DB4
		internal new [Vector4] GetOuterUVs();
		// VA: 0x7B46D7EE50 RVA: 0x3378E50 Offset: 0x3377E50
		internal new [Vector4] GetPadding();
		// VA: 0x7B46D7EEEC RVA: 0x3378EEC Offset: 0x3377EEC
		internal static new [Sprite] CreateSpriteWithoutTextureScripting([Rect] rect, [Vector2] pivot, [Single] pixelsToUnits, [Texture2D] texture);
		// VA: 0x7B46D7EF88 RVA: 0x3378F88 Offset: 0x3377F88
		internal static new [Sprite] CreateSprite([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType, [Vector4] border, [Boolean] generateFallbackPhysicsShape, [SecondarySpriteTexture[]] secondaryTexture);
		// VA: 0x7B46D7F058 RVA: 0x3379058 Offset: 0x3378058
		public new [Bounds] get_bounds();
		// VA: 0x7B46D7F19C RVA: 0x337919C Offset: 0x337819C
		public new [Rect] get_rect();
		// VA: 0x7B46D7F248 RVA: 0x3379248 Offset: 0x3378248
		public new [Vector4] get_border();
		// VA: 0x7B46D7F2E4 RVA: 0x33792E4 Offset: 0x33782E4
		public new [Texture2D] get_texture();
		// VA: 0x7B46D7F380 RVA: 0x3379380 Offset: 0x3378380
		internal new [Texture2D] GetSecondaryTexture([Int32] index);
		// VA: 0x7B46D7F3BC RVA: 0x33793BC Offset: 0x33783BC
		public new [Int32] GetSecondaryTextureCount();
		// VA: 0x7B46D7F400 RVA: 0x3379400 Offset: 0x3378400
		public new [Int32] GetSecondaryTextures([SecondarySpriteTexture[]] secondaryTexture);
		// VA: 0x7B46D7F43C RVA: 0x337943C Offset: 0x337843C
		public new [Single] get_pixelsPerUnit();
		// VA: 0x7B46D7F480 RVA: 0x3379480 Offset: 0x3378480
		public new [Single] get_spriteAtlasTextureScale();
		// VA: 0x7B46D7F4BC RVA: 0x33794BC Offset: 0x33784BC
		public new [Texture2D] get_associatedAlphaSplitTexture();
		// VA: 0x7B46D7F4F8 RVA: 0x33794F8 Offset: 0x33784F8
		public new [Vector2] get_pivot();
		// VA: 0x7B46D7F534 RVA: 0x3379534 Offset: 0x3378534
		public new [Boolean] get_packed();
		// VA: 0x7B46D7F5C4 RVA: 0x33795C4 Offset: 0x33785C4
		public new [SpritePackingMode] get_packingMode();
		// VA: 0x7B46D7F60C RVA: 0x337960C Offset: 0x337860C
		public new [SpritePackingRotation] get_packingRotation();
		// VA: 0x7B46D7F648 RVA: 0x3379648 Offset: 0x3378648
		public new [Rect] get_textureRect();
		// VA: 0x7B46D7F684 RVA: 0x3379684 Offset: 0x3378684
		public new [Vector2] get_textureRectOffset();
		// VA: 0x7B46D7F688 RVA: 0x3379688 Offset: 0x3378688
		public new [Vector2[]] get_vertices();
		// VA: 0x7B46D7F68C RVA: 0x337968C Offset: 0x337868C
		public new [UInt16[]] get_triangles();
		// VA: 0x7B46D7F6C8 RVA: 0x33796C8 Offset: 0x33786C8
		public new [Vector2[]] get_uv();
		// VA: 0x7B46D7F704 RVA: 0x3379704 Offset: 0x3378704
		public new [Int32] GetPhysicsShapeCount();
		// VA: 0x7B46D7F740 RVA: 0x3379740 Offset: 0x3378740
		public new [Int32] GetPhysicsShapePointCount([Int32] shapeIdx);
		// VA: 0x7B46D7F77C RVA: 0x337977C Offset: 0x337877C
		private new [Int32] Internal_GetPhysicsShapePointCount([Int32] shapeIdx);
		// VA: 0x7B46D7F894 RVA: 0x3379894 Offset: 0x3378894
		public new [Int32] GetPhysicsShape([Int32] shapeIdx, [List`1] physicsShape);
		// VA: 0x7B46D7F8D8 RVA: 0x33798D8 Offset: 0x33788D8
		private static new [Void] GetPhysicsShapeImpl([Sprite] sprite, [Int32] shapeIdx, [List`1] physicsShape);
		// VA: 0x7B46D7FA28 RVA: 0x3379A28 Offset: 0x3378A28
		public new [Void] OverridePhysicsShape([IList`1] physicsShapes);
		// VA: 0x7B46D7FA7C RVA: 0x3379A7C Offset: 0x3378A7C
		private static new [Void] OverridePhysicsShapeCount([Sprite] sprite, [Int32] physicsShapeCount);
		// VA: 0x7B46D7FEB0 RVA: 0x3379EB0 Offset: 0x3378EB0
		private static new [Void] OverridePhysicsShape([Sprite] sprite, [Vector2[]] physicsShape, [Int32] idx);
		// VA: 0x7B46D7FEF4 RVA: 0x3379EF4 Offset: 0x3378EF4
		public new [Void] OverrideGeometry([Vector2[]] vertices, [UInt16[]] triangles);
		// VA: 0x7B46D7FF48 RVA: 0x3379F48 Offset: 0x3378F48
		internal static new [Sprite] Create([Rect] rect, [Vector2] pivot, [Single] pixelsToUnits, [Texture2D] texture);
		// VA: 0x7B46D7FF9C RVA: 0x3379F9C Offset: 0x3378F9C
		internal static new [Sprite] Create([Rect] rect, [Vector2] pivot, [Single] pixelsToUnits);
		// VA: 0x7B46D7FFA0 RVA: 0x3379FA0 Offset: 0x3378FA0
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType, [Vector4] border, [Boolean] generateFallbackPhysicsShape);
		// VA: 0x7B46D7FFA8 RVA: 0x3379FA8 Offset: 0x3378FA8
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType, [Vector4] border, [Boolean] generateFallbackPhysicsShape, [SecondarySpriteTexture[]] secondaryTextures);
		// VA: 0x7B46D7FFBC RVA: 0x3379FBC Offset: 0x3378FBC
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType, [Vector4] border);
		// VA: 0x7B46D80438 RVA: 0x337A438 Offset: 0x3379438
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType);
		// VA: 0x7B46D8044C RVA: 0x337A44C Offset: 0x337944C
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude);
		// VA: 0x7B46D80534 RVA: 0x337A534 Offset: 0x3379534
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot, [Single] pixelsPerUnit);
		// VA: 0x7B46D8053C RVA: 0x337A53C Offset: 0x337953C
		public static new [Sprite] Create([Texture2D] texture, [Rect] rect, [Vector2] pivot);
		// VA: 0x7B46D80548 RVA: 0x337A548 Offset: 0x3379548
		private new [Void] GetTextureRect_Injected(out [Rect] ret);
		// VA: 0x7B46D7ECE0 RVA: 0x3378CE0 Offset: 0x3377CE0
		private new [Void] GetTextureRectOffset_Injected(out [Vector2] ret);
		// VA: 0x7B46D7ED70 RVA: 0x3378D70 Offset: 0x3377D70
		private new [Void] GetInnerUVs_Injected(out [Vector4] ret);
		// VA: 0x7B46D7EE0C RVA: 0x3378E0C Offset: 0x3377E0C
		private new [Void] GetOuterUVs_Injected(out [Vector4] ret);
		// VA: 0x7B46D7EEA8 RVA: 0x3378EA8 Offset: 0x3377EA8
		private new [Void] GetPadding_Injected(out [Vector4] ret);
		// VA: 0x7B46D7EF44 RVA: 0x3378F44 Offset: 0x3377F44
		private static new [Sprite] CreateSpriteWithoutTextureScripting_Injected(ref [Rect] rect, ref [Vector2] pivot, [Single] pixelsToUnits, [Texture2D] texture);
		// VA: 0x7B46D7EFF4 RVA: 0x3378FF4 Offset: 0x3377FF4
		private static new [Sprite] CreateSprite_Injected([Texture2D] texture, ref [Rect] rect, ref [Vector2] pivot, [Single] pixelsPerUnit, [UInt32] extrude, [SpriteMeshType] meshType, ref [Vector4] border, [Boolean] generateFallbackPhysicsShape, [SecondarySpriteTexture[]] secondaryTexture);
		// VA: 0x7B46D7F100 RVA: 0x3379100 Offset: 0x3378100
		private new [Void] get_bounds_Injected(out [Bounds] ret);
		// VA: 0x7B46D7F204 RVA: 0x3379204 Offset: 0x3378204
		private new [Void] get_rect_Injected(out [Rect] ret);
		// VA: 0x7B46D7F2A0 RVA: 0x33792A0 Offset: 0x33782A0
		private new [Void] get_border_Injected(out [Vector4] ret);
		// VA: 0x7B46D7F33C RVA: 0x337933C Offset: 0x337833C
		private new [Void] get_pivot_Injected(out [Vector2] ret);
		// VA: 0x7B46D7F580 RVA: 0x3379580 Offset: 0x3378580
	}
} // namespace UnityEngine

namespace Unity.Jobs {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12C70
	public abstract interface IJob
	{
		// Fields

		// Methods
		public abstract new [Void] Execute();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
	}
} // namespace Unity.Jobs

namespace Unity.Jobs {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706BE9F0
	public static class IJobExtensions : [Object]
	{
		// Fields

		// Methods
		public static new [Void] EarlyJobInit();
		// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706BE870
		public struct JobStruct`1 : [ValueType]
		{
			// Fields
			public readonly static [BurstLike]->[SharedStatic`1] jobReflectionData; // 0x0

			// Methods
			internal static new [Void] Initialize();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC
			public static new [Void] Execute(ref [T] data, [IntPtr] additionalPtr, [IntPtr] bufferRangePatchData, ref [JobRanges] ranges, [Int32] jobIndex);
			// VA: 0x7B4503C240 RVA: 0x1636240 Offset: 0x1635240
			private static new [Void] .cctor();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC

			// Nested types
			// UnityEngine.CoreModule.dll
			// Class VA: 0x7A706BE650
			public sealed class ExecuteJobFunction : [MulticastDelegate]
			{
				// Fields

				// Methods
				public new [Void] .ctor([Object] object, [IntPtr] method);
				// VA: 0x0 RVA: 0x0 Offset: 0x0
				public virtual new [Void] Invoke(ref [T] data, [IntPtr] additionalPtr, [IntPtr] bufferRangePatchData, ref [JobRanges] ranges, [Int32] jobIndex);
				// VA: 0x0 RVA: 0x0 Offset: 0x0
			}

		}

	}
} // namespace Unity.Jobs

namespace Unity.Jobs {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12DB0
	public abstract interface IJobParallelFor
	{
		// Fields

		// Methods
		public abstract new [Void] Execute([Int32] index);
		// VA: 0x7B45028B7C RVA: 0x1622B7C Offset: 0x1621B7C
	}
} // namespace Unity.Jobs

namespace Unity.Jobs {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706BEF10
	public static class IJobParallelForExtensions : [Object]
	{
		// Fields

		// Methods
		private static new [IntPtr] GetReflectionData();
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public static new [JobHandle] Schedule([T] jobData, [Int32] arrayLength, [Int32] innerloopBatchCount, [JobHandle] dependsOn);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706BED90
		public struct ParallelForJobStruct`1 : [ValueType]
		{
			// Fields
			public readonly static [BurstLike]->[SharedStatic`1] jobReflectionData; // 0x0

			// Methods
			internal static new [Void] Initialize();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC
			public static new [Void] Execute(ref [T] jobData, [IntPtr] additionalPtr, [IntPtr] bufferRangePatchData, ref [JobRanges] ranges, [Int32] jobIndex);
			// VA: 0x7B4503C240 RVA: 0x1636240 Offset: 0x1635240
			private static new [Void] .cctor();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC

			// Nested types
			// UnityEngine.CoreModule.dll
			// Class VA: 0x7A706BEB70
			public sealed class ExecuteJobFunction : [MulticastDelegate]
			{
				// Fields

				// Methods
				public new [Void] .ctor([Object] object, [IntPtr] method);
				// VA: 0x0 RVA: 0x0 Offset: 0x0
				public virtual new [Void] Invoke(ref [T] data, [IntPtr] additionalPtr, [IntPtr] bufferRangePatchData, ref [JobRanges] ranges, [Int32] jobIndex);
				// VA: 0x0 RVA: 0x0 Offset: 0x0
			}

		}

	}
} // namespace Unity.Jobs

namespace Unity.Jobs {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708EDA70
	public struct JobHandle : [ValueType]
	{
		// Fields
		public [UInt64] jobGroup; // 0x0
		public [Int32] version; // 0x8

		// Methods
		public new [Void] Complete();
		// VA: 0x7B46D29C60 RVA: 0x3323C60 Offset: 0x3322C60
		public static new [Void] ScheduleBatchedJobs();
		// VA: 0x7B46D29CEC RVA: 0x3323CEC Offset: 0x3322CEC
		private static new [Void] ScheduleBatchedJobsAndComplete(ref [JobHandle] job);
		// VA: 0x7B46D29CB0 RVA: 0x3323CB0 Offset: 0x3322CB0
		public static new [JobHandle] CombineDependencies([NativeArray`1] jobs);
		// VA: 0x7B46D29D14 RVA: 0x3323D14 Offset: 0x3322D14
		public static new [JobHandle] CombineDependencies([NativeSlice`1] jobs);
		// VA: 0x7B46D29DD0 RVA: 0x3323DD0 Offset: 0x3322DD0
		internal static new [JobHandle] CombineDependenciesInternalPtr([Void*] jobs, [Int32] count);
		// VA: 0x7B46D29D74 RVA: 0x3323D74 Offset: 0x3322D74
		public sealed new [Boolean] Equals([JobHandle] other);
		// VA: 0x7B46D29EBC RVA: 0x3323EBC Offset: 0x3322EBC
		private static new [Void] CombineDependenciesInternalPtr_Injected([Void*] jobs, [Int32] count, out [JobHandle] ret);
		// VA: 0x7B46D29E68 RVA: 0x3323E68 Offset: 0x3322E68
	}
} // namespace Unity.Jobs

namespace UnityEngine.Sprites {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3B910
	public sealed class DataUtility : [Object]
	{
		// Fields

		// Methods
		public static new [Vector4] GetInnerUV([Sprite] sprite);
		// VA: 0x7B46D80950 RVA: 0x337A950 Offset: 0x3379950
		public static new [Vector4] GetOuterUV([Sprite] sprite);
		// VA: 0x7B46D80960 RVA: 0x337A960 Offset: 0x3379960
		public static new [Vector4] GetPadding([Sprite] sprite);
		// VA: 0x7B46D80970 RVA: 0x337A970 Offset: 0x3379970
		public static new [Vector2] GetMinSize([Sprite] sprite);
		// VA: 0x7B46D80980 RVA: 0x337A980 Offset: 0x3379980
	}
} // namespace UnityEngine.Sprites

namespace UnityEngine._Scripting.APIUpdating {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3B790
	private class APIUpdaterRuntimeHelpers : [Object]
	{
		// Fields

		// Methods
		internal static new [Boolean] GetMovedFromAttributeDataForType([Type] sourceType, out [String] assembly, out [String] nsp, out [String] klass);
		// VA: 0x7B46D8055C RVA: 0x337A55C Offset: 0x337955C
		internal static new [Boolean] GetObsoleteTypeRedirection([Type] sourceType, out [String] assemblyName, out [String] nsp, out [String] className);
		// VA: 0x7B46D80698 RVA: 0x337A698 Offset: 0x3379698
	}
} // namespace UnityEngine._Scripting.APIUpdating

namespace UnityEngine.Pool {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A705D7520
	public class CollectionPool`2 : [Object]
	{
		// Fields
		public readonly static [ObjectPool`1] s_Pool; // 0x0

		// Methods
		public static new [TCollection] Get();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [PooledObject`1] Get(out [TCollection] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] Release([TCollection] toRelease);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] .cctor();
		// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A705D73A0
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [CollectionPool`2]->[<>c] <>9 { get; set; }
			public readonly static [CollectionPool`2]->[<>c] <>9; // 0x0

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC
			public new [Void] .ctor();
			// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
			internal new [TCollection] <.cctor>b__5_0();
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			internal new [Void] <.cctor>b__5_1([TCollection] l);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		}

	}
} // namespace UnityEngine.Pool

namespace UnityEngine.Pool {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706E74D0
	public abstract interface IObjectPool`1
	{
		// Fields

		// Methods
		public abstract new [Void] Release([T] element);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Pool

namespace UnityEngine.Pool {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7076EC00
	public class ObjectPool`1 : [Object]
	{
		// Fields
		public readonly [List`1] m_List; // 0x0
		private readonly [Func`1] m_CreateFunc; // 0x0
		private readonly [Action`1] m_ActionOnGet; // 0x0
		private readonly [Action`1] m_ActionOnRelease; // 0x0
		private readonly [Action`1] m_ActionOnDestroy; // 0x0
		private readonly [Int32] m_MaxSize; // 0x0
		public [Boolean] m_CollectionCheck; // 0x0
		// private [Int32] CountAll { get; set; }
		private [Int32] <CountAll>k__BackingField; // 0x0

		// Methods
		public new [Int32] get_CountAll();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		private new [Void] set_CountAll([Int32] value);
		// VA: 0x7B45028B7C RVA: 0x1622B7C Offset: 0x1621B7C
		public sealed new [Int32] get_CountInactive();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		public new [Void] .ctor([Func`1] createFunc, [Action`1] actionOnGet, [Action`1] actionOnRelease, [Action`1] actionOnDestroy, [Boolean] collectionCheck, [Int32] defaultCapacity, [Int32] maxSize);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public sealed new [T] Get();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public sealed new [PooledObject`1] Get(out [T] v);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public sealed new [Void] Release([T] element);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public sealed new [Void] Clear();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public sealed new [Void] Dispose();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
	}
} // namespace UnityEngine.Pool

namespace UnityEngine.Pool {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70647DD0
	public struct PooledObject`1 : [ValueType]
	{
		// Fields
		private readonly [T] m_ToReturn; // 0xFFFFFFFFFFFFFFF0
		private readonly [IObjectPool`1] m_Pool; // 0xFFFFFFFFFFFFFFF0

		// Methods
		public new [Void] .ctor([T] value, [IObjectPool`1] pool);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private sealed new [Void] System.IDisposable.Dispose();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
	}
} // namespace UnityEngine.Pool

namespace Unity.Burst {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21770
	public class BurstAuthorizedExternalMethodAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B63C RVA: 0x332563C Offset: 0x332463C
	}
} // namespace Unity.Burst

namespace Unity.Burst {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21920
	public class BurstDiscardAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B644 RVA: 0x3325644 Offset: 0x3324644
	}
} // namespace Unity.Burst

namespace UnityEngine.Serialization {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D41450
	public class FormerlySerializedAsAttribute : [Attribute]
	{
		// Fields
		private [String] m_oldName; // 0x10

		// Methods
		public new [Void] .ctor([String] oldName);
		// VA: 0x7B46D835E8 RVA: 0x337D5E8 Offset: 0x337C5E8
	}
} // namespace UnityEngine.Serialization

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A707D52E0
	private static class BurstLike : [Object]
	{
		// Fields

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A707D5160
		public struct SharedStatic`1 : [ValueType]
		{
			// Fields
			private readonly [Void*] _buffer; // 0xFFFFFFFFFFFFFFF0

			// Methods
			private new [Void] .ctor([Void*] buffer);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			public new ref [T] get_Data();
			// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
			public static new [BurstLike]->[SharedStatic`1] GetOrCreate([UInt32] alignment);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B20030
		public static class SharedStatic : [Object]
		{
			// Fields

			// Methods
			public static new [Void*] GetOrCreateSharedStaticInternal([Int64] getHashCode64, [Int64] getSubHashCode64, [UInt32] sizeOf, [UInt32] alignment);
			// VA: 0x7B46D2AF38 RVA: 0x3324F38 Offset: 0x3323F38
		}

	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706E5000
	private static class BurstRuntime : [Object]
	{
		// Fields

		// Methods
		public static new [Int64] GetHashCode64();
		// VA: 0x7B450348FC RVA: 0x162E8FC Offset: 0x162D8FC
		internal static new [Int64] HashStringWithFNV1A64([String] text);
		// VA: 0x7B46D2B000 RVA: 0x3325000 Offset: 0x3324000

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706E4E80
		public struct HashCode64`1 : [ValueType]
		{
			// Fields
			public readonly static [Int64] Value; // 0x0

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B450382CC RVA: 0x16322CC Offset: 0x16312CC
		}

	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B201B0
	public sealed class NativeContainerAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B08C RVA: 0x332508C Offset: 0x332408C
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20360
	public sealed class NativeContainerIsReadOnlyAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B094 RVA: 0x3325094 Offset: 0x3324094
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20510
	public sealed class NativeContainerIsAtomicWriteOnlyAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B206C0
	public sealed class NativeContainerSupportsMinMaxWriteRestrictionAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B09C RVA: 0x332509C Offset: 0x332409C
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20870
	public sealed class NativeContainerSupportsDeallocateOnJobCompletionAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B0A4 RVA: 0x33250A4 Offset: 0x33240A4
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20A20
	public sealed class NativeContainerSupportsDeferredConvertListToArray : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B0AC RVA: 0x33250AC Offset: 0x33240AC
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20BD0
	public sealed class NativeSetThreadIndexAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20D80
	public sealed class NativeContainerNeedsThreadIndexAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B20F30
	public class WriteAccessRequiredAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B0B4 RVA: 0x33250B4 Offset: 0x33240B4
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B210E0
	public sealed class NativeDisableUnsafePtrRestrictionAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B0BC RVA: 0x33250BC Offset: 0x33240BC
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21290
	public sealed class NativeDisableContainerSafetyRestrictionAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B0C4 RVA: 0x33250C4 Offset: 0x33240C4
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21440
	public sealed class NativeSetClassTypeToNullOnScheduleAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093C340
	public static class NativeArrayUnsafeUtility : [Object]
	{
		// Fields

		// Methods
		public static new [NativeArray`1] ConvertExistingDataToNativeArray([Void*] dataPointer, [Int32] length, [Allocator] allocator);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void*] GetUnsafePtr([NativeArray`1] nativeArray);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void*] GetUnsafeReadOnlyPtr([NativeArray`1] nativeArray);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093C640
	public static class NativeSliceUnsafeUtility : [Object]
	{
		// Fields

		// Methods
		public static new [NativeSlice`1] ConvertExistingDataToNativeSlice([Void*] dataPointer, [Int32] stride, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void*] GetUnsafePtr([NativeSlice`1] nativeSlice);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void*] GetUnsafeReadOnlyPtr([NativeSlice`1] nativeSlice);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace Unity.Collections.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70998030
	public static class UnsafeUtility : [Object]
	{
		// Fields

		// Methods
		public static new [Boolean] IsBlittable();
		// VA: 0x7B45029BCC RVA: 0x1623BCC Offset: 0x1622BCC
		internal static new [Int32] LeakRecord([IntPtr] handle, [LeakCategory] category, [Int32] callstacksToSkip);
		// VA: 0x7B46D2B0CC RVA: 0x33250CC Offset: 0x33240CC
		internal static new [Int32] LeakErase([IntPtr] handle, [LeakCategory] category);
		// VA: 0x7B46D2B120 RVA: 0x3325120 Offset: 0x3324120
		public static new [Void*] MallocTracked([Int64] size, [Int32] alignment, [Allocator] allocator, [Int32] callstacksToSkip);
		// VA: 0x7B46D2B164 RVA: 0x3325164 Offset: 0x3324164
		public static new [Void] FreeTracked([Void*] memory, [Allocator] allocator);
		// VA: 0x7B46D2AE70 RVA: 0x3324E70 Offset: 0x3323E70
		public static new [Void*] Malloc([Int64] size, [Int32] alignment, [Allocator] allocator);
		// VA: 0x7B46D2B1C0 RVA: 0x33251C0 Offset: 0x33241C0
		public static new [Void] Free([Void*] memory, [Allocator] allocator);
		// VA: 0x7B46D2B214 RVA: 0x3325214 Offset: 0x3324214
		public static new [Void] MemCpy([Void*] destination, [Void*] source, [Int64] size);
		// VA: 0x7B46D2AC58 RVA: 0x3324C58 Offset: 0x3323C58
		public static new [Void] MemCpyStride([Void*] destination, [Int32] destinationStride, [Void*] source, [Int32] sourceStride, [Int32] elementSize, [Int32] count);
		// VA: 0x7B46D2B258 RVA: 0x3325258 Offset: 0x3324258
		public static new [Void] MemSet([Void*] destination, [Byte] value, [Int64] size);
		// VA: 0x7B46D2B2CC RVA: 0x33252CC Offset: 0x33242CC
		public static new [Void] MemClear([Void*] destination, [Int64] size);
		// VA: 0x7B46D2B320 RVA: 0x3325320 Offset: 0x3324320
		public static new [Boolean] IsBlittable([Type] type);
		// VA: 0x7B46D2B368 RVA: 0x3325368 Offset: 0x3324368
		private static new [Boolean] IsBlittableValueType([Type] t);
		// VA: 0x7B46D2B3A4 RVA: 0x33253A4 Offset: 0x33243A4
		private static new [String] GetReasonForTypeNonBlittableImpl([Type] t, [String] name);
		// VA: 0x7B46D2B404 RVA: 0x3325404 Offset: 0x3324404
		internal static new [Boolean] IsArrayBlittable([Array] arr);
		// VA: 0x7B46D2B5C0 RVA: 0x33255C0 Offset: 0x33245C0
		internal static new [Boolean] IsGenericListBlittable();
		// VA: 0x7B45029BCC RVA: 0x1623BCC Offset: 0x1622BCC
		internal static new [String] GetReasonForArrayNonBlittable([Array] arr);
		// VA: 0x7B46D2B5F0 RVA: 0x33255F0 Offset: 0x33245F0
		internal static new [String] GetReasonForGenericListNonBlittable();
		// VA: 0x7B45034C64 RVA: 0x162EC64 Offset: 0x162DC64
		public static new [Int32] AlignOf();
		// VA: 0x7B4502E7F0 RVA: 0x16287F0 Offset: 0x16277F0
		public static new [T] ReadArrayElement([Void*] source, [Int32] index);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [T] ReadArrayElementWithStride([Void*] source, [Int32] index, [Int32] stride);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] WriteArrayElement([Void*] destination, [Int32] index, [T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] WriteArrayElementWithStride([Void*] destination, [Int32] index, [Int32] stride, [T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void*] AddressOf(ref [T] output);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Int32] SizeOf();
		// VA: 0x7B4502E7F0 RVA: 0x16287F0 Offset: 0x16277F0
		public static new ref [T] As(ref [U] from);
		// VA: 0x7B45034F44 RVA: 0x162EF44 Offset: 0x162DF44
		public static new ref [T] AsRef([Void*] ptr);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Int32] EnumToInt([T] enumValue);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] InternalEnumToInt(ref [T] enumValue, ref [Int32] intValue);
		// VA: 0x7B4503C6A4 RVA: 0x16366A4 Offset: 0x16356A4
		public static new [Boolean] EnumEquals([T] lhs, [T] rhs);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B215F0
		public struct AlignOfHelper`1 : [ValueType]
		{
			// Fields
			public [Byte] dummy; // 0xFFFFFFFFFFFFFFF0
			public [T] data; // 0xFFFFFFFFFFFFFFF0

			// Methods
		}

	}
} // namespace Unity.Collections.LowLevel.Unsafe

namespace UnityEngineInternal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70A00A60
	public struct MathfInternal : [ValueType]
	{
		// Fields
		public static [Single] FloatMinNormal; // 0x0
		public static [Single] FloatMinDenormal; // 0x4
		public static [Boolean] IsFlushToZeroEnabled; // 0x8

		// Methods
		private static new [Void] .cctor();
		// VA: 0x7B46D29B0C RVA: 0x3323B0C Offset: 0x3322B0C
	}
} // namespace UnityEngineInternal

namespace UnityEngineInternal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12310
	public enum TypeInferenceRules : [Int32]
	{
		TypeReferencedByFirstArgument = 0,
		TypeReferencedBySecondArgument = 1,
		ArrayOfTypeReferencedByFirstArgument = 2,
		TypeOfFirstArgument = 3
	}
} // namespace UnityEngineInternal

namespace UnityEngineInternal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B125C0
	public class TypeInferenceRuleAttribute : [Attribute]
	{
		// Fields
		private readonly [String] _rule; // 0x10

		// Methods
		public new [Void] .ctor([TypeInferenceRules] rule);
		// VA: 0x7B46D29BA4 RVA: 0x3323BA4 Offset: 0x3322BA4
		public new [Void] .ctor([String] rule);
		// VA: 0x7B46D29C28 RVA: 0x3323C28 Offset: 0x3322C28
		public override new [String] ToString();
		// VA: 0x7B46D29C50 RVA: 0x3323C50 Offset: 0x3322C50
	}
} // namespace UnityEngineInternal

namespace UnityEngineInternal {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12770
	public class GenericStack : [Stack]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D29C58 RVA: 0x3323C58 Offset: 0x3322C58
	}
} // namespace UnityEngineInternal

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1AA70
	public sealed class ReadOnlyAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1AC20
	public sealed class WriteOnlyAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1ADD0
	public sealed class DeallocateOnJobCompletionAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1AF80
	public sealed class NativeFixedLengthAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1B130
	public sealed class NativeMatchesParallelForLengthAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1B2E0
	public sealed class NativeDisableParallelForRestrictionAttribute : [Attribute]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7076CE30
	public enum Allocator : [Int32]
	{
		Invalid = 0,
		None = 1,
		Temp = 2,
		TempJob = 3,
		Persistent = 4,
		AudioKernel = 5,
		FirstUserIndex = 64
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1B490
	private enum LeakCategory : [Int32]
	{
		Invalid = 0,
		Malloc = 1,
		TempJob = 2,
		Persistent = 3,
		LightProbesQuery = 4,
		NativeTest = 5,
		MeshDataArray = 6,
		TransformAccessArray = 7,
		NavMeshQuery = 8
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7076D0E0
	public enum NativeArrayOptions : [Int32]
	{
		UninitializedMemory = 0,
		ClearMemory = 1
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706A5490
	public struct NativeArray`1 : [ValueType]
	{
		// Fields
		public [Void*] m_Buffer; // 0xFFFFFFFFFFFFFFF0
		public [Int32] m_Length; // 0xFFFFFFFFFFFFFFF0
		public [Int32] m_AllocatorLabel; // enum: [Allocator], 0xFFFFFFFFFFFFFFF0

		// Methods
		public new [Void] .ctor([Int32] length, [Allocator] allocator, [NativeArrayOptions] options);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Void] .ctor([T[]] array, [Allocator] allocator);
		// VA: 0x7B45028E74 RVA: 0x1622E74 Offset: 0x1621E74
		private static new [Void] Allocate([Int32] length, [Allocator] allocator, out [NativeArray`1] array);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public new [Int32] get_Length();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		public new [T] get_Item([Int32] index);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] set_Item([Int32] index, [T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Boolean] get_IsCreated();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
		public sealed new [Void] Dispose();
		// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
		public new [T[]] ToArray();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public new [NativeArray`1]->[Enumerator] GetEnumerator();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private sealed new [IEnumerator`1] System.Collections.Generic.IEnumerable<T>.GetEnumerator();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		private sealed new [IEnumerator] System.Collections.IEnumerable.GetEnumerator();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public sealed new [Boolean] Equals([NativeArray`1] other);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B45027BCC RVA: 0x1621BCC Offset: 0x1620BCC
		public override new [Int32] GetHashCode();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		public static new [Void] Copy([T[]] src, [NativeArray`1] dst);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] Copy([NativeArray`1] src, [NativeArray`1] dst, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] Copy([NativeArray`1] src, [T[]] dst, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] CopySafe([NativeArray`1] src, [Int32] srcIndex, [NativeArray`1] dst, [Int32] dstIndex, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] CopySafe([T[]] src, [Int32] srcIndex, [NativeArray`1] dst, [Int32] dstIndex, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private static new [Void] CopySafe([NativeArray`1] src, [Int32] srcIndex, [T[]] dst, [Int32] dstIndex, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [NativeArray`1]->[ReadOnly] AsReadOnly();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706A52C0
		public struct Enumerator : [ValueType]
		{
			// Fields
			private [NativeArray`1] m_Array; // 0xFFFFFFFFFFFFFFF0
			private [Int32] m_Index; // 0xFFFFFFFFFFFFFFF0
			private [T] value; // 0xFFFFFFFFFFFFFFF0

			// Methods
			public new [Void] .ctor(ref [NativeArray`1] array);
			// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
			public sealed new [Void] Dispose();
			// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
			public sealed new [Boolean] MoveNext();
			// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
			public sealed new [Void] Reset();
			// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
			public sealed new [T] get_Current();
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			private sealed new [Object] System.Collections.IEnumerator.get_Current();
			// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706A5820
		public struct ReadOnly : [ValueType]
		{
			// Fields
			public [Void*] m_Buffer; // 0xFFFFFFFFFFFFFFF0
			public [Int32] m_Length; // 0xFFFFFFFFFFFFFFF0

			// Methods
			internal new [Void] .ctor([Void*] buffer, [Int32] length);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			public new [Int32] get_Length();
			// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
			public new [T] get_Item([Int32] index);
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			public new [NativeArray`1]->[ReadOnly]->[Enumerator] GetEnumerator();
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			private sealed new [IEnumerator`1] System.Collections.Generic.IEnumerable<T>.GetEnumerator();
			// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
			private sealed new [IEnumerator] System.Collections.IEnumerable.GetEnumerator();
			// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84

			// Nested types
			// UnityEngine.CoreModule.dll
			// Class VA: 0x7A706A5650
			public struct Enumerator : [ValueType]
			{
				// Fields
				private [NativeArray`1]->[ReadOnly] m_Array; // 0xFFFFFFFFFFFFFFF0
				private [Int32] m_Index; // 0xFFFFFFFFFFFFFFF0
				private [T] value; // 0xFFFFFFFFFFFFFFF0

				// Methods
				public new [Void] .ctor(in [NativeArray`1]->[ReadOnly] array);
				// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
				public sealed new [Void] Dispose();
				// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
				public sealed new [Boolean] MoveNext();
				// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
				public sealed new [Void] Reset();
				// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
				public sealed new [T] get_Current();
				// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
				private sealed new [Object] System.Collections.IEnumerator.get_Current();
				// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
			}

		}

	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1B740
	private struct NativeArrayDispose : [ValueType]
	{
		// Fields
		public [Void*] m_Buffer; // 0x0
		public [Int32] m_AllocatorLabel; // enum: [Allocator], 0x8

		// Methods
		public new [Void] Dispose();
		// VA: 0x7B46D2AE2C RVA: 0x3324E2C Offset: 0x3323E2C
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1B8C0
	private struct NativeArrayDisposeJob : [ValueType]
	{
		// Fields
		public [NativeArrayDispose] Data; // 0x0

		// Methods
		public sealed new [Void] Execute();
		// VA: 0x7B46D2AEB4 RVA: 0x3324EB4 Offset: 0x3323EB4
		internal static new [Void] RegisterNativeArrayDisposeJobReflectionData();
		// VA: 0x7B46D2AEF8 RVA: 0x3324EF8 Offset: 0x3323EF8
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1BA50
	private sealed class NativeArrayDebugView`1 : [Object]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1BBD0
	private sealed class NativeArrayReadOnlyDebugView`1 : [Object]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093C4C0
	public static class NativeSliceExtensions : [Object]
	{
		// Fields

		// Methods
		public static new [NativeSlice`1] Slice([NativeArray`1] thisArray, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [NativeSlice`1] Slice([NativeSlice`1] thisSlice, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A706A5B90
	public struct NativeSlice`1 : [ValueType]
	{
		// Fields
		public [Byte*] m_Buffer; // 0xFFFFFFFFFFFFFFF0
		public [Int32] m_Stride; // 0xFFFFFFFFFFFFFFF0
		public [Int32] m_Length; // 0xFFFFFFFFFFFFFFF0

		// Methods
		public new [Void] .ctor([NativeSlice`1] slice, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] .ctor([NativeArray`1] array);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [NativeSlice`1] op_Implicit([NativeArray`1] array);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] .ctor([NativeArray`1] array, [Int32] start, [Int32] length);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [T] get_Item([Int32] index);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] set_Item([Int32] index, [T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] CopyFrom([NativeSlice`1] slice);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Void] CopyFrom([T[]] array);
		// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
		public new [Int32] get_Stride();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		public new [Int32] get_Length();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8
		public new [NativeSlice`1]->[Enumerator] GetEnumerator();
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		private sealed new [IEnumerator`1] System.Collections.Generic.IEnumerable<T>.GetEnumerator();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		private sealed new [IEnumerator] System.Collections.IEnumerable.GetEnumerator();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		public sealed new [Boolean] Equals([NativeSlice`1] other);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B45027BCC RVA: 0x1621BCC Offset: 0x1620BCC
		public override new [Int32] GetHashCode();
		// VA: 0x7B45027CF8 RVA: 0x1621CF8 Offset: 0x1620CF8

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A706A59C0
		public struct Enumerator : [ValueType]
		{
			// Fields
			private [NativeSlice`1] m_Array; // 0xFFFFFFFFFFFFFFF0
			private [Int32] m_Index; // 0xFFFFFFFFFFFFFFF0

			// Methods
			public new [Void] .ctor(ref [NativeSlice`1] array);
			// VA: 0x7B45028DF8 RVA: 0x1622DF8 Offset: 0x1621DF8
			public sealed new [Void] Dispose();
			// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
			public sealed new [Boolean] MoveNext();
			// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
			public sealed new [Void] Reset();
			// VA: 0x7B45028994 RVA: 0x1622994 Offset: 0x1621994
			public sealed new [T] get_Current();
			// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
			private sealed new [Object] System.Collections.IEnumerator.get_Current();
			// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		}

	}
} // namespace Unity.Collections

namespace Unity.Collections {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1BD50
	private sealed class NativeSliceDebugView`1 : [Object]
	{
		// Fields

		// Methods
	}
} // namespace Unity.Collections

namespace UnityEngine.Scripting {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B581E0
	public class PreserveAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D83610 RVA: 0x337D610 Offset: 0x337C610
	}
} // namespace UnityEngine.Scripting

namespace Unity.IO.Archive {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A340
	public enum ArchiveStatus : [Int32]
	{
		InProgress = 0,
		Complete = 1,
		Failed = 2
	}
} // namespace Unity.IO.Archive

namespace Unity.IO.Archive {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A5F0
	public struct ArchiveFileInfo : [ValueType]
	{
		// Fields
		public [String] Filename; // 0x0
		public [UInt64] FileSize; // 0x8

		// Methods
	}
} // namespace Unity.IO.Archive

namespace Unity.IO.Archive {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A770
	public struct ArchiveHandle : [ValueType]
	{
		// Fields
		public [UInt64] Handle; // 0x0

		// Methods
	}
} // namespace Unity.IO.Archive

namespace Unity.IO.Archive {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A8F0
	public static class ArchiveFileInterface : [Object]
	{
		// Fields

		// Methods
	}
} // namespace Unity.IO.Archive

namespace Microsoft.CodeAnalysis {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B11E00
	private sealed class EmbeddedAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D29AF4 RVA: 0x3323AF4 Offset: 0x3322AF4
	}
} // namespace Microsoft.CodeAnalysis

namespace Unity.Profiling.LowLevel {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18A20
	public enum MarkerFlags : [UInt16]
	{
		Default = 0,
		Script = 2,
		ScriptInvoke = 32,
		ScriptDeepProfiler = 64,
		AvailabilityEditor = 4,
		AvailabilityNonDevelopment = 8,
		Warning = 16,
		Counter = 128,
		SampleGPU = 256
	}
} // namespace Unity.Profiling.LowLevel

namespace Unity.Profiling.Memory {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18FD0
	public class MemorySnapshotMetadata : [Object]
	{
		// Fields
		// private [String] Description { get; set; }
		private [String] <Description>k__BackingField; // 0x10
		// private [Byte[]] Data { get; set; }
		private [Byte[]] <Data>k__BackingField; // 0x18

		// Methods
		public new [String] get_Description();
		// VA: 0x7B46D2A914 RVA: 0x3324914 Offset: 0x3323914
		public new [Void] set_Description([String] value);
		// VA: 0x7B46D2A91C RVA: 0x332491C Offset: 0x332391C
		internal new [Byte[]] get_Data();
		// VA: 0x7B46D2A924 RVA: 0x3324924 Offset: 0x3323924
		public new [Void] .ctor();
		// VA: 0x7B46D2A92C RVA: 0x332492C Offset: 0x332392C
	}
} // namespace Unity.Profiling.Memory

namespace Unity.Profiling.Memory {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B19150
	public static class MemoryProfiler : [Object]
	{
		// Fields
		private static [Action`2] m_SnapshotFinished; // 0x0
		private static [Action`3] m_SaveScreenshotToDisk; // 0x8
		private static [Action`1] CreatingMetadata; // 0x10

		// Methods
		private static new [Byte[]] PrepareMetadata();
		// VA: 0x7B46D2A934 RVA: 0x3324934 Offset: 0x3323934
		internal static new [Int32] WriteIntToByteArray([Byte[]] array, [Int32] offset, [Int32] value);
		// VA: 0x7B46D2AB30 RVA: 0x3324B30 Offset: 0x3323B30
		internal static new [Int32] WriteStringToByteArray([Byte[]] array, [Int32] offset, [String] value);
		// VA: 0x7B46D2ABBC RVA: 0x3324BBC Offset: 0x3323BBC
		private static new [Void] FinalizeSnapshot([String] path, [Boolean] result);
		// VA: 0x7B46D2ACAC RVA: 0x3324CAC Offset: 0x3323CAC
		private static new [Void] SaveScreenshotToDisk([String] path, [Boolean] result, [IntPtr] pixelsPtr, [Int32] pixelsCount, [TextureFormat] format, [Int32] width, [Int32] height);
		// VA: 0x7B46D2AD30 RVA: 0x3324D30 Offset: 0x3323D30
	}
} // namespace Unity.Profiling.Memory

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D61B20
	public enum ShaderHardwareTier : [Int32]
	{
		Tier1 = 0,
		Tier2 = 1,
		Tier3 = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D61DD0
	public enum BlendShapeBufferLayout : [Int32]
	{
		PerShape = 0,
		PerVertex = 1
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D62080
	public enum IndexFormat : [Int32]
	{
		UInt16 = 0,
		UInt32 = 1
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A709174F0
	public enum MeshUpdateFlags : [Int32]
	{
		Default = 0,
		DontValidateIndices = 1,
		DontResetBoneBounds = 2,
		DontNotifyMeshUsers = 4,
		DontRecalculateBounds = 8
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70917240
	public enum VertexAttributeFormat : [Int32]
	{
		Float32 = 0,
		Float16 = 1,
		UNorm8 = 2,
		SNorm8 = 3,
		UNorm16 = 4,
		SNorm16 = 5,
		UInt8 = 6,
		SInt8 = 7,
		UInt16 = 8,
		SInt16 = 9,
		UInt32 = 10,
		SInt32 = 11
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70916F90
	public enum VertexAttribute : [Int32]
	{
		Position = 0,
		Normal = 1,
		Tangent = 2,
		Color = 3,
		TexCoord0 = 4,
		TexCoord1 = 5,
		TexCoord2 = 6,
		TexCoord3 = 7,
		TexCoord4 = 8,
		TexCoord5 = 9,
		TexCoord6 = 10,
		TexCoord7 = 11,
		BlendWeight = 12,
		BlendIndices = 13
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D62330
	public enum OpaqueSortMode : [Int32]
	{
		Default = 0,
		FrontToBack = 1,
		NoDistanceSort = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D625E0
	public enum BlendMode : [Int32]
	{
		Zero = 0,
		One = 1,
		DstColor = 2,
		SrcColor = 3,
		OneMinusDstColor = 4,
		SrcAlpha = 5,
		OneMinusSrcColor = 6,
		DstAlpha = 7,
		OneMinusDstAlpha = 8,
		SrcAlphaSaturate = 9,
		OneMinusSrcAlpha = 10
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D62890
	public enum CompareFunction : [Int32]
	{
		Disabled = 0,
		Never = 1,
		Less = 2,
		Equal = 3,
		LessEqual = 4,
		Greater = 5,
		NotEqual = 6,
		GreaterEqual = 7,
		Always = 8
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D62B40
	public enum ColorWriteMask : [Int32]
	{
		Alpha = 1,
		Blue = 2,
		Green = 4,
		Red = 8,
		All = 15
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D62DF0
	public enum StencilOp : [Int32]
	{
		Keep = 0,
		Zero = 1,
		Replace = 2,
		IncrementSaturate = 3,
		DecrementSaturate = 4,
		Invert = 5,
		IncrementWrap = 6,
		DecrementWrap = 7
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D630A0
	public enum AmbientMode : [Int32]
	{
		Skybox = 0,
		Trilight = 1,
		Flat = 3,
		Custom = 4
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D63350
	public enum DefaultReflectionMode : [Int32]
	{
		Skybox = 0,
		Custom = 1
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D63600
	public enum CameraEvent : [Int32]
	{
		BeforeDepthTexture = 0,
		AfterDepthTexture = 1,
		BeforeDepthNormalsTexture = 2,
		AfterDepthNormalsTexture = 3,
		BeforeGBuffer = 4,
		AfterGBuffer = 5,
		BeforeLighting = 6,
		AfterLighting = 7,
		BeforeFinalPass = 8,
		AfterFinalPass = 9,
		BeforeForwardOpaque = 10,
		AfterForwardOpaque = 11,
		BeforeImageEffectsOpaque = 12,
		AfterImageEffectsOpaque = 13,
		BeforeSkybox = 14,
		AfterSkybox = 15,
		BeforeForwardAlpha = 16,
		AfterForwardAlpha = 17,
		BeforeImageEffects = 18,
		AfterImageEffects = 19,
		AfterEverything = 20,
		BeforeReflections = 21,
		AfterReflections = 22,
		BeforeHaloAndLensFlares = 23,
		AfterHaloAndLensFlares = 24
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D638B0
	private static class CameraEventUtils : [Object]
	{
		// Fields

		// Methods
		public static new [Boolean] IsValid([CameraEvent] value);
		// VA: 0x7B46D87198 RVA: 0x3381198 Offset: 0x3380198
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D63A30
	public enum BuiltinRenderTextureType : [Int32]
	{
		PropertyName = 4294967292,
		BufferPtr = 4294967293,
		RenderTexture = 4294967294,
		BindableTexture = 4294967295,
		None = 0,
		CurrentActive = 1,
		CameraTarget = 2,
		Depth = 3,
		DepthNormals = 4,
		ResolvedDepth = 5,
		PrepassNormalsSpec = 7,
		PrepassLight = 8,
		PrepassLightSpec = 9,
		GBuffer0 = 10,
		GBuffer1 = 11,
		GBuffer2 = 12,
		GBuffer3 = 13,
		Reflections = 14,
		MotionVectors = 15,
		GBuffer4 = 16,
		GBuffer5 = 17,
		GBuffer6 = 18,
		GBuffer7 = 19
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D63CE0
	public enum ShadowCastingMode : [Int32]
	{
		Off = 0,
		On = 1,
		TwoSided = 2,
		ShadowsOnly = 3
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68030
	public enum GraphicsTier : [Int32]
	{
		Tier1 = 0,
		Tier2 = 1,
		Tier3 = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D682E0
	public struct SubMeshDescriptor : [ValueType]
	{
		// Fields
		// private [Bounds] bounds { get; set; }
		private [Bounds] <bounds>k__BackingField; // 0x0
		// private [MeshTopology] topology { get; set; }
		private [MeshTopology] <topology>k__BackingField; // 0x18
		// private [Int32] indexStart { get; set; }
		private [Int32] <indexStart>k__BackingField; // 0x1C
		// private [Int32] indexCount { get; set; }
		private [Int32] <indexCount>k__BackingField; // 0x20
		// private [Int32] baseVertex { get; set; }
		private [Int32] <baseVertex>k__BackingField; // 0x24
		// private [Int32] firstVertex { get; set; }
		private [Int32] <firstVertex>k__BackingField; // 0x28
		// private [Int32] vertexCount { get; set; }
		private [Int32] <vertexCount>k__BackingField; // 0x2C

		// Methods
		public new [Bounds] get_bounds();
		// VA: 0x7B46D871A4 RVA: 0x33811A4 Offset: 0x33801A4
		public new [MeshTopology] get_topology();
		// VA: 0x7B46D871B8 RVA: 0x33811B8 Offset: 0x33801B8
		public new [Int32] get_indexStart();
		// VA: 0x7B46D871C0 RVA: 0x33811C0 Offset: 0x33801C0
		public new [Int32] get_indexCount();
		// VA: 0x7B46D871C8 RVA: 0x33811C8 Offset: 0x33801C8
		public new [Int32] get_baseVertex();
		// VA: 0x7B46D871D0 RVA: 0x33811D0 Offset: 0x33801D0
		public new [Int32] get_firstVertex();
		// VA: 0x7B46D871D8 RVA: 0x33811D8 Offset: 0x33801D8
		public new [Int32] get_vertexCount();
		// VA: 0x7B46D871E0 RVA: 0x33811E0 Offset: 0x33801E0
		public override new [String] ToString();
		// VA: 0x7B46D871E8 RVA: 0x33811E8 Offset: 0x33801E8
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68460
	public struct VertexAttributeDescriptor : [ValueType]
	{
		// Fields
		// private [VertexAttribute] attribute { get; set; }
		private [VertexAttribute] <attribute>k__BackingField; // 0x0
		// private [VertexAttributeFormat] format { get; set; }
		private [VertexAttributeFormat] <format>k__BackingField; // 0x4
		// private [Int32] dimension { get; set; }
		private [Int32] <dimension>k__BackingField; // 0x8
		// private [Int32] stream { get; set; }
		private [Int32] <stream>k__BackingField; // 0xC

		// Methods
		public new [VertexAttribute] get_attribute();
		// VA: 0x7B46D87484 RVA: 0x3381484 Offset: 0x3380484
		public new [Void] set_attribute([VertexAttribute] value);
		// VA: 0x7B46D8748C RVA: 0x338148C Offset: 0x338048C
		public new [VertexAttributeFormat] get_format();
		// VA: 0x7B46D87494 RVA: 0x3381494 Offset: 0x3380494
		public new [Void] set_format([VertexAttributeFormat] value);
		// VA: 0x7B46D8749C RVA: 0x338149C Offset: 0x338049C
		public new [Int32] get_dimension();
		// VA: 0x7B46D874A4 RVA: 0x33814A4 Offset: 0x33804A4
		public new [Void] set_dimension([Int32] value);
		// VA: 0x7B46D874AC RVA: 0x33814AC Offset: 0x33804AC
		public new [Int32] get_stream();
		// VA: 0x7B46D874B4 RVA: 0x33814B4 Offset: 0x33804B4
		public new [Void] set_stream([Int32] value);
		// VA: 0x7B46D874BC RVA: 0x33814BC Offset: 0x33804BC
		public new [Void] .ctor([VertexAttribute] attribute, [VertexAttributeFormat] format, [Int32] dimension, [Int32] stream);
		// VA: 0x7B46D874C4 RVA: 0x33814C4 Offset: 0x33804C4
		public override new [String] ToString();
		// VA: 0x7B46D874D0 RVA: 0x33814D0 Offset: 0x33804D0
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D876A4 RVA: 0x33816A4 Offset: 0x33806A4
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D876CC RVA: 0x33816CC Offset: 0x33806CC
		public sealed new [Boolean] Equals([VertexAttributeDescriptor] other);
		// VA: 0x7B46D87774 RVA: 0x3381774 Offset: 0x3380774
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D685F0
	public struct RenderTargetIdentifier : [ValueType]
	{
		// Fields
		private [Int32] m_Type; // enum: [BuiltinRenderTextureType], 0x0
		private [Int32] m_NameID; // 0x4
		private [Int32] m_InstanceID; // 0x8
		private [IntPtr] m_BufferPointer; // 0x10
		private [Int32] m_MipLevel; // 0x18
		private [Int32] m_CubeFace; // enum: [CubemapFace], 0x1C
		private [Int32] m_DepthSlice; // 0x20

		// Methods
		public override new [String] ToString();
		// VA: 0x7B46D877B8 RVA: 0x33817B8 Offset: 0x33807B8
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D87A60 RVA: 0x3381A60 Offset: 0x3380A60
		public sealed new [Boolean] Equals([RenderTargetIdentifier] rhs);
		// VA: 0x7B46D87AAC RVA: 0x3381AAC Offset: 0x3380AAC
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D87B44 RVA: 0x3381B44 Offset: 0x3380B44
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68780
	public enum ShadowSamplingMode : [Int32]
	{
		CompareDepths = 0,
		RawDepth = 1,
		None = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68A30
	public enum TextureDimension : [Int32]
	{
		Unknown = 4294967295,
		None = 0,
		Any = 1,
		Tex2D = 2,
		Tex3D = 3,
		Cube = 4,
		Tex2DArray = 5,
		CubeArray = 6
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68CE0
	public enum ComputeQueueType : [Int32]
	{
		Default = 0,
		Background = 1,
		Urgent = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D68F90
	public enum RenderTextureSubElement : [Int32]
	{
		Color = 0,
		Depth = 1,
		Stencil = 2,
		Default = 3
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D69240
	public sealed class GraphicsSettings : [Object]
	{
		// Fields

		// Methods
		public static new [Boolean] get_lightsUseLinearIntensity();
		// VA: 0x7B46D87BD4 RVA: 0x3381BD4 Offset: 0x3380BD4
		private static new [ScriptableObject] get_INTERNAL_currentRenderPipeline();
		// VA: 0x7B46D87BFC RVA: 0x3381BFC Offset: 0x3380BFC
		public static new [RenderPipelineAsset] get_currentRenderPipeline();
		// VA: 0x7B46D87C24 RVA: 0x3381C24 Offset: 0x3380C24
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D693C0
	public class OnDemandRendering : [Object]
	{
		// Fields
		private static [Int32] m_RenderFrameInterval; // 0x0

		// Methods
		public static new [Int32] get_renderFrameInterval();
		// VA: 0x7B46D87CB4 RVA: 0x3381CB4 Offset: 0x3380CB4
		internal static new [Void] GetRenderFrameInterval(out [Int32] frameInterval);
		// VA: 0x7B46D87D0C RVA: 0x3381D0C Offset: 0x3380D0C
		private static new [Void] .cctor();
		// VA: 0x7B46D87D64 RVA: 0x3381D64 Offset: 0x3380D64
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D69540
	public class CommandBuffer : [Object]
	{
		// Fields
		public [IntPtr] m_Ptr; // 0x10

		// Methods
		private static new [IntPtr] InitBuffer();
		// VA: 0x7B46D87DB0 RVA: 0x3381DB0 Offset: 0x3380DB0
		private new [Void] ReleaseBuffer();
		// VA: 0x7B46D87DD8 RVA: 0x3381DD8 Offset: 0x3380DD8
		protected override new [Void] Finalize();
		// VA: 0x7B46D87E14 RVA: 0x3381E14 Offset: 0x3380E14
		public sealed new [Void] Dispose();
		// VA: 0x7B46D87F14 RVA: 0x3381F14 Offset: 0x3380F14
		private new [Void] Dispose([Boolean] disposing);
		// VA: 0x7B46D87ED0 RVA: 0x3381ED0 Offset: 0x3380ED0
		public new [Void] .ctor();
		// VA: 0x7B46D87F98 RVA: 0x3381F98 Offset: 0x3380F98
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D696D0
	public struct SphericalHarmonicsL2 : [ValueType]
	{
		// Fields
		private [Single] shr0; // 0x0
		private [Single] shr1; // 0x4
		private [Single] shr2; // 0x8
		private [Single] shr3; // 0xC
		private [Single] shr4; // 0x10
		private [Single] shr5; // 0x14
		private [Single] shr6; // 0x18
		private [Single] shr7; // 0x1C
		private [Single] shr8; // 0x20
		private [Single] shg0; // 0x24
		private [Single] shg1; // 0x28
		private [Single] shg2; // 0x2C
		private [Single] shg3; // 0x30
		private [Single] shg4; // 0x34
		private [Single] shg5; // 0x38
		private [Single] shg6; // 0x3C
		private [Single] shg7; // 0x40
		private [Single] shg8; // 0x44
		private [Single] shb0; // 0x48
		private [Single] shb1; // 0x4C
		private [Single] shb2; // 0x50
		private [Single] shb3; // 0x54
		private [Single] shb4; // 0x58
		private [Single] shb5; // 0x5C
		private [Single] shb6; // 0x60
		private [Single] shb7; // 0x64
		private [Single] shb8; // 0x68

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D87FE0 RVA: 0x3381FE0 Offset: 0x3380FE0
		public override new [Boolean] Equals([Object] other);
		// VA: 0x7B46D881B4 RVA: 0x33821B4 Offset: 0x33811B4
		public sealed new [Boolean] Equals([SphericalHarmonicsL2] other);
		// VA: 0x7B46D8826C RVA: 0x338226C Offset: 0x338126C
		public static new [Boolean] op_Equality([SphericalHarmonicsL2] lhs, [SphericalHarmonicsL2] rhs);
		// VA: 0x7B46D882B4 RVA: 0x33822B4 Offset: 0x33812B4
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D69860
	private struct CoreCameraValues : [ValueType]
	{
		// Fields
		private [Int32] filterMode; // 0x0
		private [UInt32] cullingMask; // 0x4
		private [Int32] instanceID; // 0x8

		// Methods
		public sealed new [Boolean] Equals([CoreCameraValues] other);
		// VA: 0x7B46D88470 RVA: 0x3382470 Offset: 0x3381470
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D884A4 RVA: 0x33824A4 Offset: 0x33814A4
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8853C RVA: 0x338253C Offset: 0x338153C
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D69B70
	public struct CameraProperties : [ValueType]
	{
		// Fields
		private [Rect] screenRect; // 0x0
		private [Vector3] viewDir; // 0x10
		private [Single] projectionNear; // 0x1C
		private [Single] projectionFar; // 0x20
		private [Single] cameraNear; // 0x24
		private [Single] cameraFar; // 0x28
		private [Single] cameraAspect; // 0x2C
		private [Matrix4x4] cameraToWorld; // 0x30
		private [Matrix4x4] actualWorldToClip; // 0x70
		private [Matrix4x4] cameraClipToWorld; // 0xB0
		private [Matrix4x4] cameraWorldToClip; // 0xF0
		private [Matrix4x4] implicitProjection; // 0x130
		private [Matrix4x4] stereoWorldToClipLeft; // 0x170
		private [Matrix4x4] stereoWorldToClipRight; // 0x1B0
		private [Matrix4x4] worldToCamera; // 0x1F0
		private [Vector3] up; // 0x230
		private [Vector3] right; // 0x23C
		private [Vector3] transformDirection; // 0x248
		private [Vector3] cameraEuler; // 0x254
		private [Vector3] velocity; // 0x260
		private [Single] farPlaneWorldSpaceLength; // 0x26C
		private [UInt32] rendererCount; // 0x270
		public [CameraProperties]->[<m_ShadowCullPlanes>e__FixedBuffer] m_ShadowCullPlanes; // 0x274
		public [CameraProperties]->[<m_CameraCullPlanes>e__FixedBuffer] m_CameraCullPlanes; // 0x2D4
		private [Single] baseFarDistance; // 0x334
		private [Vector3] shadowCullCenter; // 0x338
		public [CameraProperties]->[<layerCullDistances>e__FixedBuffer] layerCullDistances; // 0x344
		private [Int32] layerCullSpherical; // 0x3C4
		private [CoreCameraValues] coreCameraValues; // 0x3C8
		private [UInt32] cameraType; // 0x3D4
		private [Int32] projectionIsOblique; // 0x3D8
		private [Int32] isImplicitProjectionMatrix; // 0x3DC

		// Methods
		public new [Plane] GetShadowCullingPlane([Int32] index);
		// VA: 0x7B46D8855C RVA: 0x338255C Offset: 0x338155C
		public new [Plane] GetCameraCullingPlane([Int32] index);
		// VA: 0x7B46D88640 RVA: 0x3382640 Offset: 0x3381640
		public sealed new [Boolean] Equals([CameraProperties] other);
		// VA: 0x7B46D88724 RVA: 0x3382724 Offset: 0x3381724
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D88D8C RVA: 0x3382D8C Offset: 0x3381D8C
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D88E44 RVA: 0x3382E44 Offset: 0x3381E44

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D699F0
		public struct <layerCullDistances>e__FixedBuffer : [ValueType]
		{
			// Fields
			public [Single] FixedElementField; // 0x0

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D69D00
		public struct <m_CameraCullPlanes>e__FixedBuffer : [ValueType]
		{
			// Fields
			public [Byte] FixedElementField; // 0x0

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D69E80
		public struct <m_ShadowCullPlanes>e__FixedBuffer : [ValueType]
		{
			// Fields
			public [Byte] FixedElementField; // 0x0

			// Methods
		}

	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6A000
	public enum CullingOptions : [Int32]
	{
		None = 0,
		ForceEvenIfCameraIsNotActive = 1,
		OcclusionCull = 2,
		NeedsLighting = 4,
		NeedsReflectionProbes = 8,
		Stereo = 16,
		DisablePerObjectCulling = 32,
		ShadowCasters = 64
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6A430
	public struct ScriptableCullingParameters : [ValueType]
	{
		// Fields
		private [Int32] m_IsOrthographic; // 0x0
		private [LODParameters] m_LODParameters; // 0x4
		public readonly static [Int32] maximumCullingPlaneCount; // 0x0
		public [ScriptableCullingParameters]->[<m_CullingPlanes>e__FixedBuffer] m_CullingPlanes; // 0x20
		private [Int32] m_CullingPlaneCount; // 0xC0
		private [UInt32] m_CullingMask; // 0xC4
		private [UInt64] m_SceneMask; // 0xC8
		private [UInt64] m_ViewID; // 0xD0
		public readonly static [Int32] layerCount; // 0x4
		public [ScriptableCullingParameters]->[<m_LayerFarCullDistances>e__FixedBuffer] m_LayerFarCullDistances; // 0xD8
		private [Int32] m_LayerCull; // 0x158
		private [Matrix4x4] m_CullingMatrix; // 0x15C
		private [Vector3] m_Origin; // 0x19C
		private [Single] m_ShadowDistance; // 0x1A8
		private [Single] m_ShadowNearPlaneOffset; // 0x1AC
		private [Int32] m_CullingOptions; // enum: [CullingOptions], 0x1B0
		private [Int32] m_ReflectionProbeSortingCriteria; // enum: [ReflectionProbeSortingCriteria], 0x1B4
		private [CameraProperties] m_CameraProperties; // 0x1B8
		private [Single] m_AccurateOcclusionThreshold; // 0x598
		private [Int32] m_MaximumPortalCullingJobs; // 0x59C
		private [Matrix4x4] m_StereoViewMatrix; // 0x5A0
		private [Matrix4x4] m_StereoProjectionMatrix; // 0x5E0
		private [Single] m_StereoSeparationDistance; // 0x620
		private [Int32] m_maximumVisibleLights; // 0x624
		private [Boolean] m_ConservativeEnclosingSphere; // 0x628
		private [Int32] m_NumIterationsEnclosingSphere; // 0x62C

		// Methods
		public new [Int32] get_cullingPlaneCount();
		// VA: 0x7B46D8929C RVA: 0x338329C Offset: 0x338229C
		public new [Single] GetLayerCullingDistance([Int32] layerIndex);
		// VA: 0x7B46D892A4 RVA: 0x33832A4 Offset: 0x33822A4
		public new [Plane] GetCullingPlane([Int32] index);
		// VA: 0x7B46D8937C RVA: 0x338337C Offset: 0x338237C
		public sealed new [Boolean] Equals([ScriptableCullingParameters] other);
		// VA: 0x7B46D894B0 RVA: 0x33834B0 Offset: 0x33824B0
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D89958 RVA: 0x3383958 Offset: 0x3382958
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D89A40 RVA: 0x3383A40 Offset: 0x3382A40
		private static new [Void] .cctor();
		// VA: 0x7B46D89D5C RVA: 0x3383D5C Offset: 0x3382D5C

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D6A2B0
		public struct <m_CullingPlanes>e__FixedBuffer : [ValueType]
		{
			// Fields
			public [Byte] FixedElementField; // 0x0

			// Methods
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D6A5C0
		public struct <m_LayerFarCullDistances>e__FixedBuffer : [ValueType]
		{
			// Fields
			public [Single] FixedElementField; // 0x0

			// Methods
		}

	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6A740
	public struct LODParameters : [ValueType]
	{
		// Fields
		private [Int32] m_IsOrthographic; // 0x0
		private [Vector3] m_CameraPosition; // 0x4
		private [Single] m_FieldOfView; // 0x10
		private [Single] m_OrthoSize; // 0x14
		private [Int32] m_CameraPixelHeight; // 0x18

		// Methods
		public sealed new [Boolean] Equals([LODParameters] other);
		// VA: 0x7B46D898BC RVA: 0x33838BC Offset: 0x33828BC
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D89DAC RVA: 0x3383DAC Offset: 0x3382DAC
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D89CC8 RVA: 0x3383CC8 Offset: 0x3382CC8
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6A8D0
	public class ObjectIdRequest : [Object]
	{
		// Fields
		// private [RenderTexture] destination { get; set; }
		private [RenderTexture] <destination>k__BackingField; // 0x10

		// Methods
		public new [RenderTexture] get_destination();
		// VA: 0x7B46D89E3C RVA: 0x3383E3C Offset: 0x3382E3C
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6AA50
	public enum ReflectionProbeSortingCriteria : [Int32]
	{
		None = 0,
		Importance = 1,
		Size = 2,
		ImportanceThenSize = 3
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093FA60
	public abstract class RenderPipeline : [Object]
	{
		// Fields
		// private [Boolean] disposed { get; set; }
		private [Boolean] <disposed>k__BackingField; // 0x10

		// Methods
		protected abstract new [Void] Render([ScriptableRenderContext] context, [Camera[]] cameras);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		protected virtual new [Void] ProcessRenderRequests([ScriptableRenderContext] context, [Camera] camera, [RequestData] renderRequest);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		protected internal virtual new [Boolean] IsRenderRequestSupported([Camera] camera, [RequestData] data);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		protected virtual new [Void] Render([ScriptableRenderContext] context, [List`1] cameras);
		// VA: 0x7B46D89E44 RVA: 0x3383E44 Offset: 0x3382E44
		internal new [Void] InternalRender([ScriptableRenderContext] context, [List`1] cameras);
		// VA: 0x7B46D89EBC RVA: 0x3383EBC Offset: 0x3382EBC
		internal new [Void] InternalProcessRenderRequests([ScriptableRenderContext] context, [Camera] camera, [RequestData] renderRequest);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public new [Boolean] get_disposed();
		// VA: 0x7B46D89F3C RVA: 0x3383F3C Offset: 0x3382F3C
		private new [Void] set_disposed([Boolean] value);
		// VA: 0x7B46D89F44 RVA: 0x3383F44 Offset: 0x3382F44
		internal new [Void] Dispose();
		// VA: 0x7B46D89F50 RVA: 0x3383F50 Offset: 0x3382F50
		protected virtual new [Void] Dispose([Boolean] disposing);
		// VA: 0x7B46D89FC8 RVA: 0x3383FC8 Offset: 0x3382FC8
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6AD00
	public abstract class RenderPipelineAsset : [ScriptableObject]
	{
		// Fields

		// Methods
		internal new [RenderPipeline] InternalCreatePipeline();
		// VA: 0x7B46D89FCC RVA: 0x3383FCC Offset: 0x3382FCC
		public virtual new [String[]] get_renderingLayerMaskNames();
		// VA: 0x7B46D8A2C4 RVA: 0x33842C4 Offset: 0x33832C4
		public virtual new [String[]] get_prefixedRenderingLayerMaskNames();
		// VA: 0x7B46D8A2CC RVA: 0x33842CC Offset: 0x33832CC
		public virtual new [Material] get_defaultMaterial();
		// VA: 0x7B46D8A2D4 RVA: 0x33842D4 Offset: 0x33832D4
		public virtual new [Shader] get_autodeskInteractiveShader();
		// VA: 0x7B46D8A2DC RVA: 0x33842DC Offset: 0x33832DC
		public virtual new [Shader] get_autodeskInteractiveTransparentShader();
		// VA: 0x7B46D8A2E4 RVA: 0x33842E4 Offset: 0x33832E4
		public virtual new [Shader] get_autodeskInteractiveMaskedShader();
		// VA: 0x7B46D8A2EC RVA: 0x33842EC Offset: 0x33832EC
		public virtual new [Shader] get_terrainDetailLitShader();
		// VA: 0x7B46D8A2F4 RVA: 0x33842F4 Offset: 0x33832F4
		public virtual new [Shader] get_terrainDetailGrassShader();
		// VA: 0x7B46D8A2FC RVA: 0x33842FC Offset: 0x33832FC
		public virtual new [Shader] get_terrainDetailGrassBillboardShader();
		// VA: 0x7B46D8A304 RVA: 0x3384304 Offset: 0x3383304
		public virtual new [Material] get_defaultParticleMaterial();
		// VA: 0x7B46D8A30C RVA: 0x338430C Offset: 0x338330C
		public virtual new [Material] get_defaultLineMaterial();
		// VA: 0x7B46D8A314 RVA: 0x3384314 Offset: 0x3383314
		public virtual new [Material] get_defaultTerrainMaterial();
		// VA: 0x7B46D8A31C RVA: 0x338431C Offset: 0x338331C
		public virtual new [Material] get_defaultUIMaterial();
		// VA: 0x7B46D8A324 RVA: 0x3384324 Offset: 0x3383324
		public virtual new [Material] get_defaultUIOverdrawMaterial();
		// VA: 0x7B46D8A32C RVA: 0x338432C Offset: 0x338332C
		public virtual new [Material] get_defaultUIETC1SupportedMaterial();
		// VA: 0x7B46D8A334 RVA: 0x3384334 Offset: 0x3383334
		public virtual new [Material] get_default2DMaterial();
		// VA: 0x7B46D8A33C RVA: 0x338433C Offset: 0x338333C
		public virtual new [Material] get_default2DMaskMaterial();
		// VA: 0x7B46D8A344 RVA: 0x3384344 Offset: 0x3383344
		public virtual new [Shader] get_defaultShader();
		// VA: 0x7B46D8A34C RVA: 0x338434C Offset: 0x338334C
		public virtual new [Shader] get_defaultSpeedTree7Shader();
		// VA: 0x7B46D8A354 RVA: 0x3384354 Offset: 0x3383354
		public virtual new [Shader] get_defaultSpeedTree8Shader();
		// VA: 0x7B46D8A35C RVA: 0x338435C Offset: 0x338335C
		public virtual new [String] get_renderPipelineShaderTag();
		// VA: 0x7B46D8A364 RVA: 0x3384364 Offset: 0x3383364
		protected abstract new [RenderPipeline] CreatePipeline();
		// VA: 0x7B45027F84 RVA: 0x1621F84 Offset: 0x1620F84
		protected virtual new [Void] OnValidate();
		// VA: 0x7B46D8A3F0 RVA: 0x33843F0 Offset: 0x33833F0
		protected virtual new [Void] OnDisable();
		// VA: 0x7B46D8A714 RVA: 0x3384714 Offset: 0x3383714
		protected new [Void] .ctor();
		// VA: 0x7B46D8A760 RVA: 0x3384760 Offset: 0x3383760
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6B000
	public static class RenderPipelineManager : [Object]
	{
		// Fields
		public static [RenderPipelineAsset] s_CurrentPipelineAsset; // 0x0
		private static [List`1] s_Cameras; // 0x8
		private static [String] s_CurrentPipelineType; // 0x10
		private static [RenderPipeline] s_CurrentPipeline; // 0x18
		private static [Action] activeRenderPipelineTypeChanged; // 0x20
		private static [Action`2] activeRenderPipelineAssetChanged; // 0x28
		private static [Action] activeRenderPipelineCreated; // 0x30
		private static [Action] activeRenderPipelineDisposed; // 0x38

		// Methods
		public static new [RenderPipeline] get_currentPipeline();
		// VA: 0x7B46D8A768 RVA: 0x3384768 Offset: 0x3383768
		private static new [Void] set_currentPipeline([RenderPipeline] value);
		// VA: 0x7B46D8A7C0 RVA: 0x33847C0 Offset: 0x33837C0
		internal static new [Void] OnActiveRenderPipelineTypeChanged();
		// VA: 0x7B46D8A860 RVA: 0x3384860 Offset: 0x3383860
		internal static new [Void] OnActiveRenderPipelineAssetChanged([ScriptableObject] from, [ScriptableObject] to);
		// VA: 0x7B46D8A8D4 RVA: 0x33848D4 Offset: 0x33838D4
		internal static new [Void] HandleRenderPipelineChange([RenderPipelineAsset] pipelineAsset);
		// VA: 0x7B46D8A9E0 RVA: 0x33849E0 Offset: 0x33839E0
		internal static new [Void] CleanupRenderPipeline();
		// VA: 0x7B46D8A4AC RVA: 0x33844AC Offset: 0x33834AC
		private static new [String] GetCurrentPipelineAssetType();
		// VA: 0x7B46D8AB40 RVA: 0x3384B40 Offset: 0x3383B40
		private static new [Void] DoRenderLoop_Internal([RenderPipelineAsset] pipe, [IntPtr] loopPtr, [Object] renderRequest);
		// VA: 0x7B46D8AB98 RVA: 0x3384B98 Offset: 0x3383B98
		internal static new [Void] PrepareRenderPipeline([RenderPipelineAsset] pipelineAsset);
		// VA: 0x7B46D8A660 RVA: 0x3384660 Offset: 0x3383660
		private static new [Boolean] IsPipelineRequireCreation();
		// VA: 0x7B46D8AEE0 RVA: 0x3384EE0 Offset: 0x3383EE0
		private static new [Void] .cctor();
		// VA: 0x7B46D8B02C RVA: 0x338502C Offset: 0x338402C
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093FC30
	public struct ScriptableRenderContext : [ValueType]
	{
		// Fields
		private readonly static [ShaderTagId] kRenderTypeTag; // 0x0
		private [IntPtr] m_Ptr; // 0x0

		// Methods
		private new [Void] GetCameras_Internal([Type] listType, [Object] resultList);
		// VA: 0x7B46D8B0D4 RVA: 0x33850D4 Offset: 0x33840D4
		internal new [Void] .ctor([IntPtr] ptr);
		// VA: 0x7B46D8AE20 RVA: 0x3384E20 Offset: 0x3383E20
		internal new [Void] GetCameras([List`1] results);
		// VA: 0x7B46D8AE28 RVA: 0x3384E28 Offset: 0x3383E28
		public sealed new [Boolean] Equals([ScriptableRenderContext] other);
		// VA: 0x7B46D8B1B4 RVA: 0x33851B4 Offset: 0x33841B4
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8B224 RVA: 0x3385224 Offset: 0x3384224
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8B2CC RVA: 0x33852CC Offset: 0x33842CC
		private static new [Void] .cctor();
		// VA: 0x7B46D8B2D4 RVA: 0x33852D4 Offset: 0x33842D4
		private static new [Void] GetCameras_Internal_Injected(ref [ScriptableRenderContext] _unity_self, [Type] listType, [Object] resultList);
		// VA: 0x7B46D8B160 RVA: 0x3385160 Offset: 0x3384160
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6B180
	public struct ShaderTagId : [ValueType]
	{
		// Fields
		private [Int32] m_Id; // 0x0

		// Methods
		public new [Void] .ctor([String] name);
		// VA: 0x7B46D8B33C RVA: 0x338533C Offset: 0x338433C
		internal new [Int32] get_id();
		// VA: 0x7B46D8B35C RVA: 0x338535C Offset: 0x338435C
		internal new [Void] set_id([Int32] value);
		// VA: 0x7B46D8B364 RVA: 0x3385364 Offset: 0x3384364
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8B36C RVA: 0x338536C Offset: 0x338436C
		public sealed new [Boolean] Equals([ShaderTagId] other);
		// VA: 0x7B46D8B3E4 RVA: 0x33853E4 Offset: 0x33843E4
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8B3F4 RVA: 0x33853F4 Offset: 0x33843F4
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6B310
	public struct StencilState : [ValueType]
	{
		// Fields
		private [Byte] m_Enabled; // 0x0
		private [Byte] m_ReadMask; // 0x1
		private [Byte] m_WriteMask; // 0x2
		private [Byte] m_Padding; // 0x3
		private [Byte] m_CompareFunctionFront; // 0x4
		private [Byte] m_PassOperationFront; // 0x5
		private [Byte] m_FailOperationFront; // 0x6
		private [Byte] m_ZFailOperationFront; // 0x7
		private [Byte] m_CompareFunctionBack; // 0x8
		private [Byte] m_PassOperationBack; // 0x9
		private [Byte] m_FailOperationBack; // 0xA
		private [Byte] m_ZFailOperationBack; // 0xB

		// Methods
		public new [Void] set_enabled([Boolean] value);
		// VA: 0x7B46D8B414 RVA: 0x3385414 Offset: 0x3384414
		public new [Void] set_readMask([Byte] value);
		// VA: 0x7B46D8B480 RVA: 0x3385480 Offset: 0x3384480
		public new [Void] set_writeMask([Byte] value);
		// VA: 0x7B46D8B488 RVA: 0x3385488 Offset: 0x3384488
		public new [Void] set_compareFunctionFront([CompareFunction] value);
		// VA: 0x7B46D8B490 RVA: 0x3385490 Offset: 0x3384490
		public new [Void] set_passOperationFront([StencilOp] value);
		// VA: 0x7B46D8B498 RVA: 0x3385498 Offset: 0x3384498
		public new [Void] set_failOperationFront([StencilOp] value);
		// VA: 0x7B46D8B4A0 RVA: 0x33854A0 Offset: 0x33844A0
		public new [Void] set_zFailOperationFront([StencilOp] value);
		// VA: 0x7B46D8B4A8 RVA: 0x33854A8 Offset: 0x33844A8
		public new [Void] set_compareFunctionBack([CompareFunction] value);
		// VA: 0x7B46D8B4B0 RVA: 0x33854B0 Offset: 0x33844B0
		public new [Void] set_passOperationBack([StencilOp] value);
		// VA: 0x7B46D8B4B8 RVA: 0x33854B8 Offset: 0x33844B8
		public new [Void] set_failOperationBack([StencilOp] value);
		// VA: 0x7B46D8B4C0 RVA: 0x33854C0 Offset: 0x33844C0
		public new [Void] set_zFailOperationBack([StencilOp] value);
		// VA: 0x7B46D8B4C8 RVA: 0x33854C8 Offset: 0x33844C8
		public sealed new [Boolean] Equals([StencilState] other);
		// VA: 0x7B46D8B4D0 RVA: 0x33854D0 Offset: 0x33844D0
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8B580 RVA: 0x3385580 Offset: 0x3384580
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8B5FC RVA: 0x33855FC Offset: 0x33845FC
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6B750
	public class SupportedRenderingFeatures : [Object]
	{
		// Fields
		private static [SupportedRenderingFeatures] s_Active; // 0x0
		// private [SupportedRenderingFeatures]->[ReflectionProbeModes] reflectionProbeModes { get; set; }
		private [SupportedRenderingFeatures]->[ReflectionProbeModes] <reflectionProbeModes>k__BackingField; // 0x10
		// private [SupportedRenderingFeatures]->[LightmapMixedBakeModes] defaultMixedLightingModes { get; set; }
		private [SupportedRenderingFeatures]->[LightmapMixedBakeModes] <defaultMixedLightingModes>k__BackingField; // 0x14
		// private [SupportedRenderingFeatures]->[LightmapMixedBakeModes] mixedLightingModes { get; set; }
		private [SupportedRenderingFeatures]->[LightmapMixedBakeModes] <mixedLightingModes>k__BackingField; // 0x18
		// private [LightmapBakeType] lightmapBakeTypes { get; set; }
		private [LightmapBakeType] <lightmapBakeTypes>k__BackingField; // 0x1C
		// private [LightmapsMode] lightmapsModes { get; set; }
		private [LightmapsMode] <lightmapsModes>k__BackingField; // 0x20
		// private [Boolean] enlightenLightmapper { get; set; }
		private [Boolean] <enlightenLightmapper>k__BackingField; // 0x24
		// private [Boolean] enlighten { get; set; }
		private [Boolean] <enlighten>k__BackingField; // 0x25
		// private [Boolean] lightProbeProxyVolumes { get; set; }
		private [Boolean] <lightProbeProxyVolumes>k__BackingField; // 0x26
		// private [Boolean] motionVectors { get; set; }
		private [Boolean] <motionVectors>k__BackingField; // 0x27
		// private [Boolean] receiveShadows { get; set; }
		private [Boolean] <receiveShadows>k__BackingField; // 0x28
		// private [Boolean] reflectionProbes { get; set; }
		private [Boolean] <reflectionProbes>k__BackingField; // 0x29
		// private [Boolean] reflectionProbesBlendDistance { get; set; }
		private [Boolean] <reflectionProbesBlendDistance>k__BackingField; // 0x2A
		// private [Boolean] rendererPriority { get; set; }
		private [Boolean] <rendererPriority>k__BackingField; // 0x2B
		// private [Boolean] rendersUIOverlay { get; set; }
		private [Boolean] <rendersUIOverlay>k__BackingField; // 0x2C
		// private [Boolean] overridesEnvironmentLighting { get; set; }
		private [Boolean] <overridesEnvironmentLighting>k__BackingField; // 0x2D
		// private [Boolean] overridesFog { get; set; }
		private [Boolean] <overridesFog>k__BackingField; // 0x2E
		// private [Boolean] overridesRealtimeReflectionProbes { get; set; }
		private [Boolean] <overridesRealtimeReflectionProbes>k__BackingField; // 0x2F
		// private [Boolean] overridesOtherLightingSettings { get; set; }
		private [Boolean] <overridesOtherLightingSettings>k__BackingField; // 0x30
		// private [Boolean] editableMaterialRenderQueue { get; set; }
		private [Boolean] <editableMaterialRenderQueue>k__BackingField; // 0x31
		// private [Boolean] overridesLODBias { get; set; }
		private [Boolean] <overridesLODBias>k__BackingField; // 0x32
		// private [Boolean] overridesMaximumLODLevel { get; set; }
		private [Boolean] <overridesMaximumLODLevel>k__BackingField; // 0x33
		// private [Boolean] overridesEnableLODCrossFade { get; set; }
		private [Boolean] <overridesEnableLODCrossFade>k__BackingField; // 0x34
		// private [Boolean] rendererProbes { get; set; }
		private [Boolean] <rendererProbes>k__BackingField; // 0x35
		// private [Boolean] particleSystemInstancing { get; set; }
		private [Boolean] <particleSystemInstancing>k__BackingField; // 0x36
		// private [Boolean] autoAmbientProbeBaking { get; set; }
		private [Boolean] <autoAmbientProbeBaking>k__BackingField; // 0x37
		// private [Boolean] autoDefaultReflectionProbeBaking { get; set; }
		private [Boolean] <autoDefaultReflectionProbeBaking>k__BackingField; // 0x38
		// private [Boolean] overridesShadowmask { get; set; }
		private [Boolean] <overridesShadowmask>k__BackingField; // 0x39
		// private [Boolean] overridesLightProbeSystem { get; set; }
		private [Boolean] <overridesLightProbeSystem>k__BackingField; // 0x3A
		// private [Boolean] supportsHDR { get; set; }
		private [Boolean] <supportsHDR>k__BackingField; // 0x3B
		// private [String] overridesLightProbeSystemWarningMessage { get; set; }
		private [String] <overridesLightProbeSystemWarningMessage>k__BackingField; // 0x40

		// Methods
		public static new [SupportedRenderingFeatures] get_active();
		// VA: 0x7B46D8B6EC RVA: 0x33856EC Offset: 0x33846EC
		public static new [Void] set_active([SupportedRenderingFeatures] value);
		// VA: 0x7B46D8AAE4 RVA: 0x3384AE4 Offset: 0x3383AE4
		public new [SupportedRenderingFeatures]->[LightmapMixedBakeModes] get_defaultMixedLightingModes();
		// VA: 0x7B46D8B78C RVA: 0x338578C Offset: 0x338478C
		public new [SupportedRenderingFeatures]->[LightmapMixedBakeModes] get_mixedLightingModes();
		// VA: 0x7B46D8B794 RVA: 0x3385794 Offset: 0x3384794
		public new [LightmapBakeType] get_lightmapBakeTypes();
		// VA: 0x7B46D8B79C RVA: 0x338579C Offset: 0x338479C
		public new [LightmapsMode] get_lightmapsModes();
		// VA: 0x7B46D8B7A4 RVA: 0x33857A4 Offset: 0x33847A4
		public new [Boolean] get_enlightenLightmapper();
		// VA: 0x7B46D8B7AC RVA: 0x33857AC Offset: 0x33847AC
		public new [Boolean] get_enlighten();
		// VA: 0x7B46D8B7B4 RVA: 0x33857B4 Offset: 0x33847B4
		public new [Boolean] get_rendersUIOverlay();
		// VA: 0x7B46D8B7BC RVA: 0x33857BC Offset: 0x33847BC
		public new [Boolean] get_autoAmbientProbeBaking();
		// VA: 0x7B46D8B7C4 RVA: 0x33857C4 Offset: 0x33847C4
		public new [Boolean] get_autoDefaultReflectionProbeBaking();
		// VA: 0x7B46D8B7CC RVA: 0x33857CC Offset: 0x33847CC
		public new [Boolean] get_overridesLightProbeSystem();
		// VA: 0x7B46D8B7D4 RVA: 0x33857D4 Offset: 0x33847D4
		internal static new [Void] FallbackMixedLightingModeByRef([IntPtr] fallbackModePtr);
		// VA: 0x7B46D8B7DC RVA: 0x33857DC Offset: 0x33847DC
		internal static new [Boolean] IsMixedLightingModeSupported([MixedLightingMode] mixedMode);
		// VA: 0x7B46D8B910 RVA: 0x3385910 Offset: 0x3384910
		internal static new [Void] IsMixedLightingModeSupportedByRef([MixedLightingMode] mixedMode, [IntPtr] isSupportedPtr);
		// VA: 0x7B46D8B97C RVA: 0x338597C Offset: 0x338497C
		internal static new [Boolean] IsLightmapBakeTypeSupported([LightmapBakeType] bakeType);
		// VA: 0x7B46D8BA84 RVA: 0x3385A84 Offset: 0x3384A84
		internal static new [Void] IsLightmapBakeTypeSupportedByRef([LightmapBakeType] bakeType, [IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BAF0 RVA: 0x3385AF0 Offset: 0x3384AF0
		internal static new [Void] IsLightmapsModeSupportedByRef([LightmapsMode] mode, [IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BBE0 RVA: 0x3385BE0 Offset: 0x3384BE0
		internal static new [Void] IsLightmapperSupportedByRef([Int32] lightmapper, [IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BC6C RVA: 0x3385C6C Offset: 0x3384C6C
		internal static new [Void] IsUIOverlayRenderedBySRP([IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BCF0 RVA: 0x3385CF0 Offset: 0x3384CF0
		internal static new [Void] IsAutoAmbientProbeBakingSupported([IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BD68 RVA: 0x3385D68 Offset: 0x3384D68
		internal static new [Void] IsAutoDefaultReflectionProbeBakingSupported([IntPtr] isSupportedPtr);
		// VA: 0x7B46D8BDE0 RVA: 0x3385DE0 Offset: 0x3384DE0
		internal static new [Void] OverridesLightProbeSystem([IntPtr] overridesPtr);
		// VA: 0x7B46D8BE58 RVA: 0x3385E58 Offset: 0x3384E58
		internal static new [Void] FallbackLightmapperByRef([IntPtr] lightmapperPtr);
		// VA: 0x7B46D8BED0 RVA: 0x3385ED0 Offset: 0x3384ED0
		public new [Void] .ctor();
		// VA: 0x7B46D8AA60 RVA: 0x3384A60 Offset: 0x3383A60
		private static new [Void] .cctor();
		// VA: 0x7B46D8BEEC RVA: 0x3385EEC Offset: 0x3384EEC

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D6B4A0
		public enum ReflectionProbeModes : [Int32]
		{
			None = 0,
			Rotation = 1
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D6B8D0
		public enum LightmapMixedBakeModes : [Int32]
		{
			None = 0,
			IndirectOnly = 1,
			Subtractive = 2,
			Shadowmask = 4
		}

	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6BB80
	public struct BatchID : [ValueType]
	{
		// Fields
		public readonly static [BatchID] Null; // 0x0
		public [UInt32] value; // 0x0

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8BF44 RVA: 0x3385F44 Offset: 0x3384F44
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8BF4C RVA: 0x3385F4C Offset: 0x3384F4C
		public sealed new [Boolean] Equals([BatchID] other);
		// VA: 0x7B46D8BFF4 RVA: 0x3385FF4 Offset: 0x3384FF4
		private static new [Void] .cctor();
		// VA: 0x7B46D8C004 RVA: 0x3386004 Offset: 0x3385004
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D6BD10
	public struct BatchMaterialID : [ValueType]
	{
		// Fields
		public readonly static [BatchMaterialID] Null; // 0x0
		public [UInt32] value; // 0x0

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8C04C RVA: 0x338604C Offset: 0x338504C
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8C054 RVA: 0x3386054 Offset: 0x3385054
		public sealed new [Boolean] Equals([BatchMaterialID] other);
		// VA: 0x7B46D8C0FC RVA: 0x33860FC Offset: 0x33850FC
		private static new [Void] .cctor();
		// VA: 0x7B46D8C10C RVA: 0x338610C Offset: 0x338510C
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70030
	public struct BatchMeshID : [ValueType]
	{
		// Fields
		public readonly static [BatchMeshID] Null; // 0x0
		public [UInt32] value; // 0x0

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8C154 RVA: 0x3386154 Offset: 0x3385154
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8C15C RVA: 0x338615C Offset: 0x338515C
		public sealed new [Boolean] Equals([BatchMeshID] other);
		// VA: 0x7B46D8C204 RVA: 0x3386204 Offset: 0x3385204
		private static new [Void] .cctor();
		// VA: 0x7B46D8C214 RVA: 0x3386214 Offset: 0x3385214
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D701C0
	public enum BatchDrawCommandFlags : [Int32]
	{
		None = 0,
		FlipWinding = 1,
		HasMotion = 2,
		IsLightMapped = 4,
		HasSortingPosition = 8,
		LODCrossFade = 16
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70470
	public enum BatchCullingFlags : [Int32]
	{
		None = 0,
		CullLightmappedShadowCasters = 1
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70720
	public enum BatchCullingViewType : [Int32]
	{
		Unknown = 0,
		Camera = 1,
		Light = 2,
		Picking = 3,
		SelectionOutline = 4
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D709D0
	public enum BatchCullingProjectionType : [Int32]
	{
		Unknown = 0,
		Perspective = 1,
		Orthographic = 2
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70C80
	public struct BatchPackedCullingViewID : [ValueType]
	{
		// Fields
		public [UInt64] handle; // 0x0

		// Methods
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8C25C RVA: 0x338625C Offset: 0x338525C
		public sealed new [Boolean] Equals([BatchPackedCullingViewID] other);
		// VA: 0x7B46D8C264 RVA: 0x3386264 Offset: 0x3385264
		public override new [Boolean] Equals([Object] obj);
		// VA: 0x7B46D8C274 RVA: 0x3386274 Offset: 0x3385274
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70E10
	public struct BatchDrawCommand : [ValueType]
	{
		// Fields
		public [UInt32] visibleOffset; // 0x0
		public [UInt32] visibleCount; // 0x4
		public [BatchID] batchID; // 0x8
		public [BatchMaterialID] materialID; // 0xC
		public [BatchMeshID] meshID; // 0x10
		public [UInt16] submeshIndex; // 0x14
		public [UInt16] splitVisibilityMask; // 0x16
		public [Int32] flags; // enum: [BatchDrawCommandFlags], 0x18
		public [Int32] sortingPosition; // 0x1C

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D70F90
	public struct BatchFilterSettings : [ValueType]
	{
		// Fields
		public [UInt32] renderingLayerMask; // 0x0
		public [Byte] layer; // 0x4
		private [Byte] m_motionMode; // 0x5
		private [Byte] m_shadowMode; // 0x6
		private [Byte] m_receiveShadows; // 0x7
		private [Byte] m_staticShadowCaster; // 0x8
		private [Byte] m_allDepthSorted; // 0x9

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71110
	public struct BatchDrawRange : [ValueType]
	{
		// Fields
		public [UInt32] drawCommandsBegin; // 0x0
		public [UInt32] drawCommandsCount; // 0x4
		public [BatchFilterSettings] filterSettings; // 0x8

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71290
	public struct BatchCullingOutputDrawCommands : [ValueType]
	{
		// Fields
		public [BatchDrawCommand*] drawCommands; // 0x0
		public [Int32*] visibleInstances; // 0x8
		public [BatchDrawRange*] drawRanges; // 0x10
		public [Single*] instanceSortingPositions; // 0x18
		public [Int32*] drawCommandPickingInstanceIDs; // 0x20
		public [Int32] drawCommandCount; // 0x28
		public [Int32] visibleInstanceCount; // 0x2C
		public [Int32] drawRangeCount; // 0x30
		public [Int32] instanceSortingPositionFloatCount; // 0x34

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71410
	public struct CullingSplit : [ValueType]
	{
		// Fields
		public [Vector3] sphereCenter; // 0x0
		public [Single] sphereRadius; // 0xC
		public [Int32] cullingPlaneOffset; // 0x10
		public [Int32] cullingPlaneCount; // 0x14
		public [Single] cascadeBlendCullingFactor; // 0x18
		public [Single] nearPlane; // 0x1C
		public [Matrix4x4] cullingMatrix; // 0x20

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71590
	public struct BatchCullingContext : [ValueType]
	{
		// Fields
		public readonly [NativeArray`1] cullingPlanes; // 0x0
		public readonly [NativeArray`1] cullingSplits; // 0x10
		public readonly [LODParameters] lodParameters; // 0x20
		public readonly [Matrix4x4] localToWorldMatrix; // 0x3C
		public readonly [Int32] viewType; // enum: [BatchCullingViewType], 0x7C
		public readonly [Int32] projectionType; // enum: [BatchCullingProjectionType], 0x80
		public readonly [Int32] cullingFlags; // enum: [BatchCullingFlags], 0x84
		public readonly [BatchPackedCullingViewID] viewID; // 0x88
		public readonly [UInt32] cullingLayerMask; // 0x90
		public readonly [UInt64] sceneCullingMask; // 0x98
		public readonly [Byte] isOrthographic; // 0xA0
		public readonly [Int32] receiverPlaneOffset; // 0xA4
		public readonly [Int32] receiverPlaneCount; // 0xA8

		// Methods
		internal new [Void] .ctor([NativeArray`1] inCullingPlanes, [NativeArray`1] inCullingSplits, [LODParameters] inLodParameters, [Matrix4x4] inLocalToWorldMatrix, [BatchCullingViewType] inViewType, [BatchCullingProjectionType] inProjectionType, [BatchCullingFlags] inBatchCullingFlags, [UInt64] inViewID, [UInt32] inCullingLayerMask, [UInt64] inSceneCullingMask, [Int32] inReceiverPlaneOffset, [Int32] inReceiverPlaneCount);
		// VA: 0x7B46D8C2EC RVA: 0x33862EC Offset: 0x33852EC
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71710
	public struct BatchCullingOutput : [ValueType]
	{
		// Fields
		public [NativeArray`1] drawCommands; // 0x0

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71890
	private struct BatchRendererCullingOutput : [ValueType]
	{
		// Fields
		public [JobHandle] cullingJobsFence; // 0x0
		public [Matrix4x4] localToWorldMatrix; // 0x10
		public [Plane*] cullingPlanes; // 0x50
		public [Int32] cullingPlaneCount; // 0x58
		public [Int32] receiverPlaneOffset; // 0x5C
		public [Int32] receiverPlaneCount; // 0x60
		public [CullingSplit*] cullingSplits; // 0x68
		public [Int32] cullingSplitCount; // 0x70
		public [Int32] viewType; // enum: [BatchCullingViewType], 0x74
		public [Int32] projectionType; // enum: [BatchCullingProjectionType], 0x78
		public [Int32] cullingFlags; // enum: [BatchCullingFlags], 0x7C
		public [UInt64] viewID; // 0x80
		public [UInt32] cullingLayerMask; // 0x88
		public [UInt64] sceneCullingMask; // 0x90
		public [BatchCullingOutputDrawCommands*] drawCommands; // 0x98

		// Methods
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71C30
	public class BatchRendererGroup : [Object]
	{
		// Fields
		private [IntPtr] m_GroupHandle; // 0x10
		private [BatchRendererGroup]->[OnPerformCulling] m_PerformCulling; // 0x18

		// Methods
		private static new [Void] InvokeOnPerformCulling([BatchRendererGroup] group, ref [BatchRendererCullingOutput] context, ref [LODParameters] lodParameters, [IntPtr] userContext);
		// VA: 0x7B46D8C360 RVA: 0x3386360 Offset: 0x3385360

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D71A10
		public sealed class OnPerformCulling : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D8C5A4 RVA: 0x33865A4 Offset: 0x33855A4
			public virtual new [JobHandle] Invoke([BatchRendererGroup] rendererGroup, [BatchCullingContext] cullingContext, [BatchCullingOutput] cullingOutput, [IntPtr] userContext);
			// VA: 0x7B46D8C6A8 RVA: 0x33866A8 Offset: 0x33856A8
		}

	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71DB0
	public struct GlobalKeyword : [ValueType]
	{
		// Fields
		public readonly [String] m_Name; // 0x0
		public readonly [UInt32] m_Index; // 0x8

		// Methods
		public override new [String] ToString();
		// VA: 0x7B46D8C724 RVA: 0x3386724 Offset: 0x3385724
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D71F30
	public struct LocalKeyword : [ValueType]
	{
		// Fields
		public readonly [LocalKeywordSpace] m_SpaceInfo; // 0x0
		public readonly [String] m_Name; // 0x8
		public readonly [UInt32] m_Index; // 0x10

		// Methods
		public override new [String] ToString();
		// VA: 0x7B46D8C72C RVA: 0x338672C Offset: 0x338572C
		public override new [Boolean] Equals([Object] o);
		// VA: 0x7B46D8C734 RVA: 0x3386734 Offset: 0x3385734
		public sealed new [Boolean] Equals([LocalKeyword] rhs);
		// VA: 0x7B46D8C7C0 RVA: 0x33867C0 Offset: 0x33857C0
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8C810 RVA: 0x3386810 Offset: 0x3385810
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D720C0
	public struct LocalKeywordSpace : [ValueType]
	{
		// Fields
		private readonly [IntPtr] m_KeywordSpace; // 0x0

		// Methods
		public override new [Boolean] Equals([Object] o);
		// VA: 0x7B46D8C850 RVA: 0x3386850 Offset: 0x3385850
		public sealed new [Boolean] Equals([LocalKeywordSpace] rhs);
		// VA: 0x7B46D8C8CC RVA: 0x33868CC Offset: 0x33858CC
		public static new [Boolean] op_Equality([LocalKeywordSpace] lhs, [LocalKeywordSpace] rhs);
		// VA: 0x7B46D8C808 RVA: 0x3386808 Offset: 0x3385808
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8C848 RVA: 0x3386848 Offset: 0x3385848
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72250
	public enum ShaderPropertyType : [Int32]
	{
		Color = 0,
		Vector = 1,
		Float = 2,
		Range = 3,
		Texture = 4,
		Int = 5
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72500
	public enum ShaderPropertyFlags : [Int32]
	{
		None = 0,
		HideInInspector = 1,
		PerRendererData = 2,
		NoScaleOffset = 4,
		Normal = 8,
		HDR = 16,
		Gamma = 32,
		NonModifiableTextureData = 64,
		MainTexture = 128,
		MainColor = 256
	}
} // namespace UnityEngine.Rendering

namespace UnityEngine.Rendering {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D727B0
	public sealed class SortingGroup : [Behaviour]
	{
		// Fields

		// Methods
		internal static new [Int32] get_invalidSortingGroupID();
		// VA: 0x7B46D8C8D8 RVA: 0x33868D8 Offset: 0x33858D8
		internal static new [SortingGroup] GetSortingGroupByIndex([Int32] index);
		// VA: 0x7B46D8C900 RVA: 0x3386900 Offset: 0x3385900
		public new [Int32] get_sortingLayerID();
		// VA: 0x7B46D8C93C RVA: 0x338693C Offset: 0x338593C
		public new [Int32] get_sortingOrder();
		// VA: 0x7B46D8C978 RVA: 0x3386978 Offset: 0x3385978
		public new [Void] .ctor();
		// VA: 0x7B46D8C9B4 RVA: 0x33869B4 Offset: 0x33859B4
	}
} // namespace UnityEngine.Rendering

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B13BA0
	public sealed class IgnoredByDeepProfilerAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2A224 RVA: 0x3324224 Offset: 0x3323224
	}
} // namespace Unity.Profiling

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B13D50
	public struct ProfilerCategory : [ValueType]
	{
		// Fields
		private readonly [UInt16] m_CategoryId; // 0x0

		// Methods
		internal new [Void] .ctor([UInt16] category);
		// VA: 0x7B46D2A22C RVA: 0x332422C Offset: 0x332322C
		public new [String] get_Name();
		// VA: 0x7B46D2A234 RVA: 0x3324234 Offset: 0x3323234
		public override new [String] ToString();
		// VA: 0x7B46D2A430 RVA: 0x3324430 Offset: 0x3323430
		public static new [ProfilerCategory] get_Scripts();
		// VA: 0x7B46D2A434 RVA: 0x3324434 Offset: 0x3323434
		public static new [UInt16] op_Implicit([ProfilerCategory] category);
		// VA: 0x7B46D2A43C RVA: 0x332443C Offset: 0x332343C
	}
} // namespace Unity.Profiling

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18030
	public enum ProfilerCategoryColor : [UInt16]
	{
		Render = 0,
		Scripts = 1,
		BurstJobs = 2,
		Other = 3,
		Physics = 4,
		Animation = 5,
		Audio = 6,
		AudioJob = 7,
		AudioUpdateJob = 8,
		Lighting = 9,
		GC = 10,
		VSync = 11,
		Memory = 12,
		Internal = 13,
		UI = 14,
		Build = 15,
		Input = 16
	}
} // namespace Unity.Profiling

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18470
	public struct ProfilerMarker : [ValueType]
	{
		// Fields
		public readonly [NonSerialized] [IntPtr] m_Ptr; // 0x0

		// Methods
		public new [Void] .ctor([String] name);
		// VA: 0x7B46D2A440 RVA: 0x3324440 Offset: 0x3323440
		public new [Void] .ctor([ProfilerCategory] category, [String] name);
		// VA: 0x7B46D2A4F0 RVA: 0x33244F0 Offset: 0x33234F0
		public new [ProfilerMarker]->[AutoScope] Auto();
		// VA: 0x7B46D2A550 RVA: 0x3324550 Offset: 0x3323550

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B182E0
		public struct AutoScope : [ValueType]
		{
			// Fields
			public readonly [IntPtr] m_Ptr; // 0x0

			// Methods
			internal new [Void] .ctor([IntPtr] markerPtr);
			// VA: 0x7B46D2A5A8 RVA: 0x33245A8 Offset: 0x33235A8
			public sealed new [Void] Dispose();
			// VA: 0x7B46D2A644 RVA: 0x3324644 Offset: 0x3323644
		}

	}
} // namespace Unity.Profiling

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B185F0
	public enum ProfilerCounterOptions : [UInt16]
	{
		None = 0,
		FlushOnEndOfFrame = 2,
		ResetToZeroOnFlush = 4
	}
} // namespace Unity.Profiling

namespace Unity.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B188A0
	public struct DebugScreenCapture : [ValueType]
	{
		// Fields
		// private [NativeArray`1] RawImageDataReference { get; set; }
		private [NativeArray`1] <RawImageDataReference>k__BackingField; // 0x0
		// private [TextureFormat] ImageFormat { get; set; }
		private [TextureFormat] <ImageFormat>k__BackingField; // 0x10
		// private [Int32] Width { get; set; }
		private [Int32] <Width>k__BackingField; // 0x14
		// private [Int32] Height { get; set; }
		private [Int32] <Height>k__BackingField; // 0x18

		// Methods
		public new [Void] set_RawImageDataReference([NativeArray`1] value);
		// VA: 0x7B46D2A6E0 RVA: 0x33246E0 Offset: 0x33236E0
		public new [Void] set_ImageFormat([TextureFormat] value);
		// VA: 0x7B46D2A6E8 RVA: 0x33246E8 Offset: 0x33236E8
		public new [Void] set_Width([Int32] value);
		// VA: 0x7B46D2A6F0 RVA: 0x33246F0 Offset: 0x33236F0
		public new [Void] set_Height([Int32] value);
		// VA: 0x7B46D2A6F8 RVA: 0x33246F8 Offset: 0x33236F8
	}
} // namespace Unity.Profiling

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72BE0
	public struct FrameData : [ValueType]
	{
		// Fields
		public [UInt64] m_FrameID; // 0x0
		public [Double] m_DeltaTime; // 0x8
		public [Single] m_Weight; // 0x10
		public [Single] m_EffectiveWeight; // 0x14
		public [Double] m_EffectiveParentDelay; // 0x18
		public [Single] m_EffectiveParentSpeed; // 0x20
		public [Single] m_EffectiveSpeed; // 0x24
		public [Int32] m_Flags; // enum: [FrameData]->[Flags], 0x28
		public [PlayableOutput] m_Output; // 0x30

		// Methods

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D72930
		private enum Flags : [Int32]
		{
			Evaluate = 1,
			SeekOccured = 2,
			Loop = 4,
			Hold = 8,
			EffectivePlayStateDelayed = 16,
			EffectivePlayStatePlaying = 32
		}

	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72D60
	public abstract interface INotification
	{
		// Fields

		// Methods
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72EA0
	public abstract interface INotificationReceiver
	{
		// Fields

		// Methods
		public abstract new [Void] OnNotify([Playable] origin, [INotification] notification, [Object] context);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D72FE0
	public abstract interface IPlayableBehaviour
	{
		// Fields

		// Methods
		public abstract new [Void] OnGraphStart([Playable] playable);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] OnGraphStop([Playable] playable);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] OnPlayableCreate([Playable] playable);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] OnPlayableDestroy([Playable] playable);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] OnBehaviourPlay([Playable] playable, [FrameData] info);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] OnBehaviourPause([Playable] playable, [FrameData] info);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] PrepareFrame([Playable] playable, [FrameData] info);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public abstract new [Void] ProcessFrame([Playable] playable, [FrameData] info, [Object] playerData);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73120
	public struct Playable : [ValueType]
	{
		// Fields
		private [PlayableHandle] m_Handle; // 0x0
		private readonly static [Playable] m_NullPlayable; // 0x0

		// Methods
		public static new [Playable] get_Null();
		// VA: 0x7B46D8C9BC RVA: 0x33869BC Offset: 0x33859BC
		internal new [Void] .ctor([PlayableHandle] handle);
		// VA: 0x7B46D8CA14 RVA: 0x3386A14 Offset: 0x3385A14
		public sealed new [PlayableHandle] GetHandle();
		// VA: 0x7B46D8CA1C RVA: 0x3386A1C Offset: 0x3385A1C
		public sealed new [Boolean] Equals([Playable] other);
		// VA: 0x7B46D8CA28 RVA: 0x3386A28 Offset: 0x3385A28
		private static new [Void] .cctor();
		// VA: 0x7B46D8CB48 RVA: 0x3386B48 Offset: 0x3385B48
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D732C0
	public abstract class PlayableAsset : [ScriptableObject]
	{
		// Fields

		// Methods
		public abstract new [Playable] CreatePlayable([PlayableGraph] graph, [GameObject] owner);
		// VA: 0x0 RVA: 0x0 Offset: 0x0
		public virtual new [Double] get_duration();
		// VA: 0x7B46D8CC10 RVA: 0x3386C10 Offset: 0x3385C10
		public virtual new [IEnumerable`1] get_outputs();
		// VA: 0x7B46D8CC68 RVA: 0x3386C68 Offset: 0x3385C68
		internal static new [Void] Internal_CreatePlayable([PlayableAsset] asset, [PlayableGraph] graph, [GameObject] go, [IntPtr] ptr);
		// VA: 0x7B46D8CCC0 RVA: 0x3386CC0 Offset: 0x3385CC0
		internal static new [Void] Internal_GetPlayableAssetDuration([PlayableAsset] asset, [IntPtr] ptrToDouble);
		// VA: 0x7B46D8CD98 RVA: 0x3386D98 Offset: 0x3385D98
		protected new [Void] .ctor();
		// VA: 0x7B46D8CDC0 RVA: 0x3386DC0 Offset: 0x3385DC0
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73470
	public abstract class PlayableBehaviour : [Object]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D8CDC8 RVA: 0x3386DC8 Offset: 0x3385DC8
		public virtual new [Void] OnGraphStart([Playable] playable);
		// VA: 0x7B46D8CDD0 RVA: 0x3386DD0 Offset: 0x3385DD0
		public virtual new [Void] OnGraphStop([Playable] playable);
		// VA: 0x7B46D8CDD4 RVA: 0x3386DD4 Offset: 0x3385DD4
		public virtual new [Void] OnPlayableCreate([Playable] playable);
		// VA: 0x7B46D8CDD8 RVA: 0x3386DD8 Offset: 0x3385DD8
		public virtual new [Void] OnPlayableDestroy([Playable] playable);
		// VA: 0x7B46D8CDDC RVA: 0x3386DDC Offset: 0x3385DDC
		public virtual new [Void] OnBehaviourPlay([Playable] playable, [FrameData] info);
		// VA: 0x7B46D8CDE0 RVA: 0x3386DE0 Offset: 0x3385DE0
		public virtual new [Void] OnBehaviourPause([Playable] playable, [FrameData] info);
		// VA: 0x7B46D8CDE4 RVA: 0x3386DE4 Offset: 0x3385DE4
		public virtual new [Void] PrepareFrame([Playable] playable, [FrameData] info);
		// VA: 0x7B46D8CDE8 RVA: 0x3386DE8 Offset: 0x3385DE8
		public virtual new [Void] ProcessFrame([Playable] playable, [FrameData] info, [Object] playerData);
		// VA: 0x7B46D8CDEC RVA: 0x3386DEC Offset: 0x3385DEC
		public virtual new [Object] Clone();
		// VA: 0x7B46D8CDF0 RVA: 0x3386DF0 Offset: 0x3385DF0
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73930
	public struct PlayableBinding : [ValueType]
	{
		// Fields
		private [String] m_StreamName; // 0x0
		private [Object] m_SourceObject; // 0x8
		private [Type] m_SourceBindingType; // 0x10
		private [PlayableBinding]->[CreateOutputMethod] m_CreateOutputMethod; // 0x18
		public readonly static [PlayableBinding[]] None; // 0x0
		public readonly static [Double] DefaultDuration; // 0x8

		// Methods
		private static new [Void] .cctor();
		// VA: 0x7B46D8CDF8 RVA: 0x3386DF8 Offset: 0x3385DF8

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D73710
		public sealed class CreateOutputMethod : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D8CE70 RVA: 0x3386E70 Offset: 0x3385E70
			public virtual new [PlayableOutput] Invoke([PlayableGraph] graph, [String] name);
			// VA: 0x7B46D8CEFC RVA: 0x3386EFC Offset: 0x3385EFC
		}

	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73AB0
	public struct PlayableGraph : [ValueType]
	{
		// Fields
		public [IntPtr] m_Handle; // 0x0
		public [UInt32] m_Version; // 0x8

		// Methods
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A7093D9B0
	public struct PlayableHandle : [ValueType]
	{
		// Fields
		public [IntPtr] m_Handle; // 0x0
		public [UInt32] m_Version; // 0x8
		private readonly static [PlayableHandle] m_Null; // 0x0

		// Methods
		internal new [Boolean] IsPlayableOfType();
		// VA: 0x7B45027A88 RVA: 0x1621A88 Offset: 0x1620A88
		public static new [PlayableHandle] get_Null();
		// VA: 0x7B46D8CBB8 RVA: 0x3386BB8 Offset: 0x3385BB8
		public static new [Boolean] op_Equality([PlayableHandle] x, [PlayableHandle] y);
		// VA: 0x7B46D8CAC0 RVA: 0x3386AC0 Offset: 0x3385AC0
		public override new [Boolean] Equals([Object] p);
		// VA: 0x7B46D8CF44 RVA: 0x3386F44 Offset: 0x3385F44
		public sealed new [Boolean] Equals([PlayableHandle] other);
		// VA: 0x7B46D8CFEC RVA: 0x3386FEC Offset: 0x3385FEC
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8D06C RVA: 0x338706C Offset: 0x338606C
		internal static new [Boolean] CompareVersion([PlayableHandle] lhs, [PlayableHandle] rhs);
		// VA: 0x7B46D8CF10 RVA: 0x3386F10 Offset: 0x3385F10
		internal new [Boolean] IsValid();
		// VA: 0x7B46D8D0A0 RVA: 0x33870A0 Offset: 0x33860A0
		internal new [Type] GetPlayableType();
		// VA: 0x7B46D8D150 RVA: 0x3387150 Offset: 0x3386150
		private static new [Void] .cctor();
		// VA: 0x7B46D8D200 RVA: 0x3387200 Offset: 0x3386200
		private static new [Boolean] IsValid_Injected(ref [PlayableHandle] _unity_self);
		// VA: 0x7B46D8D114 RVA: 0x3387114 Offset: 0x3386114
		private static new [Type] GetPlayableType_Injected(ref [PlayableHandle] _unity_self);
		// VA: 0x7B46D8D1C4 RVA: 0x33871C4 Offset: 0x33861C4
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73C30
	public struct PlayableOutput : [ValueType]
	{
		// Fields
		private [PlayableOutputHandle] m_Handle; // 0x0
		private readonly static [PlayableOutput] m_NullPlayableOutput; // 0x0

		// Methods
		internal new [Void] .ctor([PlayableOutputHandle] handle);
		// VA: 0x7B46D8D248 RVA: 0x3387248 Offset: 0x3386248
		public sealed new [PlayableOutputHandle] GetHandle();
		// VA: 0x7B46D8D250 RVA: 0x3387250 Offset: 0x3386250
		public sealed new [Boolean] Equals([PlayableOutput] other);
		// VA: 0x7B46D8D25C RVA: 0x338725C Offset: 0x338625C
		private static new [Void] .cctor();
		// VA: 0x7B46D8D37C RVA: 0x338737C Offset: 0x338637C
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D73DD0
	public struct PlayableOutputHandle : [ValueType]
	{
		// Fields
		public [IntPtr] m_Handle; // 0x0
		public [UInt32] m_Version; // 0x8
		private readonly static [PlayableOutputHandle] m_Null; // 0x0

		// Methods
		public static new [PlayableOutputHandle] get_Null();
		// VA: 0x7B46D8D3EC RVA: 0x33873EC Offset: 0x33863EC
		public override new [Int32] GetHashCode();
		// VA: 0x7B46D8D444 RVA: 0x3387444 Offset: 0x3386444
		public static new [Boolean] op_Equality([PlayableOutputHandle] lhs, [PlayableOutputHandle] rhs);
		// VA: 0x7B46D8D2F4 RVA: 0x33872F4 Offset: 0x33862F4
		public override new [Boolean] Equals([Object] p);
		// VA: 0x7B46D8D4AC RVA: 0x33874AC Offset: 0x33864AC
		public sealed new [Boolean] Equals([PlayableOutputHandle] other);
		// VA: 0x7B46D8D554 RVA: 0x3387554 Offset: 0x3386554
		internal static new [Boolean] CompareVersion([PlayableOutputHandle] lhs, [PlayableOutputHandle] rhs);
		// VA: 0x7B46D8D478 RVA: 0x3387478 Offset: 0x3386478
		private static new [Void] .cctor();
		// VA: 0x7B46D8D5D4 RVA: 0x33875D4 Offset: 0x33865D4
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.Playables {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D78030
	public struct ScriptPlayableOutput : [ValueType]
	{
		// Fields
		private [PlayableOutputHandle] m_Handle; // 0x0

		// Methods
	}
} // namespace UnityEngine.Playables

namespace UnityEngine.U2D {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3BA90
	public struct SpriteBone : [ValueType]
	{
		// Fields
		private [String] m_Name; // 0x0
		private [String] m_Guid; // 0x8
		private [Vector3] m_Position; // 0x10
		private [Quaternion] m_Rotation; // 0x1C
		private [Single] m_Length; // 0x2C
		private [Int32] m_ParentId; // 0x30
		private [Color32] m_Color; // 0x34

		// Methods
	}
} // namespace UnityEngine.U2D

namespace UnityEngine.U2D {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3BC10
	public class SpriteAtlasManager : [Object]
	{
		// Fields
		private static [Action`2] atlasRequested; // 0x0
		private static [Action`1] atlasRegistered; // 0x8

		// Methods
		private static new [Boolean] RequestAtlas([String] tag);
		// VA: 0x7B46D809D0 RVA: 0x337A9D0 Offset: 0x33799D0
		public static new [Void] add_atlasRegistered([Action`1] value);
		// VA: 0x7B46D80A84 RVA: 0x337AA84 Offset: 0x3379A84
		public static new [Void] remove_atlasRegistered([Action`1] value);
		// VA: 0x7B46D80B54 RVA: 0x337AB54 Offset: 0x3379B54
		private static new [Void] PostRegisteredAtlas([SpriteAtlas] spriteAtlas);
		// VA: 0x7B46D80C24 RVA: 0x337AC24 Offset: 0x3379C24
		internal static new [Void] Register([SpriteAtlas] spriteAtlas);
		// VA: 0x7B46D80C90 RVA: 0x337AC90 Offset: 0x3379C90
	}
} // namespace UnityEngine.U2D

namespace UnityEngine.U2D {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D3BD90
	public class SpriteAtlas : [Object]
	{
		// Fields

		// Methods
		public new [Boolean] CanBindTo([Sprite] sprite);
		// VA: 0x7B46D80CCC RVA: 0x337ACCC Offset: 0x3379CCC
		public new [Sprite] GetSprite([String] name);
		// VA: 0x7B46D80D10 RVA: 0x337AD10 Offset: 0x3379D10
	}
} // namespace UnityEngine.U2D

namespace Unity.Jobs.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12EF0
	public sealed class JobProducerTypeAttribute : [Attribute]
	{
		// Fields
		// private readonly [Type] ProducerType { get; set; }
		private readonly [Type] <ProducerType>k__BackingField; // 0x10

		// Methods
		public new [Void] .ctor([Type] producerType);
		// VA: 0x7B46D29ECC RVA: 0x3323ECC Offset: 0x3322ECC
	}
} // namespace Unity.Jobs.LowLevel.Unsafe

namespace Unity.Jobs.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B130A0
	public struct JobRanges : [ValueType]
	{
		// Fields
		public [Int32] BatchSize; // 0x0
		public [Int32] NumJobs; // 0x4
		public [Int32] TotalIterationCount; // 0x8
		public [IntPtr] StartEndIndex; // 0x10

		// Methods
	}
} // namespace Unity.Jobs.LowLevel.Unsafe

namespace Unity.Jobs.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B13220
	public enum ScheduleMode : [Int32]
	{
		Run = 0,
		Batched = 1,
		Parallel = 1,
		Single = 2
	}
} // namespace Unity.Jobs.LowLevel.Unsafe

namespace Unity.Jobs.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B13650
	public static class JobsUtility : [Object]
	{
		// Fields
		public static [JobsUtility]->[PanicFunction_] PanicFunction; // 0x0

		// Methods
		public static new [Boolean] GetWorkStealingRange(ref [JobRanges] ranges, [Int32] jobIndex, out [Int32] beginIndex, out [Int32] endIndex);
		// VA: 0x7B46D29EF4 RVA: 0x3323EF4 Offset: 0x3322EF4
		public static new [JobHandle] ScheduleParallelFor(ref [JobsUtility]->[JobScheduleParameters] parameters, [Int32] arrayLength, [Int32] innerloopBatchCount);
		// VA: 0x7B46D29F50 RVA: 0x3323F50 Offset: 0x3322F50
		private static new [IntPtr] CreateJobReflectionData([Type] wrapperJobType, [Type] userJobType, [Object] managedJobFunction0, [Object] managedJobFunction1, [Object] managedJobFunction2);
		// VA: 0x7B46D2A018 RVA: 0x3324018 Offset: 0x3323018
		public static new [IntPtr] CreateJobReflectionData([Type] type, [Object] managedJobFunction0, [Object] managedJobFunction1, [Object] managedJobFunction2);
		// VA: 0x7B46D2A084 RVA: 0x3324084 Offset: 0x3323084
		private static new [Void] InvokePanicFunction();
		// VA: 0x7B46D2A0E4 RVA: 0x33240E4 Offset: 0x33230E4
		private static new [Void] ScheduleParallelFor_Injected(ref [JobsUtility]->[JobScheduleParameters] parameters, [Int32] arrayLength, [Int32] innerloopBatchCount, out [JobHandle] ret);
		// VA: 0x7B46D29FBC RVA: 0x3323FBC Offset: 0x3322FBC

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B134D0
		public struct JobScheduleParameters : [ValueType]
		{
			// Fields
			public [JobHandle] Dependency; // 0x0
			public [Int32] ScheduleMode; // 0x10
			public [IntPtr] ReflectionData; // 0x18
			public [IntPtr] JobDataPtr; // 0x20

			// Methods
			public new [Void] .ctor([Void*] i_jobData, [IntPtr] i_reflectionData, [JobHandle] i_dependency, [ScheduleMode] i_scheduleMode);
			// VA: 0x7B46D2A148 RVA: 0x3324148 Offset: 0x3323148
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70B137D0
		public sealed class PanicFunction_ : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D2A180 RVA: 0x3324180 Offset: 0x3323180
			public virtual new [Void] Invoke();
			// VA: 0x7B46D2A208 RVA: 0x3324208 Offset: 0x3323208
		}

	}
} // namespace Unity.Jobs.LowLevel.Unsafe

namespace UnityEngine.LowLevel {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D428E0
	private struct PlayerLoopSystemInternal : [ValueType]
	{
		// Fields
		public [Type] type; // 0x0
		public [PlayerLoopSystem]->[UpdateFunction] updateDelegate; // 0x8
		public [IntPtr] updateFunction; // 0x10
		public [IntPtr] loopConditionFunction; // 0x18
		public [Int32] numSubSystems; // 0x20

		// Methods
	}
} // namespace UnityEngine.LowLevel

namespace UnityEngine.LowLevel {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D42C80
	public struct PlayerLoopSystem : [ValueType]
	{
		// Fields
		public [Type] type; // 0x0
		public [PlayerLoopSystem[]] subSystemList; // 0x8
		public [PlayerLoopSystem]->[UpdateFunction] updateDelegate; // 0x10
		public [IntPtr] updateFunction; // 0x18
		public [IntPtr] loopConditionFunction; // 0x20

		// Methods
		public override new [String] ToString();
		// VA: 0x7B46D84CB4 RVA: 0x337ECB4 Offset: 0x337DCB4

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D42A60
		public sealed class UpdateFunction : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D84CD4 RVA: 0x337ECD4 Offset: 0x337DCD4
			public virtual new [Void] Invoke();
			// VA: 0x7B46D84D5C RVA: 0x337ED5C Offset: 0x337DD5C
		}

	}
} // namespace UnityEngine.LowLevel

namespace UnityEngine.LowLevel {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D42E00
	public class PlayerLoop : [Object]
	{
		// Fields

		// Methods
		public static new [PlayerLoopSystem] GetCurrentPlayerLoop();
		// VA: 0x7B46D84D70 RVA: 0x337ED70 Offset: 0x337DD70
		public static new [Void] SetPlayerLoop([PlayerLoopSystem] loop);
		// VA: 0x7B46D85000 RVA: 0x337F000 Offset: 0x337E000
		private static new [Int32] PlayerLoopSystemToInternal([PlayerLoopSystem] sys, ref [List`1] internalSys);
		// VA: 0x7B46D850E8 RVA: 0x337F0E8 Offset: 0x337E0E8
		private static new [PlayerLoopSystem] InternalToPlayerLoopSystem([PlayerLoopSystemInternal[]] internalSys, ref [Int32] offset);
		// VA: 0x7B46D84E08 RVA: 0x337EE08 Offset: 0x337DE08
		private static new [PlayerLoopSystemInternal[]] GetCurrentPlayerLoopInternal();
		// VA: 0x7B46D84DE0 RVA: 0x337EDE0 Offset: 0x337DDE0
		private static new [Void] SetPlayerLoopInternal([PlayerLoopSystemInternal[]] loop);
		// VA: 0x7B46D85284 RVA: 0x337F284 Offset: 0x337E284
	}
} // namespace UnityEngine.LowLevel

namespace AOT {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B12160
	public class MonoPInvokeCallbackAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor([Type] type);
		// VA: 0x7B46D29B04 RVA: 0x3323B04 Offset: 0x3322B04
	}
} // namespace AOT

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B192D0
	public enum FileState : [Int32]
	{
		Absent = 0,
		Exists = 1
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B19580
	public enum AssetLoadingSubsystem : [Int32]
	{
		Other = 0,
		Texture = 1,
		VirtualTexture = 2,
		Mesh = 3,
		Audio = 4,
		Scripts = 5,
		EntitiesScene = 6,
		EntitiesStreamBinaryReader = 7,
		FileInfo = 8,
		ContentLoading = 9
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B19830
	public enum Priority : [Int32]
	{
		PriorityLow = 0,
		PriorityHigh = 1
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B19AE0
	public enum ProcessingState : [Int32]
	{
		Unknown = 0,
		InQueue = 1,
		Reading = 2,
		Completed = 3,
		Failed = 4,
		Canceled = 5
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B19D90
	public enum FileReadType : [Int32]
	{
		Sync = 0,
		Async = 1
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A040
	public struct AsyncReadManagerRequestMetric : [ValueType]
	{
		// Fields
		// private readonly [String] AssetName { get; set; }
		private readonly [String] <AssetName>k__BackingField; // 0x0
		// private readonly [String] FileName { get; set; }
		private readonly [String] <FileName>k__BackingField; // 0x8
		// private readonly [UInt64] OffsetBytes { get; set; }
		private readonly [UInt64] <OffsetBytes>k__BackingField; // 0x10
		// private readonly [UInt64] SizeBytes { get; set; }
		private readonly [UInt64] <SizeBytes>k__BackingField; // 0x18
		// private readonly [UInt64] AssetTypeId { get; set; }
		private readonly [UInt64] <AssetTypeId>k__BackingField; // 0x20
		// private readonly [UInt64] CurrentBytesRead { get; set; }
		private readonly [UInt64] <CurrentBytesRead>k__BackingField; // 0x28
		// private readonly [UInt32] BatchReadCount { get; set; }
		private readonly [UInt32] <BatchReadCount>k__BackingField; // 0x30
		// private readonly [Boolean] IsBatchRead { get; set; }
		private readonly [Boolean] <IsBatchRead>k__BackingField; // 0x34
		// private readonly [ProcessingState] State { get; set; }
		private readonly [ProcessingState] <State>k__BackingField; // 0x38
		// private readonly [FileReadType] ReadType { get; set; }
		private readonly [FileReadType] <ReadType>k__BackingField; // 0x3C
		// private readonly [Priority] PriorityLevel { get; set; }
		private readonly [Priority] <PriorityLevel>k__BackingField; // 0x40
		// private readonly [AssetLoadingSubsystem] Subsystem { get; set; }
		private readonly [AssetLoadingSubsystem] <Subsystem>k__BackingField; // 0x44
		// private readonly [Double] RequestTimeMicroseconds { get; set; }
		private readonly [Double] <RequestTimeMicroseconds>k__BackingField; // 0x48
		// private readonly [Double] TimeInQueueMicroseconds { get; set; }
		private readonly [Double] <TimeInQueueMicroseconds>k__BackingField; // 0x50
		// private readonly [Double] TotalTimeMicroseconds { get; set; }
		private readonly [Double] <TotalTimeMicroseconds>k__BackingField; // 0x58

		// Methods
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace Unity.IO.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B1A1C0
	public class AsyncReadManagerMetricsFilters : [Object]
	{
		// Fields
		public [UInt64[]] TypeIDs; // 0x10
		public [ProcessingState[]] States; // 0x18
		public [FileReadType[]] ReadTypes; // 0x20
		public [Priority[]] PriorityLevels; // 0x28
		public [AssetLoadingSubsystem[]] Subsystems; // 0x30

		// Methods
	}
} // namespace Unity.IO.LowLevel.Unsafe

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D78630
	public enum LightType : [Byte]
	{
		Directional = 0,
		Point = 1,
		Spot = 2,
		Rectangle = 3,
		Disc = 4,
		SpotPyramidShape = 5,
		SpotBoxShape = 6
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D788E0
	public enum LightMode : [Byte]
	{
		Realtime = 0,
		Mixed = 1,
		Baked = 2,
		Unknown = 3
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D78B90
	public enum FalloffType : [Byte]
	{
		InverseSquared = 0,
		InverseSquaredNoRangeAttenuation = 1,
		Linear = 2,
		Legacy = 3,
		Undefined = 4
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D78E40
	public enum AngularFalloffType : [Byte]
	{
		LUT = 0,
		AnalyticAndInnerAngle = 1
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D790F0
	public struct LinearColor : [ValueType]
	{
		// Fields
		private [Single] m_red; // 0x0
		private [Single] m_green; // 0x4
		private [Single] m_blue; // 0x8
		private [Single] m_intensity; // 0xC

		// Methods
		public new [Single] get_red();
		// VA: 0x7B46D8D66C RVA: 0x338766C Offset: 0x338666C
		public new [Void] set_red([Single] value);
		// VA: 0x7B46D8D674 RVA: 0x3387674 Offset: 0x3386674
		public new [Single] get_green();
		// VA: 0x7B46D8D720 RVA: 0x3387720 Offset: 0x3386720
		public new [Void] set_green([Single] value);
		// VA: 0x7B46D8D728 RVA: 0x3387728 Offset: 0x3386728
		public new [Single] get_blue();
		// VA: 0x7B46D8D7D4 RVA: 0x33877D4 Offset: 0x33867D4
		public new [Void] set_blue([Single] value);
		// VA: 0x7B46D8D7DC RVA: 0x33877DC Offset: 0x33867DC
		public static new [LinearColor] Convert([Color] color, [Single] intensity);
		// VA: 0x7B46D8D888 RVA: 0x3387888 Offset: 0x3386888
		public static new [LinearColor] Black();
		// VA: 0x7B46D8DB4C RVA: 0x3387B4C Offset: 0x3386B4C
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D79270
	public struct DirectionalLight : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Boolean] shadow; // 0x4
		public [Byte] mode; // enum: [LightMode], 0x5
		public [Vector3] position; // 0x8
		public [Quaternion] orientation; // 0x14
		public [LinearColor] color; // 0x24
		public [LinearColor] indirectColor; // 0x34
		public [Single] penumbraWidthRadian; // 0x44
		public [Vector3] direction; // 0x48

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D793F0
	public struct PointLight : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Boolean] shadow; // 0x4
		public [Byte] mode; // enum: [LightMode], 0x5
		public [Vector3] position; // 0x8
		public [Quaternion] orientation; // 0x14
		public [LinearColor] color; // 0x24
		public [LinearColor] indirectColor; // 0x34
		public [Single] range; // 0x44
		public [Single] sphereRadius; // 0x48
		public [Byte] falloff; // enum: [FalloffType], 0x4C

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D79570
	public struct SpotLight : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Boolean] shadow; // 0x4
		public [Byte] mode; // enum: [LightMode], 0x5
		public [Vector3] position; // 0x8
		public [Quaternion] orientation; // 0x14
		public [LinearColor] color; // 0x24
		public [LinearColor] indirectColor; // 0x34
		public [Single] range; // 0x44
		public [Single] sphereRadius; // 0x48
		public [Single] coneAngle; // 0x4C
		public [Single] innerConeAngle; // 0x50
		public [Byte] falloff; // enum: [FalloffType], 0x54
		public [Byte] angularFalloff; // enum: [AngularFalloffType], 0x55

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D796F0
	public struct RectangleLight : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Boolean] shadow; // 0x4
		public [Byte] mode; // enum: [LightMode], 0x5
		public [Vector3] position; // 0x8
		public [Quaternion] orientation; // 0x14
		public [LinearColor] color; // 0x24
		public [LinearColor] indirectColor; // 0x34
		public [Single] range; // 0x44
		public [Single] width; // 0x48
		public [Single] height; // 0x4C
		public [Byte] falloff; // enum: [FalloffType], 0x50

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D79870
	public struct DiscLight : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Boolean] shadow; // 0x4
		public [Byte] mode; // enum: [LightMode], 0x5
		public [Vector3] position; // 0x8
		public [Quaternion] orientation; // 0x14
		public [LinearColor] color; // 0x24
		public [LinearColor] indirectColor; // 0x34
		public [Single] range; // 0x44
		public [Single] radius; // 0x48
		public [Byte] falloff; // enum: [FalloffType], 0x4C

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D799F0
	public struct Cookie : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Single] scale; // 0x4
		public [Vector2] sizes; // 0x8

		// Methods
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D79B70
	public struct LightDataGI : [ValueType]
	{
		// Fields
		public [Int32] instanceID; // 0x0
		public [Int32] cookieID; // 0x4
		public [Single] cookieScale; // 0x8
		public [LinearColor] color; // 0xC
		public [LinearColor] indirectColor; // 0x1C
		public [Quaternion] orientation; // 0x2C
		public [Vector3] position; // 0x3C
		public [Single] range; // 0x48
		public [Single] coneAngle; // 0x4C
		public [Single] innerConeAngle; // 0x50
		public [Single] shape0; // 0x54
		public [Single] shape1; // 0x58
		public [Byte] type; // enum: [LightType], 0x5C
		public [Byte] mode; // enum: [LightMode], 0x5D
		public [Byte] shadow; // 0x5E
		public [Byte] falloff; // enum: [FalloffType], 0x5F

		// Methods
		public new [Void] Init(ref [DirectionalLight] light, ref [Cookie] cookie);
		// VA: 0x7B46D8DB60 RVA: 0x3387B60 Offset: 0x3386B60
		public new [Void] Init(ref [PointLight] light, ref [Cookie] cookie);
		// VA: 0x7B46D8DBD4 RVA: 0x3387BD4 Offset: 0x3386BD4
		public new [Void] Init(ref [SpotLight] light, ref [Cookie] cookie);
		// VA: 0x7B46D8DC50 RVA: 0x3387C50 Offset: 0x3386C50
		public new [Void] Init(ref [RectangleLight] light, ref [Cookie] cookie);
		// VA: 0x7B46D8DCD0 RVA: 0x3387CD0 Offset: 0x3386CD0
		public new [Void] Init(ref [DiscLight] light, ref [Cookie] cookie);
		// VA: 0x7B46D8DD48 RVA: 0x3387D48 Offset: 0x3386D48
		public new [Void] InitNoBake([Int32] lightInstanceID);
		// VA: 0x7B46D8DDC4 RVA: 0x3387DC4 Offset: 0x3386DC4
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D79CF0
	public static class LightmapperUtils : [Object]
	{
		// Fields

		// Methods
		public static new [LightMode] Extract([LightmapBakeType] baketype);
		// VA: 0x7B46D8DDD4 RVA: 0x3387DD4 Offset: 0x3386DD4
		public static new [LinearColor] ExtractIndirect([Light] l);
		// VA: 0x7B46D8DDF4 RVA: 0x3387DF4 Offset: 0x3386DF4
		public static new [Single] ExtractInnerCone([Light] l);
		// VA: 0x7B46D8DE6C RVA: 0x3387E6C Offset: 0x3386E6C
		private static new [Color] ExtractColorTemperature([Light] l);
		// VA: 0x7B46D8DEC0 RVA: 0x3387EC0 Offset: 0x3386EC0
		private static new [Void] ApplyColorTemperature([Color] cct, ref [LinearColor] lightColor);
		// VA: 0x7B46D8DF58 RVA: 0x3387F58 Offset: 0x3386F58
		public static new [Void] Extract([Light] l, ref [DirectionalLight] dir);
		// VA: 0x7B46D8DFA0 RVA: 0x3387FA0 Offset: 0x3386FA0
		public static new [Void] Extract([Light] l, ref [PointLight] point);
		// VA: 0x7B46D8E13C RVA: 0x338813C Offset: 0x338713C
		public static new [Void] Extract([Light] l, ref [SpotLight] spot);
		// VA: 0x7B46D8E2F0 RVA: 0x33882F0 Offset: 0x33872F0
		public static new [Void] Extract([Light] l, ref [RectangleLight] rect);
		// VA: 0x7B46D8E4CC RVA: 0x33884CC Offset: 0x33874CC
		public static new [Void] Extract([Light] l, ref [DiscLight] disc);
		// VA: 0x7B46D8E680 RVA: 0x3388680 Offset: 0x3387680
		public static new [Void] Extract([Light] l, out [Cookie] cookie);
		// VA: 0x7B46D8E834 RVA: 0x3388834 Offset: 0x3387834
	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace UnityEngine.Experimental.GlobalIllumination {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7A090
	public static class Lightmapping : [Object]
	{
		// Fields
		private readonly static [Lightmapping]->[RequestLightsDelegate] s_DefaultDelegate; // 0x0
		private static [Lightmapping]->[RequestLightsDelegate] s_RequestLightsDelegate; // 0x8

		// Methods
		public static new [Void] SetDelegate([Lightmapping]->[RequestLightsDelegate] del);
		// VA: 0x7B46D8E978 RVA: 0x3388978 Offset: 0x3387978
		public static new [Lightmapping]->[RequestLightsDelegate] GetDelegate();
		// VA: 0x7B46D8E9F0 RVA: 0x33889F0 Offset: 0x33879F0
		public static new [Void] ResetDelegate();
		// VA: 0x7B46D8EA48 RVA: 0x3388A48 Offset: 0x3387A48
		internal static new [Void] RequestLights([Light[]] lights, [IntPtr] outLightsPtr, [Int32] outLightsCount);
		// VA: 0x7B46D8EAA4 RVA: 0x3388AA4 Offset: 0x3387AA4
		private static new [Void] .cctor();
		// VA: 0x7B46D8EB70 RVA: 0x3388B70 Offset: 0x3387B70

		// Nested types
		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D79E70
		public sealed class RequestLightsDelegate : [MulticastDelegate]
		{
			// Fields

			// Methods
			public new [Void] .ctor([Object] object, [IntPtr] method);
			// VA: 0x7B46D8EC40 RVA: 0x3388C40 Offset: 0x3387C40
			public virtual new [Void] Invoke([Light[]] requests, [NativeArray`1] lightsOutput);
			// VA: 0x7B46D8ECE0 RVA: 0x3388CE0 Offset: 0x3387CE0
		}

		// UnityEngine.CoreModule.dll
		// Class VA: 0x7A70D7A210
		public sealed class <>c : [Object]
		{
			// Fields
			// public readonly static [Lightmapping]->[<>c] <>9 { get; set; }
			public readonly static [Lightmapping]->[<>c] <>9; // 0x0

			// Methods
			private static new [Void] .cctor();
			// VA: 0x7B46D8ECF4 RVA: 0x3388CF4 Offset: 0x3387CF4
			public new [Void] .ctor();
			// VA: 0x7B46D8ED50 RVA: 0x3388D50 Offset: 0x3387D50
			internal new [Void] <.cctor>b__7_0([Light[]] requests, [NativeArray`1] lightsOutput);
			// VA: 0x7B46D8ED58 RVA: 0x3388D58 Offset: 0x3387D58
		}

	}
} // namespace UnityEngine.Experimental.GlobalIllumination

namespace Unity.IL2CPP.CompilerServices {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B139F0
	private class Il2CppEagerStaticClassConstructionAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2A21C RVA: 0x332421C Offset: 0x332321C
	}
} // namespace Unity.IL2CPP.CompilerServices

namespace System.Runtime.CompilerServices {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B11FB0
	private sealed class IsUnmanagedAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D29AFC RVA: 0x3323AFC Offset: 0x3322AFC
	}
} // namespace System.Runtime.CompilerServices

namespace Unity.Burst.LowLevel {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21AD0
	private static class BurstCompilerService : [Object]
	{
		// Fields

		// Methods
		public static new [Void*] GetOrCreateSharedMemory(ref [Hash128] key, [UInt32] size_of, [UInt32] alignment);
		// VA: 0x7B46D2AFAC RVA: 0x3324FAC Offset: 0x3323FAC
	}
} // namespace Unity.Burst.LowLevel

namespace Unity.Profiling.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18CD0
	public struct ProfilerCategoryDescription : [ValueType]
	{
		// Fields
		public readonly [UInt16] Id; // 0x0
		public readonly [UInt16] Flags; // 0x2
		public readonly [Color32] Color; // 0x4
		private readonly [Int32] reserved0; // 0x8
		public readonly [Int32] NameUtf8Len; // 0xC
		public readonly [Byte*] NameUtf8; // 0x10

		// Methods
	}
} // namespace Unity.Profiling.LowLevel.Unsafe

namespace Unity.Profiling.LowLevel.Unsafe {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B18E50
	public static class ProfilerUnsafeUtility : [Object]
	{
		// Fields

		// Methods
		internal static new [UInt16] CreateCategory__Unmanaged([Byte*] name, [Int32] nameLen, [ProfilerCategoryColor] colorIndex);
		// VA: 0x7B46D2A700 RVA: 0x3324700 Offset: 0x3323700
		public static new [ProfilerCategoryDescription] GetCategoryDescription([UInt16] categoryId);
		// VA: 0x7B46D2A2B4 RVA: 0x33242B4 Offset: 0x33232B4
		public static new [IntPtr] CreateMarker([String] name, [UInt16] categoryId, [MarkerFlags] flags, [Int32] metadataCount);
		// VA: 0x7B46D2A494 RVA: 0x3324494 Offset: 0x3323494
		internal static new [IntPtr] CreateMarker__Unmanaged([Byte*] name, [Int32] nameLen, [UInt16] categoryId, [MarkerFlags] flags, [Int32] metadataCount);
		// VA: 0x7B46D2A798 RVA: 0x3324798 Offset: 0x3323798
		internal static new [Void] SetMarkerMetadata__Unmanaged([IntPtr] markerPtr, [Int32] index, [Byte*] name, [Int32] nameLen, [Byte] type, [Byte] unit);
		// VA: 0x7B46D2A804 RVA: 0x3324804 Offset: 0x3323804
		public static new [Void] BeginSample([IntPtr] markerPtr);
		// VA: 0x7B46D2A608 RVA: 0x3324608 Offset: 0x3323608
		public static new [Void] EndSample([IntPtr] markerPtr);
		// VA: 0x7B46D2A6A4 RVA: 0x33246A4 Offset: 0x33236A4
		internal static new [Void*] CreateCounterValue__Unmanaged(out [IntPtr] counterPtr, [Byte*] name, [Int32] nameLen, [UInt16] categoryId, [MarkerFlags] flags, [Byte] dataType, [Byte] dataUnit, [Int32] dataSize, [ProfilerCounterOptions] counterOptions);
		// VA: 0x7B46D2A878 RVA: 0x3324878 Offset: 0x3323878
		internal static new [String] Utf8ToString([Byte*] chars, [Int32] charsLen);
		// VA: 0x7B46D2A344 RVA: 0x3324344 Offset: 0x3323344
		private static new [Void] GetCategoryDescription_Injected([UInt16] categoryId, out [ProfilerCategoryDescription] ret);
		// VA: 0x7B46D2A754 RVA: 0x3324754 Offset: 0x3323754
	}
} // namespace Unity.Profiling.LowLevel.Unsafe

namespace UnityEngine.Profiling {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D40030
	public sealed class Profiler : [Object]
	{
		// Fields

		// Methods
		public static new [Int64] GetMonoUsedSizeLong();
		// VA: 0x7B46D80D54 RVA: 0x337AD54 Offset: 0x3379D54
	}
} // namespace UnityEngine.Profiling

namespace UnityEngine.Assertions {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A708941B0
	public static class Assert : [Object]
	{
		// Fields
		public static [Boolean] raiseExceptions; // 0x0

		// Methods
		private static new [Void] Fail([String] message, [String] userMessage);
		// VA: 0x7B46D8FFBC RVA: 0x3389FBC Offset: 0x3388FBC
		public static new [Void] IsTrue([Boolean] condition);
		// VA: 0x7B46D90150 RVA: 0x338A150 Offset: 0x3389150
		public static new [Void] IsTrue([Boolean] condition, [String] message);
		// VA: 0x7B46D901BC RVA: 0x338A1BC Offset: 0x33891BC
		public static new [Void] IsFalse([Boolean] condition, [String] message);
		// VA: 0x7B46D902F0 RVA: 0x338A2F0 Offset: 0x33892F0
		public static new [Void] AreEqual([T] expected, [T] actual);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] AreEqual([T] expected, [T] actual, [String] message);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] AreEqual([T] expected, [T] actual, [String] message, [IEqualityComparer`1] comparer);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] AreEqual([Object] expected, [Object] actual, [String] message);
		// VA: 0x7B46D90370 RVA: 0x338A370 Offset: 0x3389370
		public static new [Void] IsNull([T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] IsNull([T] value, [String] message);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] IsNull([Object] value, [String] message);
		// VA: 0x7B46D9062C RVA: 0x338A62C Offset: 0x338962C
		public static new [Void] IsNotNull([T] value);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] IsNotNull([T] value, [String] message);
		// VA: 0x7B45078650 RVA: 0x1672650 Offset: 0x1671650
		public static new [Void] IsNotNull([Object] value, [String] message);
		// VA: 0x7B46D90850 RVA: 0x338A850 Offset: 0x3389850
		public static new [Void] AreEqual([Int32] expected, [Int32] actual);
		// VA: 0x7B46D9090C RVA: 0x338A90C Offset: 0x338990C
		private static new [Void] .cctor();
		// VA: 0x7B46D90998 RVA: 0x338A998 Offset: 0x3389998
	}
} // namespace UnityEngine.Assertions

namespace UnityEngine.Assertions {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7BC10
	public class AssertionException : [Exception]
	{
		// Fields
		private [String] m_UserMessage; // 0x90

		// Methods
		public new [Void] .ctor([String] message, [String] userMessage);
		// VA: 0x7B46D900DC RVA: 0x338A0DC Offset: 0x33890DC
		public override new [String] get_Message();
		// VA: 0x7B46D909E4 RVA: 0x338A9E4 Offset: 0x33899E4
	}
} // namespace UnityEngine.Assertions

namespace UnityEngine.Assertions {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70D7BE30
	private class AssertionMessageUtil : [Object]
	{
		// Fields

		// Methods
		public static new [String] GetMessage([String] failureMessage);
		// VA: 0x7B46D90A58 RVA: 0x338AA58 Offset: 0x3389A58
		public static new [String] GetMessage([String] failureMessage, [String] expected);
		// VA: 0x7B46D90B44 RVA: 0x338AB44 Offset: 0x3389B44
		public static new [String] GetEqualityMessage([Object] actual, [Object] expected, [Boolean] expectEqual);
		// VA: 0x7B46D90438 RVA: 0x338A438 Offset: 0x3389438
		public static new [String] NullFailureMessage([Object] value, [Boolean] expectNull);
		// VA: 0x7B46D906E8 RVA: 0x338A6E8 Offset: 0x33896E8
		public static new [String] BooleanFailureMessage([Boolean] expected);
		// VA: 0x7B46D9023C RVA: 0x338A23C Offset: 0x338923C
	}
} // namespace UnityEngine.Assertions

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21C50
	public sealed class CanBeNullAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B64C RVA: 0x332564C Offset: 0x332464C
	}
} // namespace JetBrains.Annotations

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21E00
	public sealed class NotNullAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B654 RVA: 0x3325654 Offset: 0x3324654
	}
} // namespace JetBrains.Annotations

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B21FB0
	public sealed class UsedImplicitlyAttribute : [Attribute]
	{
		// Fields
		// private readonly [ImplicitUseKindFlags] UseKindFlags { get; set; }
		private readonly [ImplicitUseKindFlags] <UseKindFlags>k__BackingField; // 0x10
		// private readonly [ImplicitUseTargetFlags] TargetFlags { get; set; }
		private readonly [ImplicitUseTargetFlags] <TargetFlags>k__BackingField; // 0x14

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B65C RVA: 0x332565C Offset: 0x332465C
		public new [Void] .ctor([ImplicitUseKindFlags] useKindFlags, [ImplicitUseTargetFlags] targetFlags);
		// VA: 0x7B46D2B680 RVA: 0x3325680 Offset: 0x3324680
	}
} // namespace JetBrains.Annotations

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B22160
	public enum ImplicitUseKindFlags : [Int32]
	{
		Default = 7,
		Access = 1,
		Assign = 2,
		InstantiatedWithFixedConstructorSignature = 4,
		InstantiatedNoFixedConstructorSignature = 8
	}
} // namespace JetBrains.Annotations

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B22410
	public enum ImplicitUseTargetFlags : [Int32]
	{
		Default = 1,
		Itself = 1,
		Members = 2,
		WithMembers = 3
	}
} // namespace JetBrains.Annotations

namespace JetBrains.Annotations {

	// UnityEngine.CoreModule.dll
	// Class VA: 0x7A70B226C0
	public sealed class PureAttribute : [Attribute]
	{
		// Fields

		// Methods
		public new [Void] .ctor();
		// VA: 0x7B46D2B6AC RVA: 0x33256AC Offset: 0x33246AC
	}
} // namespace JetBrains.Annotations

