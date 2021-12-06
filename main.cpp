/************************************************************
▪MacのXCode7.0~にHomebrewを使ってOpenCV3.0.0を導入する
	http://ithat.me/2015/09/27/how-to-build-opencv3-on-xcode7
	
	note
	-	前のversionをinstallする方法も記載
	-	Xcodeの設定も記載
	-	動作確認OK
	-	header path は、ダブルクリックからrecursiveに設定すること
		複数header指定もここから"+"をクリックして追加
		→スペースで区切られているようだ
		
	-	exeの実行は Ctrl + C で中止
	
■XcodeでOpenCVを使えるようにする
	http://shirashinomiya.hatenablog.com/entry/2018/07/26/212524
	
■MacにOpenCV4をインストールする(C++)
	https://qiita.com/HoriThe3rd/items/2829463cd5bfe5cba03f

▪️Homebrew OpenCV 2.4.5（バージョンを指定してインストール）
	http://ruirui.jp/blog/2013/03/homebrewopencv-243.html
	http://ruirui.jp/blog/2013/10/homebrewopencv-245.html
	

■Homebrew で Python3, numpy, OpenCV3 を macOS 10.14 Mojave にインストール
	https://qiita.com/Atsuyuki_Adachi/items/6271c0b519fee5937605
	
■Xcode 12 で missing one or more architectures
	https://ykakinoki.hateblo.jp/entry/2020/09/19/053250
************************************************************/
#include <iostream>
#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/highgui.hpp>

int main(int argc, const char * argv[])
{
	cv::Mat img(cv::Size(320, 240), CV_8UC3, cv::Scalar(60, 150, 80));
	cv::namedWindow("OpenCV", cv::WINDOW_AUTOSIZE);
	cv::imshow("OpenCV", img);
	
	cv::waitKey(0);
}


