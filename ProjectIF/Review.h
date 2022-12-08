#pragma once
#include "user.h"
using namespace System;

public ref class Review {
public:
	int^ IdReview;
	String^ Comment;
	int^ Rate;
	int^ IdRestaurant;
	User^ user;
};