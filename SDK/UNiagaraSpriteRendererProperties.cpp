#include "ENiagaraRendererSourceDataMode.hpp"
#include "ENiagaraSortMode.hpp"
#include "ENiagaraSpriteAlignment.hpp"
#include "ENiagaraSpriteFacingMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector2D.hpp"
#include "UMaterialInterface.hpp"
#include "UNiagaraRendererProperties.hpp"
#include "UNiagaraSpriteRendererProperties.hpp"
UNiagaraSpriteRendererProperties* UNiagaraSpriteRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSpriteRendererProperties");
    return (UNiagaraSpriteRendererProperties*)res;
}
