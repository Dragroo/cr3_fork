import numpy as np
import numpy.matlib as mat

# 计算一个4x4的旋转矩阵
def rot2mat(x,y,z,w,px,py,pz):
  rotmat=np.eye(4)
  rotmat[0][0]=1-2*(y**2+z**2)
  rotmat[0][1]=2*(x*y-w*z)
  rotmat[0][2]=2*(x*z+w*y)
  rotmat[1][0]=2*(x*y+w*z)
  rotmat[1][1]=1-2*(x**2+z**2)
  rotmat[1][2]=2*(y*z-w*x)
  rotmat[2][0]=2*(x*z-w*y)
  rotmat[2][1]=2*(y*z+w*x)
  rotmat[2][2]=1-2*(x**2+y**2)
  rotmat[0][3]=px
  rotmat[1][3]=py
  rotmat[2][3]=pz
  rotmat[3]=[0.0,0.0,0.0,1]
  return rotmat

# 像素坐标转相机坐标
def uv2cam(u,v,zc,inmat):
  uvmat=np.zeros((4,1))
  uvmat[0]=u*zc
  uvmat[1]=v*zc
  uvmat[2]=1*zc
  uvmat[3]=1*zc
  inmat=np.eye(3) # 内参矩阵
  '''
  扩展为4x4的矩阵
  '''
  Cols=np.zeros((3,1)) 
  inmat34=np.c_(inmat,Cols)
  Rows=np.array([[0.0,0.0,0.0,1.0]])
  inmat44=np.r_(inmat34,Rows)
  inmat44=np.linalg.inv(inmat44) # 对内参矩阵求逆
  result=np.matmul(inmat44,uvmat)
  return result # 获得一个4x1的矩阵，即相机坐标

def cam2world(outmat,cammat):
  outmat=np.eye(4) # 外参矩阵作为参数输入
  cammat=np.zeros((4,1)) # 相机坐标
  outmat=np.linalg.inv(outmat)
  result=np.matmul(outmat,cammat)
  return result

'''
outmat=np.eye(4)
cammat=np.eye(3)
Cols=np.zeros((3,1))
cammat34=np.c_[cammat,Cols]
print(cammat34)
Rows=np.array([[0.0,0.0,0.0,1.0]])
print(Rows)
cammat44=np.r_[cammat34,Rows]
print(cammat44)
'''
inmatrix=np.array([[400.0,0.0,400.0],[0,300.0,300.0],[0.0,0.0,1.0]])
print(inmatrix)
