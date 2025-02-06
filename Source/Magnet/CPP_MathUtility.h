// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_MathUtility.generated.h"

UCLASS()
class MAGNET_API UCPP_MathUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MathUtility")
	void CalcurateDotCross();
};


/**
	初めてのUnrealEngineCPPで分かったことがあるのでここにメモ、Discordにも。

	UCLASS()→UE側からClassとして認識する為のUnrealEngineのマクロと解釈するのがよさそう、
	UCLASSとすることでCastToとかのUnrealEngineクラスになるのかな？

	GENERATED_BODY()→ UCLASS内でのおまじないらしい、こっちもマクロ。
	生成した中身でいろいろ使うためだと思う、必須級？

	UCLASSみたいに関数定義ならUFUNCTIONでやってあげるんだろう。

	今回の関数ライブラリで内積外積取得だったら

	UFUNCTION //UE側に関数です
	(
		BlueprintCallable Blueprintに呼ぶのを可能に(call able);
		BlueprintPure(純粋仮想関数定義{副作用がなし})とあらわす。
		Category
	)

 */
