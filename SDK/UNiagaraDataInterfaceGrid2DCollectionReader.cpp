#include "UNiagaraDataInterfaceGrid2D.hpp"
#include "UNiagaraDataInterfaceGrid2DCollectionReader.hpp"
UNiagaraDataInterfaceGrid2DCollectionReader* UNiagaraDataInterfaceGrid2DCollectionReader::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader");
    return (UNiagaraDataInterfaceGrid2DCollectionReader*)res;
}
