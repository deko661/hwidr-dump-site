#pragma once
/* =============================================================
/*                       theo's offsets                         
/*                  https://offsets.imtheo.lol                  
/* -------------------------------------------------------------
/*  Dumped With     : RbxDumperV2                               
/*  Source code     : https://git.imtheo.lol/theo/RbxDumperV2   
/*  Roblox Version  : version-4ea8e85481e34f46
/*  Dumper Version  : 2.2.5
/*  Dumped At       : 08:13 10/11/2026 (GMT)
/*  Total Offsets   : 394
/* -------------------------------------------------------------
/*  Join the discord!                                           
/*  https://offsets.imtheo.lol/discord                          
/* =============================================================
*/

#include <cstdint>
#include <string>
namespace Structs {
    inline std::string ClientVersion = "version-4ea8e85481e34f46";

    struct AirProperties {
        char pad_0[0x18];
        float AirDensity; // 0x18
        char pad_1[0x20];
        Vector3 GlobalWind; // 0x3c
    }; // sizeof = 48

    struct AnimationTrack {
        char pad_0[0xa0];
        uintptr_t Animation; // 0xa0
        char pad_1[0x14];
        float Speed; // 0xbc
        float TimePosition; // 0xc0
        char pad_2[0x9];
        bool Looped; // 0xcd
        char pad_3[0x2a];
        uintptr_t Animator; // 0xf8
        char pad_4[0x910];
        bool IsPlaying; // 0xa10
    }; // sizeof = a11

    struct Animator {
        char pad_0[0x920];
        uintptr_t ActiveAnimations; // 0x920
    }; // sizeof = 928

    struct Atmosphere {
        char pad_0[0xa0];
        Color3 Color; // 0xa0
        char pad_1[0xc];
        Color3 Decay; // 0xac
        char pad_2[0xc];
        float Density; // 0xb8
        float Glare; // 0xbc
        float Haze; // 0xc0
        float Offset; // 0xc4
    }; // sizeof = c8

    struct Attachment {
        char pad_0[0xac];
        Vector3 Position; // 0xac
    }; // sizeof = b8

    struct BasePart {
        char pad_0[0xf4];
        float Reflectance; // 0xf4
        char pad_1[0x20];
        float Transparency; // 0x118
        unsigned char Color3; // 0x11c
        char pad_2[0x4];
        bool CastShadow; // 0x120
        bool Locked; // 0x121
        bool Massless; // 0x122
        char pad_3[0x55];
        uintptr_t Primitive; // 0x178
        char pad_4[0x20];
        int Shape; // 0x1a0
    }; // sizeof = 1a4

    struct Beam {
        char pad_0[0x128];
        string Texture; // 0x128
        char pad_1[0x20];
        uintptr_t Attachment0; // 0x148
        char pad_2[0x8];
        uintptr_t Attachment1; // 0x158
        char pad_3[0x8];
        float Brightness; // 0x168
        float CurveSize0; // 0x16c
        float CurveSize1; // 0x170
        float LightEmission; // 0x174
        float LightInfluence; // 0x178
        char pad_4[0x8];
        float TextureLength; // 0x184
        char pad_5[0x4];
        float TextureSpeed; // 0x18c
        float Width0; // 0x190
        float Width1; // 0x194
        float ZOffset; // 0x198
    }; // sizeof = 19c

    struct BloomEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Intensity; // 0xa0
        float Size; // 0xa4
        float Threshold; // 0xa8
    }; // sizeof = ac

    struct BlurEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Size; // 0xa0
    }; // sizeof = a4

    struct ByteCode {
        char pad_0[0x18];
        uintptr_t Pointer; // 0x18
        char pad_1[0x8];
        uintptr_t Size; // 0x28
    }; // sizeof = 30

    struct CachedItem {
        char pad_0[0x28];
        unknown FileMeshData; // 0x28
    }; // sizeof = 28

    struct Camera {
        char pad_0[0xb0];
        uintptr_t CameraSubject; // 0xb0
        char pad_1[0x8];
        Matrix3x3 Rotation; // 0xc0
        Vector3 Position; // 0xe4
        char pad_2[0x30];
        int CameraType; // 0x120
        char pad_3[0x4];
        float FieldOfView; // 0x128
        char pad_4[0x158];
        short Viewport; // 0x284
        char pad_5[0x40];
        Vector2 ViewportSize; // 0x2c4
        char pad_6[0x8];
        float ImagePlaneDepth; // 0x2d4
    }; // sizeof = 2d8

    struct CharacterMesh {
        char pad_0[0xb0];
        string BaseTextureId; // 0xb0
        char pad_1[0x30];
        string MeshId; // 0xe0
        char pad_2[0x30];
        string OverlayTextureId; // 0x110
        char pad_3[0x20];
        int BodyPart; // 0x130
    }; // sizeof = 134

    struct ClickDetector {
        char pad_0[0xb0];
        string MouseIcon; // 0xb0
        char pad_1[0x20];
        float MaxActivationDistance; // 0xd0
    }; // sizeof = d4

    struct Clothing {
        char pad_0[0xe8];
        string Template; // 0xe8
        char pad_1[0x20];
        Color3 Color3; // 0x108
    }; // sizeof = 108

    struct ColorCorrectionEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        Color3 TintColor; // 0xa0
        char pad_2[0xc];
        float Brightness; // 0xac
        float Contrast; // 0xb0
    }; // sizeof = b4

    struct ColorGradingEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        int TonemapperPreset; // 0xa0
    }; // sizeof = a4

    struct DataModel {
        char pad_0[0x8];
        uintptr_t ToRenderView2; // 0x8
        char pad_1[0x18];
        uintptr_t ToRenderView3; // 0x28
        char pad_2[0xd8];
        string JobId; // 0x108
        char pad_3[0x60];
        uintptr_t Workspace; // 0x168
        char pad_4[0x20];
        uintptr_t CreatorId; // 0x190
        uintptr_t GameId; // 0x198
        uintptr_t PlaceId; // 0x1a0
        char pad_5[0x14];
        int PlaceVersion; // 0x1bc
        char pad_6[0x18];
        uintptr_t ToRenderView1; // 0x1d8
        char pad_7[0x250];
        int PrimitiveCount; // 0x430
        char pad_8[0xc];
        uintptr_t ScriptContext; // 0x440
        char pad_9[0x158];
        string ServerIP; // 0x5a0
        char pad_10[0x18];
        uintptr_t GameLoaded; // 0x5b8
    }; // sizeof = 5c0

    struct DepthOfFieldEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float FarIntensity; // 0xa0
        float FocusDistance; // 0xa4
        float InFocusRadius; // 0xa8
        float NearIntensity; // 0xac
    }; // sizeof = b0

    struct DragDetector {
        char pad_0[0xb0];
        string CursorIcon; // 0xb0
        char pad_1[0x20];
        float MaxActivationDistance; // 0xd0
        char pad_2[0xb4];
        string ActivatedCursorIcon; // 0x188
        char pad_3[0x30];
        uintptr_t ReferenceInstance; // 0x1b8
        char pad_4[0x74];
        Vector3 MaxDragTranslation; // 0x234
        Vector3 MinDragTranslation; // 0x240
        char pad_5[0x24];
        float MaxDragAngle; // 0x270
        float MaxForce; // 0x274
        float MaxTorque; // 0x278
        float MinDragAngle; // 0x27c
        char pad_6[0x8];
        float Responsiveness; // 0x288
    }; // sizeof = 28c

    struct FakeDataModel {
        char pad_0[0x1f8];
        uintptr_t RealDataModel; // 0x1f8
        char pad_1[0x8f8e768];
        uintptr_t Pointer; // 0x8f8e968
    }; // sizeof = 8f8e970

    struct FileMeshData {
        unknown Vertices; // 0x0
        char pad_0[0x8];
        unknown VerticesEnd; // 0x8
        char pad_1[0x28];
        unknown Faces; // 0x30
        char pad_2[0x8];
        unknown FacesEnd; // 0x38
        char pad_3[0x148];
        unknown AABBMin; // 0x180
        char pad_4[0xc];
        unknown AABBMax; // 0x18c
    }; // sizeof = 18c

    struct GuiBase2D {
        float AbsoluteSize; // 0x0
        char pad_0[0xcc];
        float AbsoluteRotation; // 0xd0
        char pad_1[0x20];
        float AbsolutePosition; // 0xf4
    }; // sizeof = f8

    struct GuiObject {
        char pad_0[0xd0];
        float Rotation; // 0xd0
        char pad_1[0x1d4];
        UDim2 Position; // 0x2a8
        char pad_2[0x10];
        UDim2 Size; // 0x2c8
        Color3 BackgroundColor3; // 0x2d8
        char pad_3[0xc];
        Color3 BorderColor3; // 0x2e4
        float BackgroundTransparency; // 0x2e4
        char pad_4[0x2c];
        int LayoutOrder; // 0x314
        char pad_5[0x24];
        int ZIndex; // 0x33c
        char pad_6[0xcd];
        bool ScreenGui_Enabled; // 0x40d
        char pad_7[0x262];
        string Image; // 0x670
        char pad_8[0xbd];
        bool Visible; // 0x72d
        char pad_9[0x9a];
        string RichText; // 0x7c8
        char pad_10[0x268];
        string Text; // 0xa30
        char pad_11[0xb0];
        Color3 TextColor3; // 0xae0
    }; // sizeof = ae0

    struct HandleAdornment {
        char pad_0[0x100];
        CFrame CFrame; // 0x100
    }; // sizeof = 100

    struct Humanoid {
        char pad_0[0x20];
        int HumanoidStateID; // 0x20
        char pad_1[0x7c];
        string DisplayName; // 0xa0
        char pad_2[0x50];
        uintptr_t SeatPart; // 0xf0
        char pad_3[0x8];
        uintptr_t MoveToPart; // 0x100
        char pad_4[0x8];
        Vector3 CameraOffset; // 0x110
        char pad_5[0x18];
        Vector3 MoveDirection; // 0x134
        Vector3 TargetPoint; // 0x140
        char pad_6[0xc];
        Vector3 MoveToPoint; // 0x158
        char pad_7[0x10];
        int DisplayDistanceType; // 0x174
        int FloorMaterial; // 0x178
        float HealthDisplayDistance; // 0x17c
        int HealthDisplayType; // 0x180
        float Health; // 0x184
        float HipHeight; // 0x188
        char pad_8[0xc];
        float JumpHeight; // 0x198
        float JumpPower; // 0x19c
        float MaxHealth; // 0x1a0
        float MaxSlopeAngle; // 0x1a4
        float NameDisplayDistance; // 0x1a8
        int NameOcclusion; // 0x1ac
        char pad_9[0x8];
        int RigType; // 0x1b8
        char pad_10[0xc];
        float Walkspeed; // 0x1c8
        bool AutoJumpEnabled; // 0x1cc
        bool AutoRotate; // 0x1cd
        bool AutomaticScalingEnabled; // 0x1ce
        char pad_11[0x1];
        bool BreakJointsOnDeath; // 0x1d0
        bool EvaluateStateMachine; // 0x1d1
        char pad_12[0x2];
        bool Jump; // 0x1d4
        char pad_13[0x1];
        bool PlatformStand; // 0x1d6
        bool Sit; // 0x1d7
        bool RequiresNeck; // 0x1d7
        char pad_14[0x1];
        bool UseJumpPower; // 0x1da
        char pad_15[0x1c9];
        float WalkspeedCheck; // 0x3a4
        char pad_16[0x48];
        double WalkTimer; // 0x3f0
        char pad_17[0x70];
        uintptr_t HumanoidRootPart; // 0x468
        char pad_18[0x440];
        int HumanoidState; // 0x8b0
        char pad_19[0x192];
        bool IsWalking; // 0xa46
    }; // sizeof = a47

    struct Instance {
        uintptr_t Name; // 0x0
        uintptr_t This; // 0x8
        uintptr_t ChildrenEnd; // 0x8
        string ClassName; // 0x8
        uintptr_t ClassDescriptor; // 0x18
        char pad_0[0x40];
        uintptr_t Parent; // 0x60
        uintptr_t NameContainer; // 0x68
        uintptr_t ChildrenStart; // 0x70
        char pad_1[0x138];
        uintptr_t ClassBase; // 0x1b0
    }; // sizeof = 1b8

    struct JointInstance {
        char pad_0[0x100];
        uintptr_t Part0; // 0x100
        char pad_1[0x8];
        uintptr_t Part1; // 0x110
    }; // sizeof = 118

    struct LRUHolder {
        char pad_0[0x20];
        unknown MemEnforcedLRUCache; // 0x20
    }; // sizeof = 20

    struct LRUNode {
        unknown Next; // 0x0
        char pad_0[0x10];
        unknown AssetID; // 0x10
        char pad_1[0x28];
        unknown CachedItem; // 0x38
    }; // sizeof = 38

    struct Lighting {
        char pad_0[0xb0];
        float ClockTime; // 0xb0
        char pad_1[0x4];
        Color3 Ambient; // 0xb8
        char pad_2[0xc];
        Color3 ColorShift_Bottom; // 0xc4
        char pad_3[0xc];
        Color3 ColorShift_Top; // 0xd0
        char pad_4[0xc];
        Color3 FogColor; // 0xdc
        char pad_5[0xc];
        Color3 OutdoorAmbient; // 0xe8
        char pad_6[0x18];
        float Brightness; // 0x100
        float EnvironmentDiffuseScale; // 0x104
        float EnvironmentSpecularScale; // 0x108
        float ExposureCompensation; // 0x10c
        char pad_7[0x4];
        float FogEnd; // 0x114
        float FogStart; // 0x118
        float GeographicLatitude; // 0x11c
        char pad_8[0xc];
        bool GlobalShadows; // 0x12c
        char pad_9[0xb];
        Color3 GradientTop; // 0x138
        char pad_10[0xc];
        Color3 LightColor; // 0x144
        char pad_11[0xc];
        Vector3 LightDirection; // 0x150
        int Source; // 0x15c
        Vector3 SunPosition; // 0x160
        Vector3 MoonPosition; // 0x16c
        Color3 GradientBottom; // 0x178
        char pad_12[0x38];
        uintptr_t Sky; // 0x1b0
    }; // sizeof = 1b8

    struct LocalScript {
        char pad_0[0xb8];
        string GUID; // 0xb8
        char pad_1[0xc0];
        uintptr_t ByteCode; // 0x178
        char pad_2[0x8];
        string Hash; // 0x188
    }; // sizeof = 188

    struct MaterialColors {
        char pad_0[0x6];
        ColorUint_8 Grass; // 0x6
        char pad_1[0x3];
        ColorUint_8 Slate; // 0x9
        char pad_2[0x3];
        ColorUint_8 Concrete; // 0xc
        char pad_3[0x3];
        ColorUint_8 Brick; // 0xf
        char pad_4[0x3];
        ColorUint_8 Sand; // 0x12
        char pad_5[0x3];
        ColorUint_8 WoodPlanks; // 0x15
        char pad_6[0x3];
        ColorUint_8 Rock; // 0x18
        char pad_7[0x3];
        ColorUint_8 Glacier; // 0x1b
        char pad_8[0x3];
        ColorUint_8 Snow; // 0x1e
        char pad_9[0x3];
        ColorUint_8 Sandstone; // 0x21
        char pad_10[0x3];
        ColorUint_8 Mud; // 0x24
        char pad_11[0x3];
        ColorUint_8 Basalt; // 0x27
        char pad_12[0x3];
        ColorUint_8 Ground; // 0x2a
        char pad_13[0x3];
        ColorUint_8 CrackedLava; // 0x2d
        char pad_14[0x3];
        ColorUint_8 Asphalt; // 0x30
        char pad_15[0x3];
        ColorUint_8 Cobblestone; // 0x33
        char pad_16[0x3];
        ColorUint_8 Ice; // 0x36
        char pad_17[0x3];
        ColorUint_8 LeafyGrass; // 0x39
        char pad_18[0x3];
        ColorUint_8 Salt; // 0x3c
        char pad_19[0x3];
        ColorUint_8 Limestone; // 0x3f
        char pad_20[0x3];
        ColorUint_8 Pavement; // 0x42
    }; // sizeof = 42

    struct MemEnforcedLRUCache {
        char pad_0[0x8];
        unknown Head; // 0x8
    }; // sizeof = 8

    struct MeshContentProvider {
        char pad_0[0xc0];
        unknown LRUHolder; // 0xc0
    }; // sizeof = c0

    struct MeshPart {
        char pad_0[0x210];
        Vector3 MeshSize; // 0x210
        char pad_1[0xdc];
        string MeshId; // 0x2f8
        char pad_2[0x30];
        string Texture; // 0x328
    }; // sizeof = 328

    struct Misc {
        char pad_0[0x10];
        int StringLength; // 0x10
        char pad_1[0x8c];
        string Value; // 0xa0
        char pad_2[0x8];
        string AnimationId; // 0xa8
        char pad_3[0x30];
        uintptr_t Adornee; // 0xd8
    }; // sizeof = e0

    struct Model {
        char pad_0[0x12c];
        float Scale; // 0x12c
        char pad_1[0x110];
        uintptr_t PrimaryPart; // 0x240
    }; // sizeof = 248

    struct ModuleScript {
        unknown IsCoreScript; // 0x0
        char pad_0[0xb8];
        string GUID; // 0xb8
        char pad_1[0x68];
        uintptr_t ByteCode; // 0x120
        char pad_2[0x220];
        string Hash; // 0x348
    }; // sizeof = 348

    struct MouseService {
        float SensitivityPointer; // 0x0
        char pad_0[0xb8];
        Vector2 MousePosition; // 0xbc
        char pad_1[0x24];
        uintptr_t InputObject; // 0xe8
        char pad_2[0x8];
        uintptr_t InputObject2; // 0xf8
    }; // sizeof = 100

    struct ParticleEmitter {
        char pad_0[0x1a8];
        string Texture; // 0x1a8
        char pad_1[0x20];
        Vector3 Acceleration; // 0x1c8
        char pad_2[0x8];
        Vector2 Lifetime; // 0x1dc
        float RotSpeed; // 0x1e4
        char pad_3[0x4];
        float Rotation; // 0x1ec
        char pad_4[0x4];
        float Speed; // 0x1f4
        char pad_5[0x4];
        Vector2 SpreadAngle; // 0x1fc
        float Brightness; // 0x204
        float Drag; // 0x208
        char pad_6[0x14];
        float LightEmission; // 0x220
        float LightInfluence; // 0x224
        char pad_7[0x8];
        float Rate; // 0x230
        char pad_8[0x10];
        float TimeScale; // 0x244
        float VelocityInheritance; // 0x248
        float ZOffset; // 0x24c
    }; // sizeof = 250

    struct Player {
        char pad_0[0xb8];
        uintptr_t UserId; // 0xb8
        char pad_1[0x40];
        string LocaleId; // 0x100
        char pad_2[0x18];
        uintptr_t LocalPlayer; // 0x118
        string DisplayName; // 0x120
        char pad_3[0x180];
        uintptr_t ModelInstance; // 0x2a0
        char pad_4[0x38];
        uintptr_t Team; // 0x2e0
        char pad_5[0x7c];
        int AccountAge; // 0x364
        char pad_6[0x8];
        float MaxZoomDistance; // 0x370
        float MinZoomDistance; // 0x374
        int CameraMode; // 0x378
        char pad_7[0x24];
        float HealthDisplayDistance; // 0x3a0
        char pad_8[0xc];
        float NameDisplayDistance; // 0x3b0
        char pad_9[0x4];
        int TeamColor; // 0x3b8
        char pad_10[0xe34];
        uintptr_t Mouse; // 0x11f0
    }; // sizeof = 11f8

    struct PlayerConfigurer {
        uintptr_t Pointer; // 0x0
    }; // sizeof = 8

    struct PlayerMouse {
        char pad_0[0xb0];
        string Icon; // 0xb0
        char pad_1[0x88];
        uintptr_t Workspace; // 0x138
    }; // sizeof = 140

    struct Primitive {
        char pad_0[0x6];
        uintptr_t Validate; // 0x6
        char pad_1[0xa2];
        Matrix3x3 Rotation; // 0xb0
        Vector3 Position; // 0xd4
        Vector3 AssemblyLinearVelocity; // 0xe0
        Vector3 AssemblyAngularVelocity; // 0xec
        char pad_2[0xc6];
        BYTE Flags; // 0x1be
        char pad_3[0x5];
        Vector3 Size; // 0x1c4
        char pad_4[0x48];
        uintptr_t Owner; // 0x218
        char pad_5[0x2e];
        unsigned short Material; // 0x24e
    }; // sizeof = 24e

    struct PrimitiveFlags {
        char pad_0[0x2];
        unknown Anchored; // 0x2
        char pad_1[0x6];
        unknown CanCollide; // 0x8
        char pad_2[0x8];
        unknown CanTouch; // 0x10
        char pad_3[0x10];
        unknown CanQuery; // 0x20
    }; // sizeof = 20

    struct ProximityPrompt {
        char pad_0[0x98];
        string ActionText; // 0x98
        char pad_1[0x20];
        string ObjectText; // 0xb8
        char pad_2[0x4c];
        int GamepadKeyCode; // 0x104
        float HoldDuration; // 0x108
        int KeyCode; // 0x10c
        float MaxActivationDistance; // 0x110
        char pad_3[0xa];
        bool Enabled; // 0x11e
        bool RequiresLineOfSight; // 0x11f
    }; // sizeof = 120

    struct RenderJob {
        char pad_0[0x38];
        uintptr_t FakeDataModel; // 0x38
        char pad_1[0x1a0];
        uintptr_t RenderView; // 0x1e0
        char pad_2[0x8];
        uintptr_t RealDataModel; // 0x1f0
    }; // sizeof = 1f8

    struct RenderView {
        bool LightingValid; // 0x0
        bool SkyValid; // 0x0
        uintptr_t VisualEngine; // 0x0
        uintptr_t DeviceD3D11; // 0x0
    }; // sizeof = 12

    struct RunService {
        char pad_0[0xc8];
        double HeartbeatFPS; // 0xc8
        char pad_1[0x26f8];
        uintptr_t HeartbeatTask; // 0x27c8
    }; // sizeof = 27d0

    struct Script {
        char pad_0[0xb8];
        string GUID; // 0xb8
        char pad_1[0xc0];
        uintptr_t ByteCode; // 0x178
        char pad_2[0x8];
        string Hash; // 0x188
    }; // sizeof = 188

    struct ScriptContext {
        unknown RequireBypass; // 0x0
    }; // sizeof = 0

    struct Seat {
        char pad_0[0x200];
        uintptr_t Occupant; // 0x200
    }; // sizeof = 208

    struct Sky {
        char pad_0[0xb0];
        string MoonTextureId; // 0xb0
        char pad_1[0x30];
        string SkyboxBk; // 0xe0
        char pad_2[0x30];
        string SkyboxDn; // 0x110
        char pad_3[0x30];
        string SkyboxFt; // 0x140
        char pad_4[0x30];
        string SkyboxLf; // 0x170
        char pad_5[0x30];
        string SkyboxRt; // 0x1a0
        char pad_6[0x30];
        string SkyboxUp; // 0x1d0
        char pad_7[0x30];
        string SunTextureId; // 0x200
        char pad_8[0x20];
        Vector3 SkyboxOrientation; // 0x220
        float SunAngularSize; // 0x224
        float MoonAngularSize; // 0x22c
        int StarCount; // 0x230
    }; // sizeof = 238

    struct Sound {
        char pad_0[0xb0];
        string SoundId; // 0xb0
        char pad_1[0x20];
        uintptr_t SoundGroup; // 0xd0
        char pad_2[0x34];
        float PlaybackSpeed; // 0x10c
        float RollOffMaxDistance; // 0x110
        float RollOffMinDistance; // 0x114
        char pad_3[0x8];
        float Volume; // 0x120
        char pad_4[0x9];
        bool Looped; // 0x12d
        char pad_5[0x2];
        bool IsPlaying; // 0x130
    }; // sizeof = 131

    struct SpawnLocation {
        char pad_0[0x3d];
        bool AllowTeamChangeOnTouch; // 0x3d
        char pad_1[0x192];
        int ForcefieldDuration; // 0x1d0
        int TeamColor; // 0x1d4
        char pad_2[0x1];
        bool Enabled; // 0x1d9
        bool Neutral; // 0x1da
    }; // sizeof = 1db

    struct SpecialMesh {
        char pad_0[0xac];
        Vector3 Scale; // 0xac
        char pad_1[0x28];
        string MeshId; // 0xe0
    }; // sizeof = e0

    struct StatsItem {
        char pad_0[0xe758];
        double Value; // 0xe758
    }; // sizeof = e760

    struct SunRaysEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Intensity; // 0xa0
        float Spread; // 0xa4
    }; // sizeof = a8

    struct SurfaceAppearance {
        char pad_0[0xb0];
        string ColorMap; // 0xb0
        char pad_1[0x30];
        string EmissiveMaskContent; // 0xe0
        char pad_2[0x30];
        string MetalnessMap; // 0x110
        char pad_3[0x30];
        string NormalMap; // 0x140
        char pad_4[0x30];
        string RoughnessMap; // 0x170
        char pad_5[0x50];
        Color3 Color; // 0x1c0
        char pad_6[0xc];
        Color3 EmissiveTint; // 0x1cc
        char pad_7[0xc];
        int AlphaMode; // 0x1d8
        float EmissiveStrength; // 0x1dc
    }; // sizeof = 1e0

    struct TaskScheduler {
        char pad_0[0x18];
        string JobName; // 0x18
        char pad_1[0x98];
        double MaxFPS; // 0xb0
        char pad_2[0x10];
        uintptr_t JobStart; // 0xc8
        uintptr_t JobEnd; // 0xd0
        char pad_3[0x8f1e330];
        uintptr_t Pointer; // 0x8f1e408
    }; // sizeof = 8f1e410

    struct Team {
        char pad_0[0xa0];
        int BrickColor; // 0xa0
    }; // sizeof = a4

    struct Terrain {
        char pad_0[0x1c8];
        Color3 WaterColor; // 0x1c8
        char pad_1[0x10];
        float GrassLength; // 0x1d8
        char pad_2[0x4];
        float WaterReflectance; // 0x1e0
        float WaterTransparency; // 0x1e4
        float WaterWaveSize; // 0x1e8
        float WaterWaveSpeed; // 0x1ec
        char pad_3[0x2b0];
        uintptr_t MaterialColors; // 0x4a0
    }; // sizeof = 4a8

    struct Textures {
        char pad_0[0x1c8];
        string Decal_Texture; // 0x1c8
        string Texture_Texture; // 0x1c8
    }; // sizeof = 1c8

    struct Tool {
        char pad_0[0x348];
        string TextureId; // 0x348
        char pad_1[0x108];
        string Tooltip; // 0x450
        char pad_2[0x44];
        Vector3 Grip; // 0x494
        bool CanBeDropped; // 0x4a0
        bool Enabled; // 0x4a1
        bool ManualActivationOnly; // 0x4a2
        bool RequiresHandle; // 0x4a3
    }; // sizeof = 4a4

    struct UnionOperation {
        char pad_0[0x2f8];
        string AssetId; // 0x2f8
    }; // sizeof = 2f8

    struct UserInputService {
        char pad_0[0x288];
        uintptr_t WindowInputState; // 0x288
    }; // sizeof = 290

    struct VehicleSeat {
        char pad_0[0x210];
        float MaxSpeed; // 0x210
        float SteerFloat; // 0x214
        float ThrottleFloat; // 0x218
        float Torque; // 0x21c
        float TurnSpeed; // 0x220
    }; // sizeof = 224

    struct VisualEngine {
        char pad_0[0x1b0];
        ViewMatrix_t ViewMatrix; // 0x1b0
        char pad_1[0x900];
        uintptr_t FakeDataModel; // 0xaf0
        char pad_2[0x18];
        Vector2 Dimensions; // 0xb10
        char pad_3[0x138];
        unknown RenderView; // 0xc50
        char pad_4[0x8a10bb8];
        uintptr_t Pointer; // 0x8a11808
    }; // sizeof = 8a11810

    struct WeldConstraint {
        char pad_0[0xa0];
        uintptr_t Part0; // 0xa0
        char pad_1[0x8];
        uintptr_t Part1; // 0xb0
    }; // sizeof = b8

    struct WindowInputState {
        char pad_0[0x40];
        bool CapsLock; // 0x40
        char pad_1[0x7];
        uintptr_t CurrentTextBox; // 0x48
    }; // sizeof = 50

    struct Workspace {
        char pad_0[0x3f8];
        uintptr_t World; // 0x3f8
        char pad_1[0xa0];
        uintptr_t CurrentCamera; // 0x4a0
        char pad_2[0x18];
        double DistributedGameTime; // 0x4c0
        char pad_3[0x500];
        float ReadOnlyGravity; // 0x9c8
    }; // sizeof = 9cc

    struct World {
        char pad_0[0x20c];
        float FallenPartsDestroyHeight; // 0x20c
        char pad_1[0x8];
        float Gravity; // 0x218
        char pad_2[0x14];
        uintptr_t AirProperties; // 0x230
        char pad_3[0x68];
        unknown Primitives; // 0x2a0
        char pad_4[0x5c8];
        float worldStepsPerSec; // 0x868
    }; // sizeof = 86c

}
