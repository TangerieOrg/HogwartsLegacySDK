#include "ENiagaraRendererMotionVectorSetting.hpp"
#include "FNiagaraPlatformSet.hpp"
#include "UNiagaraMergeable.hpp"
#include "UNiagaraRendererProperties.hpp"
UNiagaraRendererProperties* UNiagaraRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraRendererProperties");
    return (UNiagaraRendererProperties*)res;
}
