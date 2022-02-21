### 目标
尝试制作一个纯native版本的交易软件

### TODO:
1. 创建可移动水平线
   思路：
      1. 线上捕获onclick事件
      2. 启动chart上moving事件，修改数据(这里可能需要坐标转换、或不用坐标轴直接用像素)
   https://github.com/pyqtgraph/pyqtgraph/blob/master/pyqtgraph/graphicsItems/InfiniteLine.py

2. 水平线支持右键菜单

### 参考
http://zetcode.com/gui/qt5/ (qt5,c++教程)
http://zetcode.com/gui/pyqt5/
https://build-system.fman.io/pyqt5-tutorial (pyqt5教程)
https://pythonspot.com/pyqt5/ (pyqt5教程)
https://likegeeks.com/pyqt5-drawing-tutorial/ (pyqt5画图教程1)
https://www.learnpyqt.com/courses/custom-widgets/bitmap-graphics/ (pyqt5画图教程2)
https://doc.qt.io/qtforpython/tutorials/index.html (pyside2官方文档)
https://doc.qt.io/qt-5/gettingstarted.html (qt官方文档)
https://doc.qt.io/qt-5/qcandlestickseries.html (qt之k线类参考)
https://doc.qt.io/qt-5/qtcharts-candlestickchart-example.html (qt之k线示例)

https://devdocs.io/qt~5.13/ (c++类文档参考,最好用proxy访问)
https://doc.qt.io/qt-5/qtcharts-examples.html  (chart示例列表,c++)

https://github.com/pyqt/examples (pyqt官方示例库)
### tip:
1. pyqt5与pyside2冲突，pyqt5会使用pyside2的qt库文件,注意二者版本一致
   pip install -U pyside2