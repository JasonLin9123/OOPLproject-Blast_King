﻿#pragma once
//#include "CBall.h"
namespace game_framework{

	//// 要做測試 改map 需同時改map_init 跟 map_copy
	//static int map_init[13][15] = {
	//{0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 8, 0, 0, 0, 0},
	//{0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 0, 0, 0, 8, 0},
	//{0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 8, 0, 8, 0, 0, 8, 0, 8, 0, 8, 8, 8, 0, 0},
	//{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 8, 0, 0, 8, 0, 0, 8, 0, 0, 0, 0, 0, 0},
	//{0, 0, 8, 0, 0, 0, 8, 0, 0, 8, 0, 0, 0, 0, 0},
	//{0, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3},
	//{0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0},
	//{0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 0, 0, 0},
	//{0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

	//// for 爆炸
	//static int map_copy[13][15] = {
	//{0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 8, 0, 0, 0, 0},
	//{0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 0, 0, 0, 8, 0},
	//{0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 8, 0, 8, 0, 0, 8, 0, 8, 0, 8, 8, 8, 0, 0},
	//{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//{0, 0, 8, 0, 0, 8, 0, 0, 8, 0, 0, 0, 0, 0, 0},
	//{0, 0, 8, 0, 0, 0, 8, 0, 0, 8, 0, 0, 0, 0, 0},
	//{0, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3},
	//{0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0},
	//{0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 0, 0, 0},
	//{0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
	

	static int map_init[13][15] = {
	{0, 0, 5, 6, 5, 8, 0, 0, 7, 8, 2, 6, 2, 0, 2},
	{0, 1, 7, 1, 7, 4, 7, 0, 0, 4, 5, 6, 5, 0, 0},
	{6, 5, 6, 5, 6, 8, 0, 7, 7, 8, 2, 7, 2, 7, 2},
	{7, 1, 7, 1, 7, 4, 7, 0, 0, 4, 6, 5, 6, 5, 6},
	{5, 6, 5, 6, 5, 8, 0, 0, 7, 8, 2, 7, 2, 7, 2},
	{6, 1, 6, 1, 6, 4, 7, 7, 0, 0, 5, 6, 5, 6, 5},
	{4, 8, 4, 8, 4, 8, 0, 0, 7, 8, 4, 8, 4, 8, 4},
	{5, 6, 5, 6, 5, 0, 7, 0, 0, 4, 5, 1, 5, 1, 5},
	{3, 7, 3, 7, 3, 8, 0, 7, 7, 8, 6, 5, 6, 5, 6},
	{6, 5, 6, 5, 6, 4, 7, 0, 0, 4, 7, 1, 7, 1, 7},
	{3, 7, 3, 7, 3, 8, 0, 0, 7, 8, 5, 6, 5, 6, 5},
	{0, 0, 5, 6, 5, 4, 7, 7, 0, 4, 7, 1, 7, 1, 0},
	{3, 0, 3, 5, 3, 8, 0, 0, 7, 8, 6, 5, 6, 0, 0} };

	static int map2_init[13][15] = {
	{0, 0, 15, 15, 15, 15, 15, 0, 0, 15, 15, 15, 15, 0, 0},
	{0, 14, 15, 11, 15, 13, 18, 13, 0, 14, 17, 14, 15, 0, 0},
	{15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15},
	{15, 13, 16, 13, 15, 12, 15, 13, 15, 11, 15, 13, 15, 12, 15},
	{15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 16, 15, 15},
	{0, 11, 15, 13, 15, 14, 15, 14, 16, 14, 15, 14, 15, 13, 15},
	{0, 0, 15, 15, 18, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0},
	{15, 12, 15, 14, 15, 14, 15, 13, 15, 12, 15, 13, 16, 13, 0},
	{15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 18, 15, 15, 15, 15},
	{15, 11, 15, 13, 16, 13, 15, 14, 15, 14, 15, 14, 15, 13, 18},
	{15, 15, 15, 15, 15, 15, 17, 15, 15, 15, 15, 15, 15, 15, 15},
	{0, 13, 15, 13, 15, 11, 0, 13, 15, 14, 15, 13, 15, 12, 0},
	{0, 0, 15, 15, 15, 15, 0, 0, 15, 15, 15, 15, 15, 0, 0} };

	static int map_explosion[13][15] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

	// 設定炸彈狀態 圖 以及連環炸彈
	static int map_bomb[13][15] = {
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

	// 炸彈所屬 判斷炸彈範圍用 為map自定義的id
	static int map_id[13][15] = {		
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};


	class CGameMap 
	{
	public:

		CGameMap();
		void LoadBitmap();
		void OnShow();
		void OnMove();
		void OnKeyDown(UINT, int , int, int);
		void OnProps(int , int , int);
		int map[13][15];
		int mapCopy[13][15];
		int bombMap[13][15];	// 炸彈
		int exp_Map[13][15];	// 爆炸
		int timer;				// 計時器
		int timerS;				// 死亡計時
		int idMap[13][15];		// 炸彈角色ID
		bool audio[4];			//音效 1為播放 0為不播放
		bool OnAudio(int);	//回傳是否播放音效
		void ResetAudio(int);	//音效播放完成進行重置
		int set_speed(int);	//回傳角色移動速度
		void setBombInfo();		
		void setLinkBomb();
		void setDistance(int);	
		int p1_distance, p2_distance;	//角色水球爆炸距離
		int p1_quantity, p2_quantity;	//角色水球放置數量
		int p1_speed, p2_speed;			//角色移動速度
		int p1Status, p2Status;			//角色狀態
		void set_expMap();		
		void set_map(int);
		void updateMap();		
		int X1_1, X2_1, Y1_1, Y2_1;
		int X1_2, X2_2, Y1_2, Y2_2;
		bool hitP1, hitP2;
		void getP1Range(int, int);
		void getP2Range(int, int);
		void hitWater();
		void checkHitP1();
		void checkHitP2();
		int checkP1Status();
		int checkP2Status();
		


		~CGameMap();
	protected:
		CMovingBitmap	House_r, House_y, House_b, Tree, Blocks_r, Blocks_y, Wooden_box, Grass,
			Green_box, Green_box2, Rock, Cactus, Earth, Tent_b, Tent_r, Tent_y,
			NULLNULL, Bomb, Bomb2, Bomb3, Explode, Props_1, Props_2, Props_3,
			w_L, w_L_E, w_R, w_R_E, w_U, w_U_E, w_D, w_D_E;

		const int X, Y;
		const int MW, MH;

	};

}