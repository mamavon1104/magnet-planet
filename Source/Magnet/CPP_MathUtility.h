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
	���߂Ă�UnrealEngineCPP�ŕ����������Ƃ�����̂ł����Ƀ����ADiscord�ɂ��B

	UCLASS()��UE������Class�Ƃ��ĔF������ׂ�UnrealEngine�̃}�N���Ɖ��߂���̂��悳�����A
	UCLASS�Ƃ��邱�Ƃ�CastTo�Ƃ���UnrealEngine�N���X�ɂȂ�̂��ȁH

	GENERATED_BODY()�� UCLASS���ł̂��܂��Ȃ��炵���A���������}�N���B
	�����������g�ł��낢��g�����߂��Ǝv���A�K�{���H

	UCLASS�݂����Ɋ֐���`�Ȃ�UFUNCTION�ł���Ă�����񂾂낤�B

	����̊֐����C�u�����œ��ϊO�ώ擾��������

	UFUNCTION //UE���Ɋ֐��ł�
	(
		BlueprintCallable Blueprint�ɌĂԂ̂��\��(call able);
		BlueprintPure(�������z�֐���`{����p���Ȃ�})�Ƃ���킷�B
		Category
	)

 */
