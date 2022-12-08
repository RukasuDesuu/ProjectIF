#pragma once

using namespace System;

public ref class Review {
public:
	int^ IdReview;
	String^ Comment;
	int^ Rate;
	int^ IdRestaurant;
	int^ IdUser;
};