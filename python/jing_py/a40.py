#!/usr/bin/env python
# -*- coding:utf-8-*-

class Song(object):
	def __init__(self, lyrics):
		self.lyrics = lyrics

	def sing_me_a_song(self):
		for line in self.lyrics:
			print line

happy_bday = Song(["池塘边的榕树上" ,
"知了在声声叫着夏天" ,
"操场边的秋千上" ,
"只有蝴蝶停在上面" ,
"黑板上老师地粉笔" ,
"还在拼命唧唧喳喳写个不停" ,
"等待着下课" ,
"等待着放学" ,
"等待游戏的童年" ,
"" ,
"福利社里面什么都有" ,
"就是口袋里没有半毛钱" ,
"诸葛四郎和魔鬼党" ,
"到底谁抢到那只宝剑" ,
"隔壁班的那个女孩" ,
"怎么还没经过我的窗前" ,
"嘴里的零食" ,
"手里的漫画" ,
"心里初恋的童年" ,
"" ,
"总是要等到睡觉前" ,
"才知道功课只做了一点点" ,
"总是要等到考试后" ,
"才知道该念的书都没有念" ,
"一寸光阴一寸金" ,
"老师说过寸金难买寸光阴" ,
"一天又一天一年又一年" ,
"迷迷糊糊地童年" ,
"music..." ,
"没有人知道为什么" ,
"太阳总下到山的那一边" ,
"没有人能够告诉我" ,
"山里面有没有住着神仙" ,
"多少的日子里总是" ,
"一个人面对着天空发呆" ,
"就这么好奇" ,
"就这么幻想" ,
"这么孤单的童年" ,
"" ,
"阳光下蜻蜓飞过来" ,
"一片一片绿油油的稻田" ,
"水彩蜡笔和万花筒" ,
"画不出天边那一道彩虹" ,
"什么时候才能像高年级" ,
"地同学有张成熟与长大的脸" ,
"盼望着假期" ,
"盼望着明天" ,
"盼望长大的童年" ,
"" ,
"一天又一天一年又一年" ,
"盼望长大的童年"  , ])

bulls_on_parde =Song(["they rally around the family",
	"with pockets full of shells"])

happy_bday.sing_me_a_song()

bulls_on_parde.sing_me_a_song()
