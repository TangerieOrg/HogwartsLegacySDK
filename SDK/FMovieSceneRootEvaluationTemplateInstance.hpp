#pragma once
#include <cstdint>
class UMovieSceneCompiledDataManager;
class UMovieSceneEntitySystemLinker;
#pragma pack(push, 1)
struct FMovieSceneRootEvaluationTemplateInstance {
    char pad_0[0x8];
    UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
    char pad_10[0x8];
    UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
    char pad_20[0xc8];
}; // Size: 0xe8
#pragma pack(pop)
