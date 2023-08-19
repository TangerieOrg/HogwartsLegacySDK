#include "EFontCacheType.hpp"
#include "FCompositeFont.hpp"
#include "FFontCharacter.hpp"
#include "FFontImportOptionsData.hpp"
#include "UFont.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
UFont* UFont::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Font");
    return (UFont*)res;
}
