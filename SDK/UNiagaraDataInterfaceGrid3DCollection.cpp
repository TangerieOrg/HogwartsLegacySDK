#include "ENiagaraGpuBufferFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraDataInterfaceGrid3D.hpp"
#include "UNiagaraDataInterfaceGrid3DCollection.hpp"
#include "UVolumeTexture.hpp"
UNiagaraDataInterfaceGrid3DCollection* UNiagaraDataInterfaceGrid3DCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection");
    return (UNiagaraDataInterfaceGrid3DCollection*)res;
}
void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize"));
    struct Params_GetTextureSize {
        UNiagaraComponent* Component; // 0x0
        int32_t SizeX; // 0x8
        int32_t SizeY; // 0xc
        int32_t SizeZ; // 0x10
    }; // Size: 0x14
    Params_GetTextureSize params{};
    params.Component = (UNiagaraComponent*)Component;
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    params.SizeZ = (int32_t)SizeZ;
    ProcessEvent(func, &params);
    SizeX = params.SizeX;
    SizeZ = params.SizeZ;
    SizeY = params.SizeY;
}
bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture"));
    struct Params_FillRawVolumeTexture {
        UNiagaraComponent* Component; // 0x0
        UVolumeTexture* Dest; // 0x8
        int32_t TilesX; // 0x10
        int32_t TilesY; // 0x14
        int32_t TileZ; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_FillRawVolumeTexture params{};
    params.Component = (UNiagaraComponent*)Component;
    params.Dest = (UVolumeTexture*)Dest;
    params.TilesX = (int32_t)TilesX;
    params.TilesY = (int32_t)TilesY;
    params.TileZ = (int32_t)TileZ;
    ProcessEvent(func, &params);
    TilesY = params.TilesY;
    TilesX = params.TilesX;
    TileZ = params.TileZ;
    return (bool)params.ReturnValue;
}
void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize"));
    struct Params_GetRawTextureSize {
        UNiagaraComponent* Component; // 0x0
        int32_t SizeX; // 0x8
        int32_t SizeY; // 0xc
        int32_t SizeZ; // 0x10
    }; // Size: 0x14
    Params_GetRawTextureSize params{};
    params.Component = (UNiagaraComponent*)Component;
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    params.SizeZ = (int32_t)SizeZ;
    ProcessEvent(func, &params);
    SizeX = params.SizeX;
    SizeY = params.SizeY;
    SizeZ = params.SizeZ;
}
bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture"));
    struct Params_FillVolumeTexture {
        UNiagaraComponent* Component; // 0x0
        UVolumeTexture* Dest; // 0x8
        int32_t AttributeIndex; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_FillVolumeTexture params{};
    params.Component = (UNiagaraComponent*)Component;
    params.Dest = (UVolumeTexture*)Dest;
    params.AttributeIndex = (int32_t)AttributeIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
