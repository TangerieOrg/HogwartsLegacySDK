#include "FSampleTextureToCurve.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCurveFromTextureLibrary.hpp"
#include "UCurveLinearColor.hpp"
#include "UFunction.hpp"
#include "UTexture2D.hpp"
UCurveFromTextureLibrary* UCurveFromTextureLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/CurveHelpers.CurveFromTextureLibrary");
    return (UCurveFromTextureLibrary*)res;
}
void UCurveFromTextureLibrary::TextureToLinearColorCurve(UTexture2D* Texture, FSampleTextureToCurve Settings, UCurveLinearColor* ColorCurve, bool& Worked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CurveHelpers.CurveFromTextureLibrary.TextureToLinearColorCurve"));
    struct Params_TextureToLinearColorCurve {
        UTexture2D* Texture; // 0x0
        FSampleTextureToCurve Settings; // 0x8
        UCurveLinearColor* ColorCurve; // 0x50
        bool Worked; // 0x58
    }; // Size: 0x59
    Params_TextureToLinearColorCurve params{};
    params.Texture = (UTexture2D*)Texture;
    params.Settings = (FSampleTextureToCurve)Settings;
    params.ColorCurve = (UCurveLinearColor*)ColorCurve;
    params.Worked = (bool)Worked;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Worked = params.Worked;
}
