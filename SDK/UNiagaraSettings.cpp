#include "ENDISkelMesh_AdjacencyTriangleIndexFormat\Type.hpp"
#include "ENDISkelMesh_GpuMaxInfluences\Type.hpp"
#include "ENDISkelMesh_GpuUniformSamplingFormat\Type.hpp"
#include "ENiagaraDefaultRendererMotionVectorSetting.hpp"
#include "ENiagaraGpuBufferFormat.hpp"
#include "ETextureRenderTargetFormat.hpp"
#include "FSoftObjectPath.hpp"
#include "UDeveloperSettings.hpp"
#include "UNiagaraEffectType.hpp"
#include "UNiagaraSettings.hpp"
UNiagaraSettings* UNiagaraSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSettings");
    return (UNiagaraSettings*)res;
}
