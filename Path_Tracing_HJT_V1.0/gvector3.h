#pragma once
#ifndef GVECTOR3_H
#define GVECTOR3_H
#include <iostream>
#define MIN(x,y) (x)>(y)?(y):(x);
#define MAX(x,y) (x)>(y)?(x):(y);
class GVector3
{

public:
	float x;
	float y;
	float z;
	// 缺省构造函数
	GVector3();
	~GVector3();
	// 用户构造函数
	GVector3(float posX, float posY, float posZ);
	//输出向量信息
	void getInfo();
	//矢量加法
	GVector3 operator+(GVector3 v);
	//矢量减法
	GVector3 operator-(GVector3 v);
	//矢量乘
	GVector3 operator*(GVector3 n) { return GVector3(x*n.x, y*n.y, z*n.z); };
	//矢量除
	GVector3 operator/(GVector3 n) { return GVector3(x/n.x, y/n.y, z/n.z); };
	//数乘
	GVector3 operator*(float n);
	//数除
	GVector3 operator/(float n);
	//数加
	GVector3 operator+(float n);
	//向量点积
	float dotMul(GVector3 v2);
	//向量叉乘
	GVector3 crossMul(GVector3 v2);
	//绝对值化
	GVector3 abs();
	//获取矢量长度
	float getLength();
	//两向量之间的夹角
	float angleWith(GVector3 v);
	//向量单位化
	GVector3 normalize();
	//求两点之间的距离
	float getDist(GVector3 v);
	//返回零向量
	static inline GVector3 zero() { return GVector3(0, 0, 0); }
	//打印向量的分量值
	void show();

};

#endif // GVECTOR3_H

