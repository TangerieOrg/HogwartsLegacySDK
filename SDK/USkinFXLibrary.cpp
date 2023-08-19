#include "FSkinFXEffectLibraryEntry.hpp"
#include "FSkinFXEffectTypeOverrideEntry.hpp"
#include "UDataAsset.hpp"
#include "USkinFXLibrary.hpp"
USkinFXLibrary* USkinFXLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXLibrary");
    return (USkinFXLibrary*)res;
}
