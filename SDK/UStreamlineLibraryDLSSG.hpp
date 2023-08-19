#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#include "UStreamlineDLSSGMode.hpp"
#include "UStreamlineDLSSGSupport.hpp"
#pragma pack(push, 1)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary {
public:
    static UStreamlineLibraryDLSSG* StaticClass();
    static void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);
    static void SetDLSSGFrames(int32_t Frames);
    static UStreamlineDLSSGSupport QueryDLSSGSupport();
    static bool IsDLSSGSupported();
    static bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);
    static TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();
    static void GetDLSSGSupportedFramesRange(int32_t& MinFrames, int32_t& MaxFrames);
    static UStreamlineDLSSGMode GetDLSSGMode();
    static void GetDLSSGMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented);
    static int32_t GetDLSSGFrames();
    static UStreamlineDLSSGMode GetDefaultDLSSGMode();
}; // Size: 0x28
#pragma pack(pop)
