#include "ENiagaraMeshFacingMode.hpp"
#include "ENiagaraMeshLockedAxisSpace.hpp"
#include "ENiagaraMeshPivotOffsetSpace.hpp"
#include "ENiagaraRendererSourceDataMode.hpp"
#include "ENiagaraSortMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraMeshMaterialOverride.hpp"
#include "FNiagaraMeshRendererMeshProperties.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UNiagaraMeshRendererProperties.hpp"
#include "UNiagaraRendererProperties.hpp"
#include "UStaticMesh.hpp"
UNiagaraMeshRendererProperties* UNiagaraMeshRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraMeshRendererProperties");
    return (UNiagaraMeshRendererProperties*)res;
}
