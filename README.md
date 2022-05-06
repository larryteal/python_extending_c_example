# C-extension to Speed Up Python
  - 参考 https://towardsdatascience.com/write-your-own-c-extension-to-speed-up-python-x100-626bb9d166e7
  - https://www.cnblogs.com/devilmaycry812839668/p/8446910.html

# build
```
python3 setup.py build_ext --inplace

```
# install
```
python3 setup.py install
```

# speed test
```
import timeit
s = """
import Fastcount
Fastcount.primecounter(1, 500000)
"""
t = timeit.timeit(s, number=10)
print(t)
```
