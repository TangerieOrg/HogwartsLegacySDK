#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETickSequencerBucketDelegateInit {
    GameOnly = 0,
    EditorOnly = 1,
    Always = 2,
    ETickSequencerBucketDelegateInit_MAX = 3,
};
#pragma pack(pop)
