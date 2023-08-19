#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterface2DArrayTexture.hpp"
#include "UTexture2DArray.hpp"
#include "UTextureRenderTarget2DArray.hpp"
UNiagaraDataInterface2DArrayTexture* UNiagaraDataInterface2DArrayTexture::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterface2DArrayTexture");
    return (UNiagaraDataInterface2DArrayTexture*)res;
}
