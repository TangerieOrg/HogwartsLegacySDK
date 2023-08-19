#include "FCollectionReference.hpp"
#include "FPrimaryAssetRules.hpp"
#include "UPrimaryAssetLabel.hpp"
#include "UPrimaryDataAsset.hpp"
UPrimaryAssetLabel* UPrimaryAssetLabel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PrimaryAssetLabel");
    return (UPrimaryAssetLabel*)res;
}
