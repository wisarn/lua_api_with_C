---- Stardard Library -----
-- os.date()
-- os.difftime(t2,t1)
-- os.remove(filename)
-- os.rename(oldname,newname)
-- os.time()
-- os.exit()
-- math.sqrt(x)
-- math.abs(x)
-- math.cos(x)
-- math.sin(x)
-- math.tan(x)
-- math.atan(x)
-- math.floor(x)
-- math.ceil(x)
-- math.random(a,b)
-- math.randomseed(seed)
-- math.pi

math.randomseed(os.time())		-- seed changes everytime
enermy_x = math.random(0,800)	-- random x value
enermy_y = math.random(0,600)	-- random y value

print("Enermy pos: (" .. enermy_x .. "," .. enermy_y ..")")