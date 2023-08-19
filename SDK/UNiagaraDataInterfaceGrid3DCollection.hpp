#pragma once
#include <cstdint>
#include "ENiagaraGpuBufferFormat.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "UNiagaraDataInterfaceGrid3D.hpp"
class UNiagaraComponent;
class UVolumeTexture;
#pragma pack(push, 1)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D {
public:
    int32_t NumAttributes; // 0x100
    char pad_104[0x4];
    FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
    ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x128
    uint8_t bOverrideFormat : 1; // 0x129
    uint8_t pad_bitfield_129_1 : 7;
    char pad_12a[0x56];
    static UNiagaraDataInterfaceGrid3DCollection* StaticClass();
    void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);
    void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);
    bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex);
    bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ);
}; // Size: 0x180
#pragma pack(pop)
