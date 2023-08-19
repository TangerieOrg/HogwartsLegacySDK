#include "AnimationCompressionFormat.hpp"
#include "UAnimCompress_PerTrackCompression.hpp"
#include "UAnimCompress_RemoveLinearKeys.hpp"
UAnimCompress_PerTrackCompression* UAnimCompress_PerTrackCompression::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_PerTrackCompression");
    return (UAnimCompress_PerTrackCompression*)res;
}
